class up_sequencer;

    up_driver           up_drv      ;
    up_transaction      up_trans    ;
    icache_cfg          cfg         ;
    string              name        ;
    //int                 src_id      ;


    function new(input up_driver up_drv, input string name="default_sequencer");
        this.name    = name      ;
        this.up_drv  = up_drv    ;
        //src_id = 0;
    endfunction

    task run();
        int cnt = 0;
        begin
            up_drv.run();
            for(int i=0;i<10;i=i+1) begin
                up_trans = new(cfg);
                up_trans.randomize();
                $display ("T=%0t [Sequence] NUM:%0d/%0d create next up_read seq", $time, i+1, num);
                if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
                $display ("T=%0t [Sequence] Wait for driver to be done", $time);
                up_drv.send_trans(up_trans);
                cnt ++;
            end
            $display("[Sequencer][%s] send %0d.", name, cnt);
        end
    endtask

endclass:up_sequencer










class up_sequencer;

    up_driver       up_req_driver   ;
    up_transaction  up_trans        ;

    function new(input up_driver up_req_driver);
        this.up_req_driver = up_req_driver;
    endfunction

    task run();
        fork
            begin
                up_req_driver.start_up_trans();
                forever begin
                    up_req_driver.recv_trans(up_trans);
                end
            end
        join_none
    endtask


endclass