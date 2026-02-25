#!/bin/bash
#=========================================================
# RTL-to-GDSII Flow for sha256_top (SystemVerilog)
#=========================================================
# Requirements: yosys, openroad, opensta
# This script synthesizes RTL, does place-and-route,
# exports GDSII, and prepares power/timing analysis
#=========================================================

set -e

#-----------------------------
# Variables
#-----------------------------
RTL_TOP="sha256_top.sv"
TOP="sha256_top"
SYNTH_DIR="synth"
PNR_DIR="pnr"
GDS_FILE="sha256_top.gds"
LIB_LEF="/path/to/sky130_fd_sc_hd.lef"      # Update to your LEF
NUM_CORES=4

#-----------------------------
# Step 0: Create directories
#-----------------------------
mkdir -p $SYNTH_DIR $PNR_DIR sta

#-----------------------------
# Step 1: RTL Synthesis (Yosys)
#-----------------------------
echo "=== Synthesizing RTL with Yosys ==="

yosys -p "
read_verilog -sv -I src \
    src/message_scheduler/message_if.sv \
    src/message_scheduler/message_scheduler.sv \
    src/std_pipeline/pipe_if.sv \
    src/std_pipeline/pipecore_if.sv \
    src/std_pipeline/standard_pipeline.sv \
    src/std_pipeline/standard_stage.sv \
    src/communications/uart_if.sv \
    src/communications/uart_rx.sv \
    src/communications/uart_tx.sv \
    src/communications/uart_top.sv \
    src/controller/sha256_top.sv \
    src/utils.sv
"

#-----------------------------
# Step 2: Floorplan + PnR (OpenROAD)
#-----------------------------
echo "=== Running Place-and-Route with OpenROAD ==="

cat > $PNR_DIR/pnr.tcl <<EOF
# -------------------
# OpenROAD PnR Script
# -------------------
read_lef $LIB_LEF
read_verilog ../$SYNTH_DIR/${TOP}_synth.v
link_design $TOP

# Floorplan (adjust core/die size as needed)
create_floorplan -core_size 5000 5000 -die_area 0 0 5200 5200 -endcap_space 100

# Place standard cells
place_opt

# Clock tree synthesis
clock_tree_synthesis -clk clk

# Route all nets
route_design

# Write DEF + GDSII
write_def ${TOP}.def
write_gds $GDS_FILE
EOF

cd $PNR_DIR
openroad pnr.tcl
cd ..

#-----------------------------
# Step 3: Prepare for STA + Power Analysis
#-----------------------------
echo "=== Preparing for Power Analysis with OpenSTA ==="

# Create SDC constraints
cat > sta/constraints.sdc <<EOF
create_clock -name clk -period 10 [get_ports clk]
set_input_delay 1 [all_inputs]
set_output_delay 1 [all_outputs]
EOF

# Run OpenSTA
opensta <<EOF
read_verilog ../$SYNTH_DIR/${TOP}_synth.v
read_sdc constraints.sdc
link_design $TOP
update_timing
report_timing > timing_report.txt
report_power > power_report.txt
EOF

echo "=== RTL-to-GDSII Flow Complete ==="
echo "GDSII file: $PNR_DIR/$GDS_FILE"
echo "Timing report: sta/timing_report.txt"
echo "Power report: sta/power_report.txt"