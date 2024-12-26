CURRENT_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
export PRJ_PATH = $(CURRENT_DIR)


RTL_COMPILE_OUTPUT 	= $(CURRENT_DIR)/work/rtl_compile
RTL_SIM_OUTPUT      = $(CURRENT_DIR)/work/rtl_sim
RTL_SIM_COV         = $(CURRENT_DIR)/work/rtl_sim_cov
RTL_NEWSIM_OUTPUT   = $(CURRENT_DIR)/work/rtl_new_sim
VERILATOR           = $(CURRENT_DIR)/work/verilator	


TESTBENCH_DIR := $(abspath testbench)
VCS_COMMAND			= vcs -sverilog -lca -kdb +v2k -debug_access+all -debug_all -full64 -timescale=1ns/1ns -l com.log
VERILATOR_COMMAND   = /data/usr/liuyunqi/sw/verilator5018/bin/verilator -Wno-lint -Wno-style -CFLAGS -DVL_DEBUG=1 -DVERILATOR_COMPIL --cc --exe main.cpp --timing --sv --trace

COMP_FILELIST		= $(CURRENT_DIR)/icache_compile.f
SIM_FILELIST 		= $(CURRENT_DIR)/icache_filelist.f
VERILATOR_FILELIST  = $(CURRENT_DIR)/icache_verilator_sim.f

.PHONY: compile lint


#compile:
#	mkdir -p $(RTL_COMPILE_OUTPUT)
#	cd $(RTL_COMPILE_OUTPUT) ; $(VCS_COMMAND) -f $(RTL_FILELIST) +lint=PCWM +lint=TFIPC-L +define+TOY_SIM

compile:
	mkdir -p $(RTL_COMPILE_OUTPUT)
	cd $(RTL_COMPILE_OUTPUT) ;vcs -kdb -full64 -debug_access -sverilog -f $(COMP_FILELIST) +lint=PCWM +lint=TFIPC-L +define+TOY_SIM

vcs_sim:
	mkdir -p $(RTL_SIM_OUTPUT)
	cd $(RTL_SIM_OUTPUT); $(VCS_COMMAND) -f $(SIM_FILELIST) -R +WAVE 


sanity:
	mkdir -p $(RTL_SIM_OUTPUT)
	cd $(RTL_SIM_OUTPUT); $(VCS_COMMAND) -f $(SIM_FILELIST) -R +WAVE +testname=sanity 

conflict:
	mkdir -p $(RTL_SIM_OUTPUT)
	cd $(RTL_SIM_OUTPUT); $(VCS_COMMAND) -f $(SIM_FILELIST) -R +WAVE +testname=conflict

trace_sim:
	mkdir -p $(RTL_SIM_OUTPUT)
	cd $(RTL_SIM_OUTPUT); $(VCS_COMMAND) -f $(SIM_FILELIST) -R +WAVE +testname=trace_sim


sim_cov:
	mkdir -p $(RTL_SIM_COV)
	cd $(RTL_SIM_COV); $(VCS_COMMAND) -f /data/usr/xuemy/try/cache_v1/icache_v1_1008_release/icache_filelist.f -cm line+cond+fsm+branch+tgl -R +WAVE -cm_name simv -cm_dir ./coverage


# wsl compile
comp:
	mkdir -p $(RTL_COMPILE_OUTPUT)
	cd $(RTL_COMPILE_OUTPUT) ;vcs -full64 -cpp g++-4.8 -cc gcc-4.8 -LDFLAGS -Wl,--no-as-needed -kdb -lca -full64 -debug_access -sverilog -f $(SIM_FILELIST) +lint=PCWM +lint=TFIPC-L +define+TOY_SIM

lint:
	fde -file qc/lint.tcl -flow lint


verdi:
	verdi -sv -f $(SIM_FILELIST) -ssf wave.fsdb -dbdir $(RTL_SIM_OUTPUT)/simv.daidir



#verilator:
#	/data/usr/liuyunqi/sw/verilator5018/bin/verilator -Wno-UNSIGNED -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-ASCRANGE -Wno-IMPLICIT -Wno-PINMISSING -Wno-WIDTHCONCAT -DVERILATOR_COMPIL -f icache_filelist.f --top-module icache_top --cc --exe --timing --sv --Wall

#verilator:
#	/data/usr/liuyunqi/sw/verilator5018/bin/verilator -Wno-lint -Wno-style  -DVERILATOR_COMPIL -f /data/usr/xuemy/try/cache_v1/icache_v1_1008_release/verilator_sim.f --top-module icache_tb_top --cc --exe  --timing --sv --build main.cpp 
verilator:
	/data/usr/liuyunqi/sw/verilator5018/bin/verilator -Wno-lint -Wno-style -CFLAGS -DVL_DEBUG=1 -DVERILATOR_COMPIL -f $(VERILATOR_FILELIST) --top-module icache_tb_top --cc --exe main.cpp --timing --sv --trace   



#1. make verilator
#2. make -C obj_dir -f Vicache_tb_top.mk
#3. ./obj_dir/Vicache_top
