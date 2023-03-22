// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->testbench__DOT__flat_row_i),64);
        bufp->chgQData(oldp+2,(vlSelf->testbench__DOT__flat_col_i),64);
        bufp->chgWData(oldp+4,(vlSelf->testbench__DOT__flat_correct_o),128);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+8,(vlSelf->testbench__DOT__timeout_o));
        bufp->chgIData(oldp+9,(vlSelf->testbench__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->testbench__DOT__row_i[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->testbench__DOT__row_i[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->testbench__DOT__col_i[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->testbench__DOT__col_i[1]),32);
        bufp->chgCData(oldp+14,(vlSelf->testbench__DOT__flush_i),2);
        bufp->chgCData(oldp+15,(vlSelf->testbench__DOT__row_valid_i),2);
        bufp->chgCData(oldp+16,(vlSelf->testbench__DOT__col_valid_i),2);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__correct_o
                                [0U][0U]),32);
        bufp->chgIData(oldp+18,(vlSelf->testbench__DOT__correct_o
                                [0U][1U]),32);
        bufp->chgIData(oldp+19,(vlSelf->testbench__DOT__correct_o
                                [1U][0U]),32);
        bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__correct_o
                                [1U][1U]),32);
        bufp->chgCData(oldp+21,(vlSelf->testbench__DOT__z_yumi_i),4);
        bufp->chgBit(oldp+22,(vlSelf->testbench__DOT__en_i));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+23,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [0U][0U]));
        bufp->chgBit(oldp+24,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [0U][1U]));
        bufp->chgBit(oldp+25,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [0U][2U]));
        bufp->chgBit(oldp+26,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [1U][0U]));
        bufp->chgBit(oldp+27,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [1U][1U]));
        bufp->chgBit(oldp+28,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [1U][2U]));
        bufp->chgBit(oldp+29,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [0U][0U]));
        bufp->chgBit(oldp+30,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [0U][1U]));
        bufp->chgBit(oldp+31,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [1U][0U]));
        bufp->chgBit(oldp+32,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [1U][1U]));
        bufp->chgBit(oldp+33,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [2U][0U]));
        bufp->chgBit(oldp+34,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [2U][1U]));
        bufp->chgBit(oldp+35,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [0U][1U]));
        bufp->chgBit(oldp+36,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [1U][0U]));
        bufp->chgBit(oldp+37,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [0U][2U]));
        bufp->chgBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [1U][1U]));
        bufp->chgBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [1U][1U]));
        bufp->chgBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [2U][0U]));
        bufp->chgBit(oldp+41,(vlSelf->testbench__DOT__dut__DOT__row_readys_w
                              [1U][2U]));
        bufp->chgBit(oldp+42,(vlSelf->testbench__DOT__dut__DOT__col_readys_w
                              [2U][1U]));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+43,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [0U][0U]));
        bufp->chgBit(oldp+44,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [0U][1U]));
        bufp->chgBit(oldp+45,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [0U][2U]));
        bufp->chgBit(oldp+46,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [1U][0U]));
        bufp->chgBit(oldp+47,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [1U][1U]));
        bufp->chgBit(oldp+48,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [1U][2U]));
        bufp->chgBit(oldp+49,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [0U][0U]));
        bufp->chgBit(oldp+50,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [0U][1U]));
        bufp->chgBit(oldp+51,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [1U][0U]));
        bufp->chgBit(oldp+52,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [1U][1U]));
        bufp->chgBit(oldp+53,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [2U][0U]));
        bufp->chgBit(oldp+54,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [2U][1U]));
        bufp->chgBit(oldp+55,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [0U][0U]));
        bufp->chgBit(oldp+56,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [0U][1U]));
        bufp->chgBit(oldp+57,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [0U][2U]));
        bufp->chgBit(oldp+58,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [1U][0U]));
        bufp->chgBit(oldp+59,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [1U][1U]));
        bufp->chgBit(oldp+60,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [1U][2U]));
        bufp->chgBit(oldp+61,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [0U][0U]));
        bufp->chgBit(oldp+62,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [0U][0U]));
        bufp->chgBit(oldp+63,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [0U][0U]));
        bufp->chgBit(oldp+64,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [0U][1U]));
        bufp->chgBit(oldp+65,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [0U][1U]));
        bufp->chgBit(oldp+66,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [0U][1U]));
        bufp->chgBit(oldp+67,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [1U][0U]));
        bufp->chgBit(oldp+68,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [1U][0U]));
        bufp->chgBit(oldp+69,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [1U][0U]));
        bufp->chgBit(oldp+70,(vlSelf->testbench__DOT__dut__DOT__flushes_w
                              [1U][1U]));
        bufp->chgBit(oldp+71,(vlSelf->testbench__DOT__dut__DOT__row_valids_w
                              [1U][1U]));
        bufp->chgBit(oldp+72,(vlSelf->testbench__DOT__dut__DOT__col_valids_w
                              [1U][1U]));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+73,(vlSelf->testbench__DOT__z_valid_o),4);
        bufp->chgBit(oldp+74,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                              [0U][0U]));
        bufp->chgBit(oldp+75,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                              [0U][1U]));
        bufp->chgBit(oldp+76,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                              [1U][0U]));
        bufp->chgBit(oldp+77,(vlSelf->testbench__DOT__dut__DOT__z_valids_w
                              [1U][1U]));
        bufp->chgBit(oldp+78,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                              [0U][0U]));
        bufp->chgBit(oldp+79,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                              [0U][1U]));
        bufp->chgBit(oldp+80,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                              [1U][0U]));
        bufp->chgBit(oldp+81,(vlSelf->testbench__DOT__dut__DOT__z_readys_w
                              [1U][1U]));
        bufp->chgCData(oldp+82,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_n),8);
        bufp->chgCData(oldp+83,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_n),8);
        bufp->chgCData(oldp+84,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_n),8);
        bufp->chgCData(oldp+85,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_n),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+86,(vlSelf->testbench__DOT__reset_i));
        bufp->chgBit(oldp+87,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgCData(oldp+88,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
        bufp->chgBit(oldp+89,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgBit(oldp+90,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+91,((0U != ((((vlSelf->testbench__DOT__flat_z_o[0U] 
                                         ^ vlSelf->testbench__DOT__flat_correct_o[0U]) 
                                        | (vlSelf->testbench__DOT__flat_z_o[1U] 
                                           ^ vlSelf->testbench__DOT__flat_correct_o[1U])) 
                                       | (vlSelf->testbench__DOT__flat_z_o[2U] 
                                          ^ vlSelf->testbench__DOT__flat_correct_o[2U])) 
                                      | (vlSelf->testbench__DOT__flat_z_o[3U] 
                                         ^ vlSelf->testbench__DOT__flat_correct_o[3U])))));
        bufp->chgCData(oldp+92,(vlSelf->testbench__DOT__row_ready_o),2);
        bufp->chgCData(oldp+93,(vlSelf->testbench__DOT__col_ready_o),2);
        bufp->chgIData(oldp+94,(vlSelf->testbench__DOT__z_o
                                [0U][0U]),32);
        bufp->chgIData(oldp+95,(vlSelf->testbench__DOT__z_o
                                [0U][1U]),32);
        bufp->chgIData(oldp+96,(vlSelf->testbench__DOT__z_o
                                [1U][0U]),32);
        bufp->chgIData(oldp+97,(vlSelf->testbench__DOT__z_o
                                [1U][1U]),32);
        bufp->chgWData(oldp+98,(vlSelf->testbench__DOT__flat_z_o),128);
        bufp->chgIData(oldp+102,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [0U][0U]),32);
        bufp->chgIData(oldp+103,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [0U][1U]),32);
        bufp->chgIData(oldp+104,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [0U][2U]),32);
        bufp->chgIData(oldp+105,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [1U][0U]),32);
        bufp->chgIData(oldp+106,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [1U][1U]),32);
        bufp->chgIData(oldp+107,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [1U][2U]),32);
        bufp->chgIData(oldp+108,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [0U][0U]),32);
        bufp->chgIData(oldp+109,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [0U][1U]),32);
        bufp->chgIData(oldp+110,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [1U][0U]),32);
        bufp->chgIData(oldp+111,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [1U][1U]),32);
        bufp->chgIData(oldp+112,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [2U][0U]),32);
        bufp->chgIData(oldp+113,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [2U][1U]),32);
        bufp->chgIData(oldp+114,(vlSelf->testbench__DOT__dut__DOT__z_w
                                 [0U][0U]),32);
        bufp->chgIData(oldp+115,(vlSelf->testbench__DOT__dut__DOT__z_w
                                 [0U][1U]),32);
        bufp->chgIData(oldp+116,(vlSelf->testbench__DOT__dut__DOT__z_w
                                 [1U][0U]),32);
        bufp->chgIData(oldp+117,(vlSelf->testbench__DOT__dut__DOT__z_w
                                 [1U][1U]),32);
        bufp->chgBit(oldp+118,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__flush_r));
        bufp->chgIData(oldp+119,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__accum_r),32);
        bufp->chgBit(oldp+120,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+121,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [0U][0U]),32);
        bufp->chgBit(oldp+122,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+123,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [0U][0U]),32);
        bufp->chgBit(oldp+124,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+125,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__a_r),32);
        bufp->chgBit(oldp+126,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+127,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__b_r),32);
        bufp->chgCData(oldp+128,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r),8);
        bufp->chgIData(oldp+129,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__product_r),32);
        bufp->chgBit(oldp+130,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__reset_flush_r));
        bufp->chgBit(oldp+131,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__flush_r));
        bufp->chgIData(oldp+132,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__accum_r),32);
        bufp->chgBit(oldp+133,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+134,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [0U][1U]),32);
        bufp->chgBit(oldp+135,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+136,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [0U][1U]),32);
        bufp->chgBit(oldp+137,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+138,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__a_r),32);
        bufp->chgBit(oldp+139,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+140,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__b_r),32);
        bufp->chgCData(oldp+141,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r),8);
        bufp->chgIData(oldp+142,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__product_r),32);
        bufp->chgBit(oldp+143,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__reset_flush_r));
        bufp->chgBit(oldp+144,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__flush_r));
        bufp->chgIData(oldp+145,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__accum_r),32);
        bufp->chgBit(oldp+146,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+147,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [1U][0U]),32);
        bufp->chgBit(oldp+148,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+149,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [1U][0U]),32);
        bufp->chgBit(oldp+150,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+151,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__a_r),32);
        bufp->chgBit(oldp+152,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+153,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__b_r),32);
        bufp->chgCData(oldp+154,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__state_r),8);
        bufp->chgIData(oldp+155,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__product_r),32);
        bufp->chgBit(oldp+156,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__DOT__reset_flush_r));
        bufp->chgBit(oldp+157,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__flush_r));
        bufp->chgIData(oldp+158,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__accum_r),32);
        bufp->chgBit(oldp+159,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (4U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+160,(vlSelf->testbench__DOT__dut__DOT__rows_w
                                 [1U][1U]),32);
        bufp->chgBit(oldp+161,(((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+162,(vlSelf->testbench__DOT__dut__DOT__cols_w
                                 [1U][1U]),32);
        bufp->chgBit(oldp+163,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x40U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+164,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__a_r),32);
        bufp->chgBit(oldp+165,(((0x80U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)) 
                                | (0x20U == (IData)(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r)))));
        bufp->chgIData(oldp+166,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__b_r),32);
        bufp->chgCData(oldp+167,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__state_r),8);
        bufp->chgIData(oldp+168,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__product_r),32);
        bufp->chgBit(oldp+169,(vlSelf->testbench__DOT__dut__DOT__genblk6__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__DOT__reset_flush_r));
    }
    bufp->chgBit(oldp+170,(vlSelf->testbench__DOT__clk_i));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}