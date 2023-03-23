// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("testbench ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+172,"array_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+172,"array_height_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+173,"max_clks",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+170,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+106,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"en_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"error_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+6,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"row_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"col_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declQuad(c+11,"flat_row_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,"flush_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,"row_valid_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,"row_ready_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declQuad(c+15,"flat_col_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,"col_valid_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,"col_ready_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("correct_o");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+18,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+20,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z_o");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+114,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+116,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+118,"flat_z_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+1,"flat_correct_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBus(c+93,"z_valid_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,"z_yumi_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+174,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+170,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+172,"array_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+172,"array_height_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+106,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+13,"flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+11,"row_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+14,"row_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+112,"row_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+15,"col_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+17,"col_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+113,"col_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declArray(c+118,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBus(c+93,"z_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+22,"z_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("rows_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+43,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+46,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cols_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+49,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+51,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+53,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+122,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+124,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("row_valids_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+55,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+56,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+57,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+58,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+59,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+60,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("col_valids_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+61,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+62,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+63,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+64,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+65,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+66,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z_valids_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+94,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+95,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+96,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+97,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("row_readys_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+23,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+24,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+25,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+26,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+27,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+28,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("col_readys_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+29,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+30,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+31,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+32,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+33,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+34,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z_readys_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+98,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+99,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+100,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+101,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flushes_w");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+67,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+68,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+69,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+70,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+71,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+72,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk3[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk3[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk4 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk5 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk6 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk6[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("mac_inst ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+106,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+73,"flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+126,"flush_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+127,"accum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"accum_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+74,"a_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+128,"a_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+75,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"b_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+129,"b_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+77,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"a_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+35,"a_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+131,"a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"b_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+36,"b_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+133,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"READY_S", "A_HELD_S", "B_HELD_S", "MULT_S", 
                                "ACCUM_S", "A_YUMI_S", 
                                "B_YUMI_S", "DONE_S"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000", "10000", "100000", 
                                "1000000", "10000000"};
        tracep->declDTypeEnum(1, "mac.state_e", 8, 8, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+134,"state_r",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,"state_n",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,"a_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,"b_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,"accum_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,"product_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,"flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+136,"reset_flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("mac_inst ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+106,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+78,"flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+137,"flush_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+138,"accum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"accum_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+79,"a_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+139,"a_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+80,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"b_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+140,"b_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+82,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"a_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+37,"a_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+142,"a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"b_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+38,"b_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+144,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"state_r",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,"state_n",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,"a_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,"b_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,"accum_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,"product_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,"flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+147,"reset_flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk6[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("mac_inst ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+106,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+83,"flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+148,"flush_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+149,"accum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"accum_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+84,"a_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+150,"a_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+85,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"b_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+151,"b_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+87,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+152,"a_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+39,"a_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+153,"a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"b_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+40,"b_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+155,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"state_r",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,"state_n",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,"a_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,"b_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,"accum_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,"product_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,"flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+158,"reset_flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("mac_inst ");
    tracep->declBus(c+171,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+106,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+88,"flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+159,"flush_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+160,"accum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"accum_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+89,"a_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+161,"a_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+90,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"b_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+162,"b_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+92,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"a_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+41,"a_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+164,"a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+165,"b_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+42,"b_yumi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+166,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+167,"state_r",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,"state_n",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,"a_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,"b_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,"accum_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"product_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,"flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+169,"reset_flush_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk3[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk3[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk4 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk4[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk4[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+175,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+175,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+174,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+106,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+107,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+108,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 3,0);
    tracep->declBus(c+109,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+110,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+109,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtestbench___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->testbench__DOT__flat_correct_o),128);
    bufp->fullBit(oldp+5,(vlSelf->testbench__DOT__en_i));
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->testbench__DOT__row_i[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->testbench__DOT__row_i[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->testbench__DOT__col_i[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->testbench__DOT__col_i[1]),32);
    bufp->fullQData(oldp+11,(vlSelf->testbench__DOT__flat_row_i),64);
    bufp->fullCData(oldp+13,(vlSelf->testbench__DOT__flush_i),2);
    bufp->fullCData(oldp+14,(vlSelf->testbench__DOT__row_valid_i),2);
    bufp->fullQData(oldp+15,(vlSelf->testbench__DOT__flat_col_i),64);
    bufp->fullCData(oldp+17,(vlSelf->testbench__DOT__col_valid_i),2);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__correct_o
                             [0U][0U]),32);
    bufp->fullIData(oldp+19,(vlSelf->testbench__DOT__correct_o
                             [0U][1U]),32);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__correct_o
                             [1U][0U]),32);
    bufp->fullIData(oldp+21,(vlSelf->testbench__DOT__correct_o
                             [1U][1U]),32);
    bufp->fullCData(oldp+22,(vlSelf->testbench__DOT__z_yumi_i),4);
    bufp->fullBit(oldp+23,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [0U][0U]));
    bufp->fullBit(oldp+24,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [0U][1U]));
    bufp->fullBit(oldp+25,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [0U][2U]));
    bufp->fullBit(oldp+26,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [1U][0U]));
    bufp->fullBit(oldp+27,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [1U][1U]));
    bufp->fullBit(oldp+28,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [1U][2U]));
    bufp->fullBit(oldp+29,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [0U][0U]));
    bufp->fullBit(oldp+30,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [0U][1U]));
    bufp->fullBit(oldp+31,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [1U][0U]));
    bufp->fullBit(oldp+32,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [1U][1U]));
    bufp->fullBit(oldp+33,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [2U][0U]));
    bufp->fullBit(oldp+34,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [2U][1U]));
    bufp->fullBit(oldp+35,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [0U][1U]));
    bufp->fullBit(oldp+36,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [1U][0U]));
    bufp->fullBit(oldp+37,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [0U][2U]));
    bufp->fullBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [1U][1U]));
    bufp->fullBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [1U][1U]));
    bufp->fullBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [2U][0U]));
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                           [1U][2U]));
    bufp->fullBit(oldp+42,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                           [2U][1U]));
    bufp->fullIData(oldp+43,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [0U][0U]),32);
    bufp->fullIData(oldp+44,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [0U][1U]),32);
    bufp->fullIData(oldp+45,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [0U][2U]),32);
    bufp->fullIData(oldp+46,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [1U][0U]),32);
    bufp->fullIData(oldp+47,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [1U][1U]),32);
    bufp->fullIData(oldp+48,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [1U][2U]),32);
    bufp->fullIData(oldp+49,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [0U][0U]),32);
    bufp->fullIData(oldp+50,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [0U][1U]),32);
    bufp->fullIData(oldp+51,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [1U][0U]),32);
    bufp->fullIData(oldp+52,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [1U][1U]),32);
    bufp->fullIData(oldp+53,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [2U][0U]),32);
    bufp->fullIData(oldp+54,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [2U][1U]),32);
    bufp->fullBit(oldp+55,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [0U][0U]));
    bufp->fullBit(oldp+56,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [0U][1U]));
    bufp->fullBit(oldp+57,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [0U][2U]));
    bufp->fullBit(oldp+58,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [1U][0U]));
    bufp->fullBit(oldp+59,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [1U][1U]));
    bufp->fullBit(oldp+60,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [1U][2U]));
    bufp->fullBit(oldp+61,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [0U][0U]));
    bufp->fullBit(oldp+62,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [0U][1U]));
    bufp->fullBit(oldp+63,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [1U][0U]));
    bufp->fullBit(oldp+64,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [1U][1U]));
    bufp->fullBit(oldp+65,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [2U][0U]));
    bufp->fullBit(oldp+66,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [2U][1U]));
    bufp->fullBit(oldp+67,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [0U][0U]));
    bufp->fullBit(oldp+68,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [0U][1U]));
    bufp->fullBit(oldp+69,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [0U][2U]));
    bufp->fullBit(oldp+70,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [1U][0U]));
    bufp->fullBit(oldp+71,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [1U][1U]));
    bufp->fullBit(oldp+72,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [1U][2U]));
    bufp->fullBit(oldp+73,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [0U][0U]));
    bufp->fullBit(oldp+74,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [0U][0U]));
    bufp->fullIData(oldp+75,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [0U][0U]),32);
    bufp->fullBit(oldp+76,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [0U][0U]));
    bufp->fullIData(oldp+77,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [0U][0U]),32);
    bufp->fullBit(oldp+78,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [0U][1U]));
    bufp->fullBit(oldp+79,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [0U][1U]));
    bufp->fullIData(oldp+80,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [0U][1U]),32);
    bufp->fullBit(oldp+81,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [0U][1U]));
    bufp->fullIData(oldp+82,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [0U][1U]),32);
    bufp->fullBit(oldp+83,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [1U][0U]));
    bufp->fullBit(oldp+84,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [1U][0U]));
    bufp->fullIData(oldp+85,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [1U][0U]),32);
    bufp->fullBit(oldp+86,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [1U][0U]));
    bufp->fullIData(oldp+87,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [1U][0U]),32);
    bufp->fullBit(oldp+88,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                           [1U][1U]));
    bufp->fullBit(oldp+89,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                           [1U][1U]));
    bufp->fullIData(oldp+90,(vlSelf->testbench__DOT__dut__DOT__rows_w
                             [1U][1U]),32);
    bufp->fullBit(oldp+91,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                           [1U][1U]));
    bufp->fullIData(oldp+92,(vlSelf->testbench__DOT__dut__DOT__cols_w
                             [1U][1U]),32);
    bufp->fullCData(oldp+93,(vlSelf->testbench__DOT__z_valid_o),4);
    bufp->fullBit(oldp+94,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                           [0U][0U]));
    bufp->fullBit(oldp+95,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                           [0U][1U]));
    bufp->fullBit(oldp+96,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                           [1U][0U]));
    bufp->fullBit(oldp+97,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                           [1U][1U]));
    bufp->fullBit(oldp+98,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                           [0U][0U]));
    bufp->fullBit(oldp+99,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                           [0U][1U]));
    bufp->fullBit(oldp+100,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                            [1U][0U]));
    bufp->fullBit(oldp+101,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                            [1U][1U]));
    bufp->fullCData(oldp+102,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_n),8);
    bufp->fullCData(oldp+103,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_n),8);
    bufp->fullCData(oldp+104,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_n),8);
    bufp->fullCData(oldp+105,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_n),8);
    bufp->fullBit(oldp+106,(vlSelf->testbench__DOT__reset_i));
    bufp->fullBit(oldp+107,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullCData(oldp+108,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
    bufp->fullBit(oldp+109,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullBit(oldp+110,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullBit(oldp+111,((0U != ((((vlSelf->testbench__DOT__flat_z_o[0U] 
                                       ^ vlSelf->testbench__DOT__flat_correct_o[0U]) 
                                      | (vlSelf->testbench__DOT__flat_z_o[1U] 
                                         ^ vlSelf->testbench__DOT__flat_correct_o[1U])) 
                                     | (vlSelf->testbench__DOT__flat_z_o[2U] 
                                        ^ vlSelf->testbench__DOT__flat_correct_o[2U])) 
                                    | (vlSelf->testbench__DOT__flat_z_o[3U] 
                                       ^ vlSelf->testbench__DOT__flat_correct_o[3U])))));
    bufp->fullCData(oldp+112,(vlSelf->testbench__DOT__row_ready_o),2);
    bufp->fullCData(oldp+113,(vlSelf->testbench__DOT__col_ready_o),2);
    bufp->fullIData(oldp+114,(vlSelf->testbench__DOT__z_o
                              [0U][0U]),32);
    bufp->fullIData(oldp+115,(vlSelf->testbench__DOT__z_o
                              [0U][1U]),32);
    bufp->fullIData(oldp+116,(vlSelf->testbench__DOT__z_o
                              [1U][0U]),32);
    bufp->fullIData(oldp+117,(vlSelf->testbench__DOT__z_o
                              [1U][1U]),32);
    bufp->fullWData(oldp+118,(vlSelf->testbench__DOT__flat_z_o),128);
    bufp->fullIData(oldp+122,(vlSelf->testbench__DOT__dut__DOT__z_w
                              [0U][0U]),32);
    bufp->fullIData(oldp+123,(vlSelf->testbench__DOT__dut__DOT__z_w
                              [0U][1U]),32);
    bufp->fullIData(oldp+124,(vlSelf->testbench__DOT__dut__DOT__z_w
                              [1U][0U]),32);
    bufp->fullIData(oldp+125,(vlSelf->testbench__DOT__dut__DOT__z_w
                              [1U][1U]),32);
    bufp->fullBit(oldp+126,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__flush_r));
    bufp->fullIData(oldp+127,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__accum_r),32);
    bufp->fullBit(oldp+128,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+129,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+130,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+131,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__a_r),32);
    bufp->fullBit(oldp+132,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+133,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__b_r),32);
    bufp->fullCData(oldp+134,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r),8);
    bufp->fullIData(oldp+135,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__product_r),32);
    bufp->fullBit(oldp+136,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__reset_flush_r));
    bufp->fullBit(oldp+137,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__flush_r));
    bufp->fullIData(oldp+138,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__accum_r),32);
    bufp->fullBit(oldp+139,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+140,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+141,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+142,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__a_r),32);
    bufp->fullBit(oldp+143,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+144,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__b_r),32);
    bufp->fullCData(oldp+145,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r),8);
    bufp->fullIData(oldp+146,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__product_r),32);
    bufp->fullBit(oldp+147,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__reset_flush_r));
    bufp->fullBit(oldp+148,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__flush_r));
    bufp->fullIData(oldp+149,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__accum_r),32);
    bufp->fullBit(oldp+150,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+151,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+152,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+153,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__a_r),32);
    bufp->fullBit(oldp+154,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+155,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__b_r),32);
    bufp->fullCData(oldp+156,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r),8);
    bufp->fullIData(oldp+157,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__product_r),32);
    bufp->fullBit(oldp+158,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__reset_flush_r));
    bufp->fullBit(oldp+159,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__flush_r));
    bufp->fullIData(oldp+160,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__accum_r),32);
    bufp->fullBit(oldp+161,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+162,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullBit(oldp+163,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+164,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__a_r),32);
    bufp->fullBit(oldp+165,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                             | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
    bufp->fullIData(oldp+166,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__b_r),32);
    bufp->fullCData(oldp+167,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r),8);
    bufp->fullIData(oldp+168,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__product_r),32);
    bufp->fullBit(oldp+169,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__reset_flush_r));
    bufp->fullBit(oldp+170,(vlSelf->testbench__DOT__clk_i));
    bufp->fullIData(oldp+171,(0x20U),32);
    bufp->fullIData(oldp+172,(2U),32);
    bufp->fullIData(oldp+173,(8U),32);
    bufp->fullIData(oldp+174,(0xaU),32);
    bufp->fullIData(oldp+175,(1U),32);
}
