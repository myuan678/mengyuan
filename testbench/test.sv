class test;
    request     req         ;
    scoreboard  sb          ;
    //mailbox #(int)    up_req_mbx  ;
    //mailbox     up_req_mbx  ;
    mailbox #(toy_pack::pc_req_t) up_req_mbx;
    ddr_model   ddr         ;
    int         delay,txnid,index,tag;
    string      testname    ;

    function new();
        req             = new;
        sb              = new;
        ddr             = new;
        up_req_mbx      = new;
        //connection
        sb.drv          = req;
        sb.ddr          = ddr;
        req.up_req_mbx  = up_req_mbx;
        sb.up_req_mbx   = up_req_mbx;
    endfunction

    task run();
        #500ns;
        fork
            testcase();
            sb.compare();
            ddr.gen_rxdat();
        join_any
    endtask

    task testcase();
        if($value$plusargs("testname=%s", testname))begin;
           $display("testname=%s", testname);
        end
        case(testname)
            "sanity":begin
                for(int i=1; i<20; i++)begin
                   delay = $urandom_range(3,5);
                   req.send_upstream_req(i, i, i);
                   $display("send a UP req, tag=%h, index=%h, id=%h, %t", i,i,i, $realtime);
                   repeat(delay)@(posedge icache_tb_top.clk);
                end
            end
            "conflict":begin
                for(int i=1;i<30;i++)begin
                    tag   = $urandom_range(1,3);
                    index = $urandom_range(1,2);
                    txnid = i%32;
                    @(posedge icache_tb_top.clk);
                    req.send_upstream_req(tag,index,txnid);
                    $display("send a upreq, tag= %h, index= %h, id=%h, %t", tag, index, txnid, $realtime);
                end
            end
            //"miss_hit":begin 
            //    for(int i=1; i<30; i++)begin
            //        delay = $urandom_range(10,15);
            //        req.send_upstream_req(i, i, i);
            //        $display("send a up req, tag=%h, index=%h, id=%h, %t", i,i,i, $realtime);
            //        repeat(delay)@(posedge icache_tb_top.clk);
            //    end
            //    #500;
            //    for(int i=1; i<30; i++)begin
            //        delay = $urandom_range(10,15);
            //        req.send_upstream_req(i, i, i);
            //        $display("send a up req, tag=%h, index=%h, id=%h, %t", i,i,i, $realtime);
            //        repeat(delay)@(posedge icache_tb_top.clk);
            //    end
            //end
        endcase
        sb.final_check();
        $finish;
    endtask

endclass