verilator -Wall -sv \
    -I../../../src/communications/ \
    -I../../../src/ \
    --cc uart_top_tb.sv \
        uart_top.sv \
        utils.sv \
    --top-module uart_top_tb \
    --exe tb_main.cpp \
    --build \
    --Mdir obj_dir \
    --timing