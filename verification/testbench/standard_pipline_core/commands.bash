verilator -Wall -sv \
    -I../../../src/std_pipeline/ \
    -I../../../src/ \
    --cc std_pipeline_core_tb.sv \
        standard_pipeline.sv \
        utils.sv \
    --top-module std_pipeline_core_tb \
    --exe tb_main.cpp \
    --build \
    --Mdir obj_dir \
    --timing