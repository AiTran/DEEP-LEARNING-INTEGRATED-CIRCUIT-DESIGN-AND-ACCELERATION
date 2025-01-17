// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AXI_DMA_SLAVE (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        in_stream_TDATA,
        in_stream_TVALID,
        in_stream_TREADY,
        in_stream_TLAST,
        out_stream_V_V_din,
        out_stream_V_V_full_n,
        out_stream_V_V_write
);

parameter    ap_ST_fsm_state1 = 15'd1;
parameter    ap_ST_fsm_state2 = 15'd2;
parameter    ap_ST_fsm_state3 = 15'd4;
parameter    ap_ST_fsm_state4 = 15'd8;
parameter    ap_ST_fsm_state5 = 15'd16;
parameter    ap_ST_fsm_state6 = 15'd32;
parameter    ap_ST_fsm_state7 = 15'd64;
parameter    ap_ST_fsm_state8 = 15'd128;
parameter    ap_ST_fsm_state9 = 15'd256;
parameter    ap_ST_fsm_state10 = 15'd512;
parameter    ap_ST_fsm_pp0_stage0 = 15'd1024;
parameter    ap_ST_fsm_state13 = 15'd2048;
parameter    ap_ST_fsm_state14 = 15'd4096;
parameter    ap_ST_fsm_state15 = 15'd8192;
parameter    ap_ST_fsm_pp1_stage0 = 15'd16384;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [31:0] in_stream_TDATA;
input   in_stream_TVALID;
output   in_stream_TREADY;
input   in_stream_TLAST;
output  [31:0] out_stream_V_V_din;
input   out_stream_V_V_full_n;
output   out_stream_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg[31:0] out_stream_V_V_din;
reg out_stream_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [14:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg   [31:0] in_stream_V_data_V_0_data_out;
wire    in_stream_V_data_V_0_vld_in;
wire    in_stream_V_data_V_0_vld_out;
wire    in_stream_V_data_V_0_ack_in;
reg    in_stream_V_data_V_0_ack_out;
reg   [31:0] in_stream_V_data_V_0_payload_A;
reg   [31:0] in_stream_V_data_V_0_payload_B;
reg    in_stream_V_data_V_0_sel_rd;
reg    in_stream_V_data_V_0_sel_wr;
wire    in_stream_V_data_V_0_sel;
wire    in_stream_V_data_V_0_load_A;
wire    in_stream_V_data_V_0_load_B;
reg   [1:0] in_stream_V_data_V_0_state;
wire    in_stream_V_data_V_0_state_cmp_full;
wire    in_stream_V_last_0_vld_in;
reg    in_stream_V_last_0_ack_out;
reg   [1:0] in_stream_V_last_0_state;
reg    in_stream_TDATA_blk_n;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_pp1_stage0;
reg    ap_enable_reg_pp1_iter0;
wire    ap_block_pp1_stage0;
wire   [0:0] exitcond1_fu_149_p2;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
wire   [0:0] exitcond_fu_129_p2;
reg    out_stream_V_V_blk_n;
reg    ap_enable_reg_pp1_iter1;
reg   [0:0] exitcond1_reg_226;
reg    ap_enable_reg_pp0_iter1;
reg   [0:0] exitcond_reg_207;
reg   [31:0] i1_reg_75;
reg   [31:0] i_reg_86;
reg  signed [31:0] reg_102;
reg    ap_block_state2;
reg    ap_block_state11_pp0_stage0_iter0;
reg    ap_block_state12_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
reg    ap_block_state16_pp1_stage0_iter0;
reg    ap_block_state17_pp1_stage0_iter1;
reg    ap_block_pp1_stage0_11001;
wire   [0:0] tmp_s_fu_107_p2;
reg   [0:0] tmp_s_reg_160;
reg    ap_block_state1;
reg  signed [31:0] tmp_data_V_2_reg_164;
reg    ap_block_state3;
reg  signed [31:0] tmp_data_V_3_reg_170;
reg    ap_block_state4;
reg  signed [31:0] tmp_data_V_4_reg_176;
reg    ap_block_state5;
reg  signed [31:0] tmp_data_V_5_reg_182;
reg    ap_block_state6;
wire  signed [31:0] KER_size_0_fu_113_p2;
reg  signed [31:0] KER_size_0_reg_187;
reg    ap_block_state8;
wire  signed [31:0] IFM_size_0_fu_117_p2;
reg  signed [31:0] IFM_size_0_reg_192;
wire  signed [31:0] KER_size_1_fu_121_p2;
reg  signed [31:0] KER_size_1_reg_197;
wire    ap_CS_fsm_state9;
wire   [31:0] KER_bound_fu_125_p2;
reg   [31:0] KER_bound_reg_202;
wire    ap_CS_fsm_state10;
wire   [31:0] i_1_fu_134_p2;
wire  signed [31:0] IFM_size_1_fu_140_p2;
reg  signed [31:0] IFM_size_1_reg_216;
wire    ap_CS_fsm_state14;
wire   [31:0] IFM_bound_fu_144_p2;
reg   [31:0] IFM_bound_reg_221;
wire    ap_CS_fsm_state15;
wire   [31:0] i_17_fu_154_p2;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state11;
reg    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state16;
reg    ap_block_state7;
reg    ap_block_pp0_stage0_01001;
reg    ap_block_pp1_stage0_01001;
wire    ap_CS_fsm_state13;
reg   [14:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 15'd1;
#0 in_stream_V_data_V_0_sel_rd = 1'b0;
#0 in_stream_V_data_V_0_sel_wr = 1'b0;
#0 in_stream_V_data_V_0_state = 2'd0;
#0 in_stream_V_last_0_state = 2'd0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U1(
    .din0(tmp_data_V_5_reg_182),
    .din1(tmp_data_V_2_reg_164),
    .dout(KER_size_0_fu_113_p2)
);

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U2(
    .din0(tmp_data_V_4_reg_176),
    .din1(tmp_data_V_3_reg_170),
    .dout(IFM_size_0_fu_117_p2)
);

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U3(
    .din0(tmp_data_V_2_reg_164),
    .din1(KER_size_0_reg_187),
    .dout(KER_size_1_fu_121_p2)
);

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U4(
    .din0(tmp_data_V_3_reg_170),
    .din1(KER_size_1_reg_197),
    .dout(KER_bound_fu_125_p2)
);

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U5(
    .din0(tmp_data_V_4_reg_176),
    .din1(IFM_size_0_reg_192),
    .dout(IFM_size_1_fu_140_p2)
);

cifar_10_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
cifar_10_mul_32s_bkb_U6(
    .din0(reg_102),
    .din1(IFM_size_1_reg_216),
    .dout(IFM_bound_fu_144_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state13)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state11) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state10)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state11))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state11);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((1'b1 == ap_CS_fsm_state10)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state16) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state15)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state16))) begin
            ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state16);
        end else if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end else if ((1'b1 == ap_CS_fsm_state15)) begin
            ap_enable_reg_pp1_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_stream_V_data_V_0_sel_rd <= 1'b0;
    end else begin
        if (((in_stream_V_data_V_0_ack_out == 1'b1) & (in_stream_V_data_V_0_vld_out == 1'b1))) begin
            in_stream_V_data_V_0_sel_rd <= ~in_stream_V_data_V_0_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_stream_V_data_V_0_sel_wr <= 1'b0;
    end else begin
        if (((in_stream_V_data_V_0_ack_in == 1'b1) & (in_stream_V_data_V_0_vld_in == 1'b1))) begin
            in_stream_V_data_V_0_sel_wr <= ~in_stream_V_data_V_0_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_stream_V_data_V_0_state <= 2'd0;
    end else begin
        if ((((in_stream_V_data_V_0_state == 2'd2) & (in_stream_V_data_V_0_vld_in == 1'b0)) | ((in_stream_V_data_V_0_state == 2'd3) & (in_stream_V_data_V_0_vld_in == 1'b0) & (in_stream_V_data_V_0_ack_out == 1'b1)))) begin
            in_stream_V_data_V_0_state <= 2'd2;
        end else if ((((in_stream_V_data_V_0_state == 2'd1) & (in_stream_V_data_V_0_ack_out == 1'b0)) | ((in_stream_V_data_V_0_state == 2'd3) & (in_stream_V_data_V_0_ack_out == 1'b0) & (in_stream_V_data_V_0_vld_in == 1'b1)))) begin
            in_stream_V_data_V_0_state <= 2'd1;
        end else if (((~((in_stream_V_data_V_0_vld_in == 1'b0) & (in_stream_V_data_V_0_ack_out == 1'b1)) & ~((in_stream_V_data_V_0_ack_out == 1'b0) & (in_stream_V_data_V_0_vld_in == 1'b1)) & (in_stream_V_data_V_0_state == 2'd3)) | ((in_stream_V_data_V_0_state == 2'd1) & (in_stream_V_data_V_0_ack_out == 1'b1)) | ((in_stream_V_data_V_0_state == 2'd2) & (in_stream_V_data_V_0_vld_in == 1'b1)))) begin
            in_stream_V_data_V_0_state <= 2'd3;
        end else begin
            in_stream_V_data_V_0_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_stream_V_last_0_state <= 2'd0;
    end else begin
        if ((((in_stream_V_last_0_state == 2'd2) & (in_stream_V_last_0_vld_in == 1'b0)) | ((in_stream_V_last_0_state == 2'd3) & (in_stream_V_last_0_vld_in == 1'b0) & (in_stream_V_last_0_ack_out == 1'b1)))) begin
            in_stream_V_last_0_state <= 2'd2;
        end else if ((((in_stream_V_last_0_state == 2'd1) & (in_stream_V_last_0_ack_out == 1'b0)) | ((in_stream_V_last_0_state == 2'd3) & (in_stream_V_last_0_ack_out == 1'b0) & (in_stream_V_last_0_vld_in == 1'b1)))) begin
            in_stream_V_last_0_state <= 2'd1;
        end else if (((~((in_stream_V_last_0_vld_in == 1'b0) & (in_stream_V_last_0_ack_out == 1'b1)) & ~((in_stream_V_last_0_ack_out == 1'b0) & (in_stream_V_last_0_vld_in == 1'b1)) & (in_stream_V_last_0_state == 2'd3)) | ((in_stream_V_last_0_state == 2'd1) & (in_stream_V_last_0_ack_out == 1'b1)) | ((in_stream_V_last_0_state == 2'd2) & (in_stream_V_last_0_vld_in == 1'b1)))) begin
            in_stream_V_last_0_state <= 2'd3;
        end else begin
            in_stream_V_last_0_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_129_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i1_reg_75 <= i_1_fu_134_p2;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        i1_reg_75 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_149_p2 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        i_reg_86 <= i_17_fu_154_p2;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        i_reg_86 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        IFM_bound_reg_221 <= IFM_bound_fu_144_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (tmp_s_reg_160 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
        IFM_size_0_reg_192 <= IFM_size_0_fu_117_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        IFM_size_1_reg_216 <= IFM_size_1_fu_140_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        KER_bound_reg_202 <= KER_bound_fu_125_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (tmp_s_reg_160 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        KER_size_0_reg_187 <= KER_size_0_fu_113_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        KER_size_1_reg_197 <= KER_size_1_fu_121_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        exitcond1_reg_226 <= exitcond1_fu_149_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_reg_207 <= exitcond_fu_129_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((in_stream_V_data_V_0_load_A == 1'b1)) begin
        in_stream_V_data_V_0_payload_A <= in_stream_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if ((in_stream_V_data_V_0_load_B == 1'b1)) begin
        in_stream_V_data_V_0_payload_B <= in_stream_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if ((((exitcond_fu_129_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_fu_149_p2 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        reg_102 <= in_stream_V_data_V_0_data_out;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_data_V_2_reg_164 <= in_stream_V_data_V_0_data_out;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp_data_V_3_reg_170 <= in_stream_V_data_V_0_data_out;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5))) begin
        tmp_data_V_4_reg_176 <= in_stream_V_data_V_0_data_out;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
        tmp_data_V_5_reg_182 <= in_stream_V_data_V_0_data_out;
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_s_reg_160 <= tmp_s_fu_107_p2;
    end
end

always @ (*) begin
    if ((exitcond_fu_129_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state11 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state11 = 1'b0;
    end
end

always @ (*) begin
    if ((exitcond1_fu_149_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state16 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state16 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_129_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_fu_149_p2 == 1'd0) & (1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)))) begin
        in_stream_TDATA_blk_n = in_stream_V_data_V_0_state[1'd0];
    end else begin
        in_stream_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_129_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_fu_149_p2 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state7)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        in_stream_V_data_V_0_ack_out = 1'b1;
    end else begin
        in_stream_V_data_V_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if ((in_stream_V_data_V_0_sel == 1'b1)) begin
        in_stream_V_data_V_0_data_out = in_stream_V_data_V_0_payload_B;
    end else begin
        in_stream_V_data_V_0_data_out = in_stream_V_data_V_0_payload_A;
    end
end

always @ (*) begin
    if (((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_129_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_fu_149_p2 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state7)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        in_stream_V_last_0_ack_out = 1'b1;
    end else begin
        in_stream_V_last_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_reg_207 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_reg_226 == 1'd0) & (1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)))) begin
        out_stream_V_V_blk_n = out_stream_V_V_full_n;
    end else begin
        out_stream_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((exitcond_reg_207 == 1'd0) & (1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_reg_226 == 1'd0) & (1'b0 == ap_block_pp1_stage0_01001) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)))) begin
        out_stream_V_V_din = reg_102;
    end else if (((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state7)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        out_stream_V_V_din = in_stream_V_data_V_0_data_out;
    end else begin
        out_stream_V_V_din = 'bx;
    end
end

always @ (*) begin
    if (((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_reg_207 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((exitcond1_reg_226 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state7)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3)) | (~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        out_stream_V_V_write = 1'b1;
    end else begin
        out_stream_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (tmp_s_reg_160 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else if ((~((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0)) & (tmp_s_reg_160 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((exitcond_fu_129_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((exitcond_fu_129_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if (~((exitcond1_fu_149_p2 == 1'd1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if (((exitcond1_fu_149_p2 == 1'd1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((exitcond_reg_207 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((exitcond_fu_129_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((exitcond_reg_207 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((exitcond_fu_129_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((exitcond_reg_207 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((exitcond_fu_129_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp1_stage0_01001 = (((exitcond1_reg_226 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b1)) | ((exitcond1_fu_149_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp1_stage0_11001 = (((exitcond1_reg_226 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b1)) | ((exitcond1_fu_149_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp1_stage0_subdone = (((exitcond1_reg_226 == 1'd0) & (out_stream_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b1)) | ((exitcond1_fu_149_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((ap_done_reg == 1'b1) | (in_stream_V_data_V_0_vld_out == 1'b0) | (real_start == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state11_pp0_stage0_iter0 = ((exitcond_fu_129_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0));
end

always @ (*) begin
    ap_block_state12_pp0_stage0_iter1 = ((exitcond_reg_207 == 1'd0) & (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state16_pp1_stage0_iter0 = ((exitcond1_fu_149_p2 == 1'd0) & (in_stream_V_data_V_0_vld_out == 1'b0));
end

always @ (*) begin
    ap_block_state17_pp1_stage0_iter1 = ((exitcond1_reg_226 == 1'd0) & (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state2 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state3 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state4 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state5 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state6 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state7 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state8 = ((in_stream_V_data_V_0_vld_out == 1'b0) | (out_stream_V_V_full_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign exitcond1_fu_149_p2 = ((i_reg_86 == IFM_bound_reg_221) ? 1'b1 : 1'b0);

assign exitcond_fu_129_p2 = ((i1_reg_75 == KER_bound_reg_202) ? 1'b1 : 1'b0);

assign i_17_fu_154_p2 = (i_reg_86 + 32'd1);

assign i_1_fu_134_p2 = (i1_reg_75 + 32'd1);

assign in_stream_TREADY = in_stream_V_last_0_state[1'd1];

assign in_stream_V_data_V_0_ack_in = in_stream_V_data_V_0_state[1'd1];

assign in_stream_V_data_V_0_load_A = (in_stream_V_data_V_0_state_cmp_full & ~in_stream_V_data_V_0_sel_wr);

assign in_stream_V_data_V_0_load_B = (in_stream_V_data_V_0_state_cmp_full & in_stream_V_data_V_0_sel_wr);

assign in_stream_V_data_V_0_sel = in_stream_V_data_V_0_sel_rd;

assign in_stream_V_data_V_0_state_cmp_full = ((in_stream_V_data_V_0_state != 2'd1) ? 1'b1 : 1'b0);

assign in_stream_V_data_V_0_vld_in = in_stream_TVALID;

assign in_stream_V_data_V_0_vld_out = in_stream_V_data_V_0_state[1'd0];

assign in_stream_V_last_0_vld_in = in_stream_TVALID;

assign start_out = real_start;

assign tmp_s_fu_107_p2 = ((in_stream_V_data_V_0_data_out == 32'd0) ? 1'b1 : 1'b0);

endmodule //AXI_DMA_SLAVE
