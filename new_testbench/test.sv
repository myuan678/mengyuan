class test;
    icache_cfg      cfg     ;
    icache_env      env0    ;
    string          testname;
    

    function new();
        env0 = new;
    endfunction

    task run();
        #500ns;
        fork
            env0.run();
            testcase();
        join_any
    endtask

    task testcase();
        if($value$plusargs("testname=%s", testname))begin;
           $display("TEST NAME=%s", testname);
        end
        case(testname)
            "sanity":begin
                for(int i=1; i<10; i++)begin
                    env0.up_agent.up_base_seq.base_seq(100);
                end
            end
            "trace_sim":begin   
                env0.up_agent.up_trace_seq.base_seq(1);
            end
            "conflict":begin
                //for(int i=1;i<30;i++)begin
                    //env0.up_agent.up_seq.trace_seq();
                //end
            end
            "miss_hit":begin 
                for(int i=1; i<30; i++)begin
                    //env0.up_agent.up_seq.base_seq();
                end
                #500;
                for(int i=1; i<30; i++)begin
                    //env0.up_agent.up_seq.base_seq();
                end
            end
        endcase
        #3000us;
        env0.final_check();
        $finish;
    endtask

endclass