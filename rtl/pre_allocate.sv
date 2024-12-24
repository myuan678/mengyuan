//module pre_allocate 
//    import toy_pack::*;
//    #(
//    parameter ENTRY_NUM = 8, 
//    parameter INDEX_WIDTH = $clog2(ENTRY_NUM) 
//)(
//    input  logic                        clk                 ,
//    input  logic                        rst_n               ,
//    input  logic                        cre_tag_req_vld     ,
//    input  logic  [ENTRY_NUM-1  :0]     v_vld_in            , 
//    input  logic                        rdy_in              ,   
//    output logic  [ENTRY_NUM-1  :0]     v_rdy_out           , 
//    output logic  [INDEX_WIDTH-1:0]     taken_index         , 
//    output logic                        index_vld           ,
//    output logic                        taken_vld    
//);
//    logic [ENTRY_NUM-1  :0] selected_chn                    ;
//    logic [ENTRY_NUM-1  :0] v_vld_reg                       ;
//    logic  [INDEX_WIDTH-1:0]     taken_index_pre;
//    logic index_vld_pre;
//    //always_ff@(posedge clk or negedge rst_n)begin
//    //    if(!rst_n)begin
//    //        v_vld_reg <= 'b0;
//    //    end
//    //    else if(cre_tag_req_vld)begin
//    //        v_vld_reg <= v_vld_in;
//    //    end
//    //    else begin
//    //        v_vld_reg <= 'b0;
//    //    end
//    //end
//    //cmn_lead_one #(
//    //    .ENTRY_NUM      (MSHR_ENTRY_NUM   )
//    //) u_allocate_one(
//    //    .v_entry_vld    (v_vld_reg        ),
//    //    .v_free_idx_oh  (selected_chn     ),
//    //    .v_free_idx_bin (taken_index      ),
//    //    .v_free_vld     (index_vld        )
//    //);
//    cmn_lead_one #(
//        .ENTRY_NUM      (MSHR_ENTRY_NUM   )
//    ) u_allocate_one(
//        .v_entry_vld    (v_vld_in        ),
//        .v_free_idx_oh  (selected_chn     ),
//        .v_free_idx_bin (taken_index_pre      ),
//        .v_free_vld     (index_vld_pre        )
//    );
//
//    always_ff@(posedge clk or negedge rst_n)begin
//        if(~rst_n)begin
//            taken_index <= 'b0;
//            index_vld <= 1'b0;
//        end
//        else begin
//            taken_index <= taken_index_pre;
//            index_vld <= index_vld_pre;
//        end
//    end
//
//    assign v_rdy_out = selected_chn;
//    assign taken_vld = |v_vld_in;
//endmodule


module pre_allocate 
    import toy_pack::*;
    #(
    parameter ENTRY_NUM = 8, 
    parameter INDEX_WIDTH = $clog2(ENTRY_NUM) 
)(
    input  logic                        clk                 ,
    input  logic                        rst_n               ,
    input  logic                        cre_tag_req_vld     ,
    input  logic  [ENTRY_NUM-1  :0]     v_vld_in            , 
    input  logic                        rdy_in              ,   
    output logic  [ENTRY_NUM-1  :0]     v_rdy_out           , 
    output logic  [INDEX_WIDTH-1:0]     taken_index         , 
    output logic                        index_vld           ,
    output logic                        taken_vld    
);
    logic [ENTRY_NUM-1   :0]  selected_chn                    ;
    logic [ENTRY_NUM-1   :0]  v_vld_reg                       ;
    logic  [INDEX_WIDTH-1:0]  taken_index_pre;
    logic index_vld_pre;
    //always_ff@(posedge clk or negedge rst_n)begin
    //    if(!rst_n)begin
    //        v_vld_reg <= 'b0;
    //    end
    //    else if(cre_tag_req_vld)begin
    //        v_vld_reg <= v_vld_in;
    //    end
    //    else begin
    //        v_vld_reg <= 'b0;
    //    end
    //end
    //cmn_lead_one #(
    //    .ENTRY_NUM      (MSHR_ENTRY_NUM   )
    //) u_allocate_one(
    //    .v_entry_vld    (v_vld_reg        ),
    //    .v_free_idx_oh  (selected_chn     ),
    //    .v_free_idx_bin (taken_index      ),
    //    .v_free_vld     (index_vld        )
    //);
    cmn_lead_one #(
        .ENTRY_NUM      (MSHR_ENTRY_NUM   )
    ) u_allocate_one(
        .v_entry_vld    (v_vld_in        ),
        .v_free_idx_oh  (selected_chn     ),
        .v_free_idx_bin (taken_index_pre      ),
        .v_free_vld     (index_vld_pre        )
    );

    always_ff@(posedge clk or negedge rst_n)begin
        if(~rst_n)begin
            taken_index <= 'b0;
            index_vld <= 1'b0;
        end
        else begin
            taken_index <= taken_index_pre;
            index_vld <= index_vld_pre;
        end
    end

    assign v_rdy_out = selected_chn;
    assign taken_vld = |v_vld_in;
endmodule
