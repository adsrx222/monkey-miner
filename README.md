# SHA-256 ASIC RTL Project

This project implements a multi-core SHA-256 pipeline ASIC with UART control.  

## Modules Overview

- **message_if.sv** — interface for 512-bit input block and 2048-bit schedule.  
- **message_scheduler.sv** — computes SHA-256 schedule from input message.  
- **pipe_if.sv** — interface for data between pipeline stages.  
- **pipecore_if.sv** — interface connecting pipeline core to top-level controller.  
- **standard_stage.sv** — single SHA-256 pipeline stage.  
- **standard_pipeline.sv** — standard 64-stage SHA-256 pipeline.  
- **sha256_top.sv** — top-level multi-core SHA-256 controller.  
- **uart_if.sv** — UART interface signals.  
- **uart_rx.sv** — UART receive module.  
- **uart_tx.sv** — UART transmit module.  
- **uart_top.sv** — top-level UART module connecting RX and TX.  
- **utils.sv** — utility functions for SHA-256 (sigma0, sigma1).

## Work in Progress (WIP)

- UART subsystem is still glitchy and needs improvement.  
- RTL-to-GDSII flow is not complete.  
- Verification coverage can be greatly improved using UVM.  
- Multi-core scaling and interface parameterization need refinement.

## Status

The RTL is synthesizable with Yosys; SHA-256 cores functionally compute digests, but the design is still being worked on.
