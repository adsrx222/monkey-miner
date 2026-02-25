verilator -Wall -sv \
    -I../../../src/std_pipeline/ \
    -I../../../src/ \
    --cc std_pipeline_stage_tb.sv \
        standard_stage.sv \
        utils.sv \
    --top-module std_pipeline_stage_tb \
    --exe tb_main.cpp \
    --build \
    --Mdir obj_dir \
    --timing