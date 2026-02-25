verilator -Wall -sv \
    -I../../../src/message_scheduler/ \
    -I../../../src/ \
    --cc message_scheduler_tb.sv \
        message_scheduler.sv \
        utils.sv \
    --top-module message_scheduler_tb \
    --exe tb_main.cpp \
    --build \
    --Mdir obj_dir \
    --timing