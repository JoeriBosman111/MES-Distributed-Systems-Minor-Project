/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS_private.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template_DS'.
 *
 * Model version                  : 10.9
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue May 30 20:20:17 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_Template_DS_private_h_
#define RTW_HEADER_HANcoder_E407_TTA_Template_DS_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "HANcoder_E407_TTA_Template_DS_types.h"
#include "HANcoder_E407_TTA_Template_DS.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern real_T rt_modd(real_T u0, real_T u1);
extern real_T rt_roundd(real_T u);
void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void CAN1Send(const msg_buffer_type *rtd_Msg_Tx_CAN1, boolean_T
                     *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D13, const
                     uint32_T *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1,
                     rtB_CAN1Send *localB, rtDW_CAN1Send *localDW);
extern void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
  uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T rtu_In6, uint8_T
  rtu_In7, uint8_T rtu_In8, rtB_EnabledSubsystem *localB);
extern void CAN1Recieve_Init(void);
extern void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve
  *localDW);
extern void CAN1Recieve(const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN1, const uint32_T *rtd_RxID_CAN1, uint8_T
  *rtd_Rx_State_CAN1, boolean_T *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D12,
  rtB_CAN1Recieve *localB, const rtC_CAN1Recieve *localC, rtDW_CAN1Recieve
  *localDW);
extern void CAN2Recieve_Init(void);
extern void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve
  *localDW);
extern void CAN2Recieve(const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_CAN2, uint16_T *rtd_Msg_Rx_Ticks_CAN2, boolean_T
  *rtd_New_Msg_Ready_CAN2, const uint32_T *rtd_RxID_CAN2, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D8,
  rtB_CAN2Recieve *localB, const rtC_CAN2Recieve *localC, rtDW_CAN2Recieve
  *localDW);
extern void CAN2Send(const msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
                     *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D9, const
                     uint32_T *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2,
                     rtB_CAN2Send *localB, rtDW_CAN2Send *localDW);
extern void MeasureEXecutiontime_Init(void);
extern void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW);
extern void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW);
extern void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB);
extern void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB);
extern void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW);
extern void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_d, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_new_msg_Rx_l, rtB_Receptionsubstasks
  *localB, const rtC_Receptionsubstasks *localC, rtDW_Receptionsubstasks
  *localDW);
extern void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB);
extern void Transmissionsubtasks_Init(rtB_Transmissionsubtasks *localB, const
  rtC_Transmissionsubtasks *localC);
extern void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW);
extern void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  const real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1,
  uint32_T *rtd_TxID_CAN2, const real_T *rtd_Tx_msg_count_CAN1, const real_T
  *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW);
extern void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW);
extern void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_m, uint8_T
  rtu_ValueDomainMsg_f, uint8_T rtu_ValueDomainMsg_fd, uint8_T
  rtu_ValueDomainMsg_fx, uint8_T rtu_ValueDomainMsg_ka, const real_T
  *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1,
  const real_T *rtd_Tx_msg_count_CAN1, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN1 *localB, const rtC_CheckmsgtransmissionCAN1
  *localC, rtDW_CheckmsgtransmissionCAN1 *localDW);
extern void CheckmsgtransmissionC_j_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW);
extern void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_h, uint8_T rtu_ValueDomainMsg_m, uint8_T
  rtu_ValueDomainMsg_mt, uint8_T rtu_ValueDomainMsg_l, uint8_T
  rtu_ValueDomainMsg_hp, uint8_T rtu_ValueDomainMsg_l5, const real_T
  *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2,
  const real_T *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN2 *localB, const rtC_CheckmsgtransmissionCAN2
  *localC, rtDW_CheckmsgtransmissionCAN2 *localDW);
extern void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW);
extern void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  const real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, const uint8_T
  *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, const real_T *
  rtd_Tx_msg_count_CAN1, const real_T *rtd_Tx_msg_count_CAN2, const uint8_T
  *rtd_basic_cycle_count, rtB_Transmissionsubtasks_f *localB, const
  rtC_Transmissionsubtasks_d *localC, rtDW_Transmissionsubtasks_h *localDW);
extern void RESETBoardReturntoinitializatio(boolean_T rtu_Enable, boolean_T
  *rtd_Initialization_flag, real_T *rtd_Master_ID, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, boolean_T
  *rtd_Reset_Board_n, real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1, uint32_T
  *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2,
  boolean_T *rtd_Toggle_Pin_A0, const rtC_RESETBoardReturntoinitializ *localC);
extern void BitShift(uint8_T rtu_u, rtB_BitShift *localB);
extern void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB);
extern void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB);
extern void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh
  *localB, rtDW_DemuxmessageCAN1andcheckco *localDW);
extern void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckcoh *localB, rtDW_DemuxmessageCAN1andcheckco
  *localDW);
extern void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k
  *localB, rtDW_DemuxmessageCAN1andcheck_o *localDW);
extern void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_k *localB, rtDW_DemuxmessageCAN1andcheck_o
  *localDW);
extern void ResetTxmsgcounter(boolean_T rtu_Enable, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2);
extern void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time,
  const real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks);
extern void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW);
extern void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG, boolean_T *rtd_new_msg_Rx_l, rtB_Process_Messages1
  *localB, rtDW_Process_Messages1 *localDW);
extern void Receptionsubstasks_b_Disable(rtB_Receptionsubstasks_l *localB,
  rtDW_Receptionsubstasks_p *localDW);
extern void Receptionsubstasks_i(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  real_T rtu_RX_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_f, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_g, rtB_Receptionsubstasks_l *localB, const
  rtC_Receptionsubstasks_m *localC, rtDW_Receptionsubstasks_p *localDW);
extern void CheckmsgtransmissionC_b_Disable(rtB_CheckmsgtransmissionCAN1_e
  *localB, rtDW_CheckmsgtransmissionCAN1_b *localDW);
extern void CheckmsgtransmissionCAN1_e(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T
  rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_f, uint8_T rtu_ValueDomainMsg_n,
  uint8_T rtu_ValueDomainMsg_o, uint8_T rtu_ValueDomainMsg_m, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_j, const real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, const real_T
  *rtd_Tx_msg_count_CAN1, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN1_e *localB, rtDW_CheckmsgtransmissionCAN1_b
  *localDW);
extern void CheckmsgtransmissionC_i_Disable(rtB_CheckmsgtransmissionCAN2_n
  *localB, rtDW_CheckmsgtransmissionCAN2_f *localDW);
extern void CheckmsgtransmissionCAN2_c(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T
  rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_b,
  uint8_T rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_p, uint8_T
  rtu_ValueDomainMsg_h, uint8_T rtu_ValueDomainMsg_g5, const real_T
  *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2,
  const real_T *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN2_n *localB, rtDW_CheckmsgtransmissionCAN2_f
  *localDW);
extern void COMMTaskSyncbc1_Init(rtB_COMMTaskSyncbc1 *localB, const
  rtC_COMMTaskSyncbc1 *localC);
extern void COMMTaskSyncbc1_Disable(rtB_COMMTaskSyncbc1 *localB,
  rtDW_COMMTaskSyncbc1 *localDW);
extern void COMMTaskSyncbc1(boolean_T rtu_Enable, real_T rtu_TimeMark, const
  real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_f, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, const real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1,
  uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, const
  real_T *rtd_Tx_msg_count_CAN1, const real_T *rtd_Tx_msg_count_CAN2, const
  uint8_T *rtd_basic_cycle_count, boolean_T *rtd_new_msg_Rx_g,
  rtB_COMMTaskSyncbc1 *localB, const rtC_COMMTaskSyncbc1 *localC,
  rtDW_COMMTaskSyncbc1 *localDW);
extern void DemuxmessageCAN1andch_j_Disable(rtB_DemuxmessageCAN1andcheckc_m
  *localB, rtDW_DemuxmessageCAN1andcheck_g *localDW);
extern void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  *rtd_msg_count_DEBUG, rtB_DemuxmessageCAN1andcheckc_m *localB,
  rtDW_DemuxmessageCAN1andcheck_g *localDW);
extern void DemuxmessageCAN1andch_d_Disable(rtB_DemuxmessageCAN1andcheckc_n
  *localB, rtDW_DemuxmessageCAN1andcheck_j *localDW);
extern void DemuxmessageCAN1andcheckcoher_a(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  *rtd_msg_count_DEBUG, rtB_DemuxmessageCAN1andcheckc_n *localB,
  rtDW_DemuxmessageCAN1andcheck_j *localDW);
extern void Desynccalculation(boolean_T rtu_Enable, real_T rtu_TM_COMM,
  boolean_T rtu_New_msg_CAN1, uint8_T rtu_msg_count_CAN1, uint8_T
  rtu_msg_count_CAN2, real_T *rtd_Desync_Ticks, const uint16_T
  *rtd_Msg_Rx_Ticks_CAN1, const uint16_T *rtd_Msg_Rx_Ticks_CAN2);
extern void MemberCounter(boolean_T rtu_Enable, real_T *rtd_Member1_ID, real_T
  *rtd_Member2_ID, real_T *rtd_Members_Nr);
extern void TTASystem_Init(rtB_TTASystem *localB, const rtC_TTASystem *localC,
  rtDW_TTASystem *localDW);
extern void TTASystem_Reset(rtDW_TTASystem *localDW);
extern void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW);
extern void TTASystem(const real_T *rtd_Board_ID, uint16_T *rtd_Local_Ticks,
                      real_T *rtd_Master_ID, msg_buffer_type *rtd_Msg_Rx_CAN1,
                      msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
                      *rtd_Msg_Rx_Ticks_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN2,
                      msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
                      *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1,
                      boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1,
                      uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1,
                      uint8_T *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0,
                      real_T *rtd_Toggle_Pin_D12, real_T *rtd_Toggle_Pin_D13,
                      real_T *rtd_Toggle_Pin_D8, real_T *rtd_Toggle_Pin_D9,
                      real_T *rtd_Trailer_ID, uint32_T *rtd_TxID_CAN1, uint32_T *
                      rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T
                      *rtd_Tx_msg_count_CAN2, rtB_TTASystem *localB, const
                      rtC_TTASystem *localC, rtDW_TTASystem *localDW);

#endif                 /* RTW_HEADER_HANcoder_E407_TTA_Template_DS_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
