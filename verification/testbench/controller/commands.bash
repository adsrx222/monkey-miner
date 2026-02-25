verilator -Wall -sv \
    -I../../../src/controller/ \
    -I../../../src/communications/ \
    -I../../../src/message_scheduler/ \
    -I../../../src/std_pipeline/ \
    -I../../../src/ \
    --cc tb_sha256_top.sv \
        sha256_top.sv \
        utils.sv \
    --top-module tb_sha256_top \
    --exe tb_main.cpp \
    --build \
    --Mdir obj_dir \
    --timing