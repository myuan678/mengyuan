class down_driver;
    virtual icache_up_if    icache_up_vif;
    virtual icache_down_if  icache_down_vif; 
    icache_cfg              icache_cfg_down_drv             ;
    event   down_drv_done;
    mailbox mem_mbx; 
    mailbox rx_dat_mbx;

    task start_down_trans();
        $display ("T=%0t [Driver] starting ...", $time);
        forever begin
            down_transcation rxdat_trans;
            if(!rxdat_mbx.num())begin
                if(icache_cfg_down_drv.debug_en) $display("[DEBUG][DOWNSTREAM_DRIVER][%0t] Start to listen txreq mailbox",$time);
                if(icache_cfg_down_drv.debug_en) $display("[DEBUG][DOWNSTREAM_DRIVER][%0t] Start to transmit pld",$time)      ;              
                rxdat_mbx.get(rxdat_trans);
                mem_mbx.put(rxdat_trans);
                icache_down_vif.downstream_rxdat_vld <= 1'b1;
                icache_down_vif.downstream_rxdat_pld <= rxdat_trans.pld;
                $display ("T=%0t [Driver] waiting for item ...", $time);
                do@(posedge icache_down_vif.clk); while(!(icache_down_vif.downstream_rxdat_vld && icache_down_vif.downstream_rxdat_rdy));              
	            //rxdat_trans.print("Driver");
                ->down_drv_done;
            end
            else begin
                @(posedge icache_down_vif.clk);
                if(icache_cfg_down_drv.debug_en) $display("[DEBUG][UPSTREAM_DRIVER][%0t] get no trans from drv mbx",$time);
            end

        end
    endtask
endclass:down_driver