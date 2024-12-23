verdiSetActWin -dock widgetDock_<Message>
simSetSimulator "-vcssv" -exec "simv" -args \
           "-lca +v2k -a com.log +WAVE +testname=sanity"
debImport "-sv" "-dbdir" "simv.daidir"
debLoadSimResult \
           /data/usr/xuemy/try/cache_v1/icache_v1_1008_release/work/rtl_sim/wave.fsdb
wvCreateWindow
verdiWindowResize -win $_Verdi_1 "8" "31" "800" "578"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
