// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AXI_DMA_MASTER_HH_
#define _AXI_DMA_MASTER_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cifar_10_mul_32s_bkb.h"

namespace ap_rtl {

struct AXI_DMA_MASTER : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_stream_V_V_dout;
    sc_in< sc_logic > in_stream_V_V_empty_n;
    sc_out< sc_logic > in_stream_V_V_read;
    sc_out< sc_lv<32> > out_stream_TDATA;
    sc_out< sc_logic > out_stream_TVALID;
    sc_in< sc_logic > out_stream_TREADY;
    sc_out< sc_logic > out_stream_TLAST;


    // Module declarations
    AXI_DMA_MASTER(sc_module_name name);
    SC_HAS_PROCESS(AXI_DMA_MASTER);

    ~AXI_DMA_MASTER();

    sc_trace_file* mVcdFile;

    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U213;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U214;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U215;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U216;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U217;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U218;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > out_stream_V_data_V_1_data_out;
    sc_signal< sc_logic > out_stream_V_data_V_1_vld_in;
    sc_signal< sc_logic > out_stream_V_data_V_1_vld_out;
    sc_signal< sc_logic > out_stream_V_data_V_1_ack_in;
    sc_signal< sc_logic > out_stream_V_data_V_1_ack_out;
    sc_signal< sc_lv<32> > out_stream_V_data_V_1_payload_A;
    sc_signal< sc_lv<32> > out_stream_V_data_V_1_payload_B;
    sc_signal< sc_logic > out_stream_V_data_V_1_sel_rd;
    sc_signal< sc_logic > out_stream_V_data_V_1_sel_wr;
    sc_signal< sc_logic > out_stream_V_data_V_1_sel;
    sc_signal< sc_logic > out_stream_V_data_V_1_load_A;
    sc_signal< sc_logic > out_stream_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > out_stream_V_data_V_1_state;
    sc_signal< sc_logic > out_stream_V_data_V_1_state_cmp_full;
    sc_signal< sc_logic > out_stream_V_last_1_data_in;
    sc_signal< sc_logic > out_stream_V_last_1_data_out;
    sc_signal< sc_logic > out_stream_V_last_1_vld_in;
    sc_signal< sc_logic > out_stream_V_last_1_vld_out;
    sc_signal< sc_logic > out_stream_V_last_1_ack_in;
    sc_signal< sc_logic > out_stream_V_last_1_ack_out;
    sc_signal< sc_logic > out_stream_V_last_1_payload_A;
    sc_signal< sc_logic > out_stream_V_last_1_payload_B;
    sc_signal< sc_logic > out_stream_V_last_1_sel_rd;
    sc_signal< sc_logic > out_stream_V_last_1_sel_wr;
    sc_signal< sc_logic > out_stream_V_last_1_sel;
    sc_signal< sc_logic > out_stream_V_last_1_load_A;
    sc_signal< sc_logic > out_stream_V_last_1_load_B;
    sc_signal< sc_lv<2> > out_stream_V_last_1_state;
    sc_signal< sc_logic > out_stream_V_last_1_state_cmp_full;
    sc_signal< sc_logic > in_stream_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > exitcond1_reg_272;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_reg_242;
    sc_signal< sc_logic > out_stream_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<1> > exitcond1_reg_272_pp1_iter1_reg;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > exitcond_reg_242_pp0_iter1_reg;
    sc_signal< sc_lv<32> > i1_reg_80;
    sc_signal< sc_lv<32> > i_reg_91;
    sc_signal< sc_lv<32> > reg_102;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state14_io;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state15_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< bool > ap_block_state20_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state21_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state21_io;
    sc_signal< bool > ap_block_state22_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state22_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<32> > reg_107;
    sc_signal< sc_lv<1> > tmp_s_fu_112_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_187;
    sc_signal< sc_lv<32> > tmp_V_358_reg_191;
    sc_signal< sc_lv<32> > tmp_V_359_reg_198;
    sc_signal< sc_lv<32> > tmp_V_362_reg_204;
    sc_signal< sc_lv<32> > KER_size_0_fu_118_p2;
    sc_signal< sc_lv<32> > KER_size_0_reg_216;
    sc_signal< sc_lv<32> > OFM_size_0_fu_123_p2;
    sc_signal< sc_lv<32> > OFM_size_0_reg_221;
    sc_signal< sc_lv<32> > KER_size_1_fu_128_p2;
    sc_signal< sc_lv<32> > KER_size_1_reg_226;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > KER_bound_fu_132_p2;
    sc_signal< sc_lv<32> > KER_bound_reg_231;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > tmp_133_fu_136_p2;
    sc_signal< sc_lv<32> > tmp_133_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > exitcond_fu_141_p2;
    sc_signal< sc_lv<32> > i_2_fu_146_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_last_1_fu_152_p2;
    sc_signal< sc_lv<1> > tmp_last_1_reg_251;
    sc_signal< sc_lv<32> > OFM_size_1_fu_157_p2;
    sc_signal< sc_lv<32> > OFM_size_1_reg_256;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > OFM_bound_fu_161_p2;
    sc_signal< sc_lv<32> > OFM_bound_reg_261;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > tmp_132_fu_166_p2;
    sc_signal< sc_lv<32> > tmp_132_reg_267;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<1> > exitcond1_fu_171_p2;
    sc_signal< sc_lv<32> > i_18_fu_176_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<1> > tmp_last_fu_182_p2;
    sc_signal< sc_lv<1> > tmp_last_reg_281;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state13;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state20;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< bool > ap_block_state16;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_pp0_stage0;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<18> ap_ST_fsm_state19;
    static const sc_lv<18> ap_ST_fsm_pp1_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_11;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_D;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state13_pp0_stage0_iter0();
    void thread_ap_block_state14_io();
    void thread_ap_block_state14_pp0_stage0_iter1();
    void thread_ap_block_state15_io();
    void thread_ap_block_state15_pp0_stage0_iter2();
    void thread_ap_block_state16();
    void thread_ap_block_state20_pp1_stage0_iter0();
    void thread_ap_block_state21_io();
    void thread_ap_block_state21_pp1_stage0_iter1();
    void thread_ap_block_state22_io();
    void thread_ap_block_state22_pp1_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state13();
    void thread_ap_condition_pp1_exit_iter0_state20();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_ready();
    void thread_exitcond1_fu_171_p2();
    void thread_exitcond_fu_141_p2();
    void thread_i_18_fu_176_p2();
    void thread_i_2_fu_146_p2();
    void thread_in_stream_V_V_blk_n();
    void thread_in_stream_V_V_read();
    void thread_out_stream_TDATA();
    void thread_out_stream_TDATA_blk_n();
    void thread_out_stream_TLAST();
    void thread_out_stream_TVALID();
    void thread_out_stream_V_data_V_1_ack_in();
    void thread_out_stream_V_data_V_1_ack_out();
    void thread_out_stream_V_data_V_1_data_out();
    void thread_out_stream_V_data_V_1_load_A();
    void thread_out_stream_V_data_V_1_load_B();
    void thread_out_stream_V_data_V_1_sel();
    void thread_out_stream_V_data_V_1_state_cmp_full();
    void thread_out_stream_V_data_V_1_vld_in();
    void thread_out_stream_V_data_V_1_vld_out();
    void thread_out_stream_V_last_1_ack_in();
    void thread_out_stream_V_last_1_ack_out();
    void thread_out_stream_V_last_1_data_in();
    void thread_out_stream_V_last_1_data_out();
    void thread_out_stream_V_last_1_load_A();
    void thread_out_stream_V_last_1_load_B();
    void thread_out_stream_V_last_1_sel();
    void thread_out_stream_V_last_1_state_cmp_full();
    void thread_out_stream_V_last_1_vld_in();
    void thread_out_stream_V_last_1_vld_out();
    void thread_tmp_132_fu_166_p2();
    void thread_tmp_133_fu_136_p2();
    void thread_tmp_last_1_fu_152_p2();
    void thread_tmp_last_fu_182_p2();
    void thread_tmp_s_fu_112_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
