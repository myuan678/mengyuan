///xuemengyuan try
class up_driver;
    virtual icache_up_if    icache_up_vif     ;
    virtual icache_down_if  icache_down_vif   ; 
    event                   drv_done          ;
    mailbox                 drv_mbx           ;
    mailbox                 mem_mbx           ;
    mailbox                 up_trans_mbx      ;
    mailbox                 mbx_scb           ;
    icache_cfg              icache_cfg_up_drv ;

    function new();
        this.up_trans_mbx = new(2);
        this.mbx_scb = new(2);
    endfunction

    task send_trans (input up_transaction up_trans);
        up_transaction trans_to_mbx;
        up_transaction trans_to_scb;
        up_trans.copy_to(trans_to_mbx);
        up_trans.copy_to(trans_to_scb);
        up_trans_mbx.put(trans_to_mbx);
        mbx_scb.put(trans_to_scb);
    endtask

    task scb_get_trans(output up_transaction up_trans);
        mbx_scb.get(up_trans);
    endtask

    task recv_trans(output up_transaction up_trans);
        up_trans_mbx.get(up_trans);
    endtask


    //task start_up_trans();
    //    $display ("T=%0t [Driver] starting ...", $time);
    //    forever begin
    //        up_transcation up_trans_seq;
    //        if(!drv_mbx.num())begin
    //            if(icache_cfg_up_drv.debug_en) $display("[DEBUG][UPSTREAM_DRIVER][%0t] Start to listen req mailbox",$time);
    //            if(icache_cfg_up_drv.debug_en) $display("[DEBUG][UPSTREAM_DRIVER][%0t] Start to transmit pld",$time)      ;              
    //            drv_mbx.get(up_trans_seq);
    //            mem_mbx.put(up_trans_seq);
    //            icache_up_vif.upstream_req_vld <= 1'b1;
    //            icache_up_vif.upstream_req_pld <= up_trans_seq.pld;
    //            $display ("T=%0t [Driver] waiting for item ...", $time);
    //            do@(posedge icache_up_vif.clk); while(!(icache_up_vif.upstream_req_vld && icache_up_vif.upstream_req_rdy));              
	//            up_trans_seq.print("Driver");
    //            ->drv_done;
    //        end
    //        //else begin
    //        //    @(posedge icache_up_vif.clk);
    //        //    if(icache_cfg_up_drv.debug_en) $display("[DEBUG][UPSTREAM_DRIVER][%0t] get no trans from drv mbx",$time);
    //        //end
//
    //    end
    //endtask

    task start_up_trans();
        $display ("T=%0t [Driver] starting ...", $time);
        up_transaction up_trans;
        up_transaction up_trans_tombx;
        @(posedge icache_up_vif.clk);
        forever begin
            if(!up_trans_mbx.num())begin
                if(icache_cfg_up_drv.debug_en) $display("[DEBUG][UP_TRANS][%0t] Start to listen vif.", $time);
                    up_trans_mbx.peek(up_trans)
                    icache_up_vif.upstream_req_vld <= 1'b1;
                    icache_up_vif.upstream_req_pld <= up_trans.pld;
                    $display ("T=%0t [Driver] waiting for item ...", $time);
                    do@(posedge icache_up_vif.clk); while(!(icache_up_vif.upstream_req_vld && icache_up_vif.upstream_req_rdy)); 
                    if(icache_cfg_up_drv.debug_en) $display("[DEBUG][UP_TRANS][%0t] send fail.", $time);
                up_trans_mbx.get(up_trans);
            end
            else begin
                icache_up_vif.upstream_req_vld <= 1'b1;
                @(posedge vif.clk);
            end
        end
    endtask

    task run();
        fork
            start_up_trans();
        join_none
    endtask
endclass

