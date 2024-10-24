simSetSimulator "-vcssv" -exec "simv" -args "+v2k -a com.log +WAVE"
debImport "-sv" "-dbdir" "simv.daidir"
debLoadSimResult \
           /data/usr/xuemy/try/cache_v1/icache_v1_1008_release/work/rtl_sim/wave.fsdb
wvCreateWindow
verdiWindowResize -win $_Verdi_1 "143" "93" "1586" "951"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "icache_top_tb" -win $_nTrace1
srcSetScope "icache_top_tb" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb" -win $_nTrace1
srcHBSelect "icache_top_tb.dut" -win $_nTrace1
srcSetScope "icache_top_tb.dut" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "upstream_rxreq_vld" -line 14 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSignalView -on
verdiSetActWin -dock widgetDock_<Signal_List>
srcDeselectAll -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -signal "downstream_rxdat_vld" -line 40 -pos 1 -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_icache_mshr_file" -win $_nTrace1
srcSetScope "icache_top_tb.dut.u_icache_mshr_file" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_icache_mshr_file" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "alloc_vld" -line 20 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect \
           "icache_top_tb.dut.u_icache_mshr_file.MSHR_ENTRY_ARRAY\[0\].u_icache_mshr_entry" \
           -win $_nTrace1
srcSetScope \
           "icache_top_tb.dut.u_icache_mshr_file.MSHR_ENTRY_ARRAY\[0\].u_icache_mshr_entry" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "icache_top_tb.dut.u_icache_mshr_file.MSHR_ENTRY_ARRAY\[0\].u_icache_mshr_entry" \
           -win $_nTrace1
srcDeselectAll -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -signal "entry_en" -line 9 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSelect -signal "entry_data" -line 10 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "linefill_done" -line 27 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "dataram_rd_way" -line 34 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "allocate_en" -line 46 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "rd_vld" -line 54 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "mshr_entry_array.valid" -line 79 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
wvSetCursor -win $_nWave2 92.001158 -snap {("G1" 5)}
verdiSetActWin -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSelect -signal "mshr_entry_array.req_pld" -line 72 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
wvZoom -win $_nWave2 0.000000 1766.422236
verdiSetActWin -win $_nWave2
wvSelectSignal -win $_nWave2 {( "G1" 5 )} 
srcDeselectAll -win $_nTrace1
srcSelect -signal "rst_n" -line 79 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "icache_top_tb.dut.u_icache_tag_array_ctrl" -win $_nTrace1
srcSetScope "icache_top_tb.dut.u_icache_tag_array_ctrl" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_icache_tag_array_ctrl" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "rd_pld" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "rd_vld" -line 33 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSelect -signal "tag_way0_hit" -line 14 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "icache_top_tb.dut.u_icache_mshr_file" -win $_nTrace1
srcSetScope "icache_top_tb.dut.u_icache_mshr_file" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_icache_mshr_file" -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_data_array_ctrl" -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_data_array_ctrl" -win $_nTrace1
srcSetScope "icache_top_tb.dut.u_data_array_ctrl" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_data_array_ctrl" -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_data_array_ctrl" -win $_nTrace1
srcSetScope "icache_top_tb.dut.u_data_array_ctrl" -delim "." -win $_nTrace1
srcHBSelect "icache_top_tb.dut.u_data_array_ctrl" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "downstream_rxdat_vld" -line 14 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSelect -signal "downstream_rxdat_rdy" -line 15 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
srcDeselectAll -win $_nTrace1
srcSelect -signal "downstream_rxdat_pld" -line 16 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
wvSelectSignal -win $_nWave2 {( "G1" 12 )} 
wvExpandBus -win $_nWave2
verdiSetActWin -win $_nWave2
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSelectSignal -win $_nWave2 {( "G1" 12 )} 
wvSetPosition -win $_nWave2 {("G1" 12)}
wvCollapseBus -win $_nWave2
wvSetPosition -win $_nWave2 {("G1" 12)}
wvSelectSignal -win $_nWave2 {( "G1" 12 )} 
wvSelectSignal -win $_nWave2 {( "G1" 5 6 7 8 9 10 11 12 )} 
wvCut -win $_nWave2
wvSetPosition -win $_nWave2 {("G1" 4)}
