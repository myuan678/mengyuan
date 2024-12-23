//#include "verilated.h"
//#include "Vicache_tb_top.h"  // 从 Verilog Testbench 生成的 C++ 类
//
//int main(int argc, char **argv) {
//
//    Verilated::commandArgs(argc, argv);  
//
//    Vicache_tb_top* tb = new Vicache_tb_top;
//
//    printf("Hello, Verilator!\n");
//
//    const vluint64_t MAX_SIM_TIME = 10000000;
//    vluint64_t sim_time = 0;
//    bool rst_n = 0;  // 初始化复位
//
//    while (sim_time < MAX_SIM_TIME) {
//        tb->clk = !tb->clk;
//        if (sim_time > 10) {
//            rst_n = 1;  
//        }
//        tb->rst_n = rst_n;
//        tb->eval();
//
//        sim_time++;
//    }
//
//    tb->final();
//    delete tb;
//
//    return 0;
//}


#include "verilated.h"
#include "Vicache_tb_top.h"  
#include "verilated_vcd_c.h"  

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);  

    Vicache_tb_top* tb = new Vicache_tb_top;


    VerilatedVcdC* tfp = new VerilatedVcdC;


    tb->trace(tfp, 99);  
    tfp->open("wave.vcd");  

    printf("Hello, Verilator!\n");

    const vluint64_t MAX_SIM_TIME = 10000000;  
    vluint64_t sim_time = 0;
    bool rst_n = 0;  

    // 仿真主循环
    while (sim_time < MAX_SIM_TIME) {
        tb->clk = !tb->clk;
        if (sim_time > 10) {
            rst_n = 1;  
        }
        tb->rst_n = rst_n;

        tb->eval();
        
        tfp->dump(sim_time);  

        sim_time++;
    }
    tfp->close();
    tb->final();
    delete tb;

    return 0;
}

