/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template_DS'.
 *
 * Model version                  : 8.25
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Tue May 23 20:34:40 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Template_DS.h"
#include "HANcoder_E407_TTA_Template_DS_types.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_Template_DS_private.h"
#include <math.h>
#include <float.h>
#include <string.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);
const msg_buffer_type HANcoder_E407_TTA_Template_DS_rtZmsg_buffer_type = {
  0U,                                  /* Buffer_1 */
  0U,                                  /* Buffer_2 */
  0U,                                  /* Buffer_3 */
  0U,                                  /* Buffer_4 */
  0U,                                  /* Buffer_5 */
  0U,                                  /* Buffer_6 */
  0U,                                  /* Buffer_7 */
  0U                                   /* Buffer_8 */
};                                     /* msg_buffer_type ground */

/* Exported block signals */
real_T simulation_time;                /* '<S8>/Digital Clock' */
real_T script_run_s;                   /* '<S8>/Constant' */
real_T Board_ID_s;                     /* '<S22>/Add' */
uint32_T SI_FreeHeap;                  /* '<S15>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S16>/Level-2 M-file S-Function' */
uint16_T local_ticks_interrupt;        /* '<S24>/Switch' */
uint8_T SI_CPUload;                    /* '<S14>/Level-2 M-file S-Function' */
real_T Master_ID_s;                    /* '<S171>/Data Store Read' */
real_T Role_ID_s;                      /* '<S171>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S171>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S171>/Data Store Read12' */
real_T votes_Board_1_DEBUG;            /* '<S171>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S171>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S171>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S171>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S171>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S171>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S175>/Data Store Read24' */
real_T Desync_Sync_bc2_vem_s;          /* '<S730>/Saturation' */
real_T Desync_Sync_bc1_s;              /* '<S599>/Saturation' */
real_T Desync_Sync_bc1_vem_s;          /* '<S508>/Saturation' */
real_T FCU_Fault_Node;                 /* '<S401>/Data Store Read3' */
real_T FCU_Master;                     /* '<S401>/Data Store Read4' */
real_T Desync_Sync_bc0_s;              /* '<S278>/Saturation' */
real_T TM1_timeout_counter_s;          /* '<S266>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S267>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S268>/Switch' */
real_T Trailer_ID_s;                   /* '<S135>/Data Store Read9' */
uint16_T Trailer1Articulation_RX_s;    /* '<S727>/BitConcat2' */
uint16_T Trailer2Articulation_RX_s;    /* '<S697>/BitConcat2' */
uint16_T Trailer2_Articulation_s;      /* '<S660>/Data Store Read' */
uint16_T Trailer1_Articulation_s;      /* '<S640>/Data Store Read' */
uint16_T PotValue3_RX_s;               /* '<S567>/BitConcat2' */
uint16_T PotValue2_RX_s;               /* '<S537>/BitConcat2' */
uint16_T PotValue1_RX_s;               /* '<S505>/BitConcat2' */
uint16_T Pot_Final;                    /* '<S401>/Data Store Read5' */
uint16_T PotValue3_s;                  /* '<S454>/Data Store Read' */
uint16_T PotValue2_s;                  /* '<S434>/Data Store Read' */
uint16_T PotValue1_s;                  /* '<S414>/Data Store Read' */
uint16_T Rx_init_LT;                   /* '<S152>/Cast' */
uint8_T Vote_s;                        /* '<S306>/Cast' */
uint8_T Rx_init_id;                    /* '<S156>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S155>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S154>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S124>/Switch' */
boolean_T BC1_sync_processed_s;        /* '<S171>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S171>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S171>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S171>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S171>/Data Store Read9' */
boolean_T reset_s;                     /* '<S182>/Data Store Read' */
real_T Tx_temporal_msg_CAN2;           /* '<S20>/Cast To Double' */
uint32_T TxCAN2_counter_s;             /* '<S20>/Sum1' */
uint32_T TxID_CAN2_s;                  /* '<S20>/Data Store Read3' */
real_T Rx_temporal_msg_CAN2;           /* '<S74>/Cast To Double' */
uint32_T RxCAN2_counter_s;             /* '<S19>/Sum1' */
uint32_T RxID_CAN2_s;                  /* '<S19>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN2;            /* '<S74>/Local_Time' */
real_T Rx_temporal_msg_CAN1;           /* '<S31>/Cast To Double' */
uint32_T RxCAN1_counter_s;             /* '<S17>/Sum1' */
uint32_T RxID_CAN1_s;                  /* '<S17>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN1;            /* '<S31>/Local_Time' */
real_T Tx_temporal_msg_CAN1;           /* '<S18>/Cast To Double' */
uint32_T TxCAN1_counter_s;             /* '<S18>/Sum1' */
uint32_T TxID_CAN1_s;                  /* '<S18>/Data Store Read3' */

/* Exported block parameters */
real_T COMM_Phase1 = 10.0;             /* Variable: COMM_Phase1
                                        * Referenced by:
                                        *   '<S136>/Constant2'
                                        *   '<S152>/Constant1'
                                        *   '<S196>/Constant24'
                                        *   '<S196>/Constant27'
                                        *   '<S214>/Constant24'
                                        *   '<S214>/Constant27'
                                        *   '<S232>/Constant24'
                                        *   '<S232>/Constant27'
                                        *   '<S250>/Constant24'
                                        *   '<S250>/Constant27'
                                        *   '<S278>/Constant'
                                        *   '<S412>/Constant24'
                                        *   '<S412>/Constant27'
                                        *   '<S432>/Constant24'
                                        *   '<S432>/Constant27'
                                        *   '<S452>/Constant24'
                                        *   '<S452>/Constant27'
                                        *   '<S472>/Constant24'
                                        *   '<S472>/Constant27'
                                        *   '<S508>/Constant'
                                        *   '<S540>/Constant'
                                        *   '<S570>/Constant'
                                        *   '<S599>/Constant'
                                        *   '<S638>/Constant24'
                                        *   '<S638>/Constant27'
                                        *   '<S658>/Constant24'
                                        *   '<S658>/Constant27'
                                        *   '<S678>/Constant24'
                                        *   '<S678>/Constant27'
                                        *   '<S700>/Constant'
                                        *   '<S730>/Constant'
                                        *   '<S759>/Constant'
                                        */
real_T COMM_Phase2 = 10.0;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S136>/Constant3'
                                        *   '<S152>/Constant2'
                                        *   '<S197>/Constant24'
                                        *   '<S197>/Constant27'
                                        *   '<S215>/Constant24'
                                        *   '<S215>/Constant27'
                                        *   '<S233>/Constant24'
                                        *   '<S233>/Constant27'
                                        *   '<S251>/Constant24'
                                        *   '<S251>/Constant27'
                                        *   '<S278>/Constant1'
                                        *   '<S413>/Constant24'
                                        *   '<S413>/Constant27'
                                        *   '<S433>/Constant24'
                                        *   '<S433>/Constant27'
                                        *   '<S453>/Constant24'
                                        *   '<S453>/Constant27'
                                        *   '<S473>/Constant24'
                                        *   '<S473>/Constant27'
                                        *   '<S508>/Constant1'
                                        *   '<S540>/Constant1'
                                        *   '<S570>/Constant1'
                                        *   '<S599>/Constant1'
                                        *   '<S639>/Constant24'
                                        *   '<S639>/Constant27'
                                        *   '<S659>/Constant24'
                                        *   '<S659>/Constant27'
                                        *   '<S679>/Constant24'
                                        *   '<S679>/Constant27'
                                        *   '<S700>/Constant1'
                                        *   '<S730>/Constant1'
                                        *   '<S759>/Constant1'
                                        */
real_T COMM_Phase_init1 = 0.0;         /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S136>/Constant6'
                                        *   '<S196>/Constant'
                                        *   '<S214>/Constant'
                                        *   '<S232>/Constant'
                                        *   '<S250>/Constant'
                                        *   '<S412>/Constant'
                                        *   '<S432>/Constant'
                                        *   '<S452>/Constant'
                                        *   '<S472>/Constant'
                                        *   '<S638>/Constant'
                                        *   '<S658>/Constant'
                                        *   '<S678>/Constant'
                                        */
real_T COMM_Phase_init2 = 5.0;         /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S136>/Constant7'
                                        *   '<S197>/Constant'
                                        *   '<S215>/Constant'
                                        *   '<S233>/Constant'
                                        *   '<S251>/Constant'
                                        *   '<S413>/Constant'
                                        *   '<S433>/Constant'
                                        *   '<S453>/Constant'
                                        *   '<S473>/Constant'
                                        *   '<S639>/Constant'
                                        *   '<S659>/Constant'
                                        *   '<S679>/Constant'
                                        */
real_T script_run = 0.0;               /* Variable: script_run
                                        * Referenced by: '<S8>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_22U;
static tCanDataTypes canRxData_0_44U;
static tCanDataTypes canRxData_0_23U;
static tCanDataTypes canRxData_0_31U;
static tCanDataTypes canRxData_0_32U;
static tCanDataTypes canRxData_0_46U;
static tCanDataTypes canRxData_0_24U;
static tCanDataTypes canRxData_0_48U;
static tCanDataTypes canRxData_0_1U;
static tCanDataTypes canRxData_0_11U;
static tCanDataTypes canRxData_0_12U;
static tCanDataTypes canRxData_0_13U;
static tCanDataTypes canRxData_1_22U;
static tCanDataTypes canRxData_1_44U;
static tCanDataTypes canRxData_1_23U;
static tCanDataTypes canRxData_1_31U;
static tCanDataTypes canRxData_1_32U;
static tCanDataTypes canRxData_1_46U;
static tCanDataTypes canRxData_1_24U;
static tCanDataTypes canRxData_1_48U;
static tCanDataTypes canRxData_1_1U;
static tCanDataTypes canRxData_1_11U;
static tCanDataTypes canRxData_1_12U;
static tCanDataTypes canRxData_1_13U;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S8>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* Switch: '<S24>/Switch' */
    if (rtB.Logic[0]) {
      /* Switch: '<S24>/Switch' incorporates:
       *  Constant: '<S24>/Constant2'
       *  DataStoreRead: '<S24>/Data Store Read'
       *  Sum: '<S24>/Sum1'
       */
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      /* Switch: '<S24>/Switch' incorporates:
       *  DataStoreRead: '<S24>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S24>/Switch' */

    /* DataStoreWrite: '<S24>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S24>/Chart' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    if (rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_TTA_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_TTA_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      /* Transition: '<S119>:10' */
      /* Entry 'Send_Trigger': '<S119>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S8>/TTA System' */
        /* Event: '<S119>:3' */
        TTASystem(&rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                  &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                  &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                  &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                  &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                  &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                  &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                  &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                  &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                  &rtDWork.Trailer_ID, &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                  &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2,
                  &rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c);

        /* End of Outputs for SubSystem: '<S8>/TTA System' */
      }

      /* During 'Send_Trigger': '<S119>:9' */
    } else if (rtB.Logic[0]) {
      /* Outputs for Function Call SubSystem: '<S8>/TTA System' */
      /* Event: '<S119>:3' */
      TTASystem(&rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                &rtDWork.Trailer_ID, &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2,
                &rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c);

      /* End of Outputs for SubSystem: '<S8>/TTA System' */
    }

    /* End of Chart: '<S24>/Chart' */
    /* M-S-Function: '<S120>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S24>/Sum' incorporates:
     *  Constant: '<S24>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)100U));

    /* Update for M-S-Function: '<S121>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S24>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/* Output and update for function-call system: '<S8>/CAN1 Send' */
void CAN1Send(const msg_buffer_type *rtd_Msg_Tx_CAN1, boolean_T
              *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D13, const uint32_T
              *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1, rtB_CAN1Send
              *localB, rtDW_CAN1Send *localDW)
{
  /* DataStoreWrite: '<S18>/Data Store Write2' incorporates:
   *  Constant: '<S18>/Constant8'
   *  Sum: '<S18>/Plus'
   */
  *rtd_Tx_msg_count_CAN1 += 1.0;

  /* DataStoreWrite: '<S18>/Data Store Write1' incorporates:
   *  Constant: '<S18>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S18>/Sum1' incorporates:
   *  Constant: '<S18>/Constant3'
   *  DataStoreRead: '<S18>/Data Store Read'
   */
  TxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S18>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN1_counter_s;

  /* Outputs for Enabled SubSystem: '<S18>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant2'
   *  RelationalOperator: '<S18>/Equal'
   */
  if ((*rtd_TxID_CAN1 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S70>/Data Store Write2' incorporates:
     *  Constant: '<S70>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 1.0;
  }

  /* End of Logic: '<S18>/AND' */
  /* End of Outputs for SubSystem: '<S18>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S18>/Cast To Double' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  Tx_temporal_msg_CAN1 = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataStoreRead: '<S18>/Data Store Read3' */
  TxID_CAN1_s = *rtd_TxID_CAN1;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataTypeConversion: '<S18>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN1_s;

  /* DataTypeConversion: '<S18>/Data Type Conversion10' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN1->Buffer_8;

  /* DataTypeConversion: '<S18>/Data Type Conversion4' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN1->Buffer_2;

  /* DataTypeConversion: '<S18>/Data Type Conversion5' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN1->Buffer_3;

  /* DataTypeConversion: '<S18>/Data Type Conversion6' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN1->Buffer_4;

  /* DataTypeConversion: '<S18>/Data Type Conversion7' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN1->Buffer_5;

  /* DataTypeConversion: '<S18>/Data Type Conversion8' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN1->Buffer_6;

  /* DataTypeConversion: '<S18>/Data Type Conversion9' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read2'
   */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN1->Buffer_7;

  /* Update for M-S-Function: '<S69>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(0, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/*
 * Output and update for enable system:
 *    '<S44>/Enabled Subsystem'
 *    '<S46>/Enabled Subsystem'
 *    '<S48>/Enabled Subsystem'
 *    '<S50>/Enabled Subsystem'
 *    '<S52>/Enabled Subsystem'
 *    '<S54>/Enabled Subsystem'
 *    '<S56>/Enabled Subsystem'
 *    '<S58>/Enabled Subsystem'
 *    '<S60>/Enabled Subsystem'
 *    '<S62>/Enabled Subsystem'
 *    ...
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S44>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S45>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S45>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S45>/In3' */
    localB->In3 = rtu_In3;

    /* SignalConversion generated from: '<S45>/In4' */
    localB->In4 = rtu_In4;

    /* SignalConversion generated from: '<S45>/In5' */
    localB->In5 = rtu_In5;

    /* SignalConversion generated from: '<S45>/In6' */
    localB->In6 = rtu_In6;

    /* SignalConversion generated from: '<S45>/In7' */
    localB->In7 = rtu_In7;

    /* SignalConversion generated from: '<S45>/In8' */
    localB->In8 = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S44>/Enabled Subsystem' */
}

/* Disable for function-call system: '<S8>/CAN1 Recieve' */
void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S30>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S60>/S-Function' incorporates:
     *  Outport: '<S40>/CAN_new'
     */
    localB->SFunction_o1_o = 0;

    /* Disable for SignalConversion generated from: '<S61>/In1' incorporates:
     *  Outport: '<S40>/Out2'
     */
    localB->EnabledSubsystem_ez.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In2' incorporates:
     *  Outport: '<S40>/Out3'
     */
    localB->EnabledSubsystem_ez.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In3' incorporates:
     *  Outport: '<S40>/Out4'
     */
    localB->EnabledSubsystem_ez.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In4' incorporates:
     *  Outport: '<S40>/Out5'
     */
    localB->EnabledSubsystem_ez.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In5' incorporates:
     *  Outport: '<S40>/Out6'
     */
    localB->EnabledSubsystem_ez.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In6' incorporates:
     *  Outport: '<S40>/Out7'
     */
    localB->EnabledSubsystem_ez.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In7' incorporates:
     *  Outport: '<S40>/Out8'
     */
    localB->EnabledSubsystem_ez.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In8' incorporates:
     *  Outport: '<S40>/Out9'
     */
    localB->EnabledSubsystem_ez.In8 = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S62>/S-Function' incorporates:
     *  Outport: '<S41>/CAN_new'
     */
    localB->SFunction_o1_m = 0;

    /* Disable for SignalConversion generated from: '<S63>/In1' incorporates:
     *  Outport: '<S41>/Out2'
     */
    localB->EnabledSubsystem_i5.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In2' incorporates:
     *  Outport: '<S41>/Out3'
     */
    localB->EnabledSubsystem_i5.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In3' incorporates:
     *  Outport: '<S41>/Out4'
     */
    localB->EnabledSubsystem_i5.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In4' incorporates:
     *  Outport: '<S41>/Out5'
     */
    localB->EnabledSubsystem_i5.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In5' incorporates:
     *  Outport: '<S41>/Out6'
     */
    localB->EnabledSubsystem_i5.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In6' incorporates:
     *  Outport: '<S41>/Out7'
     */
    localB->EnabledSubsystem_i5.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In7' incorporates:
     *  Outport: '<S41>/Out8'
     */
    localB->EnabledSubsystem_i5.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In8' incorporates:
     *  Outport: '<S41>/Out9'
     */
    localB->EnabledSubsystem_i5.In8 = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S64>/S-Function' incorporates:
     *  Outport: '<S42>/CAN_new'
     */
    localB->SFunction_o1_j = 0;

    /* Disable for SignalConversion generated from: '<S65>/In1' incorporates:
     *  Outport: '<S42>/Out2'
     */
    localB->EnabledSubsystem_fv.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In2' incorporates:
     *  Outport: '<S42>/Out3'
     */
    localB->EnabledSubsystem_fv.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In3' incorporates:
     *  Outport: '<S42>/Out4'
     */
    localB->EnabledSubsystem_fv.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In4' incorporates:
     *  Outport: '<S42>/Out5'
     */
    localB->EnabledSubsystem_fv.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In5' incorporates:
     *  Outport: '<S42>/Out6'
     */
    localB->EnabledSubsystem_fv.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In6' incorporates:
     *  Outport: '<S42>/Out7'
     */
    localB->EnabledSubsystem_fv.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In7' incorporates:
     *  Outport: '<S42>/Out8'
     */
    localB->EnabledSubsystem_fv.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In8' incorporates:
     *  Outport: '<S42>/Out9'
     */
    localB->EnabledSubsystem_fv.In8 = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S66>/S-Function' incorporates:
     *  Outport: '<S43>/CAN_new'
     */
    localB->SFunction_o1 = 0;

    /* Disable for SignalConversion generated from: '<S67>/In1' incorporates:
     *  Outport: '<S43>/Out2'
     */
    localB->EnabledSubsystem_o1.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In2' incorporates:
     *  Outport: '<S43>/Out3'
     */
    localB->EnabledSubsystem_o1.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In3' incorporates:
     *  Outport: '<S43>/Out4'
     */
    localB->EnabledSubsystem_o1.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In4' incorporates:
     *  Outport: '<S43>/Out5'
     */
    localB->EnabledSubsystem_o1.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In5' incorporates:
     *  Outport: '<S43>/Out6'
     */
    localB->EnabledSubsystem_o1.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In6' incorporates:
     *  Outport: '<S43>/Out7'
     */
    localB->EnabledSubsystem_o1.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In7' incorporates:
     *  Outport: '<S43>/Out8'
     */
    localB->EnabledSubsystem_o1.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In8' incorporates:
     *  Outport: '<S43>/Out9'
     */
    localB->EnabledSubsystem_o1.In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue1_ID_CAN' */
  if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S44>/S-Function' incorporates:
     *  Outport: '<S32>/CAN_new'
     */
    localB->SFunction_o1_jc = 0;

    /* Disable for Outport: '<S32>/Out2' incorporates:
     *  SignalConversion generated from: '<S45>/In1'
     */
    localB->EnabledSubsystem_n.In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out3' incorporates:
     *  SignalConversion generated from: '<S45>/In2'
     */
    localB->EnabledSubsystem_n.In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out4' incorporates:
     *  SignalConversion generated from: '<S45>/In3'
     */
    localB->EnabledSubsystem_n.In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out5' incorporates:
     *  SignalConversion generated from: '<S45>/In4'
     */
    localB->EnabledSubsystem_n.In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out6' incorporates:
     *  SignalConversion generated from: '<S45>/In5'
     */
    localB->EnabledSubsystem_n.In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out7' incorporates:
     *  SignalConversion generated from: '<S45>/In6'
     */
    localB->EnabledSubsystem_n.In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out8' incorporates:
     *  SignalConversion generated from: '<S45>/In7'
     */
    localB->EnabledSubsystem_n.In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out9' incorporates:
     *  SignalConversion generated from: '<S45>/In8'
     */
    localB->EnabledSubsystem_n.In8 = ((uint8_T)0U);
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN' */
  if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S46>/S-Function' incorporates:
     *  Outport: '<S33>/CAN_new'
     */
    localB->SFunction_o1_kx = 0;

    /* Disable for SignalConversion generated from: '<S47>/In1' incorporates:
     *  Outport: '<S33>/Out2'
     */
    localB->EnabledSubsystem_e.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In2' incorporates:
     *  Outport: '<S33>/Out3'
     */
    localB->EnabledSubsystem_e.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In3' incorporates:
     *  Outport: '<S33>/Out4'
     */
    localB->EnabledSubsystem_e.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In4' incorporates:
     *  Outport: '<S33>/Out5'
     */
    localB->EnabledSubsystem_e.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In5' incorporates:
     *  Outport: '<S33>/Out6'
     */
    localB->EnabledSubsystem_e.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In6' incorporates:
     *  Outport: '<S33>/Out7'
     */
    localB->EnabledSubsystem_e.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In7' incorporates:
     *  Outport: '<S33>/Out8'
     */
    localB->EnabledSubsystem_e.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In8' incorporates:
     *  Outport: '<S33>/Out9'
     */
    localB->EnabledSubsystem_e.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN1' */
  if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S48>/S-Function' incorporates:
     *  Outport: '<S34>/CAN_new'
     */
    localB->SFunction_o1_ek = 0;

    /* Disable for SignalConversion generated from: '<S49>/In1' incorporates:
     *  Outport: '<S34>/Out2'
     */
    localB->EnabledSubsystem_i.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In2' incorporates:
     *  Outport: '<S34>/Out3'
     */
    localB->EnabledSubsystem_i.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In3' incorporates:
     *  Outport: '<S34>/Out4'
     */
    localB->EnabledSubsystem_i.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In4' incorporates:
     *  Outport: '<S34>/Out5'
     */
    localB->EnabledSubsystem_i.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In5' incorporates:
     *  Outport: '<S34>/Out6'
     */
    localB->EnabledSubsystem_i.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In6' incorporates:
     *  Outport: '<S34>/Out7'
     */
    localB->EnabledSubsystem_i.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In7' incorporates:
     *  Outport: '<S34>/Out8'
     */
    localB->EnabledSubsystem_i.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In8' incorporates:
     *  Outport: '<S34>/Out9'
     */
    localB->EnabledSubsystem_i.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN1' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN4' */
  if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S54>/S-Function' incorporates:
     *  Outport: '<S37>/CAN_new'
     */
    localB->SFunction_o1_b = 0;

    /* Disable for SignalConversion generated from: '<S55>/In1' incorporates:
     *  Outport: '<S37>/Out2'
     */
    localB->EnabledSubsystem_j.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In2' incorporates:
     *  Outport: '<S37>/Out3'
     */
    localB->EnabledSubsystem_j.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In3' incorporates:
     *  Outport: '<S37>/Out4'
     */
    localB->EnabledSubsystem_j.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In4' incorporates:
     *  Outport: '<S37>/Out5'
     */
    localB->EnabledSubsystem_j.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In5' incorporates:
     *  Outport: '<S37>/Out6'
     */
    localB->EnabledSubsystem_j.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In6' incorporates:
     *  Outport: '<S37>/Out7'
     */
    localB->EnabledSubsystem_j.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In7' incorporates:
     *  Outport: '<S37>/Out8'
     */
    localB->EnabledSubsystem_j.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In8' incorporates:
     *  Outport: '<S37>/Out9'
     */
    localB->EnabledSubsystem_j.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN4' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN5' */
  if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S56>/S-Function' incorporates:
     *  Outport: '<S38>/CAN_new'
     */
    localB->SFunction_o1_i = 0;

    /* Disable for SignalConversion generated from: '<S57>/In1' incorporates:
     *  Outport: '<S38>/Out2'
     */
    localB->EnabledSubsystem_o.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In2' incorporates:
     *  Outport: '<S38>/Out3'
     */
    localB->EnabledSubsystem_o.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In3' incorporates:
     *  Outport: '<S38>/Out4'
     */
    localB->EnabledSubsystem_o.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In4' incorporates:
     *  Outport: '<S38>/Out5'
     */
    localB->EnabledSubsystem_o.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In5' incorporates:
     *  Outport: '<S38>/Out6'
     */
    localB->EnabledSubsystem_o.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In6' incorporates:
     *  Outport: '<S38>/Out7'
     */
    localB->EnabledSubsystem_o.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In7' incorporates:
     *  Outport: '<S38>/Out8'
     */
    localB->EnabledSubsystem_o.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In8' incorporates:
     *  Outport: '<S38>/Out9'
     */
    localB->EnabledSubsystem_o.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN5' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN6' */
  if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S58>/S-Function' incorporates:
     *  Outport: '<S39>/CAN_new'
     */
    localB->SFunction_o1_e = 0;

    /* Disable for SignalConversion generated from: '<S59>/In1' incorporates:
     *  Outport: '<S39>/Out2'
     */
    localB->EnabledSubsystem_f.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In2' incorporates:
     *  Outport: '<S39>/Out3'
     */
    localB->EnabledSubsystem_f.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In3' incorporates:
     *  Outport: '<S39>/Out4'
     */
    localB->EnabledSubsystem_f.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In4' incorporates:
     *  Outport: '<S39>/Out5'
     */
    localB->EnabledSubsystem_f.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In5' incorporates:
     *  Outport: '<S39>/Out6'
     */
    localB->EnabledSubsystem_f.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In6' incorporates:
     *  Outport: '<S39>/Out7'
     */
    localB->EnabledSubsystem_f.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In7' incorporates:
     *  Outport: '<S39>/Out8'
     */
    localB->EnabledSubsystem_f.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In8' incorporates:
     *  Outport: '<S39>/Out9'
     */
    localB->EnabledSubsystem_f.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN6' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN2' */
  if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S50>/S-Function' incorporates:
     *  Outport: '<S35>/CAN_new'
     */
    localB->SFunction_o1_ic = 0;

    /* Disable for SignalConversion generated from: '<S51>/In1' incorporates:
     *  Outport: '<S35>/Out2'
     */
    localB->EnabledSubsystem_p.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In2' incorporates:
     *  Outport: '<S35>/Out3'
     */
    localB->EnabledSubsystem_p.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In3' incorporates:
     *  Outport: '<S35>/Out4'
     */
    localB->EnabledSubsystem_p.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In4' incorporates:
     *  Outport: '<S35>/Out5'
     */
    localB->EnabledSubsystem_p.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In5' incorporates:
     *  Outport: '<S35>/Out6'
     */
    localB->EnabledSubsystem_p.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In6' incorporates:
     *  Outport: '<S35>/Out7'
     */
    localB->EnabledSubsystem_p.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In7' incorporates:
     *  Outport: '<S35>/Out8'
     */
    localB->EnabledSubsystem_p.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In8' incorporates:
     *  Outport: '<S35>/Out9'
     */
    localB->EnabledSubsystem_p.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN2' */

  /* Disable for Enabled SubSystem: '<S30>/PotValue2_ID_CAN3' */
  if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S52>/S-Function' incorporates:
     *  Outport: '<S36>/CAN_new'
     */
    localB->SFunction_o1_k = 0;

    /* Disable for SignalConversion generated from: '<S53>/In1' incorporates:
     *  Outport: '<S36>/Out2'
     */
    localB->EnabledSubsystem_a.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In2' incorporates:
     *  Outport: '<S36>/Out3'
     */
    localB->EnabledSubsystem_a.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In3' incorporates:
     *  Outport: '<S36>/Out4'
     */
    localB->EnabledSubsystem_a.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In4' incorporates:
     *  Outport: '<S36>/Out5'
     */
    localB->EnabledSubsystem_a.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In5' incorporates:
     *  Outport: '<S36>/Out6'
     */
    localB->EnabledSubsystem_a.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In6' incorporates:
     *  Outport: '<S36>/Out7'
     */
    localB->EnabledSubsystem_a.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In7' incorporates:
     *  Outport: '<S36>/Out8'
     */
    localB->EnabledSubsystem_a.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In8' incorporates:
     *  Outport: '<S36>/Out9'
     */
    localB->EnabledSubsystem_a.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S30>/PotValue2_ID_CAN3' */
}

/* Start for function-call system: '<S8>/CAN1 Recieve' */
void CAN1Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S30>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S60>/S-Function' incorporates:
   *  Constant: '<S40>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 1U);

  /* End of Start for SubSystem: '<S30>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S62>/S-Function' incorporates:
   *  Constant: '<S41>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 11U);

  /* End of Start for SubSystem: '<S30>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S64>/S-Function' incorporates:
   *  Constant: '<S42>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 12U);

  /* End of Start for SubSystem: '<S30>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S66>/S-Function' incorporates:
   *  Constant: '<S43>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 13U);

  /* End of Start for SubSystem: '<S30>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/PotValue1_ID_CAN' */

  /* Start for M-S-Function: '<S44>/S-Function' incorporates:
   *  Constant: '<S32>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 22U);

  /* End of Start for SubSystem: '<S30>/PotValue1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN' */

  /* Start for M-S-Function: '<S46>/S-Function' incorporates:
   *  Constant: '<S33>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 44U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN1' */

  /* Start for M-S-Function: '<S48>/S-Function' incorporates:
   *  Constant: '<S34>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 23U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN1' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN4' */

  /* Start for M-S-Function: '<S54>/S-Function' incorporates:
   *  Constant: '<S37>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 46U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN4' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN5' */

  /* Start for M-S-Function: '<S56>/S-Function' incorporates:
   *  Constant: '<S38>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 24U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN5' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN6' */

  /* Start for M-S-Function: '<S58>/S-Function' incorporates:
   *  Constant: '<S39>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 48U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN6' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN2' */

  /* Start for M-S-Function: '<S50>/S-Function' incorporates:
   *  Constant: '<S35>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 31U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN2' */

  /* Start for Enabled SubSystem: '<S30>/PotValue2_ID_CAN3' */

  /* Start for M-S-Function: '<S52>/S-Function' incorporates:
   *  Constant: '<S36>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 32U);

  /* End of Start for SubSystem: '<S30>/PotValue2_ID_CAN3' */
}

/* Output and update for function-call system: '<S8>/CAN1 Recieve' */
void CAN1Recieve(const uint16_T *rtd_Local_Ticks, msg_buffer_type
                 *rtd_Msg_Rx_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN1, boolean_T
                 *rtd_New_Msg_Ready_CAN1, const uint32_T *rtd_RxID_CAN1, uint8_T
                 *rtd_Rx_State_CAN1, boolean_T *rtd_Toggle_Pin_A0, real_T
                 *rtd_Toggle_Pin_D12, rtB_CAN1Recieve *localB, const
                 rtC_CAN1Recieve *localC, rtDW_CAN1Recieve *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_h;
  uint8_T rtb_SFunction_o3_c;
  uint8_T rtb_SFunction_o4_m;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_n;
  uint8_T rtb_SFunction_o7_f;
  uint8_T rtb_SFunction_o8_c;
  uint8_T rtb_SFunction_o9_e;
  uint8_T rtb_SFunction_o2_l;
  uint8_T rtb_SFunction_o3_n;
  uint8_T rtb_SFunction_o4_a;
  uint8_T rtb_SFunction_o5_d;
  uint8_T rtb_SFunction_o6_m;
  uint8_T rtb_SFunction_o7_c;
  uint8_T rtb_SFunction_o8_o;
  uint8_T rtb_SFunction_o9_j;
  uint8_T rtb_SFunction_o2_lv;
  uint8_T rtb_SFunction_o3_l;
  uint8_T rtb_SFunction_o4_p;
  uint8_T rtb_SFunction_o5_a;
  uint8_T rtb_SFunction_o6_h;
  uint8_T rtb_SFunction_o7_a;
  uint8_T rtb_SFunction_o8_cm;
  uint8_T rtb_SFunction_o9_n;
  uint8_T rtb_SFunction_o2_p;
  uint8_T rtb_SFunction_o3_ln;
  uint8_T rtb_SFunction_o4_g;
  uint8_T rtb_SFunction_o5_n;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_cx;
  uint8_T rtb_SFunction_o8_b;
  uint8_T rtb_SFunction_o9_m;
  uint8_T rtb_SFunction_o2_hl;
  uint8_T rtb_SFunction_o3_j;
  uint8_T rtb_SFunction_o4_aw;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_d;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_cz;
  uint8_T rtb_SFunction_o9_p;
  uint8_T rtb_SFunction_o2_pc;
  uint8_T rtb_SFunction_o3_i;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_l;
  uint8_T rtb_SFunction_o7_h;
  uint8_T rtb_SFunction_o8_d;
  uint8_T rtb_SFunction_o9_d;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_k;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_nk;
  uint8_T rtb_SFunction_o6_dh;
  uint8_T rtb_SFunction_o7_p;
  uint8_T rtb_SFunction_o8_m;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_SFunction_o2_c;
  uint8_T rtb_SFunction_o3_o;
  uint8_T rtb_SFunction_o4_f;
  uint8_T rtb_SFunction_o5_h;
  uint8_T rtb_SFunction_o6_b;
  uint8_T rtb_SFunction_o7_ce;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_c;
  uint8_T rtb_SFunction_o2_j;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_pk;
  uint8_T rtb_SFunction_o5_al;
  uint8_T rtb_SFunction_o6_hl;
  uint8_T rtb_SFunction_o7_o;
  uint8_T rtb_SFunction_o8_nm;
  uint8_T rtb_SFunction_o9_i;
  uint8_T rtb_SFunction_o2_n;
  uint8_T rtb_SFunction_o3_kl;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_lh;
  uint8_T rtb_SFunction_o7_c3;
  uint8_T rtb_SFunction_o8_i;
  uint8_T rtb_SFunction_o9_nb;
  uint8_T rtb_SFunction_o2_ca;
  uint8_T rtb_SFunction_o3_ij;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_ol;
  uint8_T rtb_SFunction_o6_a;
  uint8_T rtb_SFunction_o7_cv;
  uint8_T rtb_SFunction_o8_n4;
  uint8_T rtb_SFunction_o9_a;
  int8_T rtb_signal1_m;
  uint8_T rtb_signal2_n4;
  uint8_T rtb_signal3_h2;
  uint8_T rtb_signal4_pa;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;
  boolean_T rtb_Equal10;
  boolean_T rtb_Equal11;
  boolean_T rtb_Equal1_e1;
  boolean_T rtb_Equal2_b4;
  boolean_T rtb_Equal3_b;
  boolean_T rtb_Equal4_j;
  boolean_T rtb_Equal5_d;
  boolean_T rtb_Equal6_a;
  boolean_T rtb_Equal7_g;
  boolean_T rtb_Equal9_f;
  boolean_T rtb_Equal_e2;

  /* Sum: '<S17>/Sum1' incorporates:
   *  Constant: '<S17>/Constant3'
   *  DataStoreRead: '<S17>/Data Store Read1'
   */
  RxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S17>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN1_counter_s;

  /* DataStoreRead: '<S17>/Data Store Read' */
  RxID_CAN1_s = *rtd_RxID_CAN1;

  /* RelationalOperator: '<S30>/Equal' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_Equal_e2 = (RxID_CAN1_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S30>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  if (rtb_Equal_e2) {
    localDW->Sync_ID_CAN_MODE = true;

    /* M-S-Function: '<S60>/S-Function' incorporates:
     *  Constant: '<S40>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o = CanIoGetMessage(0, 1U, NULL,
      &canRxData_0_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o > 0) {
      /* read the data */
      rtb_SFunction_o2_lv = canRxData_0_1U.uint8_T_info[0];
      rtb_SFunction_o3_l = canRxData_0_1U.uint8_T_info[1];
      rtb_SFunction_o4_p = canRxData_0_1U.uint8_T_info[2];
      rtb_SFunction_o5_a = canRxData_0_1U.uint8_T_info[3];
      rtb_SFunction_o6_h = canRxData_0_1U.uint8_T_info[4];
      rtb_SFunction_o7_a = canRxData_0_1U.uint8_T_info[5];
      rtb_SFunction_o8_cm = canRxData_0_1U.uint8_T_info[6];
      rtb_SFunction_o9_n = canRxData_0_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S60>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_o, rtb_SFunction_o2_lv,
                     rtb_SFunction_o3_l, rtb_SFunction_o4_p, rtb_SFunction_o5_a,
                     rtb_SFunction_o6_h, rtb_SFunction_o7_a, rtb_SFunction_o8_cm,
                     rtb_SFunction_o9_n, &localB->EnabledSubsystem_ez);

    /* End of Outputs for SubSystem: '<S60>/Enabled Subsystem' */
  } else if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S60>/S-Function' incorporates:
     *  Outport: '<S40>/CAN_new'
     */
    localB->SFunction_o1_o = 0;

    /* Disable for SignalConversion generated from: '<S61>/In1' incorporates:
     *  Outport: '<S40>/Out2'
     */
    localB->EnabledSubsystem_ez.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In2' incorporates:
     *  Outport: '<S40>/Out3'
     */
    localB->EnabledSubsystem_ez.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In3' incorporates:
     *  Outport: '<S40>/Out4'
     */
    localB->EnabledSubsystem_ez.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In4' incorporates:
     *  Outport: '<S40>/Out5'
     */
    localB->EnabledSubsystem_ez.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In5' incorporates:
     *  Outport: '<S40>/Out6'
     */
    localB->EnabledSubsystem_ez.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In6' incorporates:
     *  Outport: '<S40>/Out7'
     */
    localB->EnabledSubsystem_ez.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In7' incorporates:
     *  Outport: '<S40>/Out8'
     */
    localB->EnabledSubsystem_ez.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S61>/In8' incorporates:
     *  Outport: '<S40>/Out9'
     */
    localB->EnabledSubsystem_ez.In8 = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/Sync_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal1' incorporates:
   *  Constant: '<S30>/Constant1'
   */
  rtb_Equal1_e1 = (RxID_CAN1_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S30>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtb_Equal1_e1) {
    localDW->Vote1_ID_CAN_MODE = true;

    /* M-S-Function: '<S62>/S-Function' incorporates:
     *  Constant: '<S41>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(0, 11U, NULL,
      &canRxData_0_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_l = canRxData_0_11U.uint8_T_info[0];
      rtb_SFunction_o3_n = canRxData_0_11U.uint8_T_info[1];
      rtb_SFunction_o4_a = canRxData_0_11U.uint8_T_info[2];
      rtb_SFunction_o5_d = canRxData_0_11U.uint8_T_info[3];
      rtb_SFunction_o6_m = canRxData_0_11U.uint8_T_info[4];
      rtb_SFunction_o7_c = canRxData_0_11U.uint8_T_info[5];
      rtb_SFunction_o8_o = canRxData_0_11U.uint8_T_info[6];
      rtb_SFunction_o9_j = canRxData_0_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S62>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_m, rtb_SFunction_o2_l,
                     rtb_SFunction_o3_n, rtb_SFunction_o4_a, rtb_SFunction_o5_d,
                     rtb_SFunction_o6_m, rtb_SFunction_o7_c, rtb_SFunction_o8_o,
                     rtb_SFunction_o9_j, &localB->EnabledSubsystem_i5);

    /* End of Outputs for SubSystem: '<S62>/Enabled Subsystem' */
  } else if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S62>/S-Function' incorporates:
     *  Outport: '<S41>/CAN_new'
     */
    localB->SFunction_o1_m = 0;

    /* Disable for SignalConversion generated from: '<S63>/In1' incorporates:
     *  Outport: '<S41>/Out2'
     */
    localB->EnabledSubsystem_i5.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In2' incorporates:
     *  Outport: '<S41>/Out3'
     */
    localB->EnabledSubsystem_i5.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In3' incorporates:
     *  Outport: '<S41>/Out4'
     */
    localB->EnabledSubsystem_i5.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In4' incorporates:
     *  Outport: '<S41>/Out5'
     */
    localB->EnabledSubsystem_i5.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In5' incorporates:
     *  Outport: '<S41>/Out6'
     */
    localB->EnabledSubsystem_i5.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In6' incorporates:
     *  Outport: '<S41>/Out7'
     */
    localB->EnabledSubsystem_i5.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In7' incorporates:
     *  Outport: '<S41>/Out8'
     */
    localB->EnabledSubsystem_i5.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S63>/In8' incorporates:
     *  Outport: '<S41>/Out9'
     */
    localB->EnabledSubsystem_i5.In8 = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal2' incorporates:
   *  Constant: '<S30>/Constant2'
   */
  rtb_Equal2_b4 = (RxID_CAN1_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S30>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtb_Equal2_b4) {
    localDW->Vote2_ID_CAN_MODE = true;

    /* M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S42>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_j = CanIoGetMessage(0, 12U, NULL,
      &canRxData_0_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_j > 0) {
      /* read the data */
      rtb_SFunction_o2_h = canRxData_0_12U.uint8_T_info[0];
      rtb_SFunction_o3_c = canRxData_0_12U.uint8_T_info[1];
      rtb_SFunction_o4_m = canRxData_0_12U.uint8_T_info[2];
      rtb_SFunction_o5_c = canRxData_0_12U.uint8_T_info[3];
      rtb_SFunction_o6_n = canRxData_0_12U.uint8_T_info[4];
      rtb_SFunction_o7_f = canRxData_0_12U.uint8_T_info[5];
      rtb_SFunction_o8_c = canRxData_0_12U.uint8_T_info[6];
      rtb_SFunction_o9_e = canRxData_0_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_j, rtb_SFunction_o2_h,
                     rtb_SFunction_o3_c, rtb_SFunction_o4_m, rtb_SFunction_o5_c,
                     rtb_SFunction_o6_n, rtb_SFunction_o7_f, rtb_SFunction_o8_c,
                     rtb_SFunction_o9_e, &localB->EnabledSubsystem_fv);

    /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */
  } else if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S64>/S-Function' incorporates:
     *  Outport: '<S42>/CAN_new'
     */
    localB->SFunction_o1_j = 0;

    /* Disable for SignalConversion generated from: '<S65>/In1' incorporates:
     *  Outport: '<S42>/Out2'
     */
    localB->EnabledSubsystem_fv.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In2' incorporates:
     *  Outport: '<S42>/Out3'
     */
    localB->EnabledSubsystem_fv.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In3' incorporates:
     *  Outport: '<S42>/Out4'
     */
    localB->EnabledSubsystem_fv.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In4' incorporates:
     *  Outport: '<S42>/Out5'
     */
    localB->EnabledSubsystem_fv.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In5' incorporates:
     *  Outport: '<S42>/Out6'
     */
    localB->EnabledSubsystem_fv.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In6' incorporates:
     *  Outport: '<S42>/Out7'
     */
    localB->EnabledSubsystem_fv.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In7' incorporates:
     *  Outport: '<S42>/Out8'
     */
    localB->EnabledSubsystem_fv.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S65>/In8' incorporates:
     *  Outport: '<S42>/Out9'
     */
    localB->EnabledSubsystem_fv.In8 = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal3' incorporates:
   *  Constant: '<S30>/Constant3'
   */
  rtb_Equal3_b = (RxID_CAN1_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S30>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S43>/Enable'
   */
  if (rtb_Equal3_b) {
    localDW->Vote3_ID_CAN_MODE = true;

    /* M-S-Function: '<S66>/S-Function' incorporates:
     *  Constant: '<S43>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, 13U, NULL,
      &canRxData_0_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_13U.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_13U.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_13U.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_13U.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_13U.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_13U.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_13U.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S66>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &localB->EnabledSubsystem_o1);

    /* End of Outputs for SubSystem: '<S66>/Enabled Subsystem' */
  } else if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S66>/S-Function' incorporates:
     *  Outport: '<S43>/CAN_new'
     */
    localB->SFunction_o1 = 0;

    /* Disable for SignalConversion generated from: '<S67>/In1' incorporates:
     *  Outport: '<S43>/Out2'
     */
    localB->EnabledSubsystem_o1.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In2' incorporates:
     *  Outport: '<S43>/Out3'
     */
    localB->EnabledSubsystem_o1.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In3' incorporates:
     *  Outport: '<S43>/Out4'
     */
    localB->EnabledSubsystem_o1.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In4' incorporates:
     *  Outport: '<S43>/Out5'
     */
    localB->EnabledSubsystem_o1.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In5' incorporates:
     *  Outport: '<S43>/Out6'
     */
    localB->EnabledSubsystem_o1.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In6' incorporates:
     *  Outport: '<S43>/Out7'
     */
    localB->EnabledSubsystem_o1.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In7' incorporates:
     *  Outport: '<S43>/Out8'
     */
    localB->EnabledSubsystem_o1.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S67>/In8' incorporates:
     *  Outport: '<S43>/Out9'
     */
    localB->EnabledSubsystem_o1.In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal4' */
  rtb_Equal4_j = (RxID_CAN1_s == localC->Product);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue1_ID_CAN' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  if (rtb_Equal4_j) {
    localDW->PotValue1_ID_CAN_MODE = true;

    /* M-S-Function: '<S44>/S-Function' incorporates:
     *  Constant: '<S32>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_jc = CanIoGetMessage(0, 22U, NULL,
      &canRxData_0_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_jc > 0) {
      /* read the data */
      rtb_SFunction_o2_ca = canRxData_0_22U.uint8_T_info[0];
      rtb_SFunction_o3_ij = canRxData_0_22U.uint8_T_info[1];
      rtb_SFunction_o4_b = canRxData_0_22U.uint8_T_info[2];
      rtb_SFunction_o5_ol = canRxData_0_22U.uint8_T_info[3];
      rtb_SFunction_o6_a = canRxData_0_22U.uint8_T_info[4];
      rtb_SFunction_o7_cv = canRxData_0_22U.uint8_T_info[5];
      rtb_SFunction_o8_n4 = canRxData_0_22U.uint8_T_info[6];
      rtb_SFunction_o9_a = canRxData_0_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S44>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_jc, rtb_SFunction_o2_ca,
                     rtb_SFunction_o3_ij, rtb_SFunction_o4_b,
                     rtb_SFunction_o5_ol, rtb_SFunction_o6_a,
                     rtb_SFunction_o7_cv, rtb_SFunction_o8_n4,
                     rtb_SFunction_o9_a, &localB->EnabledSubsystem_n);

    /* End of Outputs for SubSystem: '<S44>/Enabled Subsystem' */
  } else if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S44>/S-Function' incorporates:
     *  Outport: '<S32>/CAN_new'
     */
    localB->SFunction_o1_jc = 0;

    /* Disable for Outport: '<S32>/Out2' incorporates:
     *  SignalConversion generated from: '<S45>/In1'
     */
    localB->EnabledSubsystem_n.In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out3' incorporates:
     *  SignalConversion generated from: '<S45>/In2'
     */
    localB->EnabledSubsystem_n.In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out4' incorporates:
     *  SignalConversion generated from: '<S45>/In3'
     */
    localB->EnabledSubsystem_n.In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out5' incorporates:
     *  SignalConversion generated from: '<S45>/In4'
     */
    localB->EnabledSubsystem_n.In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out6' incorporates:
     *  SignalConversion generated from: '<S45>/In5'
     */
    localB->EnabledSubsystem_n.In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out7' incorporates:
     *  SignalConversion generated from: '<S45>/In6'
     */
    localB->EnabledSubsystem_n.In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out8' incorporates:
     *  SignalConversion generated from: '<S45>/In7'
     */
    localB->EnabledSubsystem_n.In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S32>/Out9' incorporates:
     *  SignalConversion generated from: '<S45>/In8'
     */
    localB->EnabledSubsystem_n.In8 = ((uint8_T)0U);
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue1_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal5' */
  rtb_Equal5_d = (RxID_CAN1_s == localC->Product1);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN' incorporates:
   *  EnablePort: '<S33>/Enable'
   */
  if (rtb_Equal5_d) {
    localDW->PotValue2_ID_CAN_MODE = true;

    /* M-S-Function: '<S46>/S-Function' incorporates:
     *  Constant: '<S33>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_kx = CanIoGetMessage(0, 44U, NULL,
      &canRxData_0_44U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_kx > 0) {
      /* read the data */
      rtb_SFunction_o2_n = canRxData_0_44U.uint8_T_info[0];
      rtb_SFunction_o3_kl = canRxData_0_44U.uint8_T_info[1];
      rtb_SFunction_o4_i = canRxData_0_44U.uint8_T_info[2];
      rtb_SFunction_o5_k = canRxData_0_44U.uint8_T_info[3];
      rtb_SFunction_o6_lh = canRxData_0_44U.uint8_T_info[4];
      rtb_SFunction_o7_c3 = canRxData_0_44U.uint8_T_info[5];
      rtb_SFunction_o8_i = canRxData_0_44U.uint8_T_info[6];
      rtb_SFunction_o9_nb = canRxData_0_44U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S46>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_kx, rtb_SFunction_o2_n,
                     rtb_SFunction_o3_kl, rtb_SFunction_o4_i, rtb_SFunction_o5_k,
                     rtb_SFunction_o6_lh, rtb_SFunction_o7_c3,
                     rtb_SFunction_o8_i, rtb_SFunction_o9_nb,
                     &localB->EnabledSubsystem_e);

    /* End of Outputs for SubSystem: '<S46>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S46>/S-Function' incorporates:
     *  Outport: '<S33>/CAN_new'
     */
    localB->SFunction_o1_kx = 0;

    /* Disable for SignalConversion generated from: '<S47>/In1' incorporates:
     *  Outport: '<S33>/Out2'
     */
    localB->EnabledSubsystem_e.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In2' incorporates:
     *  Outport: '<S33>/Out3'
     */
    localB->EnabledSubsystem_e.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In3' incorporates:
     *  Outport: '<S33>/Out4'
     */
    localB->EnabledSubsystem_e.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In4' incorporates:
     *  Outport: '<S33>/Out5'
     */
    localB->EnabledSubsystem_e.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In5' incorporates:
     *  Outport: '<S33>/Out6'
     */
    localB->EnabledSubsystem_e.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In6' incorporates:
     *  Outport: '<S33>/Out7'
     */
    localB->EnabledSubsystem_e.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In7' incorporates:
     *  Outport: '<S33>/Out8'
     */
    localB->EnabledSubsystem_e.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S47>/In8' incorporates:
     *  Outport: '<S33>/Out9'
     */
    localB->EnabledSubsystem_e.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN' */

  /* RelationalOperator: '<S30>/Equal6' */
  rtb_Equal6_a = (RxID_CAN1_s == localC->Product2);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN1' incorporates:
   *  EnablePort: '<S34>/Enable'
   */
  if (rtb_Equal6_a) {
    localDW->PotValue2_ID_CAN1_MODE = true;

    /* M-S-Function: '<S48>/S-Function' incorporates:
     *  Constant: '<S34>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ek = CanIoGetMessage(0, 23U, NULL,
      &canRxData_0_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ek > 0) {
      /* read the data */
      rtb_SFunction_o2_j = canRxData_0_23U.uint8_T_info[0];
      rtb_SFunction_o3_p = canRxData_0_23U.uint8_T_info[1];
      rtb_SFunction_o4_pk = canRxData_0_23U.uint8_T_info[2];
      rtb_SFunction_o5_al = canRxData_0_23U.uint8_T_info[3];
      rtb_SFunction_o6_hl = canRxData_0_23U.uint8_T_info[4];
      rtb_SFunction_o7_o = canRxData_0_23U.uint8_T_info[5];
      rtb_SFunction_o8_nm = canRxData_0_23U.uint8_T_info[6];
      rtb_SFunction_o9_i = canRxData_0_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S48>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_ek, rtb_SFunction_o2_j,
                     rtb_SFunction_o3_p, rtb_SFunction_o4_pk,
                     rtb_SFunction_o5_al, rtb_SFunction_o6_hl,
                     rtb_SFunction_o7_o, rtb_SFunction_o8_nm, rtb_SFunction_o9_i,
                     &localB->EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S48>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S48>/S-Function' incorporates:
     *  Outport: '<S34>/CAN_new'
     */
    localB->SFunction_o1_ek = 0;

    /* Disable for SignalConversion generated from: '<S49>/In1' incorporates:
     *  Outport: '<S34>/Out2'
     */
    localB->EnabledSubsystem_i.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In2' incorporates:
     *  Outport: '<S34>/Out3'
     */
    localB->EnabledSubsystem_i.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In3' incorporates:
     *  Outport: '<S34>/Out4'
     */
    localB->EnabledSubsystem_i.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In4' incorporates:
     *  Outport: '<S34>/Out5'
     */
    localB->EnabledSubsystem_i.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In5' incorporates:
     *  Outport: '<S34>/Out6'
     */
    localB->EnabledSubsystem_i.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In6' incorporates:
     *  Outport: '<S34>/Out7'
     */
    localB->EnabledSubsystem_i.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In7' incorporates:
     *  Outport: '<S34>/Out8'
     */
    localB->EnabledSubsystem_i.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S49>/In8' incorporates:
     *  Outport: '<S34>/Out9'
     */
    localB->EnabledSubsystem_i.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN1' */

  /* RelationalOperator: '<S30>/Equal9' */
  rtb_Equal9_f = (RxID_CAN1_s == localC->Product3);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN4' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  if (rtb_Equal9_f) {
    localDW->PotValue2_ID_CAN4_MODE = true;

    /* M-S-Function: '<S54>/S-Function' incorporates:
     *  Constant: '<S37>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(0, 46U, NULL,
      &canRxData_0_46U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_pc = canRxData_0_46U.uint8_T_info[0];
      rtb_SFunction_o3_i = canRxData_0_46U.uint8_T_info[1];
      rtb_SFunction_o4_l = canRxData_0_46U.uint8_T_info[2];
      rtb_SFunction_o5_o = canRxData_0_46U.uint8_T_info[3];
      rtb_SFunction_o6_l = canRxData_0_46U.uint8_T_info[4];
      rtb_SFunction_o7_h = canRxData_0_46U.uint8_T_info[5];
      rtb_SFunction_o8_d = canRxData_0_46U.uint8_T_info[6];
      rtb_SFunction_o9_d = canRxData_0_46U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S54>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_b, rtb_SFunction_o2_pc,
                     rtb_SFunction_o3_i, rtb_SFunction_o4_l, rtb_SFunction_o5_o,
                     rtb_SFunction_o6_l, rtb_SFunction_o7_h, rtb_SFunction_o8_d,
                     rtb_SFunction_o9_d, &localB->EnabledSubsystem_j);

    /* End of Outputs for SubSystem: '<S54>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S54>/S-Function' incorporates:
     *  Outport: '<S37>/CAN_new'
     */
    localB->SFunction_o1_b = 0;

    /* Disable for SignalConversion generated from: '<S55>/In1' incorporates:
     *  Outport: '<S37>/Out2'
     */
    localB->EnabledSubsystem_j.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In2' incorporates:
     *  Outport: '<S37>/Out3'
     */
    localB->EnabledSubsystem_j.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In3' incorporates:
     *  Outport: '<S37>/Out4'
     */
    localB->EnabledSubsystem_j.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In4' incorporates:
     *  Outport: '<S37>/Out5'
     */
    localB->EnabledSubsystem_j.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In5' incorporates:
     *  Outport: '<S37>/Out6'
     */
    localB->EnabledSubsystem_j.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In6' incorporates:
     *  Outport: '<S37>/Out7'
     */
    localB->EnabledSubsystem_j.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In7' incorporates:
     *  Outport: '<S37>/Out8'
     */
    localB->EnabledSubsystem_j.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S55>/In8' incorporates:
     *  Outport: '<S37>/Out9'
     */
    localB->EnabledSubsystem_j.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN4' */

  /* RelationalOperator: '<S30>/Equal10' */
  rtb_Equal10 = (RxID_CAN1_s == localC->Product4);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN5' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  if (rtb_Equal10) {
    localDW->PotValue2_ID_CAN5_MODE = true;

    /* M-S-Function: '<S56>/S-Function' incorporates:
     *  Constant: '<S38>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(0, 24U, NULL,
      &canRxData_0_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_hl = canRxData_0_24U.uint8_T_info[0];
      rtb_SFunction_o3_j = canRxData_0_24U.uint8_T_info[1];
      rtb_SFunction_o4_aw = canRxData_0_24U.uint8_T_info[2];
      rtb_SFunction_o5_m = canRxData_0_24U.uint8_T_info[3];
      rtb_SFunction_o6_d = canRxData_0_24U.uint8_T_info[4];
      rtb_SFunction_o7_l = canRxData_0_24U.uint8_T_info[5];
      rtb_SFunction_o8_cz = canRxData_0_24U.uint8_T_info[6];
      rtb_SFunction_o9_p = canRxData_0_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S56>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_i, rtb_SFunction_o2_hl,
                     rtb_SFunction_o3_j, rtb_SFunction_o4_aw, rtb_SFunction_o5_m,
                     rtb_SFunction_o6_d, rtb_SFunction_o7_l, rtb_SFunction_o8_cz,
                     rtb_SFunction_o9_p, &localB->EnabledSubsystem_o);

    /* End of Outputs for SubSystem: '<S56>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S56>/S-Function' incorporates:
     *  Outport: '<S38>/CAN_new'
     */
    localB->SFunction_o1_i = 0;

    /* Disable for SignalConversion generated from: '<S57>/In1' incorporates:
     *  Outport: '<S38>/Out2'
     */
    localB->EnabledSubsystem_o.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In2' incorporates:
     *  Outport: '<S38>/Out3'
     */
    localB->EnabledSubsystem_o.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In3' incorporates:
     *  Outport: '<S38>/Out4'
     */
    localB->EnabledSubsystem_o.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In4' incorporates:
     *  Outport: '<S38>/Out5'
     */
    localB->EnabledSubsystem_o.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In5' incorporates:
     *  Outport: '<S38>/Out6'
     */
    localB->EnabledSubsystem_o.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In6' incorporates:
     *  Outport: '<S38>/Out7'
     */
    localB->EnabledSubsystem_o.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In7' incorporates:
     *  Outport: '<S38>/Out8'
     */
    localB->EnabledSubsystem_o.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S57>/In8' incorporates:
     *  Outport: '<S38>/Out9'
     */
    localB->EnabledSubsystem_o.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN5' */

  /* RelationalOperator: '<S30>/Equal11' */
  rtb_Equal11 = (RxID_CAN1_s == localC->Product5);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN6' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  if (rtb_Equal11) {
    localDW->PotValue2_ID_CAN6_MODE = true;

    /* M-S-Function: '<S58>/S-Function' incorporates:
     *  Constant: '<S39>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(0, 48U, NULL,
      &canRxData_0_48U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_p = canRxData_0_48U.uint8_T_info[0];
      rtb_SFunction_o3_ln = canRxData_0_48U.uint8_T_info[1];
      rtb_SFunction_o4_g = canRxData_0_48U.uint8_T_info[2];
      rtb_SFunction_o5_n = canRxData_0_48U.uint8_T_info[3];
      rtb_SFunction_o6_o = canRxData_0_48U.uint8_T_info[4];
      rtb_SFunction_o7_cx = canRxData_0_48U.uint8_T_info[5];
      rtb_SFunction_o8_b = canRxData_0_48U.uint8_T_info[6];
      rtb_SFunction_o9_m = canRxData_0_48U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S58>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_e, rtb_SFunction_o2_p,
                     rtb_SFunction_o3_ln, rtb_SFunction_o4_g, rtb_SFunction_o5_n,
                     rtb_SFunction_o6_o, rtb_SFunction_o7_cx, rtb_SFunction_o8_b,
                     rtb_SFunction_o9_m, &localB->EnabledSubsystem_f);

    /* End of Outputs for SubSystem: '<S58>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S58>/S-Function' incorporates:
     *  Outport: '<S39>/CAN_new'
     */
    localB->SFunction_o1_e = 0;

    /* Disable for SignalConversion generated from: '<S59>/In1' incorporates:
     *  Outport: '<S39>/Out2'
     */
    localB->EnabledSubsystem_f.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In2' incorporates:
     *  Outport: '<S39>/Out3'
     */
    localB->EnabledSubsystem_f.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In3' incorporates:
     *  Outport: '<S39>/Out4'
     */
    localB->EnabledSubsystem_f.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In4' incorporates:
     *  Outport: '<S39>/Out5'
     */
    localB->EnabledSubsystem_f.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In5' incorporates:
     *  Outport: '<S39>/Out6'
     */
    localB->EnabledSubsystem_f.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In6' incorporates:
     *  Outport: '<S39>/Out7'
     */
    localB->EnabledSubsystem_f.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In7' incorporates:
     *  Outport: '<S39>/Out8'
     */
    localB->EnabledSubsystem_f.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S59>/In8' incorporates:
     *  Outport: '<S39>/Out9'
     */
    localB->EnabledSubsystem_f.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN6' */

  /* RelationalOperator: '<S30>/Equal7' incorporates:
   *  Constant: '<S30>/Constant7'
   */
  rtb_Equal7_g = (RxID_CAN1_s == 31.0);

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN2' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  if (rtb_Equal7_g) {
    localDW->PotValue2_ID_CAN2_MODE = true;

    /* M-S-Function: '<S50>/S-Function' incorporates:
     *  Constant: '<S35>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ic = CanIoGetMessage(0, 31U, NULL,
      &canRxData_0_31U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ic > 0) {
      /* read the data */
      rtb_SFunction_o2_c = canRxData_0_31U.uint8_T_info[0];
      rtb_SFunction_o3_o = canRxData_0_31U.uint8_T_info[1];
      rtb_SFunction_o4_f = canRxData_0_31U.uint8_T_info[2];
      rtb_SFunction_o5_h = canRxData_0_31U.uint8_T_info[3];
      rtb_SFunction_o6_b = canRxData_0_31U.uint8_T_info[4];
      rtb_SFunction_o7_ce = canRxData_0_31U.uint8_T_info[5];
      rtb_SFunction_o8_n = canRxData_0_31U.uint8_T_info[6];
      rtb_SFunction_o9_c = canRxData_0_31U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S50>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_ic, rtb_SFunction_o2_c,
                     rtb_SFunction_o3_o, rtb_SFunction_o4_f, rtb_SFunction_o5_h,
                     rtb_SFunction_o6_b, rtb_SFunction_o7_ce, rtb_SFunction_o8_n,
                     rtb_SFunction_o9_c, &localB->EnabledSubsystem_p);

    /* End of Outputs for SubSystem: '<S50>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S50>/S-Function' incorporates:
     *  Outport: '<S35>/CAN_new'
     */
    localB->SFunction_o1_ic = 0;

    /* Disable for SignalConversion generated from: '<S51>/In1' incorporates:
     *  Outport: '<S35>/Out2'
     */
    localB->EnabledSubsystem_p.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In2' incorporates:
     *  Outport: '<S35>/Out3'
     */
    localB->EnabledSubsystem_p.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In3' incorporates:
     *  Outport: '<S35>/Out4'
     */
    localB->EnabledSubsystem_p.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In4' incorporates:
     *  Outport: '<S35>/Out5'
     */
    localB->EnabledSubsystem_p.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In5' incorporates:
     *  Outport: '<S35>/Out6'
     */
    localB->EnabledSubsystem_p.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In6' incorporates:
     *  Outport: '<S35>/Out7'
     */
    localB->EnabledSubsystem_p.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In7' incorporates:
     *  Outport: '<S35>/Out8'
     */
    localB->EnabledSubsystem_p.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S51>/In8' incorporates:
     *  Outport: '<S35>/Out9'
     */
    localB->EnabledSubsystem_p.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN2' */

  /* Outputs for Enabled SubSystem: '<S30>/PotValue2_ID_CAN3' incorporates:
   *  EnablePort: '<S36>/Enable'
   */
  /* RelationalOperator: '<S30>/Equal8' incorporates:
   *  Constant: '<S30>/Constant8'
   */
  if (RxID_CAN1_s == 32.0) {
    localDW->PotValue2_ID_CAN3_MODE = true;

    /* M-S-Function: '<S52>/S-Function' incorporates:
     *  Constant: '<S36>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(0, 32U, NULL,
      &canRxData_0_32U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_e = canRxData_0_32U.uint8_T_info[0];
      rtb_SFunction_o3_k = canRxData_0_32U.uint8_T_info[1];
      rtb_SFunction_o4_j = canRxData_0_32U.uint8_T_info[2];
      rtb_SFunction_o5_nk = canRxData_0_32U.uint8_T_info[3];
      rtb_SFunction_o6_dh = canRxData_0_32U.uint8_T_info[4];
      rtb_SFunction_o7_p = canRxData_0_32U.uint8_T_info[5];
      rtb_SFunction_o8_m = canRxData_0_32U.uint8_T_info[6];
      rtb_SFunction_o9_f = canRxData_0_32U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_k, rtb_SFunction_o2_e,
                     rtb_SFunction_o3_k, rtb_SFunction_o4_j, rtb_SFunction_o5_nk,
                     rtb_SFunction_o6_dh, rtb_SFunction_o7_p, rtb_SFunction_o8_m,
                     rtb_SFunction_o9_f, &localB->EnabledSubsystem_a);

    /* End of Outputs for SubSystem: '<S52>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S52>/S-Function' incorporates:
     *  Outport: '<S36>/CAN_new'
     */
    localB->SFunction_o1_k = 0;

    /* Disable for SignalConversion generated from: '<S53>/In1' incorporates:
     *  Outport: '<S36>/Out2'
     */
    localB->EnabledSubsystem_a.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In2' incorporates:
     *  Outport: '<S36>/Out3'
     */
    localB->EnabledSubsystem_a.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In3' incorporates:
     *  Outport: '<S36>/Out4'
     */
    localB->EnabledSubsystem_a.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In4' incorporates:
     *  Outport: '<S36>/Out5'
     */
    localB->EnabledSubsystem_a.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In5' incorporates:
     *  Outport: '<S36>/Out6'
     */
    localB->EnabledSubsystem_a.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In6' incorporates:
     *  Outport: '<S36>/Out7'
     */
    localB->EnabledSubsystem_a.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In7' incorporates:
     *  Outport: '<S36>/Out8'
     */
    localB->EnabledSubsystem_a.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S53>/In8' incorporates:
     *  Outport: '<S36>/Out9'
     */
    localB->EnabledSubsystem_a.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of RelationalOperator: '<S30>/Equal8' */
  /* End of Outputs for SubSystem: '<S30>/PotValue2_ID_CAN3' */

  /* Switch generated from: '<S30>/Switch' incorporates:
   *  Switch generated from: '<S30>/Switch1'
   *  Switch generated from: '<S30>/Switch10'
   *  Switch generated from: '<S30>/Switch2'
   *  Switch generated from: '<S30>/Switch3'
   *  Switch generated from: '<S30>/Switch4'
   *  Switch generated from: '<S30>/Switch5'
   *  Switch generated from: '<S30>/Switch6'
   *  Switch generated from: '<S30>/Switch7'
   *  Switch generated from: '<S30>/Switch8'
   *  Switch generated from: '<S30>/Switch9'
   */
  if (rtb_Equal_e2) {
    rtb_signal1_m = localB->SFunction_o1_o;
    rtb_signal2_n4 = localB->EnabledSubsystem_ez.In1;
    rtb_signal3_h2 = localB->EnabledSubsystem_ez.In2;
    rtb_signal4_pa = localB->EnabledSubsystem_ez.In3;
    rtb_signal5 = localB->EnabledSubsystem_ez.In4;
    rtb_signal6 = localB->EnabledSubsystem_ez.In5;
    rtb_signal7 = localB->EnabledSubsystem_ez.In6;
    rtb_signal8 = localB->EnabledSubsystem_ez.In7;
    rtb_signal9 = localB->EnabledSubsystem_ez.In8;
  } else {
    if (rtb_Equal1_e1) {
      /* Switch generated from: '<S30>/Switch1' */
      rtb_signal1_m = localB->SFunction_o1_m;
    } else if (rtb_Equal2_b4) {
      /* Switch generated from: '<S30>/Switch2' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       */
      rtb_signal1_m = localB->SFunction_o1_j;
    } else if (rtb_Equal3_b) {
      /* Switch generated from: '<S30>/Switch3' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       */
      rtb_signal1_m = localB->SFunction_o1;
    } else if (rtb_Equal4_j) {
      /* Switch generated from: '<S30>/Switch4' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       */
      rtb_signal1_m = localB->SFunction_o1_jc;
    } else if (rtb_Equal5_d) {
      /* Switch generated from: '<S30>/Switch5' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       */
      rtb_signal1_m = localB->SFunction_o1_kx;
    } else if (rtb_Equal6_a) {
      /* Switch generated from: '<S30>/Switch7' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       */
      rtb_signal1_m = localB->SFunction_o1_ek;
    } else if (rtb_Equal9_f) {
      /* Switch generated from: '<S30>/Switch8' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       *  Switch generated from: '<S30>/Switch7'
       */
      rtb_signal1_m = localB->SFunction_o1_b;
    } else if (rtb_Equal10) {
      /* Switch generated from: '<S30>/Switch9' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       *  Switch generated from: '<S30>/Switch7'
       *  Switch generated from: '<S30>/Switch8'
       */
      rtb_signal1_m = localB->SFunction_o1_i;
    } else if (rtb_Equal11) {
      /* Switch generated from: '<S30>/Switch10' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       *  Switch generated from: '<S30>/Switch7'
       *  Switch generated from: '<S30>/Switch8'
       *  Switch generated from: '<S30>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_e;
    } else if (rtb_Equal7_g) {
      /* Switch generated from: '<S30>/Switch6' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch10'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       *  Switch generated from: '<S30>/Switch7'
       *  Switch generated from: '<S30>/Switch8'
       *  Switch generated from: '<S30>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_ic;
    } else {
      /* Switch generated from: '<S30>/Switch9' incorporates:
       *  Switch generated from: '<S30>/Switch1'
       *  Switch generated from: '<S30>/Switch10'
       *  Switch generated from: '<S30>/Switch2'
       *  Switch generated from: '<S30>/Switch3'
       *  Switch generated from: '<S30>/Switch4'
       *  Switch generated from: '<S30>/Switch5'
       *  Switch generated from: '<S30>/Switch6'
       *  Switch generated from: '<S30>/Switch7'
       *  Switch generated from: '<S30>/Switch8'
       */
      rtb_signal1_m = localB->SFunction_o1_k;
    }

    /* Switch generated from: '<S30>/Switch1' incorporates:
     *  Switch generated from: '<S30>/Switch10'
     *  Switch generated from: '<S30>/Switch2'
     *  Switch generated from: '<S30>/Switch3'
     *  Switch generated from: '<S30>/Switch4'
     *  Switch generated from: '<S30>/Switch5'
     *  Switch generated from: '<S30>/Switch6'
     *  Switch generated from: '<S30>/Switch7'
     *  Switch generated from: '<S30>/Switch8'
     *  Switch generated from: '<S30>/Switch9'
     */
    if (rtb_Equal1_e1) {
      rtb_signal2_n4 = localB->EnabledSubsystem_i5.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_i5.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_i5.In3;
      rtb_signal5 = localB->EnabledSubsystem_i5.In4;
      rtb_signal6 = localB->EnabledSubsystem_i5.In5;
      rtb_signal7 = localB->EnabledSubsystem_i5.In6;
      rtb_signal8 = localB->EnabledSubsystem_i5.In7;
      rtb_signal9 = localB->EnabledSubsystem_i5.In8;
    } else if (rtb_Equal2_b4) {
      rtb_signal2_n4 = localB->EnabledSubsystem_fv.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_fv.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_fv.In3;
      rtb_signal5 = localB->EnabledSubsystem_fv.In4;
      rtb_signal6 = localB->EnabledSubsystem_fv.In5;
      rtb_signal7 = localB->EnabledSubsystem_fv.In6;
      rtb_signal8 = localB->EnabledSubsystem_fv.In7;
      rtb_signal9 = localB->EnabledSubsystem_fv.In8;
    } else if (rtb_Equal3_b) {
      rtb_signal2_n4 = localB->EnabledSubsystem_o1.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_o1.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_o1.In3;
      rtb_signal5 = localB->EnabledSubsystem_o1.In4;
      rtb_signal6 = localB->EnabledSubsystem_o1.In5;
      rtb_signal7 = localB->EnabledSubsystem_o1.In6;
      rtb_signal8 = localB->EnabledSubsystem_o1.In7;
      rtb_signal9 = localB->EnabledSubsystem_o1.In8;
    } else if (rtb_Equal4_j) {
      rtb_signal2_n4 = localB->EnabledSubsystem_n.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_n.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_n.In3;
      rtb_signal5 = localB->EnabledSubsystem_n.In4;
      rtb_signal6 = localB->EnabledSubsystem_n.In5;
      rtb_signal7 = localB->EnabledSubsystem_n.In6;
      rtb_signal8 = localB->EnabledSubsystem_n.In7;
      rtb_signal9 = localB->EnabledSubsystem_n.In8;
    } else if (rtb_Equal5_d) {
      rtb_signal2_n4 = localB->EnabledSubsystem_e.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_e.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_e.In3;
      rtb_signal5 = localB->EnabledSubsystem_e.In4;
      rtb_signal6 = localB->EnabledSubsystem_e.In5;
      rtb_signal7 = localB->EnabledSubsystem_e.In6;
      rtb_signal8 = localB->EnabledSubsystem_e.In7;
      rtb_signal9 = localB->EnabledSubsystem_e.In8;
    } else {
      if (rtb_Equal6_a) {
        rtb_signal2_n4 = localB->EnabledSubsystem_i.In1;
      } else if (rtb_Equal9_f) {
        rtb_signal2_n4 = localB->EnabledSubsystem_j.In1;
      } else if (rtb_Equal10) {
        rtb_signal2_n4 = localB->EnabledSubsystem_o.In1;
      } else if (rtb_Equal11) {
        rtb_signal2_n4 = localB->EnabledSubsystem_f.In1;
      } else if (rtb_Equal7_g) {
        rtb_signal2_n4 = localB->EnabledSubsystem_p.In1;
      } else {
        rtb_signal2_n4 = localB->EnabledSubsystem_a.In1;
      }

      if (rtb_Equal6_a) {
        rtb_signal3_h2 = localB->EnabledSubsystem_i.In2;
      } else if (rtb_Equal9_f) {
        rtb_signal3_h2 = localB->EnabledSubsystem_j.In2;
      } else if (rtb_Equal10) {
        rtb_signal3_h2 = localB->EnabledSubsystem_o.In2;
      } else if (rtb_Equal11) {
        rtb_signal3_h2 = localB->EnabledSubsystem_f.In2;
      } else if (rtb_Equal7_g) {
        rtb_signal3_h2 = localB->EnabledSubsystem_p.In2;
      } else {
        rtb_signal3_h2 = localB->EnabledSubsystem_a.In2;
      }

      if (rtb_Equal6_a) {
        rtb_signal4_pa = localB->EnabledSubsystem_i.In3;
      } else if (rtb_Equal9_f) {
        rtb_signal4_pa = localB->EnabledSubsystem_j.In3;
      } else if (rtb_Equal10) {
        rtb_signal4_pa = localB->EnabledSubsystem_o.In3;
      } else if (rtb_Equal11) {
        rtb_signal4_pa = localB->EnabledSubsystem_f.In3;
      } else if (rtb_Equal7_g) {
        rtb_signal4_pa = localB->EnabledSubsystem_p.In3;
      } else {
        rtb_signal4_pa = localB->EnabledSubsystem_a.In3;
      }

      if (rtb_Equal6_a) {
        rtb_signal5 = localB->EnabledSubsystem_i.In4;
      } else if (rtb_Equal9_f) {
        rtb_signal5 = localB->EnabledSubsystem_j.In4;
      } else if (rtb_Equal10) {
        rtb_signal5 = localB->EnabledSubsystem_o.In4;
      } else if (rtb_Equal11) {
        rtb_signal5 = localB->EnabledSubsystem_f.In4;
      } else if (rtb_Equal7_g) {
        rtb_signal5 = localB->EnabledSubsystem_p.In4;
      } else {
        rtb_signal5 = localB->EnabledSubsystem_a.In4;
      }

      if (rtb_Equal6_a) {
        rtb_signal6 = localB->EnabledSubsystem_i.In5;
      } else if (rtb_Equal9_f) {
        rtb_signal6 = localB->EnabledSubsystem_j.In5;
      } else if (rtb_Equal10) {
        rtb_signal6 = localB->EnabledSubsystem_o.In5;
      } else if (rtb_Equal11) {
        rtb_signal6 = localB->EnabledSubsystem_f.In5;
      } else if (rtb_Equal7_g) {
        rtb_signal6 = localB->EnabledSubsystem_p.In5;
      } else {
        rtb_signal6 = localB->EnabledSubsystem_a.In5;
      }

      if (rtb_Equal6_a) {
        rtb_signal7 = localB->EnabledSubsystem_i.In6;
      } else if (rtb_Equal9_f) {
        rtb_signal7 = localB->EnabledSubsystem_j.In6;
      } else if (rtb_Equal10) {
        rtb_signal7 = localB->EnabledSubsystem_o.In6;
      } else if (rtb_Equal11) {
        rtb_signal7 = localB->EnabledSubsystem_f.In6;
      } else if (rtb_Equal7_g) {
        rtb_signal7 = localB->EnabledSubsystem_p.In6;
      } else {
        rtb_signal7 = localB->EnabledSubsystem_a.In6;
      }

      if (rtb_Equal6_a) {
        rtb_signal8 = localB->EnabledSubsystem_i.In7;
      } else if (rtb_Equal9_f) {
        rtb_signal8 = localB->EnabledSubsystem_j.In7;
      } else if (rtb_Equal10) {
        rtb_signal8 = localB->EnabledSubsystem_o.In7;
      } else if (rtb_Equal11) {
        rtb_signal8 = localB->EnabledSubsystem_f.In7;
      } else if (rtb_Equal7_g) {
        rtb_signal8 = localB->EnabledSubsystem_p.In7;
      } else {
        rtb_signal8 = localB->EnabledSubsystem_a.In7;
      }

      if (rtb_Equal6_a) {
        rtb_signal9 = localB->EnabledSubsystem_i.In8;
      } else if (rtb_Equal9_f) {
        rtb_signal9 = localB->EnabledSubsystem_j.In8;
      } else if (rtb_Equal10) {
        rtb_signal9 = localB->EnabledSubsystem_o.In8;
      } else if (rtb_Equal11) {
        rtb_signal9 = localB->EnabledSubsystem_f.In8;
      } else if (rtb_Equal7_g) {
        rtb_signal9 = localB->EnabledSubsystem_p.In8;
      } else {
        rtb_signal9 = localB->EnabledSubsystem_a.In8;
      }
    }
  }

  /* End of Switch generated from: '<S30>/Switch' */

  /* Outputs for Enabled SubSystem: '<S17>/Buffer ready' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* Logic: '<S17>/AND2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant7'
   *  RelationalOperator: '<S17>/Equal3'
   *  RelationalOperator: '<S17>/Equal6'
   */
  if ((*rtd_Rx_State_CAN1 == 1.0) && (0.0 == rtb_signal1_m)) {
    /* DataStoreWrite: '<S28>/Data Store Write' incorporates:
     *  Constant: '<S28>/New_Msg'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)2U);

    /* DataStoreWrite: '<S28>/Data Store Write1' incorporates:
     *  Constant: '<S28>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S17>/AND2' */
  /* End of Outputs for SubSystem: '<S17>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S17>/Update message buffers' incorporates:
   *  EnablePort: '<S31>/Enable'
   */
  /* Logic: '<S17>/AND3' incorporates:
   *  Constant: '<S17>/Constant4'
   *  Constant: '<S17>/Constant5'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S31>/Constant2'
   *  Constant: '<S31>/SET'
   *  Logic: '<S31>/AND'
   *  RelationalOperator: '<S17>/Equal4'
   *  RelationalOperator: '<S17>/Equal7'
   *  RelationalOperator: '<S31>/Equal'
   */
  if ((*rtd_Rx_State_CAN1 == 2.0) && (rtb_signal1_m >= 1.0)) {
    /* DataStoreWrite: '<S31>/Data Store Write1' */
    rtd_Msg_Rx_CAN1->Buffer_1 = rtb_signal2_n4;
    rtd_Msg_Rx_CAN1->Buffer_2 = rtb_signal3_h2;
    rtd_Msg_Rx_CAN1->Buffer_3 = rtb_signal4_pa;
    rtd_Msg_Rx_CAN1->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN1->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN1->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN1->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN1->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S31>/Data Store Write' incorporates:
     *  Constant: '<S31>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S31>/Data Store Write2' incorporates:
     *  Constant: '<S31>/SET'
     */
    *rtd_New_Msg_Ready_CAN1 = true;

    /* DataStoreWrite: '<S31>/Data Store Write5' incorporates:
     *  Constant: '<S31>/Idle_State'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)3U);

    /* DataStoreRead: '<S31>/Local_Time' */
    Rx_msg_ticks_CAN1 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S31>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN1 = Rx_msg_ticks_CAN1;

    /* DataTypeConversion: '<S31>/Cast To Double' */
    Rx_temporal_msg_CAN1 = rtb_signal2_n4;

    /* Outputs for Enabled SubSystem: '<S31>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S68>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN1 == 1.0)) {
      /* DataStoreWrite: '<S68>/Data Store Write2' incorporates:
       *  Constant: '<S68>/Constant2'
       */
      *rtd_Toggle_Pin_D12 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S31>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S17>/AND3' */
  /* End of Outputs for SubSystem: '<S17>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S17>/Prepare buffer' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* RelationalOperator: '<S17>/Equal5' incorporates:
   *  Constant: '<S17>/Constant6'
   */
  if (*rtd_Rx_State_CAN1 == 0.0) {
    /* DataStoreWrite: '<S29>/Data Store Write' incorporates:
     *  Constant: '<S29>/Constant1'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)1U);

    /* DataStoreWrite: '<S29>/Data Store Write1' incorporates:
     *  Constant: '<S29>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S17>/Equal5' */
  /* End of Outputs for SubSystem: '<S17>/Prepare buffer' */
}

/* Disable for function-call system: '<S8>/CAN2 Recieve' */
void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S73>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S103>/S-Function' incorporates:
     *  Outport: '<S83>/CAN_new'
     */
    localB->SFunction_o1_i = 0;

    /* Disable for SignalConversion generated from: '<S104>/In1' incorporates:
     *  Outport: '<S83>/Out2'
     */
    localB->EnabledSubsystem_os.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In2' incorporates:
     *  Outport: '<S83>/Out3'
     */
    localB->EnabledSubsystem_os.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In3' incorporates:
     *  Outport: '<S83>/Out4'
     */
    localB->EnabledSubsystem_os.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In4' incorporates:
     *  Outport: '<S83>/Out5'
     */
    localB->EnabledSubsystem_os.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In5' incorporates:
     *  Outport: '<S83>/Out6'
     */
    localB->EnabledSubsystem_os.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In6' incorporates:
     *  Outport: '<S83>/Out7'
     */
    localB->EnabledSubsystem_os.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In7' incorporates:
     *  Outport: '<S83>/Out8'
     */
    localB->EnabledSubsystem_os.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In8' incorporates:
     *  Outport: '<S83>/Out9'
     */
    localB->EnabledSubsystem_os.In8 = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S105>/S-Function' incorporates:
     *  Outport: '<S84>/CAN_new'
     */
    localB->SFunction_o1_o = 0;

    /* Disable for SignalConversion generated from: '<S106>/In1' incorporates:
     *  Outport: '<S84>/Out2'
     */
    localB->EnabledSubsystem_kf.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In2' incorporates:
     *  Outport: '<S84>/Out3'
     */
    localB->EnabledSubsystem_kf.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In3' incorporates:
     *  Outport: '<S84>/Out4'
     */
    localB->EnabledSubsystem_kf.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In4' incorporates:
     *  Outport: '<S84>/Out5'
     */
    localB->EnabledSubsystem_kf.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In5' incorporates:
     *  Outport: '<S84>/Out6'
     */
    localB->EnabledSubsystem_kf.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In6' incorporates:
     *  Outport: '<S84>/Out7'
     */
    localB->EnabledSubsystem_kf.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In7' incorporates:
     *  Outport: '<S84>/Out8'
     */
    localB->EnabledSubsystem_kf.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In8' incorporates:
     *  Outport: '<S84>/Out9'
     */
    localB->EnabledSubsystem_kf.In8 = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S107>/S-Function' incorporates:
     *  Outport: '<S85>/CAN_new'
     */
    localB->SFunction_o1_f = 0;

    /* Disable for SignalConversion generated from: '<S108>/In1' incorporates:
     *  Outport: '<S85>/Out2'
     */
    localB->EnabledSubsystem_nd.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In2' incorporates:
     *  Outport: '<S85>/Out3'
     */
    localB->EnabledSubsystem_nd.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In3' incorporates:
     *  Outport: '<S85>/Out4'
     */
    localB->EnabledSubsystem_nd.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In4' incorporates:
     *  Outport: '<S85>/Out5'
     */
    localB->EnabledSubsystem_nd.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In5' incorporates:
     *  Outport: '<S85>/Out6'
     */
    localB->EnabledSubsystem_nd.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In6' incorporates:
     *  Outport: '<S85>/Out7'
     */
    localB->EnabledSubsystem_nd.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In7' incorporates:
     *  Outport: '<S85>/Out8'
     */
    localB->EnabledSubsystem_nd.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In8' incorporates:
     *  Outport: '<S85>/Out9'
     */
    localB->EnabledSubsystem_nd.In8 = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S109>/S-Function' incorporates:
     *  Outport: '<S86>/CAN_new'
     */
    localB->SFunction_o1 = 0;

    /* Disable for SignalConversion generated from: '<S110>/In1' incorporates:
     *  Outport: '<S86>/Out2'
     */
    localB->EnabledSubsystem_j.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In2' incorporates:
     *  Outport: '<S86>/Out3'
     */
    localB->EnabledSubsystem_j.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In3' incorporates:
     *  Outport: '<S86>/Out4'
     */
    localB->EnabledSubsystem_j.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In4' incorporates:
     *  Outport: '<S86>/Out5'
     */
    localB->EnabledSubsystem_j.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In5' incorporates:
     *  Outport: '<S86>/Out6'
     */
    localB->EnabledSubsystem_j.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In6' incorporates:
     *  Outport: '<S86>/Out7'
     */
    localB->EnabledSubsystem_j.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In7' incorporates:
     *  Outport: '<S86>/Out8'
     */
    localB->EnabledSubsystem_j.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In8' incorporates:
     *  Outport: '<S86>/Out9'
     */
    localB->EnabledSubsystem_j.In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue1_ID_CAN' */
  if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S87>/S-Function' incorporates:
     *  Outport: '<S75>/CAN_new'
     */
    localB->SFunction_o1_k = 0;

    /* Disable for SignalConversion generated from: '<S88>/In1' incorporates:
     *  Outport: '<S75>/Out2'
     */
    localB->EnabledSubsystem_n.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In2' incorporates:
     *  Outport: '<S75>/Out3'
     */
    localB->EnabledSubsystem_n.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In3' incorporates:
     *  Outport: '<S75>/Out4'
     */
    localB->EnabledSubsystem_n.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In4' incorporates:
     *  Outport: '<S75>/Out5'
     */
    localB->EnabledSubsystem_n.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In5' incorporates:
     *  Outport: '<S75>/Out6'
     */
    localB->EnabledSubsystem_n.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In6' incorporates:
     *  Outport: '<S75>/Out7'
     */
    localB->EnabledSubsystem_n.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In7' incorporates:
     *  Outport: '<S75>/Out8'
     */
    localB->EnabledSubsystem_n.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In8' incorporates:
     *  Outport: '<S75>/Out9'
     */
    localB->EnabledSubsystem_n.In8 = ((uint8_T)0U);
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN' */
  if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S89>/S-Function' incorporates:
     *  Outport: '<S76>/CAN_new'
     */
    localB->SFunction_o1_o0 = 0;

    /* Disable for SignalConversion generated from: '<S90>/In1' incorporates:
     *  Outport: '<S76>/Out2'
     */
    localB->EnabledSubsystem_d.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In2' incorporates:
     *  Outport: '<S76>/Out3'
     */
    localB->EnabledSubsystem_d.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In3' incorporates:
     *  Outport: '<S76>/Out4'
     */
    localB->EnabledSubsystem_d.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In4' incorporates:
     *  Outport: '<S76>/Out5'
     */
    localB->EnabledSubsystem_d.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In5' incorporates:
     *  Outport: '<S76>/Out6'
     */
    localB->EnabledSubsystem_d.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In6' incorporates:
     *  Outport: '<S76>/Out7'
     */
    localB->EnabledSubsystem_d.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In7' incorporates:
     *  Outport: '<S76>/Out8'
     */
    localB->EnabledSubsystem_d.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In8' incorporates:
     *  Outport: '<S76>/Out9'
     */
    localB->EnabledSubsystem_d.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN1' */
  if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S91>/S-Function' incorporates:
     *  Outport: '<S77>/CAN_new'
     */
    localB->SFunction_o1_d = 0;

    /* Disable for SignalConversion generated from: '<S92>/In1' incorporates:
     *  Outport: '<S77>/Out2'
     */
    localB->EnabledSubsystem_k.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In2' incorporates:
     *  Outport: '<S77>/Out3'
     */
    localB->EnabledSubsystem_k.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In3' incorporates:
     *  Outport: '<S77>/Out4'
     */
    localB->EnabledSubsystem_k.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In4' incorporates:
     *  Outport: '<S77>/Out5'
     */
    localB->EnabledSubsystem_k.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In5' incorporates:
     *  Outport: '<S77>/Out6'
     */
    localB->EnabledSubsystem_k.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In6' incorporates:
     *  Outport: '<S77>/Out7'
     */
    localB->EnabledSubsystem_k.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In7' incorporates:
     *  Outport: '<S77>/Out8'
     */
    localB->EnabledSubsystem_k.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In8' incorporates:
     *  Outport: '<S77>/Out9'
     */
    localB->EnabledSubsystem_k.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN1' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN4' */
  if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S97>/S-Function' incorporates:
     *  Outport: '<S80>/CAN_new'
     */
    localB->SFunction_o1_l = 0;

    /* Disable for SignalConversion generated from: '<S98>/In1' incorporates:
     *  Outport: '<S80>/Out2'
     */
    localB->EnabledSubsystem_nq.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In2' incorporates:
     *  Outport: '<S80>/Out3'
     */
    localB->EnabledSubsystem_nq.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In3' incorporates:
     *  Outport: '<S80>/Out4'
     */
    localB->EnabledSubsystem_nq.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In4' incorporates:
     *  Outport: '<S80>/Out5'
     */
    localB->EnabledSubsystem_nq.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In5' incorporates:
     *  Outport: '<S80>/Out6'
     */
    localB->EnabledSubsystem_nq.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In6' incorporates:
     *  Outport: '<S80>/Out7'
     */
    localB->EnabledSubsystem_nq.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In7' incorporates:
     *  Outport: '<S80>/Out8'
     */
    localB->EnabledSubsystem_nq.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In8' incorporates:
     *  Outport: '<S80>/Out9'
     */
    localB->EnabledSubsystem_nq.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN4' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN5' */
  if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S99>/S-Function' incorporates:
     *  Outport: '<S81>/CAN_new'
     */
    localB->SFunction_o1_e = 0;

    /* Disable for SignalConversion generated from: '<S100>/In1' incorporates:
     *  Outport: '<S81>/Out2'
     */
    localB->EnabledSubsystem_p.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In2' incorporates:
     *  Outport: '<S81>/Out3'
     */
    localB->EnabledSubsystem_p.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In3' incorporates:
     *  Outport: '<S81>/Out4'
     */
    localB->EnabledSubsystem_p.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In4' incorporates:
     *  Outport: '<S81>/Out5'
     */
    localB->EnabledSubsystem_p.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In5' incorporates:
     *  Outport: '<S81>/Out6'
     */
    localB->EnabledSubsystem_p.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In6' incorporates:
     *  Outport: '<S81>/Out7'
     */
    localB->EnabledSubsystem_p.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In7' incorporates:
     *  Outport: '<S81>/Out8'
     */
    localB->EnabledSubsystem_p.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In8' incorporates:
     *  Outport: '<S81>/Out9'
     */
    localB->EnabledSubsystem_p.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN5' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN6' */
  if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S101>/S-Function' incorporates:
     *  Outport: '<S82>/CAN_new'
     */
    localB->SFunction_o1_a = 0;

    /* Disable for SignalConversion generated from: '<S102>/In1' incorporates:
     *  Outport: '<S82>/Out2'
     */
    localB->EnabledSubsystem_o.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In2' incorporates:
     *  Outport: '<S82>/Out3'
     */
    localB->EnabledSubsystem_o.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In3' incorporates:
     *  Outport: '<S82>/Out4'
     */
    localB->EnabledSubsystem_o.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In4' incorporates:
     *  Outport: '<S82>/Out5'
     */
    localB->EnabledSubsystem_o.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In5' incorporates:
     *  Outport: '<S82>/Out6'
     */
    localB->EnabledSubsystem_o.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In6' incorporates:
     *  Outport: '<S82>/Out7'
     */
    localB->EnabledSubsystem_o.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In7' incorporates:
     *  Outport: '<S82>/Out8'
     */
    localB->EnabledSubsystem_o.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In8' incorporates:
     *  Outport: '<S82>/Out9'
     */
    localB->EnabledSubsystem_o.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN6' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN2' */
  if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S93>/S-Function' incorporates:
     *  Outport: '<S78>/CAN_new'
     */
    localB->SFunction_o1_p = 0;

    /* Disable for SignalConversion generated from: '<S94>/In1' incorporates:
     *  Outport: '<S78>/Out2'
     */
    localB->EnabledSubsystem_f.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In2' incorporates:
     *  Outport: '<S78>/Out3'
     */
    localB->EnabledSubsystem_f.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In3' incorporates:
     *  Outport: '<S78>/Out4'
     */
    localB->EnabledSubsystem_f.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In4' incorporates:
     *  Outport: '<S78>/Out5'
     */
    localB->EnabledSubsystem_f.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In5' incorporates:
     *  Outport: '<S78>/Out6'
     */
    localB->EnabledSubsystem_f.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In6' incorporates:
     *  Outport: '<S78>/Out7'
     */
    localB->EnabledSubsystem_f.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In7' incorporates:
     *  Outport: '<S78>/Out8'
     */
    localB->EnabledSubsystem_f.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In8' incorporates:
     *  Outport: '<S78>/Out9'
     */
    localB->EnabledSubsystem_f.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN2' */

  /* Disable for Enabled SubSystem: '<S73>/PotValue2_ID_CAN3' */
  if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S95>/S-Function' incorporates:
     *  Outport: '<S79>/CAN_new'
     */
    localB->SFunction_o1_ib = 0;

    /* Disable for SignalConversion generated from: '<S96>/In1' incorporates:
     *  Outport: '<S79>/Out2'
     */
    localB->EnabledSubsystem_c.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In2' incorporates:
     *  Outport: '<S79>/Out3'
     */
    localB->EnabledSubsystem_c.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In3' incorporates:
     *  Outport: '<S79>/Out4'
     */
    localB->EnabledSubsystem_c.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In4' incorporates:
     *  Outport: '<S79>/Out5'
     */
    localB->EnabledSubsystem_c.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In5' incorporates:
     *  Outport: '<S79>/Out6'
     */
    localB->EnabledSubsystem_c.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In6' incorporates:
     *  Outport: '<S79>/Out7'
     */
    localB->EnabledSubsystem_c.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In7' incorporates:
     *  Outport: '<S79>/Out8'
     */
    localB->EnabledSubsystem_c.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In8' incorporates:
     *  Outport: '<S79>/Out9'
     */
    localB->EnabledSubsystem_c.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/PotValue2_ID_CAN3' */
}

/* Start for function-call system: '<S8>/CAN2 Recieve' */
void CAN2Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S103>/S-Function' incorporates:
   *  Constant: '<S83>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 1U);

  /* End of Start for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S105>/S-Function' incorporates:
   *  Constant: '<S84>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 11U);

  /* End of Start for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S107>/S-Function' incorporates:
   *  Constant: '<S85>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 12U);

  /* End of Start for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S109>/S-Function' incorporates:
   *  Constant: '<S86>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 13U);

  /* End of Start for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/PotValue1_ID_CAN' */

  /* Start for M-S-Function: '<S87>/S-Function' incorporates:
   *  Constant: '<S75>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 22U);

  /* End of Start for SubSystem: '<S73>/PotValue1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN' */

  /* Start for M-S-Function: '<S89>/S-Function' incorporates:
   *  Constant: '<S76>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 44U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN1' */

  /* Start for M-S-Function: '<S91>/S-Function' incorporates:
   *  Constant: '<S77>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 23U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN1' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN4' */

  /* Start for M-S-Function: '<S97>/S-Function' incorporates:
   *  Constant: '<S80>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 46U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN4' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN5' */

  /* Start for M-S-Function: '<S99>/S-Function' incorporates:
   *  Constant: '<S81>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 24U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN5' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN6' */

  /* Start for M-S-Function: '<S101>/S-Function' incorporates:
   *  Constant: '<S82>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 48U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN6' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN2' */

  /* Start for M-S-Function: '<S93>/S-Function' incorporates:
   *  Constant: '<S78>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 31U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN2' */

  /* Start for Enabled SubSystem: '<S73>/PotValue2_ID_CAN3' */

  /* Start for M-S-Function: '<S95>/S-Function' incorporates:
   *  Constant: '<S79>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 32U);

  /* End of Start for SubSystem: '<S73>/PotValue2_ID_CAN3' */
}

/* Output and update for function-call system: '<S8>/CAN2 Recieve' */
void CAN2Recieve(const uint16_T *rtd_Local_Ticks, msg_buffer_type
                 *rtd_Msg_Rx_CAN2, uint16_T *rtd_Msg_Rx_Ticks_CAN2, boolean_T
                 *rtd_New_Msg_Ready_CAN2, const uint32_T *rtd_RxID_CAN2, uint8_T
                 *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
                 *rtd_Toggle_Pin_D8, rtB_CAN2Recieve *localB, const
                 rtC_CAN2Recieve *localC, rtDW_CAN2Recieve *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_m;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_ic;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_o5;
  uint8_T rtb_SFunction_o7_oe;
  uint8_T rtb_SFunction_o8_p;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_hh;
  uint8_T rtb_SFunction_o3_d;
  uint8_T rtb_SFunction_o4_h;
  uint8_T rtb_SFunction_o5_a2;
  uint8_T rtb_SFunction_o6_j;
  uint8_T rtb_SFunction_o7_hh;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_cc;
  uint8_T rtb_SFunction_o2_g;
  uint8_T rtb_SFunction_o3_jx;
  uint8_T rtb_SFunction_o4_it;
  uint8_T rtb_SFunction_o5_kz;
  uint8_T rtb_SFunction_o6_lq;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_j;
  uint8_T rtb_SFunction_o9_cn;
  uint8_T rtb_SFunction_o2_mg;
  uint8_T rtb_SFunction_o3_kh;
  uint8_T rtb_SFunction_o4_f4;
  uint8_T rtb_SFunction_o5_p;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_d3;
  uint8_T rtb_SFunction_o8_j3;
  uint8_T rtb_SFunction_o9_o;
  uint8_T rtb_SFunction_o2_a;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_jb;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_c;
  uint8_T rtb_SFunction_o7_co;
  uint8_T rtb_SFunction_o8_e;
  uint8_T rtb_SFunction_o9_oi;
  uint8_T rtb_SFunction_o2_nw;
  uint8_T rtb_SFunction_o3_f;
  uint8_T rtb_SFunction_o4_e;
  uint8_T rtb_SFunction_o5_pd;
  uint8_T rtb_SFunction_o6_f;
  uint8_T rtb_SFunction_o7_px;
  uint8_T rtb_SFunction_o8_ea;
  uint8_T rtb_SFunction_o9_n5;
  uint8_T rtb_SFunction_o2_ej;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_d;
  uint8_T rtb_SFunction_o5_l;
  uint8_T rtb_SFunction_o6_ot;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_er;
  uint8_T rtb_SFunction_o9_a0;
  uint8_T rtb_SFunction_o2_c0;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_iq;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_f1;
  uint8_T rtb_SFunction_o7_ae;
  uint8_T rtb_SFunction_o8_lo;
  uint8_T rtb_SFunction_o9_ei;
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_nf;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_cs;
  uint8_T rtb_SFunction_o6_n5;
  uint8_T rtb_SFunction_o7_cz;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_di;
  uint8_T rtb_SFunction_o2_j5;
  uint8_T rtb_SFunction_o3_im;
  uint8_T rtb_SFunction_o4_o;
  uint8_T rtb_SFunction_o5_mg;
  uint8_T rtb_SFunction_o6_ka;
  uint8_T rtb_SFunction_o7_kc;
  uint8_T rtb_SFunction_o8_k;
  uint8_T rtb_SFunction_o9_or;
  uint8_T rtb_SFunction_o2_a4;
  uint8_T rtb_SFunction_o3_kl5;
  uint8_T rtb_SFunction_o4_g4;
  uint8_T rtb_SFunction_o5_ma;
  uint8_T rtb_SFunction_o6_ls;
  uint8_T rtb_SFunction_o7_n;
  uint8_T rtb_SFunction_o8_bq;
  uint8_T rtb_SFunction_o9_mz;
  uint8_T rtb_SFunction_o2_ny;
  uint8_T rtb_SFunction_o3_gd;
  uint8_T rtb_SFunction_o4_bw;
  uint8_T rtb_SFunction_o5_m3;
  uint8_T rtb_SFunction_o6_d0;
  uint8_T rtb_SFunction_o7_b;
  uint8_T rtb_SFunction_o8_ph;
  uint8_T rtb_SFunction_o9_op;
  int8_T rtb_signal1_b5;
  uint8_T rtb_signal2_j;
  uint8_T rtb_signal3_fy;
  uint8_T rtb_signal4_m;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;
  boolean_T rtb_Equal10;
  boolean_T rtb_Equal11;
  boolean_T rtb_Equal1_i;
  boolean_T rtb_Equal2_ba;
  boolean_T rtb_Equal3_e;
  boolean_T rtb_Equal4_o;
  boolean_T rtb_Equal5_h;
  boolean_T rtb_Equal6_gt;
  boolean_T rtb_Equal7_m;
  boolean_T rtb_Equal9_g;
  boolean_T rtb_Equal_d3;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S19>/Constant3'
   *  DataStoreRead: '<S19>/Data Store Read1'
   */
  RxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S19>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN2_counter_s;

  /* DataStoreRead: '<S19>/Data Store Read' */
  RxID_CAN2_s = *rtd_RxID_CAN2;

  /* RelationalOperator: '<S73>/Equal' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_Equal_d3 = (RxID_CAN2_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S73>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S83>/Enable'
   */
  if (rtb_Equal_d3) {
    localDW->Sync_ID_CAN_MODE = true;

    /* M-S-Function: '<S103>/S-Function' incorporates:
     *  Constant: '<S83>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_mg = canRxData_1_1U.uint8_T_info[0];
      rtb_SFunction_o3_kh = canRxData_1_1U.uint8_T_info[1];
      rtb_SFunction_o4_f4 = canRxData_1_1U.uint8_T_info[2];
      rtb_SFunction_o5_p = canRxData_1_1U.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_1_1U.uint8_T_info[4];
      rtb_SFunction_o7_d3 = canRxData_1_1U.uint8_T_info[5];
      rtb_SFunction_o8_j3 = canRxData_1_1U.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_1_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S103>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_i, rtb_SFunction_o2_mg,
                     rtb_SFunction_o3_kh, rtb_SFunction_o4_f4,
                     rtb_SFunction_o5_p, rtb_SFunction_o6_k, rtb_SFunction_o7_d3,
                     rtb_SFunction_o8_j3, rtb_SFunction_o9_o,
                     &localB->EnabledSubsystem_os);

    /* End of Outputs for SubSystem: '<S103>/Enabled Subsystem' */
  } else if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S103>/S-Function' incorporates:
     *  Outport: '<S83>/CAN_new'
     */
    localB->SFunction_o1_i = 0;

    /* Disable for SignalConversion generated from: '<S104>/In1' incorporates:
     *  Outport: '<S83>/Out2'
     */
    localB->EnabledSubsystem_os.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In2' incorporates:
     *  Outport: '<S83>/Out3'
     */
    localB->EnabledSubsystem_os.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In3' incorporates:
     *  Outport: '<S83>/Out4'
     */
    localB->EnabledSubsystem_os.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In4' incorporates:
     *  Outport: '<S83>/Out5'
     */
    localB->EnabledSubsystem_os.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In5' incorporates:
     *  Outport: '<S83>/Out6'
     */
    localB->EnabledSubsystem_os.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In6' incorporates:
     *  Outport: '<S83>/Out7'
     */
    localB->EnabledSubsystem_os.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In7' incorporates:
     *  Outport: '<S83>/Out8'
     */
    localB->EnabledSubsystem_os.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S104>/In8' incorporates:
     *  Outport: '<S83>/Out9'
     */
    localB->EnabledSubsystem_os.In8 = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/Sync_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal1' incorporates:
   *  Constant: '<S73>/Constant1'
   */
  rtb_Equal1_i = (RxID_CAN2_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S84>/Enable'
   */
  if (rtb_Equal1_i) {
    localDW->Vote1_ID_CAN_MODE = true;

    /* M-S-Function: '<S105>/S-Function' incorporates:
     *  Constant: '<S84>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o = CanIoGetMessage(1, 11U, NULL,
      &canRxData_1_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o > 0) {
      /* read the data */
      rtb_SFunction_o2_g = canRxData_1_11U.uint8_T_info[0];
      rtb_SFunction_o3_jx = canRxData_1_11U.uint8_T_info[1];
      rtb_SFunction_o4_it = canRxData_1_11U.uint8_T_info[2];
      rtb_SFunction_o5_kz = canRxData_1_11U.uint8_T_info[3];
      rtb_SFunction_o6_lq = canRxData_1_11U.uint8_T_info[4];
      rtb_SFunction_o7_d = canRxData_1_11U.uint8_T_info[5];
      rtb_SFunction_o8_j = canRxData_1_11U.uint8_T_info[6];
      rtb_SFunction_o9_cn = canRxData_1_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S105>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_o, rtb_SFunction_o2_g,
                     rtb_SFunction_o3_jx, rtb_SFunction_o4_it,
                     rtb_SFunction_o5_kz, rtb_SFunction_o6_lq,
                     rtb_SFunction_o7_d, rtb_SFunction_o8_j, rtb_SFunction_o9_cn,
                     &localB->EnabledSubsystem_kf);

    /* End of Outputs for SubSystem: '<S105>/Enabled Subsystem' */
  } else if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S105>/S-Function' incorporates:
     *  Outport: '<S84>/CAN_new'
     */
    localB->SFunction_o1_o = 0;

    /* Disable for SignalConversion generated from: '<S106>/In1' incorporates:
     *  Outport: '<S84>/Out2'
     */
    localB->EnabledSubsystem_kf.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In2' incorporates:
     *  Outport: '<S84>/Out3'
     */
    localB->EnabledSubsystem_kf.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In3' incorporates:
     *  Outport: '<S84>/Out4'
     */
    localB->EnabledSubsystem_kf.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In4' incorporates:
     *  Outport: '<S84>/Out5'
     */
    localB->EnabledSubsystem_kf.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In5' incorporates:
     *  Outport: '<S84>/Out6'
     */
    localB->EnabledSubsystem_kf.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In6' incorporates:
     *  Outport: '<S84>/Out7'
     */
    localB->EnabledSubsystem_kf.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In7' incorporates:
     *  Outport: '<S84>/Out8'
     */
    localB->EnabledSubsystem_kf.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S106>/In8' incorporates:
     *  Outport: '<S84>/Out9'
     */
    localB->EnabledSubsystem_kf.In8 = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal2' incorporates:
   *  Constant: '<S73>/Constant2'
   */
  rtb_Equal2_ba = (RxID_CAN2_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S85>/Enable'
   */
  if (rtb_Equal2_ba) {
    localDW->Vote2_ID_CAN_MODE = true;

    /* M-S-Function: '<S107>/S-Function' incorporates:
     *  Constant: '<S85>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_f = CanIoGetMessage(1, 12U, NULL,
      &canRxData_1_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_f > 0) {
      /* read the data */
      rtb_SFunction_o2_hh = canRxData_1_12U.uint8_T_info[0];
      rtb_SFunction_o3_d = canRxData_1_12U.uint8_T_info[1];
      rtb_SFunction_o4_h = canRxData_1_12U.uint8_T_info[2];
      rtb_SFunction_o5_a2 = canRxData_1_12U.uint8_T_info[3];
      rtb_SFunction_o6_j = canRxData_1_12U.uint8_T_info[4];
      rtb_SFunction_o7_hh = canRxData_1_12U.uint8_T_info[5];
      rtb_SFunction_o8_l = canRxData_1_12U.uint8_T_info[6];
      rtb_SFunction_o9_cc = canRxData_1_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S107>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_f, rtb_SFunction_o2_hh,
                     rtb_SFunction_o3_d, rtb_SFunction_o4_h, rtb_SFunction_o5_a2,
                     rtb_SFunction_o6_j, rtb_SFunction_o7_hh, rtb_SFunction_o8_l,
                     rtb_SFunction_o9_cc, &localB->EnabledSubsystem_nd);

    /* End of Outputs for SubSystem: '<S107>/Enabled Subsystem' */
  } else if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S107>/S-Function' incorporates:
     *  Outport: '<S85>/CAN_new'
     */
    localB->SFunction_o1_f = 0;

    /* Disable for SignalConversion generated from: '<S108>/In1' incorporates:
     *  Outport: '<S85>/Out2'
     */
    localB->EnabledSubsystem_nd.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In2' incorporates:
     *  Outport: '<S85>/Out3'
     */
    localB->EnabledSubsystem_nd.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In3' incorporates:
     *  Outport: '<S85>/Out4'
     */
    localB->EnabledSubsystem_nd.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In4' incorporates:
     *  Outport: '<S85>/Out5'
     */
    localB->EnabledSubsystem_nd.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In5' incorporates:
     *  Outport: '<S85>/Out6'
     */
    localB->EnabledSubsystem_nd.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In6' incorporates:
     *  Outport: '<S85>/Out7'
     */
    localB->EnabledSubsystem_nd.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In7' incorporates:
     *  Outport: '<S85>/Out8'
     */
    localB->EnabledSubsystem_nd.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S108>/In8' incorporates:
     *  Outport: '<S85>/Out9'
     */
    localB->EnabledSubsystem_nd.In8 = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal3' incorporates:
   *  Constant: '<S73>/Constant3'
   */
  rtb_Equal3_e = (RxID_CAN2_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtb_Equal3_e) {
    localDW->Vote3_ID_CAN_MODE = true;

    /* M-S-Function: '<S109>/S-Function' incorporates:
     *  Constant: '<S86>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(1, 13U, NULL,
      &canRxData_1_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_m = canRxData_1_13U.uint8_T_info[0];
      rtb_SFunction_o3_e = canRxData_1_13U.uint8_T_info[1];
      rtb_SFunction_o4_ic = canRxData_1_13U.uint8_T_info[2];
      rtb_SFunction_o5_f = canRxData_1_13U.uint8_T_info[3];
      rtb_SFunction_o6_o5 = canRxData_1_13U.uint8_T_info[4];
      rtb_SFunction_o7_oe = canRxData_1_13U.uint8_T_info[5];
      rtb_SFunction_o8_p = canRxData_1_13U.uint8_T_info[6];
      rtb_SFunction_o9_l = canRxData_1_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S109>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1, rtb_SFunction_o2_m,
                     rtb_SFunction_o3_e, rtb_SFunction_o4_ic, rtb_SFunction_o5_f,
                     rtb_SFunction_o6_o5, rtb_SFunction_o7_oe,
                     rtb_SFunction_o8_p, rtb_SFunction_o9_l,
                     &localB->EnabledSubsystem_j);

    /* End of Outputs for SubSystem: '<S109>/Enabled Subsystem' */
  } else if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S109>/S-Function' incorporates:
     *  Outport: '<S86>/CAN_new'
     */
    localB->SFunction_o1 = 0;

    /* Disable for SignalConversion generated from: '<S110>/In1' incorporates:
     *  Outport: '<S86>/Out2'
     */
    localB->EnabledSubsystem_j.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In2' incorporates:
     *  Outport: '<S86>/Out3'
     */
    localB->EnabledSubsystem_j.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In3' incorporates:
     *  Outport: '<S86>/Out4'
     */
    localB->EnabledSubsystem_j.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In4' incorporates:
     *  Outport: '<S86>/Out5'
     */
    localB->EnabledSubsystem_j.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In5' incorporates:
     *  Outport: '<S86>/Out6'
     */
    localB->EnabledSubsystem_j.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In6' incorporates:
     *  Outport: '<S86>/Out7'
     */
    localB->EnabledSubsystem_j.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In7' incorporates:
     *  Outport: '<S86>/Out8'
     */
    localB->EnabledSubsystem_j.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S110>/In8' incorporates:
     *  Outport: '<S86>/Out9'
     */
    localB->EnabledSubsystem_j.In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal4' */
  rtb_Equal4_o = (RxID_CAN2_s == localC->Product);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue1_ID_CAN' incorporates:
   *  EnablePort: '<S75>/Enable'
   */
  if (rtb_Equal4_o) {
    localDW->PotValue1_ID_CAN_MODE = true;

    /* M-S-Function: '<S87>/S-Function' incorporates:
     *  Constant: '<S75>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(1, 22U, NULL,
      &canRxData_1_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_ny = canRxData_1_22U.uint8_T_info[0];
      rtb_SFunction_o3_gd = canRxData_1_22U.uint8_T_info[1];
      rtb_SFunction_o4_bw = canRxData_1_22U.uint8_T_info[2];
      rtb_SFunction_o5_m3 = canRxData_1_22U.uint8_T_info[3];
      rtb_SFunction_o6_d0 = canRxData_1_22U.uint8_T_info[4];
      rtb_SFunction_o7_b = canRxData_1_22U.uint8_T_info[5];
      rtb_SFunction_o8_ph = canRxData_1_22U.uint8_T_info[6];
      rtb_SFunction_o9_op = canRxData_1_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S87>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_k, rtb_SFunction_o2_ny,
                     rtb_SFunction_o3_gd, rtb_SFunction_o4_bw,
                     rtb_SFunction_o5_m3, rtb_SFunction_o6_d0,
                     rtb_SFunction_o7_b, rtb_SFunction_o8_ph,
                     rtb_SFunction_o9_op, &localB->EnabledSubsystem_n);

    /* End of Outputs for SubSystem: '<S87>/Enabled Subsystem' */
  } else if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S87>/S-Function' incorporates:
     *  Outport: '<S75>/CAN_new'
     */
    localB->SFunction_o1_k = 0;

    /* Disable for SignalConversion generated from: '<S88>/In1' incorporates:
     *  Outport: '<S75>/Out2'
     */
    localB->EnabledSubsystem_n.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In2' incorporates:
     *  Outport: '<S75>/Out3'
     */
    localB->EnabledSubsystem_n.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In3' incorporates:
     *  Outport: '<S75>/Out4'
     */
    localB->EnabledSubsystem_n.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In4' incorporates:
     *  Outport: '<S75>/Out5'
     */
    localB->EnabledSubsystem_n.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In5' incorporates:
     *  Outport: '<S75>/Out6'
     */
    localB->EnabledSubsystem_n.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In6' incorporates:
     *  Outport: '<S75>/Out7'
     */
    localB->EnabledSubsystem_n.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In7' incorporates:
     *  Outport: '<S75>/Out8'
     */
    localB->EnabledSubsystem_n.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S88>/In8' incorporates:
     *  Outport: '<S75>/Out9'
     */
    localB->EnabledSubsystem_n.In8 = ((uint8_T)0U);
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal5' */
  rtb_Equal5_h = (RxID_CAN2_s == localC->Product1);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN' incorporates:
   *  EnablePort: '<S76>/Enable'
   */
  if (rtb_Equal5_h) {
    localDW->PotValue2_ID_CAN_MODE = true;

    /* M-S-Function: '<S89>/S-Function' incorporates:
     *  Constant: '<S76>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o0 = CanIoGetMessage(1, 44U, NULL,
      &canRxData_1_44U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o0 > 0) {
      /* read the data */
      rtb_SFunction_o2_a4 = canRxData_1_44U.uint8_T_info[0];
      rtb_SFunction_o3_kl5 = canRxData_1_44U.uint8_T_info[1];
      rtb_SFunction_o4_g4 = canRxData_1_44U.uint8_T_info[2];
      rtb_SFunction_o5_ma = canRxData_1_44U.uint8_T_info[3];
      rtb_SFunction_o6_ls = canRxData_1_44U.uint8_T_info[4];
      rtb_SFunction_o7_n = canRxData_1_44U.uint8_T_info[5];
      rtb_SFunction_o8_bq = canRxData_1_44U.uint8_T_info[6];
      rtb_SFunction_o9_mz = canRxData_1_44U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S89>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_o0, rtb_SFunction_o2_a4,
                     rtb_SFunction_o3_kl5, rtb_SFunction_o4_g4,
                     rtb_SFunction_o5_ma, rtb_SFunction_o6_ls,
                     rtb_SFunction_o7_n, rtb_SFunction_o8_bq,
                     rtb_SFunction_o9_mz, &localB->EnabledSubsystem_d);

    /* End of Outputs for SubSystem: '<S89>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S89>/S-Function' incorporates:
     *  Outport: '<S76>/CAN_new'
     */
    localB->SFunction_o1_o0 = 0;

    /* Disable for SignalConversion generated from: '<S90>/In1' incorporates:
     *  Outport: '<S76>/Out2'
     */
    localB->EnabledSubsystem_d.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In2' incorporates:
     *  Outport: '<S76>/Out3'
     */
    localB->EnabledSubsystem_d.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In3' incorporates:
     *  Outport: '<S76>/Out4'
     */
    localB->EnabledSubsystem_d.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In4' incorporates:
     *  Outport: '<S76>/Out5'
     */
    localB->EnabledSubsystem_d.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In5' incorporates:
     *  Outport: '<S76>/Out6'
     */
    localB->EnabledSubsystem_d.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In6' incorporates:
     *  Outport: '<S76>/Out7'
     */
    localB->EnabledSubsystem_d.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In7' incorporates:
     *  Outport: '<S76>/Out8'
     */
    localB->EnabledSubsystem_d.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S90>/In8' incorporates:
     *  Outport: '<S76>/Out9'
     */
    localB->EnabledSubsystem_d.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal6' */
  rtb_Equal6_gt = (RxID_CAN2_s == localC->Product2);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN1' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  if (rtb_Equal6_gt) {
    localDW->PotValue2_ID_CAN1_MODE = true;

    /* M-S-Function: '<S91>/S-Function' incorporates:
     *  Constant: '<S77>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_d = CanIoGetMessage(1, 23U, NULL,
      &canRxData_1_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_d > 0) {
      /* read the data */
      rtb_SFunction_o2_j5 = canRxData_1_23U.uint8_T_info[0];
      rtb_SFunction_o3_im = canRxData_1_23U.uint8_T_info[1];
      rtb_SFunction_o4_o = canRxData_1_23U.uint8_T_info[2];
      rtb_SFunction_o5_mg = canRxData_1_23U.uint8_T_info[3];
      rtb_SFunction_o6_ka = canRxData_1_23U.uint8_T_info[4];
      rtb_SFunction_o7_kc = canRxData_1_23U.uint8_T_info[5];
      rtb_SFunction_o8_k = canRxData_1_23U.uint8_T_info[6];
      rtb_SFunction_o9_or = canRxData_1_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S91>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_d, rtb_SFunction_o2_j5,
                     rtb_SFunction_o3_im, rtb_SFunction_o4_o,
                     rtb_SFunction_o5_mg, rtb_SFunction_o6_ka,
                     rtb_SFunction_o7_kc, rtb_SFunction_o8_k,
                     rtb_SFunction_o9_or, &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S91>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S91>/S-Function' incorporates:
     *  Outport: '<S77>/CAN_new'
     */
    localB->SFunction_o1_d = 0;

    /* Disable for SignalConversion generated from: '<S92>/In1' incorporates:
     *  Outport: '<S77>/Out2'
     */
    localB->EnabledSubsystem_k.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In2' incorporates:
     *  Outport: '<S77>/Out3'
     */
    localB->EnabledSubsystem_k.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In3' incorporates:
     *  Outport: '<S77>/Out4'
     */
    localB->EnabledSubsystem_k.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In4' incorporates:
     *  Outport: '<S77>/Out5'
     */
    localB->EnabledSubsystem_k.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In5' incorporates:
     *  Outport: '<S77>/Out6'
     */
    localB->EnabledSubsystem_k.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In6' incorporates:
     *  Outport: '<S77>/Out7'
     */
    localB->EnabledSubsystem_k.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In7' incorporates:
     *  Outport: '<S77>/Out8'
     */
    localB->EnabledSubsystem_k.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S92>/In8' incorporates:
     *  Outport: '<S77>/Out9'
     */
    localB->EnabledSubsystem_k.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN1' */

  /* RelationalOperator: '<S73>/Equal9' */
  rtb_Equal9_g = (RxID_CAN2_s == localC->Product3);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN4' incorporates:
   *  EnablePort: '<S80>/Enable'
   */
  if (rtb_Equal9_g) {
    localDW->PotValue2_ID_CAN4_MODE = true;

    /* M-S-Function: '<S97>/S-Function' incorporates:
     *  Constant: '<S80>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_l = CanIoGetMessage(1, 46U, NULL,
      &canRxData_1_46U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_l > 0) {
      /* read the data */
      rtb_SFunction_o2_ej = canRxData_1_46U.uint8_T_info[0];
      rtb_SFunction_o3_m = canRxData_1_46U.uint8_T_info[1];
      rtb_SFunction_o4_d = canRxData_1_46U.uint8_T_info[2];
      rtb_SFunction_o5_l = canRxData_1_46U.uint8_T_info[3];
      rtb_SFunction_o6_ot = canRxData_1_46U.uint8_T_info[4];
      rtb_SFunction_o7_k = canRxData_1_46U.uint8_T_info[5];
      rtb_SFunction_o8_er = canRxData_1_46U.uint8_T_info[6];
      rtb_SFunction_o9_a0 = canRxData_1_46U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S97>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_l, rtb_SFunction_o2_ej,
                     rtb_SFunction_o3_m, rtb_SFunction_o4_d, rtb_SFunction_o5_l,
                     rtb_SFunction_o6_ot, rtb_SFunction_o7_k,
                     rtb_SFunction_o8_er, rtb_SFunction_o9_a0,
                     &localB->EnabledSubsystem_nq);

    /* End of Outputs for SubSystem: '<S97>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S97>/S-Function' incorporates:
     *  Outport: '<S80>/CAN_new'
     */
    localB->SFunction_o1_l = 0;

    /* Disable for SignalConversion generated from: '<S98>/In1' incorporates:
     *  Outport: '<S80>/Out2'
     */
    localB->EnabledSubsystem_nq.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In2' incorporates:
     *  Outport: '<S80>/Out3'
     */
    localB->EnabledSubsystem_nq.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In3' incorporates:
     *  Outport: '<S80>/Out4'
     */
    localB->EnabledSubsystem_nq.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In4' incorporates:
     *  Outport: '<S80>/Out5'
     */
    localB->EnabledSubsystem_nq.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In5' incorporates:
     *  Outport: '<S80>/Out6'
     */
    localB->EnabledSubsystem_nq.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In6' incorporates:
     *  Outport: '<S80>/Out7'
     */
    localB->EnabledSubsystem_nq.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In7' incorporates:
     *  Outport: '<S80>/Out8'
     */
    localB->EnabledSubsystem_nq.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S98>/In8' incorporates:
     *  Outport: '<S80>/Out9'
     */
    localB->EnabledSubsystem_nq.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN4' */

  /* RelationalOperator: '<S73>/Equal10' */
  rtb_Equal10 = (RxID_CAN2_s == localC->Product4);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN5' incorporates:
   *  EnablePort: '<S81>/Enable'
   */
  if (rtb_Equal10) {
    localDW->PotValue2_ID_CAN5_MODE = true;

    /* M-S-Function: '<S99>/S-Function' incorporates:
     *  Constant: '<S81>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(1, 24U, NULL,
      &canRxData_1_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_nw = canRxData_1_24U.uint8_T_info[0];
      rtb_SFunction_o3_f = canRxData_1_24U.uint8_T_info[1];
      rtb_SFunction_o4_e = canRxData_1_24U.uint8_T_info[2];
      rtb_SFunction_o5_pd = canRxData_1_24U.uint8_T_info[3];
      rtb_SFunction_o6_f = canRxData_1_24U.uint8_T_info[4];
      rtb_SFunction_o7_px = canRxData_1_24U.uint8_T_info[5];
      rtb_SFunction_o8_ea = canRxData_1_24U.uint8_T_info[6];
      rtb_SFunction_o9_n5 = canRxData_1_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S99>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_e, rtb_SFunction_o2_nw,
                     rtb_SFunction_o3_f, rtb_SFunction_o4_e, rtb_SFunction_o5_pd,
                     rtb_SFunction_o6_f, rtb_SFunction_o7_px,
                     rtb_SFunction_o8_ea, rtb_SFunction_o9_n5,
                     &localB->EnabledSubsystem_p);

    /* End of Outputs for SubSystem: '<S99>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S99>/S-Function' incorporates:
     *  Outport: '<S81>/CAN_new'
     */
    localB->SFunction_o1_e = 0;

    /* Disable for SignalConversion generated from: '<S100>/In1' incorporates:
     *  Outport: '<S81>/Out2'
     */
    localB->EnabledSubsystem_p.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In2' incorporates:
     *  Outport: '<S81>/Out3'
     */
    localB->EnabledSubsystem_p.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In3' incorporates:
     *  Outport: '<S81>/Out4'
     */
    localB->EnabledSubsystem_p.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In4' incorporates:
     *  Outport: '<S81>/Out5'
     */
    localB->EnabledSubsystem_p.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In5' incorporates:
     *  Outport: '<S81>/Out6'
     */
    localB->EnabledSubsystem_p.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In6' incorporates:
     *  Outport: '<S81>/Out7'
     */
    localB->EnabledSubsystem_p.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In7' incorporates:
     *  Outport: '<S81>/Out8'
     */
    localB->EnabledSubsystem_p.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S100>/In8' incorporates:
     *  Outport: '<S81>/Out9'
     */
    localB->EnabledSubsystem_p.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN5' */

  /* RelationalOperator: '<S73>/Equal11' */
  rtb_Equal11 = (RxID_CAN2_s == localC->Product5);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN6' incorporates:
   *  EnablePort: '<S82>/Enable'
   */
  if (rtb_Equal11) {
    localDW->PotValue2_ID_CAN6_MODE = true;

    /* M-S-Function: '<S101>/S-Function' incorporates:
     *  Constant: '<S82>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_a = CanIoGetMessage(1, 48U, NULL,
      &canRxData_1_48U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_a > 0) {
      /* read the data */
      rtb_SFunction_o2_a = canRxData_1_48U.uint8_T_info[0];
      rtb_SFunction_o3_g = canRxData_1_48U.uint8_T_info[1];
      rtb_SFunction_o4_jb = canRxData_1_48U.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_1_48U.uint8_T_info[3];
      rtb_SFunction_o6_c = canRxData_1_48U.uint8_T_info[4];
      rtb_SFunction_o7_co = canRxData_1_48U.uint8_T_info[5];
      rtb_SFunction_o8_e = canRxData_1_48U.uint8_T_info[6];
      rtb_SFunction_o9_oi = canRxData_1_48U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S101>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_a, rtb_SFunction_o2_a,
                     rtb_SFunction_o3_g, rtb_SFunction_o4_jb, rtb_SFunction_o5_e,
                     rtb_SFunction_o6_c, rtb_SFunction_o7_co, rtb_SFunction_o8_e,
                     rtb_SFunction_o9_oi, &localB->EnabledSubsystem_o);

    /* End of Outputs for SubSystem: '<S101>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S101>/S-Function' incorporates:
     *  Outport: '<S82>/CAN_new'
     */
    localB->SFunction_o1_a = 0;

    /* Disable for SignalConversion generated from: '<S102>/In1' incorporates:
     *  Outport: '<S82>/Out2'
     */
    localB->EnabledSubsystem_o.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In2' incorporates:
     *  Outport: '<S82>/Out3'
     */
    localB->EnabledSubsystem_o.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In3' incorporates:
     *  Outport: '<S82>/Out4'
     */
    localB->EnabledSubsystem_o.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In4' incorporates:
     *  Outport: '<S82>/Out5'
     */
    localB->EnabledSubsystem_o.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In5' incorporates:
     *  Outport: '<S82>/Out6'
     */
    localB->EnabledSubsystem_o.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In6' incorporates:
     *  Outport: '<S82>/Out7'
     */
    localB->EnabledSubsystem_o.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In7' incorporates:
     *  Outport: '<S82>/Out8'
     */
    localB->EnabledSubsystem_o.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S102>/In8' incorporates:
     *  Outport: '<S82>/Out9'
     */
    localB->EnabledSubsystem_o.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN6' */

  /* RelationalOperator: '<S73>/Equal7' incorporates:
   *  Constant: '<S73>/Constant7'
   */
  rtb_Equal7_m = (RxID_CAN2_s == 31.0);

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN2' incorporates:
   *  EnablePort: '<S78>/Enable'
   */
  if (rtb_Equal7_m) {
    localDW->PotValue2_ID_CAN2_MODE = true;

    /* M-S-Function: '<S93>/S-Function' incorporates:
     *  Constant: '<S78>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_p = CanIoGetMessage(1, 31U, NULL,
      &canRxData_1_31U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_p > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_1_31U.uint8_T_info[0];
      rtb_SFunction_o3_nf = canRxData_1_31U.uint8_T_info[1];
      rtb_SFunction_o4_c = canRxData_1_31U.uint8_T_info[2];
      rtb_SFunction_o5_cs = canRxData_1_31U.uint8_T_info[3];
      rtb_SFunction_o6_n5 = canRxData_1_31U.uint8_T_info[4];
      rtb_SFunction_o7_cz = canRxData_1_31U.uint8_T_info[5];
      rtb_SFunction_o8_a = canRxData_1_31U.uint8_T_info[6];
      rtb_SFunction_o9_di = canRxData_1_31U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S93>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_p, rtb_SFunction_o2_f,
                     rtb_SFunction_o3_nf, rtb_SFunction_o4_c,
                     rtb_SFunction_o5_cs, rtb_SFunction_o6_n5,
                     rtb_SFunction_o7_cz, rtb_SFunction_o8_a,
                     rtb_SFunction_o9_di, &localB->EnabledSubsystem_f);

    /* End of Outputs for SubSystem: '<S93>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S93>/S-Function' incorporates:
     *  Outport: '<S78>/CAN_new'
     */
    localB->SFunction_o1_p = 0;

    /* Disable for SignalConversion generated from: '<S94>/In1' incorporates:
     *  Outport: '<S78>/Out2'
     */
    localB->EnabledSubsystem_f.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In2' incorporates:
     *  Outport: '<S78>/Out3'
     */
    localB->EnabledSubsystem_f.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In3' incorporates:
     *  Outport: '<S78>/Out4'
     */
    localB->EnabledSubsystem_f.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In4' incorporates:
     *  Outport: '<S78>/Out5'
     */
    localB->EnabledSubsystem_f.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In5' incorporates:
     *  Outport: '<S78>/Out6'
     */
    localB->EnabledSubsystem_f.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In6' incorporates:
     *  Outport: '<S78>/Out7'
     */
    localB->EnabledSubsystem_f.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In7' incorporates:
     *  Outport: '<S78>/Out8'
     */
    localB->EnabledSubsystem_f.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S94>/In8' incorporates:
     *  Outport: '<S78>/Out9'
     */
    localB->EnabledSubsystem_f.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN2' */

  /* Outputs for Enabled SubSystem: '<S73>/PotValue2_ID_CAN3' incorporates:
   *  EnablePort: '<S79>/Enable'
   */
  /* RelationalOperator: '<S73>/Equal8' incorporates:
   *  Constant: '<S73>/Constant8'
   */
  if (RxID_CAN2_s == 32.0) {
    localDW->PotValue2_ID_CAN3_MODE = true;

    /* M-S-Function: '<S95>/S-Function' incorporates:
     *  Constant: '<S79>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ib = CanIoGetMessage(1, 32U, NULL,
      &canRxData_1_32U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ib > 0) {
      /* read the data */
      rtb_SFunction_o2_c0 = canRxData_1_32U.uint8_T_info[0];
      rtb_SFunction_o3_a = canRxData_1_32U.uint8_T_info[1];
      rtb_SFunction_o4_iq = canRxData_1_32U.uint8_T_info[2];
      rtb_SFunction_o5_j = canRxData_1_32U.uint8_T_info[3];
      rtb_SFunction_o6_f1 = canRxData_1_32U.uint8_T_info[4];
      rtb_SFunction_o7_ae = canRxData_1_32U.uint8_T_info[5];
      rtb_SFunction_o8_lo = canRxData_1_32U.uint8_T_info[6];
      rtb_SFunction_o9_ei = canRxData_1_32U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S95>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_ib, rtb_SFunction_o2_c0,
                     rtb_SFunction_o3_a, rtb_SFunction_o4_iq, rtb_SFunction_o5_j,
                     rtb_SFunction_o6_f1, rtb_SFunction_o7_ae,
                     rtb_SFunction_o8_lo, rtb_SFunction_o9_ei,
                     &localB->EnabledSubsystem_c);

    /* End of Outputs for SubSystem: '<S95>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S95>/S-Function' incorporates:
     *  Outport: '<S79>/CAN_new'
     */
    localB->SFunction_o1_ib = 0;

    /* Disable for SignalConversion generated from: '<S96>/In1' incorporates:
     *  Outport: '<S79>/Out2'
     */
    localB->EnabledSubsystem_c.In1 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In2' incorporates:
     *  Outport: '<S79>/Out3'
     */
    localB->EnabledSubsystem_c.In2 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In3' incorporates:
     *  Outport: '<S79>/Out4'
     */
    localB->EnabledSubsystem_c.In3 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In4' incorporates:
     *  Outport: '<S79>/Out5'
     */
    localB->EnabledSubsystem_c.In4 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In5' incorporates:
     *  Outport: '<S79>/Out6'
     */
    localB->EnabledSubsystem_c.In5 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In6' incorporates:
     *  Outport: '<S79>/Out7'
     */
    localB->EnabledSubsystem_c.In6 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In7' incorporates:
     *  Outport: '<S79>/Out8'
     */
    localB->EnabledSubsystem_c.In7 = ((uint8_T)0U);

    /* Disable for SignalConversion generated from: '<S96>/In8' incorporates:
     *  Outport: '<S79>/Out9'
     */
    localB->EnabledSubsystem_c.In8 = ((uint8_T)0U);
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of RelationalOperator: '<S73>/Equal8' */
  /* End of Outputs for SubSystem: '<S73>/PotValue2_ID_CAN3' */

  /* Switch generated from: '<S73>/Switch' incorporates:
   *  Switch generated from: '<S73>/Switch1'
   *  Switch generated from: '<S73>/Switch10'
   *  Switch generated from: '<S73>/Switch2'
   *  Switch generated from: '<S73>/Switch3'
   *  Switch generated from: '<S73>/Switch4'
   *  Switch generated from: '<S73>/Switch5'
   *  Switch generated from: '<S73>/Switch6'
   *  Switch generated from: '<S73>/Switch7'
   *  Switch generated from: '<S73>/Switch8'
   *  Switch generated from: '<S73>/Switch9'
   */
  if (rtb_Equal_d3) {
    rtb_signal1_b5 = localB->SFunction_o1_i;
    rtb_signal2_j = localB->EnabledSubsystem_os.In1;
    rtb_signal3_fy = localB->EnabledSubsystem_os.In2;
    rtb_signal4_m = localB->EnabledSubsystem_os.In3;
    rtb_signal5 = localB->EnabledSubsystem_os.In4;
    rtb_signal6 = localB->EnabledSubsystem_os.In5;
    rtb_signal7 = localB->EnabledSubsystem_os.In6;
    rtb_signal8 = localB->EnabledSubsystem_os.In7;
    rtb_signal9 = localB->EnabledSubsystem_os.In8;
  } else {
    if (rtb_Equal1_i) {
      /* Switch generated from: '<S73>/Switch1' */
      rtb_signal1_b5 = localB->SFunction_o1_o;
    } else if (rtb_Equal2_ba) {
      /* Switch generated from: '<S73>/Switch2' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       */
      rtb_signal1_b5 = localB->SFunction_o1_f;
    } else if (rtb_Equal3_e) {
      /* Switch generated from: '<S73>/Switch3' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       */
      rtb_signal1_b5 = localB->SFunction_o1;
    } else if (rtb_Equal4_o) {
      /* Switch generated from: '<S73>/Switch4' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       */
      rtb_signal1_b5 = localB->SFunction_o1_k;
    } else if (rtb_Equal5_h) {
      /* Switch generated from: '<S73>/Switch5' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       */
      rtb_signal1_b5 = localB->SFunction_o1_o0;
    } else if (rtb_Equal6_gt) {
      /* Switch generated from: '<S73>/Switch7' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       */
      rtb_signal1_b5 = localB->SFunction_o1_d;
    } else if (rtb_Equal9_g) {
      /* Switch generated from: '<S73>/Switch8' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       *  Switch generated from: '<S73>/Switch7'
       */
      rtb_signal1_b5 = localB->SFunction_o1_l;
    } else if (rtb_Equal10) {
      /* Switch generated from: '<S73>/Switch9' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       *  Switch generated from: '<S73>/Switch7'
       *  Switch generated from: '<S73>/Switch8'
       */
      rtb_signal1_b5 = localB->SFunction_o1_e;
    } else if (rtb_Equal11) {
      /* Switch generated from: '<S73>/Switch10' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       *  Switch generated from: '<S73>/Switch7'
       *  Switch generated from: '<S73>/Switch8'
       *  Switch generated from: '<S73>/Switch9'
       */
      rtb_signal1_b5 = localB->SFunction_o1_a;
    } else if (rtb_Equal7_m) {
      /* Switch generated from: '<S73>/Switch6' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch10'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       *  Switch generated from: '<S73>/Switch7'
       *  Switch generated from: '<S73>/Switch8'
       *  Switch generated from: '<S73>/Switch9'
       */
      rtb_signal1_b5 = localB->SFunction_o1_p;
    } else {
      /* Switch generated from: '<S73>/Switch9' incorporates:
       *  Switch generated from: '<S73>/Switch1'
       *  Switch generated from: '<S73>/Switch10'
       *  Switch generated from: '<S73>/Switch2'
       *  Switch generated from: '<S73>/Switch3'
       *  Switch generated from: '<S73>/Switch4'
       *  Switch generated from: '<S73>/Switch5'
       *  Switch generated from: '<S73>/Switch6'
       *  Switch generated from: '<S73>/Switch7'
       *  Switch generated from: '<S73>/Switch8'
       */
      rtb_signal1_b5 = localB->SFunction_o1_ib;
    }

    /* Switch generated from: '<S73>/Switch1' incorporates:
     *  Switch generated from: '<S73>/Switch10'
     *  Switch generated from: '<S73>/Switch2'
     *  Switch generated from: '<S73>/Switch3'
     *  Switch generated from: '<S73>/Switch4'
     *  Switch generated from: '<S73>/Switch5'
     *  Switch generated from: '<S73>/Switch6'
     *  Switch generated from: '<S73>/Switch7'
     *  Switch generated from: '<S73>/Switch8'
     *  Switch generated from: '<S73>/Switch9'
     */
    if (rtb_Equal1_i) {
      rtb_signal2_j = localB->EnabledSubsystem_kf.In1;
      rtb_signal3_fy = localB->EnabledSubsystem_kf.In2;
      rtb_signal4_m = localB->EnabledSubsystem_kf.In3;
      rtb_signal5 = localB->EnabledSubsystem_kf.In4;
      rtb_signal6 = localB->EnabledSubsystem_kf.In5;
      rtb_signal7 = localB->EnabledSubsystem_kf.In6;
      rtb_signal8 = localB->EnabledSubsystem_kf.In7;
      rtb_signal9 = localB->EnabledSubsystem_kf.In8;
    } else if (rtb_Equal2_ba) {
      rtb_signal2_j = localB->EnabledSubsystem_nd.In1;
      rtb_signal3_fy = localB->EnabledSubsystem_nd.In2;
      rtb_signal4_m = localB->EnabledSubsystem_nd.In3;
      rtb_signal5 = localB->EnabledSubsystem_nd.In4;
      rtb_signal6 = localB->EnabledSubsystem_nd.In5;
      rtb_signal7 = localB->EnabledSubsystem_nd.In6;
      rtb_signal8 = localB->EnabledSubsystem_nd.In7;
      rtb_signal9 = localB->EnabledSubsystem_nd.In8;
    } else if (rtb_Equal3_e) {
      rtb_signal2_j = localB->EnabledSubsystem_j.In1;
      rtb_signal3_fy = localB->EnabledSubsystem_j.In2;
      rtb_signal4_m = localB->EnabledSubsystem_j.In3;
      rtb_signal5 = localB->EnabledSubsystem_j.In4;
      rtb_signal6 = localB->EnabledSubsystem_j.In5;
      rtb_signal7 = localB->EnabledSubsystem_j.In6;
      rtb_signal8 = localB->EnabledSubsystem_j.In7;
      rtb_signal9 = localB->EnabledSubsystem_j.In8;
    } else if (rtb_Equal4_o) {
      rtb_signal2_j = localB->EnabledSubsystem_n.In1;
      rtb_signal3_fy = localB->EnabledSubsystem_n.In2;
      rtb_signal4_m = localB->EnabledSubsystem_n.In3;
      rtb_signal5 = localB->EnabledSubsystem_n.In4;
      rtb_signal6 = localB->EnabledSubsystem_n.In5;
      rtb_signal7 = localB->EnabledSubsystem_n.In6;
      rtb_signal8 = localB->EnabledSubsystem_n.In7;
      rtb_signal9 = localB->EnabledSubsystem_n.In8;
    } else if (rtb_Equal5_h) {
      rtb_signal2_j = localB->EnabledSubsystem_d.In1;
      rtb_signal3_fy = localB->EnabledSubsystem_d.In2;
      rtb_signal4_m = localB->EnabledSubsystem_d.In3;
      rtb_signal5 = localB->EnabledSubsystem_d.In4;
      rtb_signal6 = localB->EnabledSubsystem_d.In5;
      rtb_signal7 = localB->EnabledSubsystem_d.In6;
      rtb_signal8 = localB->EnabledSubsystem_d.In7;
      rtb_signal9 = localB->EnabledSubsystem_d.In8;
    } else {
      if (rtb_Equal6_gt) {
        rtb_signal2_j = localB->EnabledSubsystem_k.In1;
      } else if (rtb_Equal9_g) {
        rtb_signal2_j = localB->EnabledSubsystem_nq.In1;
      } else if (rtb_Equal10) {
        rtb_signal2_j = localB->EnabledSubsystem_p.In1;
      } else if (rtb_Equal11) {
        rtb_signal2_j = localB->EnabledSubsystem_o.In1;
      } else if (rtb_Equal7_m) {
        rtb_signal2_j = localB->EnabledSubsystem_f.In1;
      } else {
        rtb_signal2_j = localB->EnabledSubsystem_c.In1;
      }

      if (rtb_Equal6_gt) {
        rtb_signal3_fy = localB->EnabledSubsystem_k.In2;
      } else if (rtb_Equal9_g) {
        rtb_signal3_fy = localB->EnabledSubsystem_nq.In2;
      } else if (rtb_Equal10) {
        rtb_signal3_fy = localB->EnabledSubsystem_p.In2;
      } else if (rtb_Equal11) {
        rtb_signal3_fy = localB->EnabledSubsystem_o.In2;
      } else if (rtb_Equal7_m) {
        rtb_signal3_fy = localB->EnabledSubsystem_f.In2;
      } else {
        rtb_signal3_fy = localB->EnabledSubsystem_c.In2;
      }

      if (rtb_Equal6_gt) {
        rtb_signal4_m = localB->EnabledSubsystem_k.In3;
      } else if (rtb_Equal9_g) {
        rtb_signal4_m = localB->EnabledSubsystem_nq.In3;
      } else if (rtb_Equal10) {
        rtb_signal4_m = localB->EnabledSubsystem_p.In3;
      } else if (rtb_Equal11) {
        rtb_signal4_m = localB->EnabledSubsystem_o.In3;
      } else if (rtb_Equal7_m) {
        rtb_signal4_m = localB->EnabledSubsystem_f.In3;
      } else {
        rtb_signal4_m = localB->EnabledSubsystem_c.In3;
      }

      if (rtb_Equal6_gt) {
        rtb_signal5 = localB->EnabledSubsystem_k.In4;
      } else if (rtb_Equal9_g) {
        rtb_signal5 = localB->EnabledSubsystem_nq.In4;
      } else if (rtb_Equal10) {
        rtb_signal5 = localB->EnabledSubsystem_p.In4;
      } else if (rtb_Equal11) {
        rtb_signal5 = localB->EnabledSubsystem_o.In4;
      } else if (rtb_Equal7_m) {
        rtb_signal5 = localB->EnabledSubsystem_f.In4;
      } else {
        rtb_signal5 = localB->EnabledSubsystem_c.In4;
      }

      if (rtb_Equal6_gt) {
        rtb_signal6 = localB->EnabledSubsystem_k.In5;
      } else if (rtb_Equal9_g) {
        rtb_signal6 = localB->EnabledSubsystem_nq.In5;
      } else if (rtb_Equal10) {
        rtb_signal6 = localB->EnabledSubsystem_p.In5;
      } else if (rtb_Equal11) {
        rtb_signal6 = localB->EnabledSubsystem_o.In5;
      } else if (rtb_Equal7_m) {
        rtb_signal6 = localB->EnabledSubsystem_f.In5;
      } else {
        rtb_signal6 = localB->EnabledSubsystem_c.In5;
      }

      if (rtb_Equal6_gt) {
        rtb_signal7 = localB->EnabledSubsystem_k.In6;
      } else if (rtb_Equal9_g) {
        rtb_signal7 = localB->EnabledSubsystem_nq.In6;
      } else if (rtb_Equal10) {
        rtb_signal7 = localB->EnabledSubsystem_p.In6;
      } else if (rtb_Equal11) {
        rtb_signal7 = localB->EnabledSubsystem_o.In6;
      } else if (rtb_Equal7_m) {
        rtb_signal7 = localB->EnabledSubsystem_f.In6;
      } else {
        rtb_signal7 = localB->EnabledSubsystem_c.In6;
      }

      if (rtb_Equal6_gt) {
        rtb_signal8 = localB->EnabledSubsystem_k.In7;
      } else if (rtb_Equal9_g) {
        rtb_signal8 = localB->EnabledSubsystem_nq.In7;
      } else if (rtb_Equal10) {
        rtb_signal8 = localB->EnabledSubsystem_p.In7;
      } else if (rtb_Equal11) {
        rtb_signal8 = localB->EnabledSubsystem_o.In7;
      } else if (rtb_Equal7_m) {
        rtb_signal8 = localB->EnabledSubsystem_f.In7;
      } else {
        rtb_signal8 = localB->EnabledSubsystem_c.In7;
      }

      if (rtb_Equal6_gt) {
        rtb_signal9 = localB->EnabledSubsystem_k.In8;
      } else if (rtb_Equal9_g) {
        rtb_signal9 = localB->EnabledSubsystem_nq.In8;
      } else if (rtb_Equal10) {
        rtb_signal9 = localB->EnabledSubsystem_p.In8;
      } else if (rtb_Equal11) {
        rtb_signal9 = localB->EnabledSubsystem_o.In8;
      } else if (rtb_Equal7_m) {
        rtb_signal9 = localB->EnabledSubsystem_f.In8;
      } else {
        rtb_signal9 = localB->EnabledSubsystem_c.In8;
      }
    }
  }

  /* End of Switch generated from: '<S73>/Switch' */

  /* Outputs for Enabled SubSystem: '<S19>/Buffer ready' incorporates:
   *  EnablePort: '<S71>/Enable'
   */
  /* Logic: '<S19>/AND2' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant7'
   *  RelationalOperator: '<S19>/Equal3'
   *  RelationalOperator: '<S19>/Equal6'
   */
  if ((*rtd_Rx_State_CAN2 == 1.0) && (0.0 == rtb_signal1_b5)) {
    /* DataStoreWrite: '<S71>/Data Store Write' incorporates:
     *  Constant: '<S71>/New_Msg'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)2U);

    /* DataStoreWrite: '<S71>/Data Store Write1' incorporates:
     *  Constant: '<S71>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S19>/AND2' */
  /* End of Outputs for SubSystem: '<S19>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S19>/Update message buffers' incorporates:
   *  EnablePort: '<S74>/Enable'
   */
  /* Logic: '<S19>/AND3' incorporates:
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant5'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S74>/Constant2'
   *  Constant: '<S74>/SET'
   *  Logic: '<S74>/AND'
   *  RelationalOperator: '<S19>/Equal4'
   *  RelationalOperator: '<S19>/Equal7'
   *  RelationalOperator: '<S74>/Equal'
   */
  if ((*rtd_Rx_State_CAN2 == 2.0) && (rtb_signal1_b5 >= 1.0)) {
    /* DataStoreWrite: '<S74>/Data Store Write1' */
    rtd_Msg_Rx_CAN2->Buffer_1 = rtb_signal2_j;
    rtd_Msg_Rx_CAN2->Buffer_2 = rtb_signal3_fy;
    rtd_Msg_Rx_CAN2->Buffer_3 = rtb_signal4_m;
    rtd_Msg_Rx_CAN2->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN2->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN2->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN2->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN2->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S74>/Data Store Write' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S74>/Data Store Write2' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_New_Msg_Ready_CAN2 = true;

    /* DataStoreWrite: '<S74>/Data Store Write5' incorporates:
     *  Constant: '<S74>/Idle_State'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)3U);

    /* DataStoreRead: '<S74>/Local_Time' */
    Rx_msg_ticks_CAN2 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S74>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN2 = Rx_msg_ticks_CAN2;

    /* DataTypeConversion: '<S74>/Cast To Double' */
    Rx_temporal_msg_CAN2 = rtb_signal2_j;

    /* Outputs for Enabled SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S111>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN2 == 1.0)) {
      /* DataStoreWrite: '<S111>/Data Store Write2' incorporates:
       *  Constant: '<S111>/Constant2'
       */
      *rtd_Toggle_Pin_D8 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S19>/AND3' */
  /* End of Outputs for SubSystem: '<S19>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S19>/Prepare buffer' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  /* RelationalOperator: '<S19>/Equal5' incorporates:
   *  Constant: '<S19>/Constant6'
   */
  if (*rtd_Rx_State_CAN2 == 0.0) {
    /* DataStoreWrite: '<S72>/Data Store Write' incorporates:
     *  Constant: '<S72>/Constant1'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)1U);

    /* DataStoreWrite: '<S72>/Data Store Write1' incorporates:
     *  Constant: '<S72>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S19>/Equal5' */
  /* End of Outputs for SubSystem: '<S19>/Prepare buffer' */
}

/* Output and update for function-call system: '<S8>/CAN2 Send' */
void CAN2Send(const msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
              *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D9, const uint32_T
              *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2, rtB_CAN2Send
              *localB, rtDW_CAN2Send *localDW)
{
  /* DataStoreWrite: '<S20>/Data Store Write2' incorporates:
   *  Constant: '<S20>/Constant8'
   *  Sum: '<S20>/Plus'
   */
  *rtd_Tx_msg_count_CAN2 += 1.0;

  /* DataStoreWrite: '<S20>/Data Store Write1' incorporates:
   *  Constant: '<S20>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S20>/Sum1' incorporates:
   *  Constant: '<S20>/Constant3'
   *  DataStoreRead: '<S20>/Data Store Read'
   */
  TxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S20>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN2_counter_s;

  /* Outputs for Enabled SubSystem: '<S20>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S113>/Enable'
   */
  /* Logic: '<S20>/AND' incorporates:
   *  Constant: '<S20>/Constant1'
   *  Constant: '<S20>/Constant2'
   *  RelationalOperator: '<S20>/Equal'
   */
  if ((*rtd_TxID_CAN2 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S113>/Data Store Write2' incorporates:
     *  Constant: '<S113>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 1.0;
  }

  /* End of Logic: '<S20>/AND' */
  /* End of Outputs for SubSystem: '<S20>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S20>/Cast To Double' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  Tx_temporal_msg_CAN2 = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataStoreRead: '<S20>/Data Store Read3' */
  TxID_CAN2_s = *rtd_TxID_CAN2;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataTypeConversion: '<S20>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN2_s;

  /* DataTypeConversion: '<S20>/Data Type Conversion10' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN2->Buffer_8;

  /* DataTypeConversion: '<S20>/Data Type Conversion4' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN2->Buffer_2;

  /* DataTypeConversion: '<S20>/Data Type Conversion5' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN2->Buffer_3;

  /* DataTypeConversion: '<S20>/Data Type Conversion6' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN2->Buffer_4;

  /* DataTypeConversion: '<S20>/Data Type Conversion7' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN2->Buffer_5;

  /* DataTypeConversion: '<S20>/Data Type Conversion8' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN2->Buffer_6;

  /* DataTypeConversion: '<S20>/Data Type Conversion9' incorporates:
   *  DataStoreRead: '<S20>/Data Store Read2'
   */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN2->Buffer_7;

  /* Update for M-S-Function: '<S112>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(1, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S8>/Measure EXecution time' */
void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW)
{
  /* Disable for Enabled SubSystem: '<S25>/DEBUG - Toggle digital pin A3' */
  if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S25>/DEBUG - Toggle digital pin A3' */
}

/* Start for function-call system: '<S8>/Measure EXecution time' */
void MeasureEXecutiontime_Start(void)
{
  /* Start for Enabled SubSystem: '<S25>/DEBUG - Toggle digital pin A3' */

  /* Start for M-S-Function: '<S123>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN8, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S25>/DEBUG - Toggle digital pin A3' */
}

/* Output and update for function-call system: '<S8>/Measure EXecution time' */
void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW)
{
  /* Outputs for Enabled SubSystem: '<S25>/DEBUG - Toggle digital pin A3' incorporates:
   *  EnablePort: '<S122>/Enable'
   */
  /* Constant: '<S25>/Constant1' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA3_MODE = true;

    /* Switch: '<S122>/Switch' incorporates:
     *  DataStoreRead: '<S122>/Data Store Read'
     */
    if (localDW->A3_Pin_State) {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant1'
       */
      localDW->A3_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant'
       */
      localDW->A3_Pin_State = true;
    }

    /* End of Switch: '<S122>/Switch' */
    /* DataStoreRead: '<S122>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A3_Pin_State;

    /* Update for M-S-Function: '<S123>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Constant: '<S25>/Constant1' */
  /* End of Outputs for SubSystem: '<S25>/DEBUG - Toggle digital pin A3' */
}

/*
 * Output and update for atomic system:
 *    '<S153>/Bit Shift3'
 *    '<S279>/Bit Shift3'
 *    '<S291>/Bit Shift3'
 *    '<S315>/Bit Shift3'
 *    '<S327>/Bit Shift3'
 *    '<S344>/Bit Shift3'
 *    '<S356>/Bit Shift3'
 *    '<S373>/Bit Shift3'
 *    '<S385>/Bit Shift3'
 *    '<S509>/Bit Shift3'
 *    ...
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S157>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S162>:1' */
  /* '<S162>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S153>/Bit Shift4'
 *    '<S200>/Bit Shift'
 *    '<S206>/Bit Shift'
 *    '<S218>/Bit Shift'
 *    '<S224>/Bit Shift'
 *    '<S236>/Bit Shift'
 *    '<S242>/Bit Shift'
 *    '<S254>/Bit Shift'
 *    '<S260>/Bit Shift'
 *    '<S279>/Bit Shift4'
 *    ...
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S158>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S163>:1' */
  /* '<S163>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Disable for enable system:
 *    '<S176>/Reception substasks'
 *    '<S177>/Reception substasks'
 *    '<S178>/Reception substasks'
 *    '<S179>/Reception substasks'
 *    '<S400>/Reception substasks'
 *    '<S627>/Reception substasks'
 *    '<S628>/Reception substasks'
 *    '<S629>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Logic: '<S193>/AND' incorporates:
   *  Outport: '<S193>/Receive CAN1'
   */
  localB->AND = false;

  /* Disable for Logic: '<S193>/AND1' incorporates:
   *  Outport: '<S193>/Receive CAN2'
   */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S176>/Reception substasks'
 *    '<S177>/Reception substasks'
 *    '<S178>/Reception substasks'
 *    '<S179>/Reception substasks'
 *    '<S400>/Reception substasks'
 *    '<S627>/Reception substasks'
 *    '<S628>/Reception substasks'
 *    '<S629>/Reception substasks'
 */
void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_d, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_new_msg_Rx_l, rtB_Receptionsubstasks
  *localB, const rtC_Receptionsubstasks *localC, rtDW_Receptionsubstasks
  *localDW)
{
  boolean_T rtb_Equal2_k;

  /* Outputs for Enabled SubSystem: '<S176>/Reception substasks' incorporates:
   *  EnablePort: '<S193>/Enable'
   */
  if (rtu_Enable) {
    localDW->Receptionsubstasks_MODE = true;

    /* Outputs for Enabled SubSystem: '<S193>/RX buffers update' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* RelationalOperator: '<S193>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S195>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S195>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S195>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S195>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S195>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S195>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S195>/Data Store Write' incorporates:
       *  Constant: '<S195>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Template_DS_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S195>/Data Store Write3' incorporates:
       *  Constant: '<S195>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S193>/Equal16' */
    /* End of Outputs for SubSystem: '<S193>/RX buffers update' */

    /* RelationalOperator: '<S193>/Equal2' */
    rtb_Equal2_k = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S193>/AND' incorporates:
     *  Logic: '<S193>/NOT'
     */
    localB->AND = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S193>/AND1' incorporates:
     *  Logic: '<S193>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN2));
  } else if (localDW->Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S176>/Reception substasks' */
}

/*
 * Output and update for atomic system:
 *    '<S200>/Bit Shift1'
 *    '<S206>/Bit Shift1'
 *    '<S218>/Bit Shift1'
 *    '<S224>/Bit Shift1'
 *    '<S236>/Bit Shift1'
 *    '<S242>/Bit Shift1'
 *    '<S254>/Bit Shift1'
 *    '<S260>/Bit Shift1'
 *    '<S416>/Bit Shift1'
 *    '<S422>/Bit Shift1'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S202>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S204>:1' */
  /* '<S204>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

real_T rt_modd(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
    }

    if (yEq) {
      y = 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/*
 * Disable for enable system:
 *    '<S176>/Transmission subtasks'
 *    '<S400>/Transmission subtasks1'
 *    '<S629>/Transmission subtasks1'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S194>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for RelationalOperator: '<S196>/Equal7' incorporates:
     *  Outport: '<S196>/Send CAN1'
     */
    localB->Equal7_a = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S194>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S194>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for RelationalOperator: '<S197>/Equal7' incorporates:
     *  Outport: '<S197>/Send CAN2'
     */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S194>/Check msg transmission CAN2' */

  /* Disable for RelationalOperator: '<S196>/Equal7' incorporates:
   *  Outport: '<S194>/Send CAN1'
   */
  localB->Equal7_a = false;

  /* Disable for RelationalOperator: '<S197>/Equal7' incorporates:
   *  Outport: '<S194>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S176>/Transmission subtasks'
 *    '<S400>/Transmission subtasks1'
 *    '<S629>/Transmission subtasks1'
 */
void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1,
  uint32_T *rtd_TxID_CAN2, const real_T *rtd_Tx_msg_count_CAN1, const real_T
  *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW)
{
  real_T rtb_Minus2_f4;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast1_o;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast9;
  boolean_T rtb_Equal2_pm;

  /* Outputs for Enabled SubSystem: '<S176>/Transmission subtasks' incorporates:
   *  EnablePort: '<S194>/Enable'
   */
  if (rtu_Enable) {
    localDW->Transmissionsubtasks_MODE = true;

    /* RelationalOperator: '<S194>/Equal2' */
    rtb_Equal2_pm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S194>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S198>/Enable'
     */
    /* RelationalOperator: '<S194>/Equal16' incorporates:
     *  Constant: '<S198>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);
    }

    /* End of RelationalOperator: '<S194>/Equal16' */
    /* End of Outputs for SubSystem: '<S194>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S194>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S196>/Enable'
     */
    /* Logic: '<S194>/AND' incorporates:
     *  Constant: '<S194>/Constant6'
     *  Constant: '<S196>/Constant22'
     *  Constant: '<S196>/Constant24'
     *  Constant: '<S196>/Constant8'
     *  Math: '<S196>/Mod'
     *  RelationalOperator: '<S194>/GreaterThan2'
     *  RelationalOperator: '<S196>/Equal4'
     *  Sum: '<S196>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;

      /* Sum: '<S196>/Minus2' incorporates:
       *  Constant: '<S196>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S196>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S199>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase1)
          == 0.0) {
        /* DataTypeConversion: '<S199>/Cast4' */
        rtb_Cast4 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S200>/Bit Shift1' */
        BitShift1(rtb_Cast4, &localB->BitShift1_a);

        /* End of Outputs for SubSystem: '<S200>/Bit Shift1' */

        /* DataTypeConversion: '<S199>/Cast1' */
        rtb_Cast1_o = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S200>/Bit Shift' */
        BitShift4(rtb_Cast1_o, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S200>/Bit Shift' */

        /* DataStoreWrite: '<S199>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S199>/Cast16'
         *  Sum: '<S200>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_a.y + localB->BitShift_f.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S199>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S196>/TX buffer update CAN1' */

      /* RelationalOperator: '<S196>/Equal7' incorporates:
       *  Constant: '<S196>/Constant11'
       *  Constant: '<S196>/Constant22'
       *  Constant: '<S196>/Constant24'
       *  Constant: '<S196>/Constant27'
       *  Constant: '<S196>/Constant8'
       *  Math: '<S196>/Mod'
       *  Math: '<S196>/Mod1'
       *  RelationalOperator: '<S196>/Equal4'
       *  Sum: '<S196>/Minus'
       *  Sum: '<S196>/Minus1'
       */
      localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase1) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
      /* Disable for RelationalOperator: '<S196>/Equal7' incorporates:
       *  Outport: '<S196>/Send CAN1'
       */
      localB->Equal7_a = false;
      localDW->CheckmsgtransmissionCAN1_MODE = false;
    }

    /* End of Logic: '<S194>/AND' */
    /* End of Outputs for SubSystem: '<S194>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S194>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S197>/Enable'
     */
    /* Logic: '<S194>/AND1' incorporates:
     *  Constant: '<S194>/Constant7'
     *  Constant: '<S197>/Constant22'
     *  Constant: '<S197>/Constant24'
     *  Constant: '<S197>/Constant8'
     *  Math: '<S197>/Mod'
     *  RelationalOperator: '<S194>/GreaterThan3'
     *  RelationalOperator: '<S197>/Equal4'
     *  Sum: '<S197>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;

      /* Sum: '<S197>/Minus2' incorporates:
       *  Constant: '<S197>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S197>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S205>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase2)
          == 0.0) {
        /* DataTypeConversion: '<S205>/Cast18' */
        rtb_Cast18 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S206>/Bit Shift1' */
        BitShift1(rtb_Cast18, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S206>/Bit Shift1' */

        /* DataTypeConversion: '<S205>/Cast9' */
        rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S206>/Bit Shift' */
        BitShift4(rtb_Cast9, &localB->BitShift_e);

        /* End of Outputs for SubSystem: '<S206>/Bit Shift' */

        /* DataStoreWrite: '<S205>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S205>/Cast17'
         *  Sum: '<S206>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_h.y + localB->BitShift_e.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S205>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S197>/TX buffer update CAN2' */

      /* RelationalOperator: '<S197>/Equal7' incorporates:
       *  Constant: '<S197>/Constant11'
       *  Constant: '<S197>/Constant22'
       *  Constant: '<S197>/Constant24'
       *  Constant: '<S197>/Constant27'
       *  Constant: '<S197>/Constant8'
       *  Math: '<S197>/Mod'
       *  Math: '<S197>/Mod1'
       *  RelationalOperator: '<S197>/Equal4'
       *  Sum: '<S197>/Minus'
       *  Sum: '<S197>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase2) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
      /* Disable for RelationalOperator: '<S197>/Equal7' incorporates:
       *  Outport: '<S197>/Send CAN2'
       */
      localB->Equal7 = false;
      localDW->CheckmsgtransmissionCAN2_MODE = false;
    }

    /* End of Logic: '<S194>/AND1' */
    /* End of Outputs for SubSystem: '<S194>/Check msg transmission CAN2' */
  } else if (localDW->Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S176>/Transmission subtasks' */
}

/*
 * Disable for enable system:
 *    '<S177>/Transmission subtasks'
 *    '<S178>/Transmission subtasks'
 *    '<S179>/Transmission subtasks'
 */
void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW)
{
  /* Disable for Enabled SubSystem: '<S212>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for RelationalOperator: '<S214>/Equal7' incorporates:
     *  Outport: '<S214>/Send CAN1'
     */
    localB->Equal7_m = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S212>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S212>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for RelationalOperator: '<S215>/Equal7' incorporates:
     *  Outport: '<S215>/Send CAN2'
     */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S212>/Check msg transmission CAN2' */

  /* Disable for RelationalOperator: '<S214>/Equal7' incorporates:
   *  Outport: '<S212>/Send CAN1'
   */
  localB->Equal7_m = false;

  /* Disable for RelationalOperator: '<S215>/Equal7' incorporates:
   *  Outport: '<S212>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S177>/Transmission subtasks'
 *    '<S178>/Transmission subtasks'
 *    '<S179>/Transmission subtasks'
 */
void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, const uint8_T
  *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, const real_T *
  rtd_Tx_msg_count_CAN1, const real_T *rtd_Tx_msg_count_CAN2, const uint8_T
  *rtd_basic_cycle_count, rtB_Transmissionsubtasks_f *localB, const
  rtC_Transmissionsubtasks_d *localC, rtDW_Transmissionsubtasks_h *localDW)
{
  real_T rtb_Minus2_g;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast1_f;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast9;
  boolean_T rtb_Equal2_hm;

  /* Outputs for Enabled SubSystem: '<S177>/Transmission subtasks' incorporates:
   *  EnablePort: '<S212>/Enable'
   */
  if (rtu_Enable) {
    localDW->Transmissionsubtasks_MODE = true;

    /* RelationalOperator: '<S212>/Equal2' */
    rtb_Equal2_hm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S212>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S216>/Enable'
     */
    /* RelationalOperator: '<S212>/Equal16' incorporates:
     *  Constant: '<S216>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);

      /* DataStoreRead: '<S216>/Data Store Read' incorporates:
       *  Constant: '<S216>/Constant'
       */
      localB->DataStoreRead = *rtd_Own_Vote;
    }

    /* End of RelationalOperator: '<S212>/Equal16' */
    /* End of Outputs for SubSystem: '<S212>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S212>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S214>/Enable'
     */
    /* Logic: '<S212>/AND' incorporates:
     *  Constant: '<S212>/Constant6'
     *  Constant: '<S214>/Constant22'
     *  Constant: '<S214>/Constant24'
     *  Constant: '<S214>/Constant8'
     *  Math: '<S214>/Mod'
     *  RelationalOperator: '<S212>/GreaterThan2'
     *  RelationalOperator: '<S214>/Equal4'
     *  Sum: '<S214>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;

      /* Sum: '<S214>/Minus2' incorporates:
       *  Constant: '<S214>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S214>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S217>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S217>/Cast4' */
        rtb_Cast4 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S218>/Bit Shift1' */
        BitShift1(rtb_Cast4, &localB->BitShift1_b);

        /* End of Outputs for SubSystem: '<S218>/Bit Shift1' */

        /* DataTypeConversion: '<S217>/Cast1' */
        rtb_Cast1_f = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S218>/Bit Shift' */
        BitShift4(rtb_Cast1_f, &localB->BitShift_o);

        /* End of Outputs for SubSystem: '<S218>/Bit Shift' */

        /* DataStoreWrite: '<S217>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S217>/Cast16'
         *  Sum: '<S218>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_b.y + localB->BitShift_o.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S217>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S214>/TX buffer update CAN1' */

      /* RelationalOperator: '<S214>/Equal7' incorporates:
       *  Constant: '<S214>/Constant11'
       *  Constant: '<S214>/Constant22'
       *  Constant: '<S214>/Constant24'
       *  Constant: '<S214>/Constant27'
       *  Constant: '<S214>/Constant8'
       *  Math: '<S214>/Mod'
       *  Math: '<S214>/Mod1'
       *  RelationalOperator: '<S214>/Equal4'
       *  Sum: '<S214>/Minus'
       *  Sum: '<S214>/Minus1'
       */
      localB->Equal7_m = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase1) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
      /* Disable for RelationalOperator: '<S214>/Equal7' incorporates:
       *  Outport: '<S214>/Send CAN1'
       */
      localB->Equal7_m = false;
      localDW->CheckmsgtransmissionCAN1_MODE = false;
    }

    /* End of Logic: '<S212>/AND' */
    /* End of Outputs for SubSystem: '<S212>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S212>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S215>/Enable'
     */
    /* Logic: '<S212>/AND1' incorporates:
     *  Constant: '<S212>/Constant7'
     *  Constant: '<S215>/Constant22'
     *  Constant: '<S215>/Constant24'
     *  Constant: '<S215>/Constant8'
     *  Math: '<S215>/Mod'
     *  RelationalOperator: '<S212>/GreaterThan3'
     *  RelationalOperator: '<S215>/Equal4'
     *  Sum: '<S215>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;

      /* Sum: '<S215>/Minus2' incorporates:
       *  Constant: '<S215>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S215>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S223>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S223>/Cast18' */
        rtb_Cast18 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S224>/Bit Shift1' */
        BitShift1(rtb_Cast18, &localB->BitShift1_f);

        /* End of Outputs for SubSystem: '<S224>/Bit Shift1' */

        /* DataTypeConversion: '<S223>/Cast9' */
        rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S224>/Bit Shift' */
        BitShift4(rtb_Cast9, &localB->BitShift_i);

        /* End of Outputs for SubSystem: '<S224>/Bit Shift' */

        /* DataStoreWrite: '<S223>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S223>/Cast17'
         *  Sum: '<S224>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_f.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S223>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S215>/TX buffer update CAN2' */

      /* RelationalOperator: '<S215>/Equal7' incorporates:
       *  Constant: '<S215>/Constant11'
       *  Constant: '<S215>/Constant22'
       *  Constant: '<S215>/Constant24'
       *  Constant: '<S215>/Constant27'
       *  Constant: '<S215>/Constant8'
       *  Math: '<S215>/Mod'
       *  Math: '<S215>/Mod1'
       *  RelationalOperator: '<S215>/Equal4'
       *  Sum: '<S215>/Minus'
       *  Sum: '<S215>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase2) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
      /* Disable for RelationalOperator: '<S215>/Equal7' incorporates:
       *  Outport: '<S215>/Send CAN2'
       */
      localB->Equal7 = false;
      localDW->CheckmsgtransmissionCAN2_MODE = false;
    }

    /* End of Logic: '<S212>/AND1' */
    /* End of Outputs for SubSystem: '<S212>/Check msg transmission CAN2' */
  } else if (localDW->Transmissionsubtasks_MODE) {
    Transmissionsubtasks_l_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S177>/Transmission subtasks' */
}

/*
 * Output and update for atomic system:
 *    '<S279>/Bit Shift'
 *    '<S291>/Bit Shift'
 *    '<S315>/Bit Shift'
 *    '<S327>/Bit Shift'
 *    '<S344>/Bit Shift'
 *    '<S356>/Bit Shift'
 *    '<S373>/Bit Shift'
 *    '<S385>/Bit Shift'
 *    '<S509>/Bit Shift'
 *    '<S521>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S281>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S286>:1' */
  /* '<S286>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S279>/Bit Shift1'
 *    '<S291>/Bit Shift1'
 *    '<S315>/Bit Shift1'
 *    '<S327>/Bit Shift1'
 *    '<S344>/Bit Shift1'
 *    '<S356>/Bit Shift1'
 *    '<S373>/Bit Shift1'
 *    '<S385>/Bit Shift1'
 *    '<S509>/Bit Shift1'
 *    '<S521>/Bit Shift1'
 *    ...
 */
void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S282>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S287>:1' */
  /* '<S287>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S279>/Bit Shift2'
 *    '<S291>/Bit Shift2'
 *    '<S315>/Bit Shift2'
 *    '<S327>/Bit Shift2'
 *    '<S344>/Bit Shift2'
 *    '<S356>/Bit Shift2'
 *    '<S373>/Bit Shift2'
 *    '<S385>/Bit Shift2'
 *    '<S509>/Bit Shift2'
 *    '<S521>/Bit Shift2'
 *    ...
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S283>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S288>:1' */
  /* '<S288>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Disable for enable system:
 *    '<S274>/Demux message CAN1 and check coherence'
 *    '<S595>/Demux message CAN1 and check coherence'
 *    '<S755>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW)
{
  /* Disable for Logic: '<S276>/AND' incorporates:
   *  Outport: '<S276>/CAN1_msg_coherent'
   */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_f = false;
}

/*
 * Output and update for enable system:
 *    '<S274>/Demux message CAN1 and check coherence'
 *    '<S595>/Demux message CAN1 and check coherence'
 *    '<S755>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckcoh *localB, rtDW_DemuxmessageCAN1andcheckco
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S276>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_f = true;

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_f);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_f.y, &localB->BitShift1_mg);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift1' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S280>/Constant1'
     *  RelationalOperator: '<S280>/GreaterThan'
     */
    if (localB->BitShift1_mg.y > 1.0) {
      /* DataStoreWrite: '<S280>/Data Store Write' incorporates:
       *  Constant: '<S280>/Constant'
       *  Sum: '<S280>/Plus'
       */
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S280>/Switch' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_d);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_c);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift2' */
    BitShift2(localB->BitShift4_c.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift2' */

    /* Logic: '<S276>/AND' incorporates:
     *  RelationalOperator: '<S276>/Equal'
     *  RelationalOperator: '<S276>/Equal1'
     */
    localB->AND = ((localB->BitShift_d.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_n.y == rtu_expected_board_id));

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S276>/CAN1_msg' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S276>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_f) {
    DemuxmessageCAN1andchec_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S274>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S274>/Demux message CAN1 and check coherence1'
 *    '<S595>/Demux message CAN1 and check coherence1'
 *    '<S755>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW)
{
  /* Disable for Logic: '<S277>/AND' incorporates:
   *  Outport: '<S277>/CAN2_msg_coherent'
   */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_m = false;
}

/*
 * Output and update for enable system:
 *    '<S274>/Demux message CAN1 and check coherence1'
 *    '<S595>/Demux message CAN1 and check coherence1'
 *    '<S755>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_k *localB, rtDW_DemuxmessageCAN1andcheck_o
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S277>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_m = true;

    /* Outputs for Atomic SubSystem: '<S291>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S291>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S291>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_e);

    /* End of Outputs for SubSystem: '<S291>/Bit Shift1' */

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S292>/Constant1'
     *  RelationalOperator: '<S292>/GreaterThan'
     */
    if (localB->BitShift1_e.y > 1.0) {
      /* DataStoreWrite: '<S292>/Data Store Write' incorporates:
       *  Constant: '<S292>/Constant'
       *  Sum: '<S292>/Plus'
       */
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S292>/Switch' */

    /* Outputs for Atomic SubSystem: '<S291>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S291>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S291>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S291>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S291>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_d);

    /* End of Outputs for SubSystem: '<S291>/Bit Shift2' */

    /* Logic: '<S277>/AND' incorporates:
     *  RelationalOperator: '<S277>/Equal'
     *  RelationalOperator: '<S277>/Equal1'
     */
    localB->AND = ((localB->BitShift_h.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_d.y == rtu_expected_board_id));

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S277>/CAN2_msg' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S277>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_m) {
    DemuxmessageCAN1andch_l_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S184>/Reset Tx msg counter'
 *    '<S188>/Reset Tx msg counter'
 *    '<S190>/Reset Tx msg counter'
 *    '<S192>/Reset Tx msg counter'
 *    '<S403>/Reset Tx msg counter'
 *    '<S405>/Reset Tx msg counter'
 *    '<S406>/Reset Tx msg counter'
 *    '<S407>/Reset Tx msg counter'
 *    '<S631>/Reset Tx msg counter'
 *    '<S632>/Reset Tx msg counter'
 *    '<S633>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S184>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S275>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S275>/Data Store Write2' incorporates:
     *  Constant: '<S275>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S275>/Data Store Write1' incorporates:
     *  Constant: '<S275>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S184>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S304>/Desync_Negative'
 *    '<S625>/Desync_Negative'
 *    '<S785>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, const
                     real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S304>/Desync_Negative' incorporates:
   *  EnablePort: '<S305>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S305>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S305>/Cast'
     *  Sum: '<S305>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S304>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S188>/Process_Messages1'
 *    '<S190>/Process_Messages'
 *    '<S192>/Process_Messages'
 */
void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW)
{
  /* Disable for Enabled SubSystem: '<S311>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcoher_d) {
    /* Disable for RelationalOperator: '<S313>/Equal' incorporates:
     *  Outport: '<S313>/CAN1_msg_coherent'
     */
    localB->Equal_h = false;
    localDW->DemuxmessageCAN1andcheckcoher_d = false;
  }

  /* End of Disable for SubSystem: '<S311>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S311>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcoher_g) {
    /* Disable for RelationalOperator: '<S314>/Equal' incorporates:
     *  Outport: '<S314>/CAN2_msg_coherent'
     */
    localB->Equal = false;
    localDW->DemuxmessageCAN1andcheckcoher_g = false;
  }

  /* End of Disable for SubSystem: '<S311>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S188>/Process_Messages1'
 *    '<S190>/Process_Messages'
 *    '<S192>/Process_Messages'
 */
void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG, boolean_T *rtd_new_msg_Rx_l, rtB_Process_Messages1
  *localB, rtDW_Process_Messages1 *localDW)
{
  /* Outputs for Enabled SubSystem: '<S188>/Process_Messages1' incorporates:
   *  EnablePort: '<S311>/Enable'
   */
  if (rtu_Enable) {
    localDW->Process_Messages1_MODE = true;

    /* Outputs for Enabled SubSystem: '<S311>/Demux message CAN1 and check coherence' incorporates:
     *  EnablePort: '<S313>/Enable'
     */
    if (rtu_new_CAN1_msg) {
      localDW->DemuxmessageCAN1andcheckcoher_d = true;

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift3' */
      BitShift3(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift3_a);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_a.y, &localB->BitShift1_i);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift1' */

      /* Switch: '<S316>/Switch' incorporates:
       *  Constant: '<S316>/Constant1'
       *  RelationalOperator: '<S316>/GreaterThan'
       */
      if (localB->BitShift1_i.y > 1.0) {
        /* DataStoreWrite: '<S316>/Data Store Write' incorporates:
         *  Constant: '<S316>/Constant'
         *  Sum: '<S316>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S316>/Switch' */

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_2_i = rtu_Rx_msg_CAN1->Buffer_2;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_3_p = rtu_Rx_msg_CAN1->Buffer_3;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_4_k = rtu_Rx_msg_CAN1->Buffer_4;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_5_b = rtu_Rx_msg_CAN1->Buffer_5;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_6_d = rtu_Rx_msg_CAN1->Buffer_6;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_7_h = rtu_Rx_msg_CAN1->Buffer_7;

      /* SignalConversion generated from: '<S313>/CAN1_msg' */
      localB->Buffer_8_p = rtu_Rx_msg_CAN1->Buffer_8;

      /* Constant: '<S313>/Constant' */
      localB->Constant_p = ((uint8_T)0U);

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift4' */
      BitShift4(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift4_i);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift2' */
      BitShift2(localB->BitShift4_i.y, &localB->BitShift2_e);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift2' */

      /* RelationalOperator: '<S313>/Equal' */
      localB->Equal_h = (localB->BitShift2_e.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift' */
      BitShift(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift_b);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift' */
    } else if (localDW->DemuxmessageCAN1andcheckcoher_d) {
      /* Disable for RelationalOperator: '<S313>/Equal' incorporates:
       *  Outport: '<S313>/CAN1_msg_coherent'
       */
      localB->Equal_h = false;
      localDW->DemuxmessageCAN1andcheckcoher_d = false;
    }

    /* End of Outputs for SubSystem: '<S311>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S311>/Demux message CAN1 and check coherence1' incorporates:
     *  EnablePort: '<S314>/Enable'
     */
    if (rtu_new_CAN2_msg) {
      localDW->DemuxmessageCAN1andcheckcoher_g = true;

      /* Outputs for Atomic SubSystem: '<S327>/Bit Shift3' */
      BitShift3(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift3_e);

      /* End of Outputs for SubSystem: '<S327>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S327>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S327>/Bit Shift1' */

      /* Switch: '<S328>/Switch' incorporates:
       *  Constant: '<S328>/Constant1'
       *  RelationalOperator: '<S328>/GreaterThan'
       */
      if (localB->BitShift1_g.y > 1.0) {
        /* DataStoreWrite: '<S328>/Data Store Write' incorporates:
         *  Constant: '<S328>/Constant'
         *  Sum: '<S328>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S328>/Switch' */

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_2 = rtu_Rx_Msg_CAN2->Buffer_2;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_3 = rtu_Rx_Msg_CAN2->Buffer_3;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_4 = rtu_Rx_Msg_CAN2->Buffer_4;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_5 = rtu_Rx_Msg_CAN2->Buffer_5;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_6 = rtu_Rx_Msg_CAN2->Buffer_6;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_7 = rtu_Rx_Msg_CAN2->Buffer_7;

      /* SignalConversion generated from: '<S314>/CAN2_msg' */
      localB->Buffer_8 = rtu_Rx_Msg_CAN2->Buffer_8;

      /* Constant: '<S314>/Constant' */
      localB->Constant = ((uint8_T)0U);

      /* Outputs for Atomic SubSystem: '<S327>/Bit Shift4' */
      BitShift4(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift4_k);

      /* End of Outputs for SubSystem: '<S327>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S327>/Bit Shift2' */
      BitShift2(localB->BitShift4_k.y, &localB->BitShift2_b);

      /* End of Outputs for SubSystem: '<S327>/Bit Shift2' */

      /* RelationalOperator: '<S314>/Equal' */
      localB->Equal = (localB->BitShift2_b.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S327>/Bit Shift' */
      BitShift(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift_h);

      /* End of Outputs for SubSystem: '<S327>/Bit Shift' */
    } else if (localDW->DemuxmessageCAN1andcheckcoher_g) {
      /* Disable for RelationalOperator: '<S314>/Equal' incorporates:
       *  Outport: '<S314>/CAN2_msg_coherent'
       */
      localB->Equal = false;
      localDW->DemuxmessageCAN1andcheckcoher_g = false;
    }

    /* End of Outputs for SubSystem: '<S311>/Demux message CAN1 and check coherence1' */

    /* Switch generated from: '<S311>/Switch' */
    if (localB->Equal_h) {
      /* DataStoreWrite: '<S311>/Data Store Write' */
      rtd_Msg_Rx_d->Buffer_1 = localB->Constant_p;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2_i;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3_p;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4_k;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5_b;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6_d;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7_h;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8_p;
    } else {
      /* DataStoreWrite: '<S311>/Data Store Write' */
      rtd_Msg_Rx_d->Buffer_1 = localB->Constant;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8;
    }

    /* End of Switch generated from: '<S311>/Switch' */

    /* DataStoreWrite: '<S311>/Data Store Write2' incorporates:
     *  Logic: '<S311>/OR'
     */
    *rtd_new_msg_Rx_l = (localB->Equal_h || localB->Equal);

    /* DataStoreWrite: '<S311>/Data Store Write3' incorporates:
     *  Constant: '<S311>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else if (localDW->Process_Messages1_MODE) {
    Process_Messages1_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S188>/Process_Messages1' */
}

/*
 * Disable for enable system:
 *    '<S397>/Reception substasks'
 *    '<S398>/Reception substasks'
 *    '<S399>/Reception substasks'
 */
void Receptionsubstasks_b_Disable(rtB_Receptionsubstasks_l *localB,
  rtDW_Receptionsubstasks_p *localDW)
{
  /* Disable for Logic: '<S409>/AND' incorporates:
   *  Outport: '<S409>/Receive CAN1'
   */
  localB->AND = false;

  /* Disable for Logic: '<S409>/AND1' incorporates:
   *  Outport: '<S409>/Receive CAN2'
   */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S397>/Reception substasks'
 *    '<S398>/Reception substasks'
 *    '<S399>/Reception substasks'
 */
void Receptionsubstasks_i(boolean_T rtu_Enable, real_T rtu_Time_Mark, real_T
  rtu_RX_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_f,
  boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_new_msg_Rx_g, rtB_Receptionsubstasks_l
  *localB, const rtC_Receptionsubstasks_m *localC, rtDW_Receptionsubstasks_p
  *localDW)
{
  boolean_T rtb_Equal2_i;

  /* Outputs for Enabled SubSystem: '<S397>/Reception substasks' incorporates:
   *  EnablePort: '<S409>/Enable'
   */
  if (rtu_Enable) {
    localDW->Receptionsubstasks_MODE = true;

    /* Outputs for Enabled SubSystem: '<S409>/RX buffers update' incorporates:
     *  EnablePort: '<S411>/Enable'
     */
    /* RelationalOperator: '<S409>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S411>/Data Store Write11' incorporates:
       *  DataTypeConversion: '<S411>/Cast13'
       */
      *rtd_RxID_CAN2 = (uint32_T)rtu_RX_ID;

      /* DataStoreWrite: '<S411>/Data Store Write6' incorporates:
       *  DataTypeConversion: '<S411>/Cast13'
       */
      *rtd_RxID_CAN1 = (uint32_T)rtu_RX_ID;

      /* DataStoreWrite: '<S411>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S411>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S411>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S411>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S411>/Data Store Write' incorporates:
       *  Constant: '<S411>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_f = HANcoder_E407_TTA_Template_DS_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S411>/Data Store Write3' incorporates:
       *  Constant: '<S411>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_g = false;
    }

    /* End of RelationalOperator: '<S409>/Equal16' */
    /* End of Outputs for SubSystem: '<S409>/RX buffers update' */

    /* RelationalOperator: '<S409>/Equal2' */
    rtb_Equal2_i = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S409>/AND' incorporates:
     *  Logic: '<S409>/NOT'
     */
    localB->AND = (rtb_Equal2_i && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S409>/AND1' incorporates:
     *  Logic: '<S409>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_i && (!*rtd_New_Msg_Ready_CAN2));
  } else if (localDW->Receptionsubstasks_MODE) {
    Receptionsubstasks_b_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S397>/Reception substasks' */
}

/*
 * Disable for enable system:
 *    '<S410>/Check msg transmission CAN1'
 *    '<S430>/Check msg transmission CAN1'
 *    '<S450>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  /* Disable for RelationalOperator: '<S412>/Equal7' incorporates:
   *  Outport: '<S412>/Send CAN1'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S410>/Check msg transmission CAN1'
 *    '<S430>/Check msg transmission CAN1'
 *    '<S450>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_f, uint8_T rtu_ValueDomainMsg_n, const real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, const real_T
  *rtd_Tx_msg_count_CAN1, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN1 *localB, rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  real_T rtb_Minus2_o;
  uint8_T rtb_Cast1_d;
  uint8_T rtb_Cast4;

  /* Outputs for Enabled SubSystem: '<S410>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S412>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN1_MODE = true;

    /* Sum: '<S412>/Minus2' incorporates:
     *  Constant: '<S412>/Constant'
     */
    rtb_Minus2_o = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S412>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S415>/Enable'
     */
    /* RelationalOperator: '<S412>/Equal4' incorporates:
     *  Constant: '<S412>/Constant22'
     *  Constant: '<S412>/Constant24'
     *  Constant: '<S412>/Constant8'
     *  Math: '<S412>/Mod'
     *  Sum: '<S412>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_o, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S415>/Cast4' */
      rtb_Cast4 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S416>/Bit Shift1' */
      BitShift1(rtb_Cast4, &localB->BitShift1_n);

      /* End of Outputs for SubSystem: '<S416>/Bit Shift1' */

      /* DataTypeConversion: '<S415>/Cast1' */
      rtb_Cast1_d = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S416>/Bit Shift' */
      BitShift4(rtb_Cast1_d, &localB->BitShift_i);

      /* End of Outputs for SubSystem: '<S416>/Bit Shift' */

      /* DataStoreWrite: '<S415>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S415>/Cast16'
       *  Sum: '<S416>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_n.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_n;

      /* DataStoreWrite: '<S415>/Data Store Write8' incorporates:
       *  DataTypeConversion: '<S415>/Cast'
       */
      *rtd_TxID_CAN1 = (uint32_T)rtu_Tx_ID;
    }

    /* End of RelationalOperator: '<S412>/Equal4' */
    /* End of Outputs for SubSystem: '<S412>/TX buffer update CAN1' */

    /* RelationalOperator: '<S412>/Equal7' incorporates:
     *  Constant: '<S412>/Constant11'
     *  Constant: '<S412>/Constant27'
     *  Math: '<S412>/Mod1'
     *  Sum: '<S412>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_o, COMM_Phase1)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionCAN_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S410>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S410>/Check msg transmission CAN2'
 *    '<S430>/Check msg transmission CAN2'
 *    '<S450>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_i_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  /* Disable for RelationalOperator: '<S413>/Equal7' incorporates:
   *  Outport: '<S413>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S410>/Check msg transmission CAN2'
 *    '<S430>/Check msg transmission CAN2'
 *    '<S450>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_b, const real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, const real_T
  *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN2 *localB, rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  real_T rtb_Minus2_d3;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S410>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S413>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN2_MODE = true;

    /* Sum: '<S413>/Minus2' incorporates:
     *  Constant: '<S413>/Constant'
     */
    rtb_Minus2_d3 = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S413>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S421>/Enable'
     */
    /* RelationalOperator: '<S413>/Equal4' incorporates:
     *  Constant: '<S413>/Constant22'
     *  Constant: '<S413>/Constant24'
     *  Constant: '<S413>/Constant8'
     *  Math: '<S413>/Mod'
     *  Sum: '<S413>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_d3, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S421>/Cast18' */
      rtb_Cast18 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S422>/Bit Shift1' */
      BitShift1(rtb_Cast18, &localB->BitShift1_c);

      /* End of Outputs for SubSystem: '<S422>/Bit Shift1' */

      /* DataTypeConversion: '<S421>/Cast9' */
      rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S422>/Bit Shift' */
      BitShift4(rtb_Cast9, &localB->BitShift_m);

      /* End of Outputs for SubSystem: '<S422>/Bit Shift' */

      /* DataStoreWrite: '<S421>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S421>/Cast17'
       *  Sum: '<S422>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_c.y + localB->BitShift_m.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_g;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_b;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_b;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_b;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_b;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_b;

      /* DataStoreWrite: '<S421>/Data Store Write5' incorporates:
       *  DataTypeConversion: '<S421>/Cast8'
       */
      *rtd_TxID_CAN2 = (uint32_T)rtu_Tx_ID;
    }

    /* End of RelationalOperator: '<S413>/Equal4' */
    /* End of Outputs for SubSystem: '<S413>/TX buffer update CAN2' */

    /* RelationalOperator: '<S413>/Equal7' incorporates:
     *  Constant: '<S413>/Constant11'
     *  Constant: '<S413>/Constant27'
     *  Math: '<S413>/Mod1'
     *  Sum: '<S413>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_d3, COMM_Phase2)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_i_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S410>/Check msg transmission CAN2' */
}

/*
 * Disable for enable system:
 *    '<S173>/COMM Task - Sync bc 1'
 *    '<S174>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc1_Disable(rtB_COMMTaskSyncbc1 *localB, rtDW_COMMTaskSyncbc1
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S400>/Reception substasks' */
  if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
      &localDW->Receptionsubstasks_j);
  }

  /* End of Disable for SubSystem: '<S400>/Reception substasks' */

  /* Disable for Enabled SubSystem: '<S400>/Transmission subtasks1' */
  if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
      &localDW->Transmissionsubtasks1);
  }

  /* End of Disable for SubSystem: '<S400>/Transmission subtasks1' */

  /* Disable for RelationalOperator: '<S472>/Equal7' incorporates:
   *  Outport: '<S400>/Send CAN1'
   */
  localB->Transmissionsubtasks1.Equal7_a = false;

  /* Disable for Logic: '<S469>/AND' incorporates:
   *  Outport: '<S400>/Receive CAN1'
   */
  localB->Receptionsubstasks_j.AND = false;

  /* Disable for RelationalOperator: '<S473>/Equal7' incorporates:
   *  Outport: '<S400>/Send CAN2'
   */
  localB->Transmissionsubtasks1.Equal7 = false;

  /* Disable for Logic: '<S469>/AND1' incorporates:
   *  Outport: '<S400>/Receive CAN2'
   */
  localB->Receptionsubstasks_j.AND1 = false;
  localDW->COMMTaskSyncbc1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S173>/COMM Task - Sync bc 1'
 *    '<S174>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc1(boolean_T rtu_Enable, real_T rtu_TimeMark, const real_T
                     *rtd_Board_ID, const uint16_T *rtd_Local_Ticks,
                     msg_buffer_type *rtd_Msg_Rx_f, msg_buffer_type
                     *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2,
                     boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
                     *rtd_New_Msg_Ready_CAN2, const real_T *rtd_Role_ID,
                     uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T
                     *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, uint32_T
                     *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, const real_T
                     *rtd_Tx_msg_count_CAN1, const real_T *rtd_Tx_msg_count_CAN2,
                     const uint8_T *rtd_basic_cycle_count, boolean_T
                     *rtd_new_msg_Rx_g, rtB_COMMTaskSyncbc1 *localB, const
                     rtC_COMMTaskSyncbc1 *localC, rtDW_COMMTaskSyncbc1 *localDW)
{
  boolean_T rtb_Equal1_od;
  boolean_T rtb_NOT_ke;

  /* Outputs for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' incorporates:
   *  EnablePort: '<S400>/Enable'
   */
  if (rtu_Enable) {
    localDW->COMMTaskSyncbc1_MODE = true;

    /* RelationalOperator: '<S400>/Equal1' incorporates:
     *  Constant: '<S400>/Constant2'
     */
    rtb_Equal1_od = (*rtd_Role_ID == 1.0);

    /* Logic: '<S400>/NOT' */
    rtb_NOT_ke = !rtb_Equal1_od;

    /* Outputs for Enabled SubSystem: '<S400>/Reception substasks' */
    Receptionsubstasks(rtb_NOT_ke, rtu_TimeMark, rtd_Local_Ticks, rtd_Msg_Rx_f,
                       rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                       rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                       rtd_Rx_State_CAN2, rtd_new_msg_Rx_g,
                       &localB->Receptionsubstasks_j,
                       &localC->Receptionsubstasks_j,
                       &localDW->Receptionsubstasks_j);

    /* End of Outputs for SubSystem: '<S400>/Reception substasks' */

    /* Outputs for Enabled SubSystem: '<S400>/Transmission subtasks1' */
    Transmissionsubtasks(rtb_Equal1_od, rtu_TimeMark, rtd_Board_ID,
                         rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                         rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                         rtd_Tx_msg_count_CAN2, rtd_basic_cycle_count,
                         &localB->Transmissionsubtasks1,
                         &localC->Transmissionsubtasks1,
                         &localDW->Transmissionsubtasks1);

    /* End of Outputs for SubSystem: '<S400>/Transmission subtasks1' */
  } else if (localDW->COMMTaskSyncbc1_MODE) {
    COMMTaskSyncbc1_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S173>/COMM Task - Sync bc 1' */
}

/*
 * Output and update for enable system:
 *    '<S173>/COMP Task - Reset Variables BC1'
 *    '<S174>/COMP Task - Reset Variables BC1'
 */
void COMPTaskResetVariablesBC1(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  real_T rtu_Time_Mark_2, boolean_T *rtd_BC1_Sync_processed, const real_T
  *rtd_Board_ID, boolean_T *rtd_Desync_Positive, const uint16_T *rtd_Local_Ticks,
  const real_T *rtd_Master_ID, real_T *rtd_Sync_bc1_missed_counter, boolean_T
  *rtd_Toggle_Pin_A0, boolean_T *rtd_Toggle_Pin_A1)
{
  boolean_T rtb_AND9_f;

  /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Reset Variables BC1' incorporates:
   *  EnablePort: '<S402>/Enable'
   */
  if (rtu_Enable) {
    /* Outputs for Enabled SubSystem: '<S402>/Check Timeouts' incorporates:
     *  EnablePort: '<S501>/Enable'
     */
    /* RelationalOperator: '<S402>/Equal2' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* Logic: '<S501>/AND9' incorporates:
       *  Logic: '<S501>/NOT4'
       *  RelationalOperator: '<S501>/Equal9'
       */
      rtb_AND9_f = ((!*rtd_BC1_Sync_processed) && (*rtd_Master_ID !=
        *rtd_Board_ID));

      /* DataStoreWrite: '<S501>/Data Store Write8' */
      *rtd_Toggle_Pin_A1 = rtb_AND9_f;

      /* Switch: '<S501>/Switch7' */
      if (rtb_AND9_f) {
        /* DataStoreWrite: '<S501>/Data Store Write9' incorporates:
         *  Constant: '<S501>/Constant16'
         *  Sum: '<S501>/Plus6'
         */
        *rtd_Sync_bc1_missed_counter += 1.0;
      }

      /* End of Switch: '<S501>/Switch7' */
    }

    /* End of RelationalOperator: '<S402>/Equal2' */
    /* End of Outputs for SubSystem: '<S402>/Check Timeouts' */

    /* Outputs for Enabled SubSystem: '<S402>/Reset Variables' incorporates:
     *  EnablePort: '<S502>/Enable'
     */
    /* RelationalOperator: '<S402>/Equal1' */
    if (*rtd_Local_Ticks == rtu_Time_Mark_2) {
      /* DataStoreWrite: '<S502>/Data Store Write' incorporates:
       *  Constant: '<S502>/Constant'
       */
      *rtd_Desync_Positive = false;

      /* DataStoreWrite: '<S502>/Data Store Write1' incorporates:
       *  Constant: '<S502>/Constant'
       */
      *rtd_BC1_Sync_processed = false;

      /* DataStoreWrite: '<S502>/Data Store Write3' incorporates:
       *  Constant: '<S502>/Constant3'
       */
      *rtd_Toggle_Pin_A0 = true;
    }

    /* End of RelationalOperator: '<S402>/Equal1' */
    /* End of Outputs for SubSystem: '<S402>/Reset Variables' */
  }

  /* End of Outputs for SubSystem: '<S173>/COMP Task - Reset Variables BC1' */
}

/*
 * Disable for enable system:
 *    '<S503>/Demux message CAN1 and check coherence'
 *    '<S535>/Demux message CAN1 and check coherence'
 *    '<S565>/Demux message CAN1 and check coherence'
 *    '<S695>/Demux message CAN1 and check coherence'
 *    '<S725>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andch_j_Disable(rtB_DemuxmessageCAN1andcheckc_m *localB,
  rtDW_DemuxmessageCAN1andcheck_g *localDW)
{
  /* Disable for RelationalOperator: '<S506>/Equal1' incorporates:
   *  Outport: '<S506>/CAN1_msg_coherent'
   */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcoher_g = false;
}

/*
 * Output and update for enable system:
 *    '<S503>/Demux message CAN1 and check coherence'
 *    '<S535>/Demux message CAN1 and check coherence'
 *    '<S565>/Demux message CAN1 and check coherence'
 *    '<S695>/Demux message CAN1 and check coherence'
 *    '<S725>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_m *localB, rtDW_DemuxmessageCAN1andcheck_g
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S506>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_g = true;

    /* Outputs for Atomic SubSystem: '<S509>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_k);

    /* End of Outputs for SubSystem: '<S509>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S509>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_k.y, &localB->BitShift1_mu);

    /* End of Outputs for SubSystem: '<S509>/Bit Shift1' */

    /* Switch: '<S510>/Switch' incorporates:
     *  Constant: '<S510>/Constant1'
     *  RelationalOperator: '<S510>/GreaterThan'
     */
    if (localB->BitShift1_mu.y > 1.0) {
      /* DataStoreWrite: '<S510>/Data Store Write' incorporates:
       *  Constant: '<S510>/Constant'
       *  Sum: '<S510>/Plus'
       */
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S510>/Switch' */

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S506>/CAN1_msg' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S506>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S509>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_g);

    /* End of Outputs for SubSystem: '<S509>/Bit Shift' */

    /* RelationalOperator: '<S506>/Equal1' */
    localB->Equal1 = (localB->BitShift_g.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S509>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_d);

    /* End of Outputs for SubSystem: '<S509>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S509>/Bit Shift2' */
    BitShift2(localB->BitShift4_d.y, &localB->BitShift2_c);

    /* End of Outputs for SubSystem: '<S509>/Bit Shift2' */
  } else if (localDW->DemuxmessageCAN1andcheckcoher_g) {
    DemuxmessageCAN1andch_j_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S503>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S503>/Demux message CAN1 and check coherence1'
 *    '<S535>/Demux message CAN1 and check coherence1'
 *    '<S565>/Demux message CAN1 and check coherence1'
 *    '<S695>/Demux message CAN1 and check coherence1'
 *    '<S725>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_d_Disable(rtB_DemuxmessageCAN1andcheckc_n *localB,
  rtDW_DemuxmessageCAN1andcheck_j *localDW)
{
  /* Disable for RelationalOperator: '<S507>/Equal1' incorporates:
   *  Outport: '<S507>/CAN2_msg_coherent'
   */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcoher_i = false;
}

/*
 * Output and update for enable system:
 *    '<S503>/Demux message CAN1 and check coherence1'
 *    '<S535>/Demux message CAN1 and check coherence1'
 *    '<S565>/Demux message CAN1 and check coherence1'
 *    '<S695>/Demux message CAN1 and check coherence1'
 *    '<S725>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_a(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_n *localB, rtDW_DemuxmessageCAN1andcheck_j
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S507>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_i = true;

    /* Outputs for Atomic SubSystem: '<S521>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S521>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S521>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_i);

    /* End of Outputs for SubSystem: '<S521>/Bit Shift1' */

    /* Switch: '<S522>/Switch' incorporates:
     *  Constant: '<S522>/Constant1'
     *  RelationalOperator: '<S522>/GreaterThan'
     */
    if (localB->BitShift1_i.y > 1.0) {
      /* DataStoreWrite: '<S522>/Data Store Write' incorporates:
       *  Constant: '<S522>/Constant'
       *  Sum: '<S522>/Plus'
       */
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S522>/Switch' */

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S507>/CAN2_msg' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S507>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S521>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_a);

    /* End of Outputs for SubSystem: '<S521>/Bit Shift' */

    /* RelationalOperator: '<S507>/Equal1' */
    localB->Equal1 = (localB->BitShift_a.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S521>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S521>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S521>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S521>/Bit Shift2' */
  } else if (localDW->DemuxmessageCAN1andcheckcoher_i) {
    DemuxmessageCAN1andch_d_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S535>/Desync calculation'
 *    '<S565>/Desync calculation'
 *    '<S695>/Desync calculation'
 *    '<S755>/Desync calculation'
 */
void Desynccalculation(boolean_T rtu_Enable, real_T rtu_TM_COMM, boolean_T
  rtu_New_msg_CAN1, uint8_T rtu_msg_count_CAN1, uint8_T rtu_msg_count_CAN2,
  real_T *rtd_Desync_Ticks, const uint16_T *rtd_Msg_Rx_Ticks_CAN1, const
  uint16_T *rtd_Msg_Rx_Ticks_CAN2)
{
  real_T rtu_New_msg_CAN1_0;

  /* Outputs for Enabled SubSystem: '<S535>/Desync calculation' incorporates:
   *  EnablePort: '<S540>/Enable'
   */
  if (rtu_Enable) {
    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S540>/Constant'
     *  Constant: '<S540>/Constant1'
     *  Constant: '<S540>/delay_estimation_1'
     *  Constant: '<S540>/delay_estimation_2'
     *  Product: '<S540>/Multiply'
     *  Product: '<S540>/Multiply1'
     *  Sum: '<S540>/Minus'
     *  Sum: '<S540>/Minus1'
     *  Sum: '<S540>/Sum'
     *  Sum: '<S540>/Sum1'
     */
    if (rtu_New_msg_CAN1) {
      rtu_New_msg_CAN1_0 = ((COMM_Phase1 * (real_T)rtu_msg_count_CAN1 +
        rtu_TM_COMM) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
    } else {
      rtu_New_msg_CAN1_0 = ((COMM_Phase2 * (real_T)rtu_msg_count_CAN2 +
        rtu_TM_COMM) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
    }

    /* End of Switch: '<S540>/Switch1' */

    /* Saturate: '<S540>/Saturation' */
    if (rtu_New_msg_CAN1_0 > 15.0) {
      /* DataStoreWrite: '<S540>/Data Store Write1' */
      *rtd_Desync_Ticks = 15.0;
    } else if (rtu_New_msg_CAN1_0 < (-15.0)) {
      /* DataStoreWrite: '<S540>/Data Store Write1' */
      *rtd_Desync_Ticks = (-15.0);
    } else {
      /* DataStoreWrite: '<S540>/Data Store Write1' */
      *rtd_Desync_Ticks = rtu_New_msg_CAN1_0;
    }

    /* End of Saturate: '<S540>/Saturation' */
  }

  /* End of Outputs for SubSystem: '<S535>/Desync calculation' */
}

/*
 * Output and update for enable system:
 *    '<S173>/COMP Task - Update LT1'
 *    '<S174>/COMP Task - Update LT1'
 */
void COMPTaskUpdateLT1(boolean_T rtu_Enable, real_T rtu_Time_Mark, real_T
  rtu_Time_Mark_2, boolean_T *rtd_BC1_Sync_processed, boolean_T
  *rtd_Desync_Positive, const real_T *rtd_Desync_Ticks, uint16_T
  *rtd_Local_Ticks, const real_T *rtd_Role_ID, boolean_T *rtd_Toggle_Pin_A0,
  boolean_T *rtd_Toggle_Pin_D10, const boolean_T *rtd_new_msg_Rx_g)
{
  boolean_T rtb_GreaterThan_ai;
  boolean_T rtb_NOT_c;

  /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Update LT1' incorporates:
   *  EnablePort: '<S408>/Enable'
   */
  if (rtu_Enable) {
    /* Outputs for Enabled SubSystem: '<S408>/LA - Ensemble precision' incorporates:
     *  EnablePort: '<S624>/Enable'
     */
    /* Logic: '<S408>/AND1' incorporates:
     *  Constant: '<S408>/Constant1'
     *  RelationalOperator: '<S408>/Equal3'
     */
    if ((*rtd_Local_Ticks == rtu_Time_Mark) && (1.0 != 0.0)) {
      /* DataStoreWrite: '<S624>/Data Store Write1' incorporates:
       *  Constant: '<S624>/Constant2'
       */
      *rtd_Toggle_Pin_D10 = true;
    }

    /* End of Logic: '<S408>/AND1' */
    /* End of Outputs for SubSystem: '<S408>/LA - Ensemble precision' */

    /* Outputs for Enabled SubSystem: '<S408>/Local Time Update' incorporates:
     *  EnablePort: '<S625>/Enable'
     */
    /* Logic: '<S408>/AND' incorporates:
     *  Constant: '<S408>/Constant4'
     *  RelationalOperator: '<S408>/Equal1'
     *  RelationalOperator: '<S408>/Equal2'
     */
    if ((*rtd_Local_Ticks == rtu_Time_Mark_2) && (*rtd_Role_ID == 2.0) &&
        (*rtd_new_msg_Rx_g)) {
      /* RelationalOperator: '<S625>/GreaterThan' incorporates:
       *  Constant: '<S625>/Constant4'
       */
      rtb_GreaterThan_ai = (*rtd_Desync_Ticks > 0.0);

      /* DataStoreWrite: '<S625>/Data Store Write' */
      *rtd_Desync_Positive = rtb_GreaterThan_ai;

      /* Logic: '<S625>/NOT' */
      rtb_NOT_c = !rtb_GreaterThan_ai;

      /* Outputs for Enabled SubSystem: '<S625>/Desync_Negative' */
      Desync_Negative(rtb_NOT_c, rtu_Time_Mark, rtd_Desync_Ticks,
                      rtd_Local_Ticks);

      /* End of Outputs for SubSystem: '<S625>/Desync_Negative' */

      /* DataStoreWrite: '<S625>/Data Store Write13' incorporates:
       *  Constant: '<S625>/Constant3'
       */
      *rtd_BC1_Sync_processed = true;

      /* DataStoreWrite: '<S625>/Data Store Write3' incorporates:
       *  Constant: '<S625>/Constant1'
       */
      *rtd_Toggle_Pin_A0 = true;

      /* DataStoreWrite: '<S625>/Data Store Write1' incorporates:
       *  Constant: '<S625>/Constant2'
       */
      *rtd_Toggle_Pin_D10 = true;
    }

    /* End of Logic: '<S408>/AND' */
    /* End of Outputs for SubSystem: '<S408>/Local Time Update' */
  }

  /* End of Outputs for SubSystem: '<S173>/COMP Task - Update LT1' */
}

/*
 * Disable for enable system:
 *    '<S636>/Check msg transmission CAN1'
 *    '<S656>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionC_m_Disable(rtB_CheckmsgtransmissionCAN1_n *localB,
  rtDW_CheckmsgtransmissionCAN1_n *localDW)
{
  /* Disable for RelationalOperator: '<S638>/Equal7' incorporates:
   *  Outport: '<S638>/Send CAN1'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S636>/Check msg transmission CAN1'
 *    '<S656>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1_g(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_h,
  uint8_T rtu_ValueDomainMsg_f, const real_T *rtd_Board_ID, msg_buffer_type
  *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, const real_T *rtd_Tx_msg_count_CAN1,
  const uint8_T *rtd_basic_cycle_count, rtB_CheckmsgtransmissionCAN1_n *localB,
  const rtC_CheckmsgtransmissionCAN1_e *localC, rtDW_CheckmsgtransmissionCAN1_n *
  localDW)
{
  real_T rtb_Minus2_n;
  uint8_T rtb_Cast1_i;
  uint8_T rtb_Cast4;

  /* Outputs for Enabled SubSystem: '<S636>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S638>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN1_MODE = true;

    /* Sum: '<S638>/Minus2' incorporates:
     *  Constant: '<S638>/Constant'
     */
    rtb_Minus2_n = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S638>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S641>/Enable'
     */
    /* RelationalOperator: '<S638>/Equal4' incorporates:
     *  Constant: '<S638>/Constant22'
     *  Constant: '<S638>/Constant24'
     *  Constant: '<S638>/Constant8'
     *  Math: '<S638>/Mod'
     *  Sum: '<S638>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_n, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S641>/Cast4' */
      rtb_Cast4 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S642>/Bit Shift1' */
      BitShift1(rtb_Cast4, &localB->BitShift1_c);

      /* End of Outputs for SubSystem: '<S642>/Bit Shift1' */

      /* DataTypeConversion: '<S641>/Cast1' */
      rtb_Cast1_i = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S642>/Bit Shift' */
      BitShift4(rtb_Cast1_i, &localB->BitShift_a);

      /* End of Outputs for SubSystem: '<S642>/Bit Shift' */

      /* DataStoreWrite: '<S641>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S641>/Cast16'
       *  Sum: '<S642>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_c.y + localB->BitShift_a.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_h;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_f;

      /* DataStoreWrite: '<S641>/Data Store Write8' */
      *rtd_TxID_CAN1 = localC->Cast;
    }

    /* End of RelationalOperator: '<S638>/Equal4' */
    /* End of Outputs for SubSystem: '<S638>/TX buffer update CAN1' */

    /* RelationalOperator: '<S638>/Equal7' incorporates:
     *  Constant: '<S638>/Constant11'
     *  Constant: '<S638>/Constant27'
     *  Math: '<S638>/Mod1'
     *  Sum: '<S638>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_n, COMM_Phase1)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionC_m_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S636>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S636>/Check msg transmission CAN2'
 *    '<S656>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_n_Disable(rtB_CheckmsgtransmissionCAN2_o *localB,
  rtDW_CheckmsgtransmissionCAN2_l *localDW)
{
  /* Disable for RelationalOperator: '<S639>/Equal7' incorporates:
   *  Outport: '<S639>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S636>/Check msg transmission CAN2'
 *    '<S656>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2_i(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_h,
  uint8_T rtu_ValueDomainMsg_k, const real_T *rtd_Board_ID, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, const real_T *rtd_Tx_msg_count_CAN2,
  const uint8_T *rtd_basic_cycle_count, rtB_CheckmsgtransmissionCAN2_o *localB,
  const rtC_CheckmsgtransmissionCAN2_h *localC, rtDW_CheckmsgtransmissionCAN2_l *
  localDW)
{
  real_T rtb_Minus2_o;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S636>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S639>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN2_MODE = true;

    /* Sum: '<S639>/Minus2' incorporates:
     *  Constant: '<S639>/Constant'
     */
    rtb_Minus2_o = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S639>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S647>/Enable'
     */
    /* RelationalOperator: '<S639>/Equal4' incorporates:
     *  Constant: '<S639>/Constant22'
     *  Constant: '<S639>/Constant24'
     *  Constant: '<S639>/Constant8'
     *  Math: '<S639>/Mod'
     *  Sum: '<S639>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_o, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S647>/Cast18' */
      rtb_Cast18 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S648>/Bit Shift1' */
      BitShift1(rtb_Cast18, &localB->BitShift1_n);

      /* End of Outputs for SubSystem: '<S648>/Bit Shift1' */

      /* DataTypeConversion: '<S647>/Cast9' */
      rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S648>/Bit Shift' */
      BitShift4(rtb_Cast9, &localB->BitShift_g);

      /* End of Outputs for SubSystem: '<S648>/Bit Shift' */

      /* DataStoreWrite: '<S647>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S647>/Cast17'
       *  Sum: '<S648>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_n.y + localB->BitShift_g.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_h;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_k;

      /* DataStoreWrite: '<S647>/Data Store Write5' */
      *rtd_TxID_CAN2 = localC->Cast8;
    }

    /* End of RelationalOperator: '<S639>/Equal4' */
    /* End of Outputs for SubSystem: '<S639>/TX buffer update CAN2' */

    /* RelationalOperator: '<S639>/Equal7' incorporates:
     *  Constant: '<S639>/Constant11'
     *  Constant: '<S639>/Constant27'
     *  Math: '<S639>/Mod1'
     *  Sum: '<S639>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_o, COMM_Phase2)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_n_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S636>/Check msg transmission CAN2' */
}

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for function-call system: '<S8>/TTA System' */
void TTASystem_Init(rtB_TTASystem *localB, rtDW_TTASystem *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;

  /* SystemInitialize for Enabled SubSystem: '<S27>/Initialization' */
  /* SystemInitialize for Enabled SubSystem: '<S135>/RoleID and Global Time init' */
  /* SystemInitialize for Outport: '<S150>/Finish Initialization' incorporates:
   *  Constant: '<S150>/SET'
   */
  localB->SET = 0.0;

  /* End of SystemInitialize for SubSystem: '<S135>/RoleID and Global Time init' */
  /* End of SystemInitialize for SubSystem: '<S27>/Initialization' */

  /* SystemInitialize for Enabled SubSystem: '<S27>/Matrix Cycle Manager' */
  /* SystemInitialize for Enabled SubSystem: '<S141>/Controller Matrix Cycle' */
  /* SystemInitialize for Enabled SubSystem: '<S170>/controller basic cycle 1' */
  /* SystemInitialize for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
  /* SystemInitialize for Enabled SubSystem: '<S404>/Subsystem' */
  /* InitializeConditions for MATLABSystem: '<S533>/Moving Average' */
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0;
    for (i = 0; i < 29; i++) {
      obj->pCumSumRev[i] = 0.0;
    }

    obj->pCumRevIndex = 1.0;
    obj->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S533>/Moving Average' */
  /* End of SystemInitialize for SubSystem: '<S404>/Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
  /* End of SystemInitialize for SubSystem: '<S170>/controller basic cycle 1' */
  /* End of SystemInitialize for SubSystem: '<S141>/Controller Matrix Cycle' */
  /* End of SystemInitialize for SubSystem: '<S27>/Matrix Cycle Manager' */
}

/* System reset for function-call system: '<S8>/TTA System' */
void TTASystem_Reset(rtDW_TTASystem *localDW)
{
  /* SystemReset for Chart: '<S27>/Chart' */
  localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S27>/Chart1' */
  localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S27>/Chart2' */
  localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S27>/Chart3' */
  localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S27>/Chart4' */
  localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ = 0U;
}

/* Disable for function-call system: '<S8>/TTA System' */
void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW)
{
  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A2' */
  if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin A2' */

  /* Disable for Enabled SubSystem: '<S27>/Initialization' */
  if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S135>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S150>/Finish Initialization' incorporates:
       *  Constant: '<S150>/SET'
       */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S135>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/Initialization' */

  /* Disable for Enabled SubSystem: '<S27>/Matrix Cycle Manager' */
  if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S141>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S184>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S184>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S188>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S188>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S190>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S190>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S192>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S192>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S176>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S176>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S176>/Transmission subtasks' */

          /* Disable for Outport: '<S176>/Send CAN1' incorporates:
           *  RelationalOperator: '<S196>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S176>/Receive CAN1' incorporates:
           *  Logic: '<S193>/AND'
           */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S176>/Send CAN2' incorporates:
           *  RelationalOperator: '<S197>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S176>/Receive CAN2' incorporates:
           *  Logic: '<S193>/AND1'
           */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S177>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S177>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S177>/Transmission subtasks' */

          /* Disable for Outport: '<S177>/Send CAN1' incorporates:
           *  RelationalOperator: '<S214>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Logic: '<S211>/AND' incorporates:
           *  Outport: '<S177>/Receive CAN1'
           */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S177>/Send CAN2' incorporates:
           *  RelationalOperator: '<S215>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Logic: '<S211>/AND1' incorporates:
           *  Outport: '<S177>/Receive CAN2'
           */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S178>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S178>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S178>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S232>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN1'
           */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Logic: '<S229>/AND' incorporates:
           *  Outport: '<S178>/Receive CAN1'
           */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for RelationalOperator: '<S233>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN2'
           */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Logic: '<S229>/AND1' incorporates:
           *  Outport: '<S178>/Receive CAN2'
           */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S179>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S179>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S179>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S250>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN1'
           */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Logic: '<S247>/AND' incorporates:
           *  Outport: '<S179>/Receive CAN1'
           */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for RelationalOperator: '<S251>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN2'
           */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Logic: '<S247>/AND1' incorporates:
           *  Outport: '<S179>/Receive CAN2'
           */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote3' */

        /* Disable for Logic: '<S172>/OR1' incorporates:
         *  Outport: '<S172>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S172>/OR4' incorporates:
         *  Outport: '<S172>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S172>/OR2' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S172>/OR3' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S403>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S403>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          /* Disable for Enabled SubSystem: '<S404>/Subsystem' */
          if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S404>/Subsystem' */
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_M_h) {
          /* Disable for Enabled SubSystem: '<S405>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S405>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_M_h = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S406>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S406>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S407>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S407>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S397>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S397>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S397>/Transmission subtasks' */

          /* Disable for Outport: '<S397>/Send CAN1' incorporates:
           *  RelationalOperator: '<S412>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN1' incorporates:
           *  Logic: '<S409>/AND'
           */
          localB->Receptionsubstasks_ij.AND = false;

          /* Disable for Outport: '<S397>/Send CAN2' incorporates:
           *  RelationalOperator: '<S413>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN2' incorporates:
           *  Logic: '<S409>/AND1'
           */
          localB->Receptionsubstasks_ij.AND1 = false;
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S398>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S398>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S398>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S398>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND' incorporates:
           *  Outport: '<S398>/Receive CAN1'
           */
          localB->Receptionsubstasks_g1.AND = false;

          /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND1' incorporates:
           *  Outport: '<S398>/Receive CAN2'
           */
          localB->Receptionsubstasks_g1.AND1 = false;
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S399>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S399>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S399>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S399>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

          /* Disable for Logic: '<S449>/AND' incorporates:
           *  Outport: '<S399>/Receive CAN1'
           */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_n.Equal7 = false;

          /* Disable for Logic: '<S449>/AND1' incorporates:
           *  Outport: '<S399>/Receive CAN2'
           */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S173>/OR' incorporates:
         *  Outport: '<S173>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S173>/OR1' incorporates:
         *  Outport: '<S173>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S173>/OR2' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S173>/OR3' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S631>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S631>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S632>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S632>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S633>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S633>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S627>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S627>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S627>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S627>/Transmission subtasks' */

          /* Disable for Outport: '<S627>/Send CAN1' incorporates:
           *  RelationalOperator: '<S638>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

          /* Disable for Logic: '<S635>/AND' incorporates:
           *  Outport: '<S627>/Receive CAN1'
           */
          localB->Receptionsubstasks_c.AND = false;

          /* Disable for Outport: '<S627>/Send CAN2' incorporates:
           *  RelationalOperator: '<S639>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_im.Equal7 = false;

          /* Disable for Logic: '<S635>/AND1' incorporates:
           *  Outport: '<S627>/Receive CAN2'
           */
          localB->Receptionsubstasks_c.AND1 = false;
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S628>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S628>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S628>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

          /* Disable for Logic: '<S655>/AND' incorporates:
           *  Outport: '<S628>/Receive CAN1'
           */
          localB->Receptionsubstasks_o.AND = false;

          /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_k.Equal7 = false;

          /* Disable for Logic: '<S655>/AND1' incorporates:
           *  Outport: '<S628>/Receive CAN2'
           */
          localB->Receptionsubstasks_o.AND1 = false;
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S174>/OR' incorporates:
         *  Outport: '<S174>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S174>/OR1' incorporates:
         *  Outport: '<S174>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S174>/OR2' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S174>/OR3' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 2' */
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S141>/Controller Matrix Cycle' */

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Send_Message_CAN1'
     */
    localB->signal1 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Send_Message_CAN2'
     */
    localB->signal2 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Receive_Message_CAN1'
     */
    localB->signal3 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Receive_Message_CAN2'
     */
    localB->signal4 = false;
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/Matrix Cycle Manager' */

  /* Disable for Chart: '<S27>/Chart1' incorporates:
   *  SubSystem: '<S8>/CAN1 Recieve'
   */
  CAN1Recieve_Disable(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h);

  /* Disable for Chart: '<S27>/Chart2' incorporates:
   *  SubSystem: '<S8>/CAN2 Recieve'
   */
  CAN2Recieve_Disable(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b);

  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A0' */
  if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin A0' */

  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A1' */
  if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin A1' */

  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin D10' */
  if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin D10' */

  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A4' */
  if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin A4' */

  /* Disable for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Disable for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Disable for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Disable for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Disable for Chart: '<S27>/Chart4' incorporates:
   *  SubSystem: '<S8>/Measure EXecution time'
   */
  MeasureEXecutiontime_Disable(&localDW->MeasureEXecutiontime_d);
}

/* Start for function-call system: '<S8>/TTA System' */
void TTASystem_Start(rtDW_TTASystem *localDW)
{
  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A2' */
  /* Start for M-S-Function: '<S144>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN7, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin A2' */

  /* Start for DataStoreMemory: '<S27>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* Start for Enabled SubSystem: '<S27>/Matrix Cycle Manager' */
  /* Start for Enabled SubSystem: '<S141>/Controller Matrix Cycle' */
  /* Start for Enabled SubSystem: '<S170>/controller basic cycle 1' */
  /* Start for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
  /* Start for Enabled SubSystem: '<S404>/Subsystem' */
  /* Start for M-S-Function: '<S534>/Level-2 M-file S-Function' */

  /* configure the analog input for filtered inputs */
  AninConfigure(ANIN_PORTF_PIN10,0);

  /* Start for MATLABSystem: '<S533>/Moving Average' */
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  localDW->obj.NumChannels = 1;
  localDW->obj._pobj0.isInitialized = 0;
  localDW->obj._pobj0.isInitialized = 0;
  localDW->obj.pStatistic = &localDW->obj._pobj0;
  localDW->obj.isSetupComplete = true;
  localDW->obj.TunablePropsChanged = false;

  /* End of Start for SubSystem: '<S404>/Subsystem' */
  /* End of Start for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
  /* End of Start for SubSystem: '<S170>/controller basic cycle 1' */
  /* End of Start for SubSystem: '<S141>/Controller Matrix Cycle' */
  /* End of Start for SubSystem: '<S27>/Matrix Cycle Manager' */

  /* Start for Chart: '<S27>/Chart1' incorporates:
   *  SubSystem: '<S8>/CAN1 Recieve'
   */
  CAN1Recieve_Start();

  /* Start for Chart: '<S27>/Chart2' incorporates:
   *  SubSystem: '<S8>/CAN2 Recieve'
   */
  CAN2Recieve_Start();

  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A0' */
  /* Start for M-S-Function: '<S142>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN0, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin A0' */

  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A1' */
  /* Start for M-S-Function: '<S143>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin A1' */

  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin D10' */
  /* Start for M-S-Function: '<S146>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN4, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin D10' */

  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A4' */
  /* Start for M-S-Function: '<S145>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN9, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin A4' */

  /* Start for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' */
  /* Start for M-S-Function: '<S166>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Start for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' */
  /* Start for M-S-Function: '<S167>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Start for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' */
  /* Start for M-S-Function: '<S168>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN12, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Start for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' */
  /* Start for M-S-Function: '<S169>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN15, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Start for Chart: '<S27>/Chart4' incorporates:
   *  SubSystem: '<S8>/Measure EXecution time'
   */
  MeasureEXecutiontime_Start();
}

/* Output and update for function-call system: '<S8>/TTA System' */
void TTASystem(const real_T *rtd_Board_ID, uint16_T *rtd_Local_Ticks, real_T
               *rtd_Master_ID, msg_buffer_type *rtd_Msg_Rx_CAN1, msg_buffer_type
               *rtd_Msg_Rx_CAN2, uint16_T *rtd_Msg_Rx_Ticks_CAN1, uint16_T
               *rtd_Msg_Rx_Ticks_CAN2, msg_buffer_type *rtd_Msg_Tx_CAN1,
               msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
               *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2,
               uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T
               *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
               *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D12, real_T
               *rtd_Toggle_Pin_D13, real_T *rtd_Toggle_Pin_D8, real_T
               *rtd_Toggle_Pin_D9, real_T *rtd_Trailer_ID, uint32_T
               *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
               *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
               rtB_TTASystem *localB, const rtC_TTASystem *localC,
               rtDW_TTASystem *localDW)
{
  /* local block i/o variables */
  uint16_T rtb_Level2MfileSFunction_i;
  g_dsp_internal_SlidingWindowAve *obj;
  msg_buffer_type rtb_DataStoreRead3;
  msg_buffer_type rtb_DataStoreRead3_bo;
  msg_buffer_type rtb_DataStoreRead3_d1;
  msg_buffer_type rtb_DataStoreRead3_e;
  msg_buffer_type rtb_DataStoreRead3_i;
  msg_buffer_type rtb_DataStoreRead3_k1;
  msg_buffer_type rtb_DataStoreRead3_ly;
  msg_buffer_type rtb_DataStoreRead3_mk;
  msg_buffer_type rtb_DataStoreRead3_ny;
  msg_buffer_type rtb_DataStoreRead3_o;
  msg_buffer_type rtb_DataStoreRead3_p;
  msg_buffer_type rtb_DataStoreRead_cs;
  msg_buffer_type rtb_DataStoreRead_d5;
  msg_buffer_type rtb_DataStoreRead_dao;
  msg_buffer_type rtb_DataStoreRead_fu;
  msg_buffer_type rtb_DataStoreRead_ge;
  msg_buffer_type rtb_DataStoreRead_is;
  msg_buffer_type rtb_DataStoreRead_j;
  msg_buffer_type rtb_DataStoreRead_k0;
  msg_buffer_type rtb_DataStoreRead_m1;
  msg_buffer_type rtb_DataStoreRead_p1;
  msg_buffer_type rtb_DataStoreRead_pn;
  real_T csumrev[29];
  real_T rtb_signal1[20];
  real_T rtb_signal2[20];
  real_T rtb_signal1_h4[14];
  real_T rtb_DataStoreRead14;
  real_T rtb_DataStoreRead15;
  real_T rtb_DataStoreRead15_b;
  real_T rtb_DataStoreRead15_o;
  real_T rtb_DataStoreRead4_dd;
  real_T rtb_DataStoreRead_pp5;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  real_T rtb_Product;
  real_T rtb_Product_e;
  real_T rtb_Product_p;
  int32_T exitg1;
  int32_T i;
  int_T linIx;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T rtb_DataStoreRead8_c;
  uint16_T rtb_DataStoreRead_c;
  uint16_T rtb_DataStoreRead_ch;
  uint16_T rtb_DataStoreRead_ea;
  uint16_T rtb_DataStoreRead_gt;
  uint16_T rtb_DataStoreRead_io;
  uint16_T u0;
  uint16_T u1;
  int8_T rtb_FindNonzeroElements[3];
  uint8_T rtb_Switch_Buffer_1;
  boolean_T rtb_AND17;
  boolean_T rtb_AND17_j;
  boolean_T rtb_AND19;
  boolean_T rtb_AND19_n;
  boolean_T rtb_AND1_b;
  boolean_T rtb_AND1_cn;
  boolean_T rtb_AND1_d;
  boolean_T rtb_AND1_en;
  boolean_T rtb_AND1_h;
  boolean_T rtb_AND1_j;
  boolean_T rtb_AND1_jf;
  boolean_T rtb_AND1_l;
  boolean_T rtb_AND1_m;
  boolean_T rtb_AND1_n;
  boolean_T rtb_AND1_p;
  boolean_T rtb_AND20;
  boolean_T rtb_AND20_e;
  boolean_T rtb_AND_c;
  boolean_T rtb_AND_ca;
  boolean_T rtb_AND_gj;
  boolean_T rtb_AND_io;
  boolean_T rtb_AND_j0;
  boolean_T rtb_AND_jk;
  boolean_T rtb_AND_n;
  boolean_T rtb_AND_o;
  boolean_T rtb_AND_o3;
  boolean_T rtb_AND_oj;
  boolean_T rtb_DataStoreRead1_ah;
  boolean_T rtb_DataStoreRead1_bi;
  boolean_T rtb_DataStoreRead1_bj;
  boolean_T rtb_DataStoreRead1_cu;
  boolean_T rtb_DataStoreRead1_df;
  boolean_T rtb_DataStoreRead1_eq;
  boolean_T rtb_DataStoreRead1_fy;
  boolean_T rtb_DataStoreRead1_i5;
  boolean_T rtb_DataStoreRead1_mv;
  boolean_T rtb_DataStoreRead1_nwf;
  boolean_T rtb_DataStoreRead1_oi;
  boolean_T rtb_DataStoreRead2_a;
  boolean_T rtb_DataStoreRead2_c;
  boolean_T rtb_DataStoreRead2_co;
  boolean_T rtb_DataStoreRead2_d;
  boolean_T rtb_DataStoreRead2_e;
  boolean_T rtb_DataStoreRead2_f3;
  boolean_T rtb_DataStoreRead2_i5;
  boolean_T rtb_DataStoreRead2_k5;
  boolean_T rtb_DataStoreRead2_kc;
  boolean_T rtb_DataStoreRead2_la;
  boolean_T rtb_DataStoreRead2_ow;
  boolean_T rtb_DataStoreRead2_pz;
  boolean_T rtb_DataStoreRead_h2y;
  boolean_T rtb_DataStoreRead_jo;
  boolean_T rtb_Equal1_hn;
  boolean_T rtb_Equal1_i;
  boolean_T rtb_Equal2_fk;
  boolean_T rtb_Equal2_fs;
  boolean_T rtb_Equal2_id;
  boolean_T rtb_Equal2_pz;
  boolean_T rtb_Equal3_c;
  boolean_T rtb_Equal4_or;
  boolean_T rtb_Equal5_c;
  boolean_T rtb_NOT_ah;
  boolean_T rtb_NOT_ee;
  boolean_T rtb_NOT_ij;
  boolean_T rtb_NOT_iz;
  boolean_T rtb_NOT_jr;
  boolean_T rtb_NOT_ki;
  boolean_T rtb_NOT_kl;
  boolean_T rtb_NOT_kn;
  boolean_T rtb_NOT_m4;
  boolean_T rtb_NOT_p5;
  boolean_T rtb_OR_c0;
  boolean_T rtb_OR_e;
  boolean_T rtb_OR_mp;

  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A2' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  /* Constant: '<S27>/Constant2' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA2_MODE = true;

    /* Switch: '<S132>/Switch' incorporates:
     *  DataStoreRead: '<S132>/Data Store Read'
     */
    if (localDW->A2_Pin_State) {
      /* DataStoreWrite: '<S132>/Data Store Write1' incorporates:
       *  Constant: '<S132>/Constant1'
       */
      localDW->A2_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S132>/Data Store Write1' incorporates:
       *  Constant: '<S132>/Constant'
       */
      localDW->A2_Pin_State = true;
    }

    /* End of Switch: '<S132>/Switch' */
    /* DataStoreRead: '<S132>/Data Store Read1' */
    localB->DataStoreRead1_o = localDW->A2_Pin_State;

    /* Update for M-S-Function: '<S144>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o == 0) {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Constant: '<S27>/Constant2' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin A2' */

  /* Outputs for Enabled SubSystem: '<S27>/Initialization' incorporates:
   *  EnablePort: '<S135>/Enable'
   */
  /* DataStoreRead: '<S27>/Data Store Read' incorporates:
   *  Constant: '<S150>/SET'
   *  DataStoreRead: '<S135>/Data Store Read1'
   *  Logic: '<S135>/AND'
   *  Logic: '<S135>/OR'
   *  Logic: '<S135>/OR2'
   *  Logic: '<S135>/OR3'
   *  Logic: '<S135>/OR4'
   */
  if (localDW->Initialization_flag) {
    localDW->Initialization_MODE = true;

    /* Logic: '<S135>/OR1' */
    rtb_DataStoreRead_h2y = ((*rtd_New_Msg_Ready_CAN1) ||
      (*rtd_New_Msg_Ready_CAN2));

    /* RelationalOperator: '<S135>/Equal' incorporates:
     *  Constant: '<S135>/Board nr1'
     */
    rtb_DataStoreRead2_f3 = (*rtd_Board_ID == 2.0);

    /* RelationalOperator: '<S135>/Equal1' incorporates:
     *  Constant: '<S135>/Board nr2'
     */
    rtb_Equal1_hn = (*rtd_Board_ID == 3.0);

    /* RelationalOperator: '<S135>/Equal2' incorporates:
     *  Constant: '<S135>/Board nr3'
     */
    rtb_Equal2_pz = (*rtd_Board_ID == 4.0);

    /* RelationalOperator: '<S135>/Equal3' incorporates:
     *  Constant: '<S135>/Board nr4'
     */
    rtb_Equal3_c = (*rtd_Board_ID == 5.0);

    /* RelationalOperator: '<S135>/Equal4' incorporates:
     *  Constant: '<S135>/Board nr5'
     */
    rtb_Equal4_or = (*rtd_Board_ID == 6.0);

    /* RelationalOperator: '<S135>/Equal5' incorporates:
     *  Constant: '<S135>/Board nr6'
     */
    rtb_Equal5_c = (*rtd_Board_ID == 7.0);

    /* Outputs for Enabled SubSystem: '<S135>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    if (((rtb_DataStoreRead2_f3 || rtb_Equal1_hn || rtb_Equal2_pz ||
          rtb_Equal3_c || rtb_Equal4_or || rtb_Equal5_c) &&
         localDW->Initialization_Timeout) || rtb_DataStoreRead_h2y) {
      localDW->RoleIDandGlobalTimeinit_MODE = true;

      /* Outputs for Enabled SubSystem: '<S150>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S152>/Enable'
       */
      if (rtb_DataStoreRead_h2y) {
        /* DataStoreWrite: '<S152>/Data Store Write4' incorporates:
         *  Constant: '<S152>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* RelationalOperator: '<S152>/Equal' incorporates:
         *  Constant: '<S152>/Constant'
         */
        rtb_DataStoreRead_jo = (*rtd_New_Msg_Ready_CAN1 == 1.0);

        /* Switch: '<S152>/Switch' */
        if (rtb_DataStoreRead_jo) {
          /* Switch: '<S152>/Switch' incorporates:
           *  DataStoreRead: '<S152>/Data Store Read1'
           */
          rtb_Switch_Buffer_1 = rtd_Msg_Rx_CAN1->Buffer_1;
        } else {
          /* Switch: '<S152>/Switch' incorporates:
           *  DataStoreRead: '<S152>/Data Store Read2'
           */
          rtb_Switch_Buffer_1 = rtd_Msg_Rx_CAN2->Buffer_1;
        }

        /* End of Switch: '<S152>/Switch' */

        /* Outputs for Atomic SubSystem: '<S153>/Bit Shift3' */
        BitShift3(rtb_Switch_Buffer_1, &localB->BitShift3_i);

        /* End of Outputs for SubSystem: '<S153>/Bit Shift3' */

        /* Outputs for Atomic SubSystem: '<S153>/Bit Shift1' */
        /* MATLAB Function: '<S155>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S160>:1' */
        /* '<S160>:1:8' */
        Rx_init_mc = (uint8_T)((uint32_T)localB->BitShift3_i.y >> 5);

        /* End of Outputs for SubSystem: '<S153>/Bit Shift1' */

        /* Switch: '<S152>/Switch1' */
        if (rtb_DataStoreRead_jo) {
          /* DataTypeConversion: '<S152>/Cast' incorporates:
           *  Constant: '<S152>/Constant1'
           *  Constant: '<S152>/Constant3'
           *  Constant: '<S152>/delay_estimation_1'
           *  Product: '<S152>/Multiply'
           *  Sum: '<S152>/Sum'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase1 * (real_T)Rx_init_mc + 0.0) + 3.0);
        } else {
          /* DataTypeConversion: '<S152>/Cast' incorporates:
           *  Constant: '<S152>/Constant2'
           *  Constant: '<S152>/Constant3'
           *  Constant: '<S152>/delay_estimation_2'
           *  Product: '<S152>/Multiply1'
           *  Sum: '<S152>/Sum1'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase2 * (real_T)Rx_init_mc + 0.0) + 3.0);
        }

        /* End of Switch: '<S152>/Switch1' */

        /* DataStoreWrite: '<S152>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT;

        /* Outputs for Atomic SubSystem: '<S153>/Bit Shift' */
        /* MATLAB Function: '<S154>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S159>:1' */
        /* '<S159>:1:8' */
        Rx_init_bc = (uint8_T)((uint32_T)rtb_Switch_Buffer_1 >> 7);

        /* End of Outputs for SubSystem: '<S153>/Bit Shift' */

        /* DataStoreWrite: '<S152>/Data Store Write2' */
        localDW->basic_cycle_count = Rx_init_bc;

        /* Outputs for Atomic SubSystem: '<S153>/Bit Shift4' */
        BitShift4(rtb_Switch_Buffer_1, &localB->BitShift4_d);

        /* End of Outputs for SubSystem: '<S153>/Bit Shift4' */

        /* Outputs for Atomic SubSystem: '<S153>/Bit Shift2' */
        /* MATLAB Function: '<S156>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S161>:1' */
        /* '<S161>:1:8' */
        Rx_init_id = (uint8_T)((uint32_T)localB->BitShift4_d.y >> 4);

        /* End of Outputs for SubSystem: '<S153>/Bit Shift2' */

        /* DataStoreWrite: '<S152>/Data Store Write3' incorporates:
         *  DataTypeConversion: '<S152>/Cast1'
         */
        *rtd_Master_ID = Rx_init_id;
      }

      /* End of Outputs for SubSystem: '<S150>/Global Time Initialization Slave' */

      /* Outputs for Enabled SubSystem: '<S150>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S151>/Enable'
       */
      if (localDW->Initialization_Timeout) {
        /* DataStoreWrite: '<S151>/Data Store Write3' incorporates:
         *  Constant: '<S151>/Board nr1'
         */
        *rtd_Master_ID = 1.0;

        /* DataStoreWrite: '<S151>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast;

        /* DataStoreWrite: '<S151>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;
      }

      /* End of Outputs for SubSystem: '<S150>/Global Time Initialization Master' */

      /* Switch: '<S150>/Switch2' incorporates:
       *  Constant: '<S150>/Constant1'
       *  DataStoreWrite: '<S150>/Data Store Write'
       *  Switch: '<S150>/Switch1'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->Role_ID = 2.0;
      } else if (localDW->Initialization_Timeout) {
        /* Switch: '<S150>/Switch1' incorporates:
         *  Constant: '<S150>/Constant'
         *  DataStoreWrite: '<S150>/Data Store Write'
         */
        localDW->Role_ID = 1.0;
      }

      /* End of Switch: '<S150>/Switch2' */

      /* DataStoreWrite: '<S150>/Data Store Write3' incorporates:
       *  Constant: '<S150>/RESET2'
       */
      *rtd_New_Msg_Ready_CAN1 = false;

      /* DataStoreWrite: '<S150>/Data Store Write5' incorporates:
       *  Constant: '<S150>/RESET3'
       */
      *rtd_New_Msg_Ready_CAN2 = false;

      /* DataStoreWrite: '<S150>/Data Store Write2' incorporates:
       *  Constant: '<S150>/RESET1'
       */
      localDW->Delay_Counter = 0.0;
      localB->SET = 1.0;
    } else if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S150>/Finish Initialization' incorporates:
       *  Constant: '<S150>/SET'
       */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S135>/RoleID and Global Time init' */

    /* Logic: '<S135>/NOT' incorporates:
     *  Constant: '<S150>/SET'
     *  DataStoreRead: '<S135>/Data Store Read1'
     *  DataStoreWrite: '<S135>/Data Store Write1'
     *  Logic: '<S135>/AND'
     *  Logic: '<S135>/OR'
     *  Logic: '<S135>/OR2'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S147>/GreaterThan' incorporates:
     *  Constant: '<S135>/Constant'
     *  DataStoreRead: '<S147>/Data Store Read1'
     *  DataStoreWrite: '<S135>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 744.0);

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S147>/Increment1'
     *  Constant: '<S147>/Reset'
     *  DataStoreRead: '<S147>/Data Store Read'
     *  DataStoreWrite: '<S135>/Data Store Write'
     *  DataStoreWrite: '<S147>/Data Store Write2'
     *  Sum: '<S147>/Add2'
     */
    if (localDW->Initialization_Timeout) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S147>/Switch' */

    /* Outputs for Enabled SubSystem: '<S135>/Initialize Trailer 1' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    if (rtb_DataStoreRead2_f3 || rtb_Equal1_hn || rtb_Equal2_pz) {
      /* DataStoreWrite: '<S148>/Data Store Write' incorporates:
       *  Constant: '<S148>/Constant'
       */
      *rtd_Trailer_ID = 1.0;
    }

    /* End of Outputs for SubSystem: '<S135>/Initialize Trailer 1' */

    /* Outputs for Enabled SubSystem: '<S135>/Initialize Trailer 2' incorporates:
     *  EnablePort: '<S149>/Enable'
     */
    if (rtb_Equal3_c || rtb_Equal4_or || rtb_Equal5_c) {
      /* DataStoreWrite: '<S149>/Data Store Write' incorporates:
       *  Constant: '<S149>/Constant'
       */
      *rtd_Trailer_ID = 2.0;
    }

    /* End of Outputs for SubSystem: '<S135>/Initialize Trailer 2' */

    /* DataStoreRead: '<S135>/Data Store Read9' incorporates:
     *  Logic: '<S135>/OR3'
     *  Logic: '<S135>/OR4'
     */
    Trailer_ID_s = *rtd_Trailer_ID;
  } else if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S135>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S150>/Finish Initialization' incorporates:
       *  Constant: '<S150>/SET'
       */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S135>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of DataStoreRead: '<S27>/Data Store Read' */
  /* End of Outputs for SubSystem: '<S27>/Initialization' */

  /* Outputs for Enabled SubSystem: '<S27>/Basic Cycle Increment' incorporates:
   *  EnablePort: '<S124>/Enable'
   */
  /* RelationalOperator: '<S27>/Equal' incorporates:
   *  Constant: '<S27>/Constant'
   *  Switch: '<S27>/Switch'
   */
  if (*rtd_Local_Ticks == 372.0) {
    /* DataStoreWrite: '<S124>/Data Store Write' incorporates:
     *  Constant: '<S124>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S124>/Switch' incorporates:
     *  DataStoreRead: '<S124>/Data Store Read5'
     *  RelationalOperator: '<S124>/LessThanOrEqual'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      /* Switch: '<S124>/Switch' incorporates:
       *  Constant: '<S124>/Increment'
       *  DataStoreRead: '<S124>/Data Store Read4'
       *  Sum: '<S124>/Add'
       */
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      /* Switch: '<S124>/Switch' */
      bacic_cycle_s = localC->Cast_e;
    }

    /* End of Switch: '<S124>/Switch' */

    /* DataStoreWrite: '<S124>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S27>/Equal' */
  /* End of Outputs for SubSystem: '<S27>/Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S27>/Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S141>/Enable'
   */
  /* Logic: '<S27>/NOT1' incorporates:
   *  Constant: '<S141>/Constant'
   *  Constant: '<S141>/Constant1'
   *  Constant: '<S141>/Constant2'
   *  Constant: '<S141>/Constant3'
   *  Constant: '<S141>/Constant4'
   *  Constant: '<S141>/Constant5'
   *  Constant: '<S170>/Constant2'
   *  Constant: '<S172>/Constant'
   *  Constant: '<S172>/Constant12'
   *  Constant: '<S172>/Constant14'
   *  Constant: '<S172>/Constant17'
   *  Constant: '<S172>/Constant19'
   *  Constant: '<S172>/Constant2'
   *  Constant: '<S172>/Constant21'
   *  Constant: '<S172>/Constant23'
   *  Constant: '<S172>/Constant25'
   *  Constant: '<S172>/Constant27'
   *  Constant: '<S172>/Constant28'
   *  Constant: '<S172>/Constant3'
   *  Constant: '<S172>/Constant31'
   *  Constant: '<S172>/Constant33'
   *  Constant: '<S172>/Constant34'
   *  Constant: '<S172>/Constant6'
   *  Constant: '<S172>/Constant8'
   *  Constant: '<S172>/Constant9'
   *  Constant: '<S173>/Constant'
   *  Constant: '<S173>/Constant11'
   *  Constant: '<S173>/Constant12'
   *  Constant: '<S173>/Constant14'
   *  Constant: '<S173>/Constant16'
   *  Constant: '<S173>/Constant17'
   *  Constant: '<S173>/Constant19'
   *  Constant: '<S173>/Constant20'
   *  Constant: '<S173>/Constant23'
   *  Constant: '<S173>/Constant4'
   *  Constant: '<S173>/Constant41'
   *  Constant: '<S173>/Constant5'
   *  Constant: '<S173>/Constant6'
   *  Constant: '<S173>/Constant8'
   *  Constant: '<S174>/Constant'
   *  Constant: '<S174>/Constant11'
   *  Constant: '<S174>/Constant12'
   *  Constant: '<S174>/Constant16'
   *  Constant: '<S174>/Constant17'
   *  Constant: '<S174>/Constant4'
   *  Constant: '<S174>/Constant41'
   *  Constant: '<S174>/Constant5'
   *  Constant: '<S174>/Constant6'
   *  Constant: '<S174>/Constant8'
   *  Constant: '<S184>/Constant'
   *  Constant: '<S185>/Constant1'
   *  Constant: '<S185>/Constant4'
   *  Constant: '<S187>/Constant4'
   *  Constant: '<S188>/Constant1'
   *  Constant: '<S189>/Constant4'
   *  Constant: '<S190>/Constant1'
   *  Constant: '<S191>/Constant4'
   *  Constant: '<S192>/Constant1'
   *  Constant: '<S401>/Constant2'
   *  Constant: '<S401>/Constant3'
   *  Constant: '<S401>/Constant4'
   *  Constant: '<S403>/Constant1'
   *  Constant: '<S404>/Constant'
   *  Constant: '<S405>/Constant1'
   *  Constant: '<S406>/Constant1'
   *  Constant: '<S407>/Constant'
   *  Constant: '<S414>/Constant'
   *  Constant: '<S434>/Constant'
   *  Constant: '<S454>/Constant'
   *  Constant: '<S487>/Constant2'
   *  Constant: '<S488>/Constant2'
   *  Constant: '<S489>/Constant2'
   *  Constant: '<S490>/Constant2'
   *  Constant: '<S491>/Constant'
   *  Constant: '<S631>/Constant1'
   *  Constant: '<S632>/Constant1'
   *  Constant: '<S633>/Constant'
   *  Constant: '<S640>/Constant'
   *  Constant: '<S660>/Constant'
   *  DataStoreRead: '<S141>/Data Store Read10'
   *  DataStoreRead: '<S172>/Data Store Read11'
   *  DataStoreRead: '<S172>/Data Store Read6'
   *  DataStoreRead: '<S172>/Data Store Read7'
   *  DataStoreRead: '<S173>/Data Store Read6'
   *  DataStoreRead: '<S174>/Data Store Read6'
   *  DataStoreRead: '<S185>/Data Store Read'
   *  DataStoreRead: '<S185>/Data Store Read1'
   *  DataStoreRead: '<S187>/Data Store Read5'
   *  DataStoreRead: '<S189>/Data Store Read5'
   *  DataStoreRead: '<S191>/Data Store Read5'
   *  DataStoreRead: '<S27>/Data Store Read8'
   *  DataStoreWrite: '<S274>/Data Store Write2'
   *  DataStoreWrite: '<S503>/Data Store Write2'
   *  DataStoreWrite: '<S535>/Data Store Write2'
   *  DataStoreWrite: '<S565>/Data Store Write2'
   *  DataStoreWrite: '<S595>/Data Store Write2'
   *  DataStoreWrite: '<S695>/Data Store Write2'
   *  DataStoreWrite: '<S725>/Data Store Write2'
   *  DataStoreWrite: '<S755>/Data Store Write2'
   *  Logic: '<S141>/OR'
   *  Logic: '<S172>/AND'
   *  Logic: '<S172>/AND1'
   *  Logic: '<S172>/AND10'
   *  Logic: '<S172>/AND11'
   *  Logic: '<S172>/AND12'
   *  Logic: '<S172>/AND13'
   *  Logic: '<S172>/AND14'
   *  Logic: '<S172>/AND15'
   *  Logic: '<S172>/AND16'
   *  Logic: '<S172>/AND17'
   *  Logic: '<S172>/AND18'
   *  Logic: '<S172>/AND19'
   *  Logic: '<S172>/AND2'
   *  Logic: '<S172>/AND3'
   *  Logic: '<S172>/AND4'
   *  Logic: '<S172>/AND5'
   *  Logic: '<S172>/AND6'
   *  Logic: '<S172>/AND7'
   *  Logic: '<S172>/AND8'
   *  Logic: '<S172>/AND9'
   *  Logic: '<S172>/NOT1'
   *  Logic: '<S172>/NOT2'
   *  Logic: '<S172>/NOT3'
   *  Logic: '<S173>/AND1'
   *  Logic: '<S173>/AND10'
   *  Logic: '<S173>/AND18'
   *  Logic: '<S173>/AND3'
   *  Logic: '<S173>/AND4'
   *  Logic: '<S173>/AND5'
   *  Logic: '<S173>/AND6'
   *  Logic: '<S173>/AND7'
   *  Logic: '<S173>/AND8'
   *  Logic: '<S173>/AND9'
   *  Logic: '<S173>/NOT2'
   *  Logic: '<S174>/AND1'
   *  Logic: '<S174>/AND18'
   *  Logic: '<S174>/AND3'
   *  Logic: '<S174>/AND4'
   *  Logic: '<S174>/AND5'
   *  Logic: '<S174>/AND6'
   *  Logic: '<S174>/NOT2'
   *  Logic: '<S182>/AND'
   *  Logic: '<S184>/AND'
   *  Logic: '<S185>/AND'
   *  Logic: '<S185>/AND1'
   *  Logic: '<S187>/AND'
   *  Logic: '<S189>/AND'
   *  Logic: '<S191>/AND'
   *  Logic: '<S403>/NOT'
   *  Logic: '<S405>/NOT'
   *  Logic: '<S406>/NOT'
   *  Logic: '<S407>/AND'
   *  Logic: '<S631>/NOT'
   *  Logic: '<S632>/NOT'
   *  Logic: '<S633>/AND'
   *  RelationalOperator: '<S141>/Equal'
   *  RelationalOperator: '<S141>/Equal1'
   *  RelationalOperator: '<S141>/Equal2'
   *  RelationalOperator: '<S141>/Equal3'
   *  RelationalOperator: '<S141>/Equal4'
   *  RelationalOperator: '<S141>/Equal5'
   *  RelationalOperator: '<S170>/Equal2'
   *  RelationalOperator: '<S172>/GreaterThan'
   *  RelationalOperator: '<S172>/GreaterThan1'
   *  RelationalOperator: '<S172>/GreaterThan10'
   *  RelationalOperator: '<S172>/GreaterThan11'
   *  RelationalOperator: '<S172>/GreaterThan12'
   *  RelationalOperator: '<S172>/GreaterThan13'
   *  RelationalOperator: '<S172>/GreaterThan14'
   *  RelationalOperator: '<S172>/GreaterThan15'
   *  RelationalOperator: '<S172>/GreaterThan16'
   *  RelationalOperator: '<S172>/GreaterThan17'
   *  RelationalOperator: '<S172>/GreaterThan18'
   *  RelationalOperator: '<S172>/GreaterThan19'
   *  RelationalOperator: '<S172>/GreaterThan2'
   *  RelationalOperator: '<S172>/GreaterThan20'
   *  RelationalOperator: '<S172>/GreaterThan21'
   *  RelationalOperator: '<S172>/GreaterThan22'
   *  RelationalOperator: '<S172>/GreaterThan23'
   *  RelationalOperator: '<S172>/GreaterThan24'
   *  RelationalOperator: '<S172>/GreaterThan25'
   *  RelationalOperator: '<S172>/GreaterThan26'
   *  RelationalOperator: '<S172>/GreaterThan27'
   *  RelationalOperator: '<S172>/GreaterThan28'
   *  RelationalOperator: '<S172>/GreaterThan29'
   *  RelationalOperator: '<S172>/GreaterThan3'
   *  RelationalOperator: '<S172>/GreaterThan30'
   *  RelationalOperator: '<S172>/GreaterThan31'
   *  RelationalOperator: '<S172>/GreaterThan32'
   *  RelationalOperator: '<S172>/GreaterThan33'
   *  RelationalOperator: '<S172>/GreaterThan4'
   *  RelationalOperator: '<S172>/GreaterThan5'
   *  RelationalOperator: '<S172>/GreaterThan6'
   *  RelationalOperator: '<S172>/GreaterThan7'
   *  RelationalOperator: '<S172>/GreaterThan8'
   *  RelationalOperator: '<S172>/GreaterThan9'
   *  RelationalOperator: '<S173>/GreaterThan10'
   *  RelationalOperator: '<S173>/GreaterThan11'
   *  RelationalOperator: '<S173>/GreaterThan12'
   *  RelationalOperator: '<S173>/GreaterThan13'
   *  RelationalOperator: '<S173>/GreaterThan14'
   *  RelationalOperator: '<S173>/GreaterThan15'
   *  RelationalOperator: '<S173>/GreaterThan16'
   *  RelationalOperator: '<S173>/GreaterThan17'
   *  RelationalOperator: '<S173>/GreaterThan18'
   *  RelationalOperator: '<S173>/GreaterThan19'
   *  RelationalOperator: '<S173>/GreaterThan2'
   *  RelationalOperator: '<S173>/GreaterThan20'
   *  RelationalOperator: '<S173>/GreaterThan21'
   *  RelationalOperator: '<S173>/GreaterThan3'
   *  RelationalOperator: '<S173>/GreaterThan6'
   *  RelationalOperator: '<S173>/GreaterThan7'
   *  RelationalOperator: '<S173>/GreaterThan8'
   *  RelationalOperator: '<S173>/GreaterThan9'
   *  RelationalOperator: '<S174>/GreaterThan10'
   *  RelationalOperator: '<S174>/GreaterThan11'
   *  RelationalOperator: '<S174>/GreaterThan12'
   *  RelationalOperator: '<S174>/GreaterThan13'
   *  RelationalOperator: '<S174>/GreaterThan2'
   *  RelationalOperator: '<S174>/GreaterThan3'
   *  RelationalOperator: '<S174>/GreaterThan6'
   *  RelationalOperator: '<S174>/GreaterThan7'
   *  RelationalOperator: '<S174>/GreaterThan8'
   *  RelationalOperator: '<S174>/GreaterThan9'
   *  RelationalOperator: '<S180>/Equal'
   *  RelationalOperator: '<S181>/Equal'
   *  RelationalOperator: '<S182>/Equal2'
   *  RelationalOperator: '<S183>/Equal2'
   *  RelationalOperator: '<S185>/Equal'
   *  RelationalOperator: '<S185>/Equal1'
   *  RelationalOperator: '<S185>/Equal2'
   *  RelationalOperator: '<S186>/Equal'
   *  RelationalOperator: '<S187>/Equal'
   *  RelationalOperator: '<S187>/Equal2'
   *  RelationalOperator: '<S189>/Equal'
   *  RelationalOperator: '<S189>/Equal2'
   *  RelationalOperator: '<S191>/Equal'
   *  RelationalOperator: '<S191>/Equal2'
   *  RelationalOperator: '<S401>/Equal'
   *  RelationalOperator: '<S401>/Equal1'
   *  RelationalOperator: '<S401>/Equal2'
   *  RelationalOperator: '<S404>/NotEqual'
   *  RelationalOperator: '<S410>/Equal16'
   *  RelationalOperator: '<S430>/Equal16'
   *  RelationalOperator: '<S450>/Equal16'
   *  RelationalOperator: '<S487>/Equal'
   *  RelationalOperator: '<S488>/Equal'
   *  RelationalOperator: '<S489>/Equal'
   *  RelationalOperator: '<S490>/Equal'
   *  RelationalOperator: '<S491>/Compare'
   *  RelationalOperator: '<S636>/Equal16'
   *  RelationalOperator: '<S656>/Equal16'
   */
  if (!localDW->Initialization_flag) {
    localDW->MatrixCycleManager_MODE = true;

    /* Outputs for Enabled SubSystem: '<S141>/Controller Matrix Cycle' incorporates:
     *  EnablePort: '<S170>/Enable'
     */
    if ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 3.0) || (*rtd_Board_ID ==
         4.0) || (*rtd_Board_ID == 5.0) || (*rtd_Board_ID == 6.0) ||
        (*rtd_Board_ID == 7.0)) {
      localDW->ControllerMatrixCycle_MODE = true;

      /* RelationalOperator: '<S170>/Equal' incorporates:
       *  Constant: '<S170>/Constant'
       *  DataStoreRead: '<S141>/Data Store Read10'
       */
      rtb_DataStoreRead_h2y = (localDW->basic_cycle_count == 0.0);

      /* RelationalOperator: '<S170>/Equal1' incorporates:
       *  Constant: '<S170>/Constant1'
       *  DataStoreRead: '<S141>/Data Store Read10'
       */
      rtb_DataStoreRead2_f3 = (localDW->basic_cycle_count == 1.0);

      /* Outputs for Enabled SubSystem: '<S170>/controller basic cycle 0' incorporates:
       *  EnablePort: '<S172>/Enable'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->controllerbasiccycle0_MODE = true;

        /* DataStoreRead: '<S172>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Check Timeouts' incorporates:
         *  EnablePort: '<S180>/Enable'
         */
        if ((*rtd_Local_Ticks >= 356.0) && (*rtd_Local_Ticks < localC->Sum14)) {
          /* Outputs for Enabled SubSystem: '<S180>/Timeout and Board error counter' incorporates:
           *  EnablePort: '<S265>/Enable'
           */
          if (*rtd_Local_Ticks == 356.0) {
            /* Logic: '<S265>/AND' incorporates:
             *  Constant: '<S265>/Constant'
             *  DataStoreRead: '<S265>/Data Store Read1'
             *  Logic: '<S265>/NOT'
             *  RelationalOperator: '<S265>/Equal'
             */
            rtb_Equal1_hn = ((2.0 != *rtd_Board_ID) &&
                             (!localDW->BC0_Vote1_processed));

            /* Switch: '<S265>/Switch2' incorporates:
             *  Constant: '<S265>/Constant6'
             *  DataStoreRead: '<S265>/Data Store Read5'
             *  DataStoreWrite: '<S265>/Data Store Write1'
             *  Sum: '<S265>/Plus'
             */
            if (rtb_Equal1_hn) {
              localDW->Board1_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch2' */

            /* Logic: '<S265>/AND1' incorporates:
             *  Constant: '<S265>/Constant17'
             *  DataStoreRead: '<S265>/Data Store Read2'
             *  Logic: '<S265>/NOT1'
             *  RelationalOperator: '<S265>/Equal1'
             */
            rtb_Equal2_pz = ((3.0 != *rtd_Board_ID) &&
                             (!localDW->BC0_Vote2_processed));

            /* Switch: '<S265>/Switch1' incorporates:
             *  Constant: '<S265>/Constant1'
             *  DataStoreRead: '<S265>/Data Store Read6'
             *  DataStoreWrite: '<S265>/Data Store Write2'
             *  Sum: '<S265>/Plus1'
             */
            if (rtb_Equal2_pz) {
              localDW->Board2_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch1' */

            /* Logic: '<S265>/AND2' incorporates:
             *  Constant: '<S265>/Constant3'
             *  DataStoreRead: '<S265>/Data Store Read3'
             *  Logic: '<S265>/NOT2'
             *  RelationalOperator: '<S265>/Equal2'
             */
            rtb_Equal3_c = ((4.0 != *rtd_Board_ID) &&
                            (!localDW->BC0_Vote3_processed));

            /* Switch: '<S265>/Switch3' incorporates:
             *  Constant: '<S265>/Constant2'
             *  DataStoreRead: '<S265>/Data Store Read8'
             *  DataStoreWrite: '<S265>/Data Store Write3'
             *  Sum: '<S265>/Plus2'
             */
            if (rtb_Equal3_c) {
              localDW->Board3_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch3' */

            /* Logic: '<S265>/NOT3' incorporates:
             *  DataStoreRead: '<S265>/Data Store Read13'
             */
            rtb_Equal4_or = !localDW->BC0_Sync_processed;

            /* Logic: '<S265>/AND8' incorporates:
             *  Constant: '<S265>/Constant8'
             *  Logic: '<S265>/AND5'
             *  RelationalOperator: '<S265>/Equal5'
             *  RelationalOperator: '<S265>/Equal6'
             */
            rtb_Equal5_c = (rtb_Equal4_or && ((*rtd_Master_ID == 4.0) && (4.0 !=
              *rtd_Board_ID)));

            /* Switch: '<S265>/Switch4' incorporates:
             *  Constant: '<S265>/Constant13'
             *  DataStoreRead: '<S265>/Data Store Read18'
             *  DataStoreWrite: '<S265>/Data Store Write5'
             *  Sum: '<S265>/Plus3'
             */
            if (rtb_Equal5_c) {
              localDW->Board3_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch4' */

            /* Logic: '<S265>/AND7' incorporates:
             *  Constant: '<S265>/Constant4'
             *  Logic: '<S265>/AND4'
             *  RelationalOperator: '<S265>/Equal4'
             *  RelationalOperator: '<S265>/Equal7'
             */
            rtb_DataStoreRead_jo = (rtb_Equal4_or && ((*rtd_Master_ID == 3.0) &&
              (3.0 != *rtd_Board_ID)));

            /* Switch: '<S265>/Switch5' incorporates:
             *  Constant: '<S265>/Constant14'
             *  DataStoreRead: '<S265>/Data Store Read20'
             *  DataStoreWrite: '<S265>/Data Store Write6'
             *  Sum: '<S265>/Plus4'
             */
            if (rtb_DataStoreRead_jo) {
              localDW->Board2_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch5' */

            /* Logic: '<S265>/AND6' incorporates:
             *  Constant: '<S265>/Constant9'
             *  Logic: '<S265>/AND3'
             *  RelationalOperator: '<S265>/Equal3'
             *  RelationalOperator: '<S265>/Equal8'
             */
            rtb_Equal4_or = (rtb_Equal4_or && ((*rtd_Master_ID == 2.0) && (2.0
              != *rtd_Board_ID)));

            /* Switch: '<S265>/Switch6' incorporates:
             *  Constant: '<S265>/Constant15'
             *  DataStoreRead: '<S265>/Data Store Read22'
             *  DataStoreWrite: '<S265>/Data Store Write7'
             *  Sum: '<S265>/Plus5'
             */
            if (rtb_Equal4_or) {
              localDW->Board1_error_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch6' */

            /* Logic: '<S265>/OR' incorporates:
             *  DataStoreWrite: '<S265>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = (rtb_Equal1_hn || rtb_Equal2_pz ||
              rtb_Equal3_c || rtb_Equal4_or || rtb_DataStoreRead_jo ||
              rtb_Equal5_c);

            /* Switch: '<S266>/Switch' */
            if (rtb_Equal1_hn) {
              /* Switch: '<S266>/Switch' incorporates:
               *  Constant: '<S266>/Constant'
               *  DataStoreRead: '<S266>/Data Store Read1'
               *  Sum: '<S266>/Plus'
               */
              TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
            } else {
              /* Switch: '<S266>/Switch' incorporates:
               *  DataStoreRead: '<S266>/Data Store Read'
               */
              TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
            }

            /* End of Switch: '<S266>/Switch' */

            /* DataStoreWrite: '<S266>/Data Store Write' */
            localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

            /* Switch: '<S267>/Switch' */
            if (rtb_Equal2_pz) {
              /* Switch: '<S267>/Switch' incorporates:
               *  Constant: '<S267>/Constant'
               *  DataStoreRead: '<S267>/Data Store Read1'
               *  Sum: '<S267>/Plus'
               */
              TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
            } else {
              /* Switch: '<S267>/Switch' incorporates:
               *  DataStoreRead: '<S267>/Data Store Read'
               */
              TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
            }

            /* End of Switch: '<S267>/Switch' */

            /* DataStoreWrite: '<S267>/Data Store Write' */
            localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

            /* Switch: '<S268>/Switch' */
            if (rtb_Equal3_c) {
              /* Switch: '<S268>/Switch' incorporates:
               *  Constant: '<S268>/Constant'
               *  DataStoreRead: '<S268>/Data Store Read1'
               *  Sum: '<S268>/Plus'
               */
              TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
            } else {
              /* Switch: '<S268>/Switch' incorporates:
               *  DataStoreRead: '<S268>/Data Store Read'
               */
              TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
            }

            /* End of Switch: '<S268>/Switch' */

            /* DataStoreWrite: '<S268>/Data Store Write' */
            localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

            /* Switch: '<S265>/Switch7' incorporates:
             *  Constant: '<S265>/Constant16'
             *  DataStoreRead: '<S265>/Data Store Read23'
             *  DataStoreRead: '<S265>/Data Store Read25'
             *  DataStoreWrite: '<S265>/Data Store Write9'
             *  Logic: '<S265>/AND9'
             *  Logic: '<S265>/NOT4'
             *  RelationalOperator: '<S265>/Equal9'
             *  Sum: '<S265>/Plus6'
             */
            if ((!localDW->BC0_Sync_processed) && (*rtd_Master_ID !=
                 *rtd_Board_ID)) {
              localDW->Sync_bc0_missed_counter += 1.0;
            }

            /* End of Switch: '<S265>/Switch7' */

            /* DataStoreWrite: '<S265>/Data Store Write4' incorporates:
             *  Constant: '<S265>/Constant5'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S180>/Timeout and Board error counter' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Check Timeouts' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - New Master' incorporates:
         *  EnablePort: '<S181>/Enable'
         */
        if ((*rtd_Local_Ticks >= 360.0) && (*rtd_Local_Ticks < localC->Sum15)) {
          /* Outputs for Enabled SubSystem: '<S181>/New Master' incorporates:
           *  EnablePort: '<S269>/Enable'
           */
          if (*rtd_Local_Ticks == 360.0) {
            /* MinMax: '<S270>/Max1' incorporates:
             *  DataStoreRead: '<S270>/Data Store Read25'
             */
            if (localDW->Votes_count.First_Board >=
                localDW->Votes_count.Second_Board) {
              rtb_DataStoreRead4_dd = localDW->Votes_count.First_Board;
            } else {
              rtb_DataStoreRead4_dd = localDW->Votes_count.Second_Board;
            }

            if (rtb_DataStoreRead4_dd < localDW->Votes_count.Third_Board) {
              rtb_DataStoreRead4_dd = localDW->Votes_count.Third_Board;
            }

            /* End of MinMax: '<S270>/Max1' */

            /* RelationalOperator: '<S270>/Equal' incorporates:
             *  Constant: '<S270>/Constant'
             *  DataStoreWrite: '<S269>/Data Store Write'
             */
            localDW->Reset_Board = (0.0 == rtb_DataStoreRead4_dd);

            /* Sum: '<S270>/Plus' incorporates:
             *  Constant: '<S270>/Constant15'
             *  DataStoreRead: '<S270>/Data Store Read25'
             *  DataStoreRead: '<S270>/Data Store Read29'
             *  RelationalOperator: '<S270>/Equal17'
             */
            rtb_DataStoreRead14 = (real_T)(2.0 == localDW->Own_Vote) +
              localDW->Votes_count.First_Board;

            /* Sum: '<S270>/Plus1' incorporates:
             *  Constant: '<S270>/Constant1'
             *  DataStoreRead: '<S270>/Data Store Read25'
             *  DataStoreRead: '<S270>/Data Store Read29'
             *  RelationalOperator: '<S270>/Equal18'
             */
            rtb_Plus1_b = (real_T)(3.0 == localDW->Own_Vote) +
              localDW->Votes_count.Second_Board;

            /* Sum: '<S270>/Plus2' incorporates:
             *  Constant: '<S270>/Constant2'
             *  DataStoreRead: '<S270>/Data Store Read25'
             *  DataStoreRead: '<S270>/Data Store Read29'
             *  RelationalOperator: '<S270>/Equal19'
             */
            rtb_Plus2_p = (real_T)(4.0 == localDW->Own_Vote) +
              localDW->Votes_count.Third_Board;

            /* MinMax: '<S270>/Max' */
            if (rtb_DataStoreRead14 >= rtb_Plus1_b) {
              rtb_DataStoreRead4_dd = rtb_DataStoreRead14;
            } else {
              rtb_DataStoreRead4_dd = rtb_Plus1_b;
            }

            if (rtb_DataStoreRead4_dd < rtb_Plus2_p) {
              rtb_DataStoreRead4_dd = rtb_Plus2_p;
            }

            /* Find: '<S270>/Find Nonzero Elements' incorporates:
             *  Constant: '<S271>/Constant'
             *  MinMax: '<S270>/Max'
             *  RelationalOperator: '<S271>/Compare'
             *  Sum: '<S270>/Subtract'
             */
            i = 0;
            if (rtb_DataStoreRead14 - rtb_DataStoreRead4_dd == 0.0) {
              rtb_FindNonzeroElements[0] = 0;
              i = 1;
            }

            if (rtb_Plus1_b - rtb_DataStoreRead4_dd == 0.0) {
              rtb_FindNonzeroElements[i] = 1;
              i++;
            }

            if (rtb_Plus2_p - rtb_DataStoreRead4_dd == 0.0) {
              rtb_FindNonzeroElements[i] = 2;
              i++;
            }

            localDW->FindNonzeroElements_DIMS1 = i;

            /* End of Find: '<S270>/Find Nonzero Elements' */

            /* MinMax: '<S270>/Min' incorporates:
             *  Find: '<S270>/Find Nonzero Elements'
             */
            linIx = rtb_FindNonzeroElements[0];
            for (i = 1; i < localDW->FindNonzeroElements_DIMS1; i++) {
              if (linIx > rtb_FindNonzeroElements[i]) {
                linIx = 1;
              }
            }

            /* Sum: '<S270>/Minus' incorporates:
             *  Constant: '<S270>/Index Corrector'
             *  MinMax: '<S270>/Min'
             */
            rtb_DataStoreRead4_dd = (real_T)linIx + 1.0;

            /* DataStoreWrite: '<S269>/Data Store Write13' */
            *rtd_Master_ID = rtb_DataStoreRead4_dd;

            /* Switch: '<S269>/Switch16' incorporates:
             *  Constant: '<S269>/Constant10'
             *  Constant: '<S269>/Constant9'
             *  DataStoreWrite: '<S269>/Data Store Write15'
             *  RelationalOperator: '<S269>/Equal6'
             */
            if (rtb_DataStoreRead4_dd == *rtd_Board_ID) {
              localDW->Role_ID = 1.0;
            } else {
              localDW->Role_ID = 2.0;
            }

            /* End of Switch: '<S269>/Switch16' */

            /* DataStoreWrite: '<S269>/Data Store Write3' incorporates:
             *  Constant: '<S269>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S181>/New Master' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - New Master' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S182>/Enable'
         */
        if ((*rtd_Local_Ticks >= 368.0) && (*rtd_Local_Ticks < localC->Sum17)) {
          /* DataStoreRead: '<S182>/Data Store Read' */
          reset_s = localDW->Reset_Board;

          /* Outputs for Enabled SubSystem: '<S182>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S272>/Enable'
           */
          if ((*rtd_Local_Ticks == 368.0) && reset_s) {
            /* DataStoreWrite: '<S272>/Data Store Write' */
            localDW->Reset_Board = localC->Cast_p;

            /* DataStoreWrite: '<S272>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_p;

            /* DataStoreWrite: '<S272>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_p;

            /* DataStoreWrite: '<S272>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT;

            /* DataStoreWrite: '<S272>/Data Store Write4' incorporates:
             *  Constant: '<S272>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S272>/Data Store Write5' incorporates:
             *  Constant: '<S272>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S272>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6;

            /* DataStoreWrite: '<S272>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6;

            /* DataStoreWrite: '<S272>/Data Store Write3' incorporates:
             *  Constant: '<S272>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S272>/Data Store Write8' incorporates:
             *  Constant: '<S272>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S272>/Data Store Write7' incorporates:
             *  Constant: '<S272>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S182>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S183>/Enable'
         */
        if ((*rtd_Local_Ticks >= 364.0) && (*rtd_Local_Ticks < localC->Sum16)) {
          /* Outputs for Enabled SubSystem: '<S183>/Reset variables' incorporates:
           *  EnablePort: '<S273>/Enable'
           */
          if (*rtd_Local_Ticks == 364.0) {
            /* DataStoreWrite: '<S273>/Data Store Write' */
            localDW->Desync_Positive = localC->Cast_h;

            /* DataStoreWrite: '<S273>/Data Store Write1' */
            localDW->BC0_Sync_processed = localC->Cast_h;

            /* DataStoreWrite: '<S273>/Data Store Write16' incorporates:
             *  Constant: '<S273>/Constant'
             */
            localDW->Votes_count.First_Board = 0.0;
            localDW->Votes_count.Second_Board = 0.0;
            localDW->Votes_count.Third_Board = 0.0;

            /* DataStoreWrite: '<S273>/Data Store Write2' */
            localDW->BC0_Vote1_processed = localC->Cast_h;

            /* DataStoreWrite: '<S273>/Data Store Write3' */
            localDW->BC0_Vote2_processed = localC->Cast_h;

            /* DataStoreWrite: '<S273>/Data Store Write4' */
            localDW->BC0_Vote3_processed = localC->Cast_h;

            /* DataStoreWrite: '<S273>/Data Store Write5' incorporates:
             *  Constant: '<S273>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S183>/Reset variables' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Reset Variables BC0' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S184>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
            (!localDW->BC0_Sync_processed)) {
          localDW->COMPTaskSyncbc0check_MODE = true;

          /* DataStoreRead: '<S184>/Data Store Read1' */
          rtb_DataStoreRead1_bi = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S184>/Data Store Read2' */
          rtb_DataStoreRead2_kc = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S184>/Data Store Read' */
          rtb_DataStoreRead_d5 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S184>/Data Store Read3' */
          rtb_DataStoreRead3_e = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S184>/Data Store Read15' */
          rtb_DataStoreRead15_b = *rtd_Master_ID;

          /* RelationalOperator: '<S184>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S184>/Equal5' incorporates:
           *  Constant: '<S184>/Constant26'
           *  DataStoreRead: '<S184>/Data Store Read6'
           */
          rtb_Equal2_pz = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S184>/Process_Messages' incorporates:
           *  EnablePort: '<S274>/Enable'
           */
          if (rtb_Equal1_hn && rtb_Equal2_pz) {
            localDW->Process_Messages_MODE_ek = true;

            /* Outputs for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_bi,
              &rtb_DataStoreRead_d5, 0.0, rtb_DataStoreRead15_b,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_g,
              &localDW->DemuxmessageCAN1andcheckcoher_g);

            /* End of Outputs for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_kc,
              &rtb_DataStoreRead3_e, 0.0, rtb_DataStoreRead15_b,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->DemuxmessageCAN1andcheckcohe_p3);

            /* End of Outputs for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S274>/Switch' incorporates:
             *  Constant: '<S184>/Constant'
             *  DataStoreWrite: '<S274>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_g.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_8;
            } else {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_8;
            }

            /* End of Switch generated from: '<S274>/Switch' */

            /* Logic: '<S274>/OR' incorporates:
             *  DataStoreWrite: '<S274>/Data Store Write2'
             */
            localDW->new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcoher_g.AND
              || localB->DemuxmessageCAN1andcheckcohe_p3.AND);

            /* Outputs for Enabled SubSystem: '<S274>/Desync calculation' incorporates:
             *  EnablePort: '<S278>/Enable'
             */
            if (localDW->new_msg_Rx_l) {
              /* Switch: '<S278>/Switch1' incorporates:
               *  Constant: '<S172>/Constant'
               *  Constant: '<S278>/Constant'
               *  Constant: '<S278>/Constant1'
               *  Constant: '<S278>/delay_estimation_1'
               *  Constant: '<S278>/delay_estimation_2'
               *  Product: '<S278>/Multiply'
               *  Product: '<S278>/Multiply1'
               *  Sum: '<S278>/Minus'
               *  Sum: '<S278>/Minus1'
               *  Sum: '<S278>/Sum'
               *  Sum: '<S278>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_g.BitShift1_mg.y + 0.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcohe_p3.BitShift1_e.y + 0.0) +
                  3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S278>/Switch1' */

              /* Saturate: '<S278>/Saturation' */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S278>/Saturation' */
                Desync_Sync_bc0_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S278>/Saturation' */
                Desync_Sync_bc0_s = (-15.0);
              } else {
                /* Saturate: '<S278>/Saturation' */
                Desync_Sync_bc0_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S278>/Saturation' */

              /* DataStoreWrite: '<S278>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_s;
            }

            /* End of Outputs for SubSystem: '<S274>/Desync calculation' */

            /* DataStoreWrite: '<S274>/Data Store Write3' incorporates:
             *  Constant: '<S274>/Constant2'
             *  DataStoreWrite: '<S274>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Outputs for SubSystem: '<S184>/Process_Messages' */

          /* Logic: '<S184>/AND1' incorporates:
           *  Constant: '<S184>/Constant'
           *  DataStoreWrite: '<S274>/Data Store Write2'
           *  Logic: '<S184>/AND'
           *  Logic: '<S184>/NOT'
           */
          rtb_AND1_cn = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S184>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_cn, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S184>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S184>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S184>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S185>/Enable'
         */
        if ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
            (!localDW->BC0_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S185>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S303>/Enable'
           */
          if ((*rtd_Local_Ticks == 84.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S303>/Data Store Write1' incorporates:
             *  Constant: '<S303>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S185>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S185>/Local Time Update' incorporates:
           *  EnablePort: '<S304>/Enable'
           */
          if ((*rtd_Local_Ticks == 86.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_l) {
            /* RelationalOperator: '<S304>/GreaterThan' incorporates:
             *  Constant: '<S304>/Constant4'
             *  DataStoreRead: '<S304>/Data Store Read1'
             *  DataStoreWrite: '<S304>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S304>/NOT' incorporates:
             *  DataStoreWrite: '<S304>/Data Store Write'
             */
            rtb_NOT_kl = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S304>/Desync_Negative' */
            Desync_Negative(rtb_NOT_kl, 84.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S304>/Desync_Negative' */

            /* DataStoreWrite: '<S304>/Data Store Write13' incorporates:
             *  Constant: '<S304>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S304>/Data Store Write3' incorporates:
             *  Constant: '<S304>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S185>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Update LT' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote Decision' incorporates:
         *  EnablePort: '<S186>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 88.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_h)) {
          /* Outputs for Enabled SubSystem: '<S186>/Vote Decision' incorporates:
           *  EnablePort: '<S306>/Enable'
           */
          if (*rtd_Local_Ticks == 88.0) {
            /* Switch: '<S307>/Switch' incorporates:
             *  Constant: '<S306>/Constant'
             *  Constant: '<S307>/MAX error count'
             *  DataStoreRead: '<S306>/Data Store Read'
             *  DataStoreRead: '<S306>/Data Store Read1'
             *  Logic: '<S307>/AND'
             *  Logic: '<S307>/NOT'
             *  Logic: '<S307>/OR'
             *  RelationalOperator: '<S307>/Equal1'
             *  RelationalOperator: '<S307>/Equal2'
             */
            if ((1.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 1.0) &&
                 (!localDW->BC0_Sync_processed))) {
              rtb_DataStoreRead14 = 4294967295U;
            } else {
              rtb_DataStoreRead14 = localDW->Board1_error_counter;
            }

            /* End of Switch: '<S307>/Switch' */

            /* Logic: '<S308>/NOT' incorporates:
             *  DataStoreRead: '<S306>/Data Store Read'
             *  Logic: '<S309>/NOT'
             */
            rtb_Equal4_or = !localDW->BC0_Sync_processed;

            /* Switch: '<S308>/Switch' incorporates:
             *  Constant: '<S306>/Constant1'
             *  Constant: '<S308>/MAX error count'
             *  DataStoreRead: '<S306>/Data Store Read2'
             *  Logic: '<S308>/AND'
             *  Logic: '<S308>/NOT'
             *  Logic: '<S308>/OR'
             *  RelationalOperator: '<S308>/Equal1'
             *  RelationalOperator: '<S308>/Equal2'
             */
            if ((2.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 2.0) &&
                 rtb_Equal4_or)) {
              rtb_Plus1_b = 4294967295U;
            } else {
              rtb_Plus1_b = localDW->Board2_error_counter;
            }

            /* End of Switch: '<S308>/Switch' */

            /* Switch: '<S309>/Switch' incorporates:
             *  Constant: '<S306>/Constant2'
             *  Constant: '<S309>/MAX error count'
             *  DataStoreRead: '<S306>/Data Store Read3'
             *  Logic: '<S309>/AND'
             *  Logic: '<S309>/OR'
             *  RelationalOperator: '<S309>/Equal1'
             *  RelationalOperator: '<S309>/Equal2'
             */
            if ((3.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 3.0) &&
                 rtb_Equal4_or)) {
              rtb_Plus2_p = 4294967295U;
            } else {
              rtb_Plus2_p = localDW->Board3_error_counter;
            }

            /* End of Switch: '<S309>/Switch' */

            /* MinMax: '<S306>/Max' */
            if (rtb_DataStoreRead14 <= rtb_Plus1_b) {
              rtb_DataStoreRead_pp5 = rtb_DataStoreRead14;
            } else {
              rtb_DataStoreRead_pp5 = rtb_Plus1_b;
            }

            if (rtb_DataStoreRead_pp5 <= rtb_Plus2_p) {
              rtb_Plus2_p = rtb_DataStoreRead_pp5;
            }

            /* End of MinMax: '<S306>/Max' */

            /* Switch: '<S306>/Switch5' incorporates:
             *  DataStoreRead: '<S306>/Data Store Read'
             *  RelationalOperator: '<S306>/Equal'
             *  RelationalOperator: '<S306>/Equal5'
             *  Switch: '<S306>/Switch6'
             *  Switch: '<S306>/Switch7'
             */
            if (localDW->BC0_Sync_processed) {
              /* DataTypeConversion: '<S306>/Cast' */
              Vote_s = (uint8_T)*rtd_Master_ID;
            } else if (rtb_DataStoreRead14 == rtb_Plus2_p) {
              /* Switch: '<S306>/Switch6' incorporates:
               *  Constant: '<S306>/Constant4'
               *  DataTypeConversion: '<S306>/Cast'
               */
              Vote_s = (uint8_T)1.0;
            } else if (rtb_Plus2_p == rtb_Plus1_b) {
              /* Switch: '<S306>/Switch7' incorporates:
               *  Constant: '<S306>/Constant5'
               *  DataTypeConversion: '<S306>/Cast'
               */
              Vote_s = (uint8_T)2.0;
            } else {
              /* DataTypeConversion: '<S306>/Cast' incorporates:
               *  Constant: '<S306>/Constant6'
               *  Switch: '<S306>/Switch7'
               */
              Vote_s = (uint8_T)3.0;
            }

            /* End of Switch: '<S306>/Switch5' */

            /* DataStoreWrite: '<S306>/Data Store Write5' */
            localDW->Own_Vote = Vote_s;

            /* DataStoreWrite: '<S306>/Data Store Write3' incorporates:
             *  Constant: '<S306>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S186>/Vote Decision' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote Decision' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote1 Count' incorporates:
         *  EnablePort: '<S187>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 176.0) && (rtb_DataStoreRead8_c <
             localC->Sum7_p)) {
          /* Outputs for Enabled SubSystem: '<S187>/Vote Count 1' incorporates:
           *  EnablePort: '<S310>/Enable'
           */
          if ((*rtd_Local_Ticks == 176.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 2.0)) {
            /* DataStoreWrite: '<S310>/Data Store Write12' incorporates:
             *  Constant: '<S310>/Constant10'
             *  Constant: '<S310>/Constant11'
             *  Constant: '<S310>/Constant12'
             *  DataStoreRead: '<S187>/Data Store Read4'
             *  DataStoreRead: '<S310>/Data Store Read15'
             *  DataStoreRead: '<S310>/Data Store Read16'
             *  DataStoreRead: '<S310>/Data Store Read17'
             *  RelationalOperator: '<S310>/Equal13'
             *  RelationalOperator: '<S310>/Equal15'
             *  RelationalOperator: '<S310>/Equal17'
             *  Sum: '<S310>/Add'
             *  Sum: '<S310>/Add1'
             *  Sum: '<S310>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(1.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(2.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(3.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S310>/Data Store Write3' incorporates:
             *  Constant: '<S310>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S310>/Data Store Write' incorporates:
             *  Constant: '<S310>/HIGH'
             */
            localDW->BC0_Vote1_processed = true;
          }

          /* End of Outputs for SubSystem: '<S187>/Vote Count 1' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote1 Count' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote1 check' incorporates:
         *  EnablePort: '<S188>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 172.0) && (rtb_DataStoreRead8_c <
             localC->Sum6_p)) {
          localDW->COMPTaskVote1check_MODE = true;

          /* DataStoreRead: '<S188>/Data Store Read1' */
          rtb_DataStoreRead1_fy = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S188>/Data Store Read2' */
          rtb_DataStoreRead2_d = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S188>/Data Store Read' */
          rtb_DataStoreRead_is = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S188>/Data Store Read3' */
          rtb_DataStoreRead3_mk = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S188>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 172.0);

          /* RelationalOperator: '<S188>/Equal6' incorporates:
           *  Constant: '<S188>/Constant2'
           */
          rtb_Equal2_pz = (*rtd_Board_ID != 2.0);

          /* Logic: '<S188>/AND' */
          rtb_AND_oj = (rtb_Equal1_hn && rtb_Equal2_pz);

          /* Outputs for Enabled SubSystem: '<S188>/Process_Messages1' */
          Process_Messages1(rtb_AND_oj, rtb_DataStoreRead1_fy,
                            rtb_DataStoreRead2_d, &rtb_DataStoreRead_is,
                            &rtb_DataStoreRead3_mk, 2.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages1_c,
                            &localDW->Process_Messages1_c);

          /* End of Outputs for SubSystem: '<S188>/Process_Messages1' */

          /* Logic: '<S188>/AND1' incorporates:
           *  Constant: '<S188>/Constant1'
           *  Logic: '<S188>/NOT'
           */
          rtb_AND1_l = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S188>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_l, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S188>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S188>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S188>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote1 check' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote2 Count' incorporates:
         *  EnablePort: '<S189>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 264.0) && (rtb_DataStoreRead8_c <
             localC->Sum10_c)) {
          /* Outputs for Enabled SubSystem: '<S189>/Vote Count 2' incorporates:
           *  EnablePort: '<S339>/Enable'
           */
          if ((*rtd_Local_Ticks == 264.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 3.0)) {
            /* DataStoreWrite: '<S339>/Data Store Write12' incorporates:
             *  Constant: '<S339>/Constant10'
             *  Constant: '<S339>/Constant11'
             *  Constant: '<S339>/Constant12'
             *  DataStoreRead: '<S189>/Data Store Read4'
             *  DataStoreRead: '<S339>/Data Store Read15'
             *  DataStoreRead: '<S339>/Data Store Read16'
             *  DataStoreRead: '<S339>/Data Store Read17'
             *  RelationalOperator: '<S339>/Equal13'
             *  RelationalOperator: '<S339>/Equal15'
             *  RelationalOperator: '<S339>/Equal17'
             *  Sum: '<S339>/Add'
             *  Sum: '<S339>/Add1'
             *  Sum: '<S339>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(1.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(2.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(3.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S339>/Data Store Write3' incorporates:
             *  Constant: '<S339>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S339>/Data Store Write' incorporates:
             *  Constant: '<S339>/HIGH'
             */
            localDW->BC0_Vote2_processed = true;
          }

          /* End of Outputs for SubSystem: '<S189>/Vote Count 2' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote2 Count' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote2 check' incorporates:
         *  EnablePort: '<S190>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 260.0) && (rtb_DataStoreRead8_c <
             localC->Sum9_m)) {
          localDW->COMPTaskVote2check_MODE = true;

          /* DataStoreRead: '<S190>/Data Store Read1' */
          rtb_DataStoreRead1_ah = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S190>/Data Store Read2' */
          rtb_DataStoreRead2_i5 = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S190>/Data Store Read' */
          rtb_DataStoreRead_k0 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S190>/Data Store Read3' */
          rtb_DataStoreRead3_o = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S190>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 260.0);

          /* RelationalOperator: '<S190>/Equal6' incorporates:
           *  Constant: '<S190>/Constant2'
           */
          rtb_Equal2_pz = (*rtd_Board_ID != 3.0);

          /* Logic: '<S190>/AND' */
          rtb_AND_ca = (rtb_Equal1_hn && rtb_Equal2_pz);

          /* Outputs for Enabled SubSystem: '<S190>/Process_Messages' */
          Process_Messages1(rtb_AND_ca, rtb_DataStoreRead1_ah,
                            rtb_DataStoreRead2_i5, &rtb_DataStoreRead_k0,
                            &rtb_DataStoreRead3_o, 3.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages_g,
                            &localDW->Process_Messages_g);

          /* End of Outputs for SubSystem: '<S190>/Process_Messages' */

          /* Logic: '<S190>/AND1' incorporates:
           *  Constant: '<S190>/Constant1'
           *  Logic: '<S190>/NOT'
           */
          rtb_AND1_m = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S190>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_m, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S190>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S190>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S190>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote2 check' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote3 Count' incorporates:
         *  EnablePort: '<S191>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 352.0) && (rtb_DataStoreRead8_c <
             localC->Sum11_i)) {
          /* Outputs for Enabled SubSystem: '<S191>/Vote Count 3' incorporates:
           *  EnablePort: '<S368>/Enable'
           */
          if ((*rtd_Local_Ticks == 352.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 4.0)) {
            /* DataStoreWrite: '<S368>/Data Store Write12' incorporates:
             *  Constant: '<S368>/Constant10'
             *  Constant: '<S368>/Constant11'
             *  Constant: '<S368>/Constant12'
             *  DataStoreRead: '<S191>/Data Store Read4'
             *  DataStoreRead: '<S368>/Data Store Read15'
             *  DataStoreRead: '<S368>/Data Store Read16'
             *  DataStoreRead: '<S368>/Data Store Read17'
             *  RelationalOperator: '<S368>/Equal13'
             *  RelationalOperator: '<S368>/Equal15'
             *  RelationalOperator: '<S368>/Equal17'
             *  Sum: '<S368>/Add'
             *  Sum: '<S368>/Add1'
             *  Sum: '<S368>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(1.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(2.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(3.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S368>/Data Store Write3' incorporates:
             *  Constant: '<S368>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S368>/Data Store Write' incorporates:
             *  Constant: '<S368>/HIGH'
             */
            localDW->BC0_Vote3_processed = true;
          }

          /* End of Outputs for SubSystem: '<S191>/Vote Count 3' */
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote3 Count' */

        /* Outputs for Enabled SubSystem: '<S172>/COMP Task - Vote3 check' incorporates:
         *  EnablePort: '<S192>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 348.0) && (rtb_DataStoreRead8_c <
             localC->Sum13)) {
          localDW->COMPTaskVote3check_MODE = true;

          /* DataStoreRead: '<S192>/Data Store Read1' */
          rtb_DataStoreRead1_oi = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S192>/Data Store Read2' */
          rtb_DataStoreRead2_pz = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S192>/Data Store Read' */
          rtb_DataStoreRead_m1 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S192>/Data Store Read3' */
          rtb_DataStoreRead3_k1 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S192>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 348.0);

          /* RelationalOperator: '<S192>/Equal6' incorporates:
           *  Constant: '<S192>/Constant2'
           */
          rtb_Equal2_pz = (*rtd_Board_ID != 4.0);

          /* Logic: '<S192>/AND' */
          rtb_AND_c = (rtb_Equal1_hn && rtb_Equal2_pz);

          /* Outputs for Enabled SubSystem: '<S192>/Process_Messages' */
          Process_Messages1(rtb_AND_c, rtb_DataStoreRead1_oi,
                            rtb_DataStoreRead2_pz, &rtb_DataStoreRead_m1,
                            &rtb_DataStoreRead3_k1, 4.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages_gc,
                            &localDW->Process_Messages_gc);

          /* End of Outputs for SubSystem: '<S192>/Process_Messages' */

          /* Logic: '<S192>/AND1' incorporates:
           *  Constant: '<S192>/Constant1'
           *  Logic: '<S192>/NOT'
           */
          rtb_AND1_j = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S192>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_j, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S192>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S192>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S192>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMP Task - Vote3 check' */

        /* Outputs for Enabled SubSystem: '<S172>/COMM Task - Sync bc 0' incorporates:
         *  EnablePort: '<S176>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4_p) && (!localDW->BC0_Sync_processed)) {
          localDW->COMMTaskSyncbc0_MODE = true;

          /* RelationalOperator: '<S176>/Equal1' incorporates:
           *  Constant: '<S176>/Constant2'
           *  DataStoreRead: '<S176>/Data Store Read1'
           */
          rtb_Equal1_i = (localDW->Role_ID == 1.0);

          /* Logic: '<S176>/NOT' */
          rtb_NOT_ah = !rtb_Equal1_i;

          /* Outputs for Enabled SubSystem: '<S176>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ah, 0.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_h,
                             &localC->Receptionsubstasks_h,
                             &localDW->Receptionsubstasks_h);

          /* End of Outputs for SubSystem: '<S176>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S176>/Transmission subtasks' */
          Transmissionsubtasks(rtb_Equal1_i, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                               rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_TxID_CAN1,
                               rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                               rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count,
                               &localB->Transmissionsubtasks_l,
                               &localC->Transmissionsubtasks_l,
                               &localDW->Transmissionsubtasks_l);

          /* End of Outputs for SubSystem: '<S176>/Transmission subtasks' */
        } else if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S176>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S176>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S176>/Transmission subtasks' */

          /* Disable for Outport: '<S176>/Send CAN1' incorporates:
           *  RelationalOperator: '<S196>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S176>/Receive CAN1' incorporates:
           *  Logic: '<S193>/AND'
           */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S176>/Send CAN2' incorporates:
           *  RelationalOperator: '<S197>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S176>/Receive CAN2' incorporates:
           *  Logic: '<S193>/AND1'
           */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMM Task - Sync bc 0' */

        /* Outputs for Enabled SubSystem: '<S172>/COMM Task - Vote1' incorporates:
         *  EnablePort: '<S177>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 92.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_d)) {
          localDW->COMMTaskVote1_MODE = true;

          /* RelationalOperator: '<S177>/Equal2' incorporates:
           *  Constant: '<S177>/Constant3'
           */
          rtb_Equal2_id = (*rtd_Board_ID == 2.0);

          /* Logic: '<S177>/NOT' */
          rtb_NOT_p5 = !rtb_Equal2_id;

          /* Outputs for Enabled SubSystem: '<S177>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_p5, 92.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_k,
                             &localC->Receptionsubstasks_k,
                             &localDW->Receptionsubstasks_k);

          /* End of Outputs for SubSystem: '<S177>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S177>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_id, 92.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_pw,
            &localC->Transmissionsubtasks_pw, &localDW->Transmissionsubtasks_pw);

          /* End of Outputs for SubSystem: '<S177>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S177>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S177>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S177>/Transmission subtasks' */

          /* Disable for Outport: '<S177>/Send CAN1' incorporates:
           *  RelationalOperator: '<S214>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Logic: '<S211>/AND' incorporates:
           *  Outport: '<S177>/Receive CAN1'
           */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S177>/Send CAN2' incorporates:
           *  RelationalOperator: '<S215>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Logic: '<S211>/AND1' incorporates:
           *  Outport: '<S177>/Receive CAN2'
           */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMM Task - Vote1' */

        /* Outputs for Enabled SubSystem: '<S172>/COMM Task - Vote2' incorporates:
         *  EnablePort: '<S178>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 180.0) && (rtb_DataStoreRead8_c <
             localC->Sum8_a)) {
          localDW->COMMTaskVote2_MODE = true;

          /* RelationalOperator: '<S178>/Equal2' incorporates:
           *  Constant: '<S178>/Constant3'
           */
          rtb_Equal2_fk = (*rtd_Board_ID == 3.0);

          /* Logic: '<S178>/NOT' */
          rtb_NOT_jr = !rtb_Equal2_fk;

          /* Outputs for Enabled SubSystem: '<S178>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_jr, 180.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_g,
                             &localC->Receptionsubstasks_g,
                             &localDW->Receptionsubstasks_g);

          /* End of Outputs for SubSystem: '<S178>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S178>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_fk, 180.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_d,
            &localC->Transmissionsubtasks_d, &localDW->Transmissionsubtasks_d);

          /* End of Outputs for SubSystem: '<S178>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S178>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S178>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S178>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S232>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN1'
           */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Logic: '<S229>/AND' incorporates:
           *  Outport: '<S178>/Receive CAN1'
           */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for RelationalOperator: '<S233>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN2'
           */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Logic: '<S229>/AND1' incorporates:
           *  Outport: '<S178>/Receive CAN2'
           */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMM Task - Vote2' */

        /* Outputs for Enabled SubSystem: '<S172>/COMM Task - Vote3' incorporates:
         *  EnablePort: '<S179>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 268.0) && (rtb_DataStoreRead8_c <
             localC->Sum12)) {
          localDW->COMMTaskVote3_MODE = true;

          /* RelationalOperator: '<S179>/Equal2' incorporates:
           *  Constant: '<S179>/Constant3'
           */
          rtb_Equal2_fs = (*rtd_Board_ID == 4.0);

          /* Logic: '<S179>/NOT' */
          rtb_NOT_m4 = !rtb_Equal2_fs;

          /* Outputs for Enabled SubSystem: '<S179>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_m4, 268.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_e,
                             &localC->Receptionsubstasks_e,
                             &localDW->Receptionsubstasks_e);

          /* End of Outputs for SubSystem: '<S179>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S179>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_fs, 268.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_a,
            &localC->Transmissionsubtasks_a, &localDW->Transmissionsubtasks_a);

          /* End of Outputs for SubSystem: '<S179>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S179>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S179>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S179>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S250>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN1'
           */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Logic: '<S247>/AND' incorporates:
           *  Outport: '<S179>/Receive CAN1'
           */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for RelationalOperator: '<S251>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN2'
           */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Logic: '<S247>/AND1' incorporates:
           *  Outport: '<S179>/Receive CAN2'
           */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S172>/COMM Task - Vote3' */

        /* Logic: '<S172>/OR1' incorporates:
         *  Constant: '<S172>/Constant'
         *  Constant: '<S172>/Constant12'
         *  Constant: '<S172>/Constant14'
         *  Constant: '<S172>/Constant17'
         *  Constant: '<S172>/Constant19'
         *  Constant: '<S172>/Constant2'
         *  Constant: '<S172>/Constant21'
         *  Constant: '<S172>/Constant23'
         *  Constant: '<S172>/Constant25'
         *  Constant: '<S172>/Constant27'
         *  Constant: '<S172>/Constant28'
         *  Constant: '<S172>/Constant3'
         *  Constant: '<S172>/Constant31'
         *  Constant: '<S172>/Constant33'
         *  Constant: '<S172>/Constant34'
         *  Constant: '<S172>/Constant6'
         *  Constant: '<S172>/Constant8'
         *  Constant: '<S172>/Constant9'
         *  Constant: '<S184>/Constant'
         *  Constant: '<S185>/Constant1'
         *  Constant: '<S185>/Constant4'
         *  Constant: '<S187>/Constant4'
         *  Constant: '<S188>/Constant1'
         *  Constant: '<S189>/Constant4'
         *  Constant: '<S190>/Constant1'
         *  Constant: '<S191>/Constant4'
         *  Constant: '<S192>/Constant1'
         *  DataStoreRead: '<S172>/Data Store Read11'
         *  DataStoreRead: '<S172>/Data Store Read6'
         *  DataStoreRead: '<S172>/Data Store Read7'
         *  DataStoreRead: '<S185>/Data Store Read'
         *  DataStoreRead: '<S185>/Data Store Read1'
         *  DataStoreRead: '<S187>/Data Store Read5'
         *  DataStoreRead: '<S189>/Data Store Read5'
         *  DataStoreRead: '<S191>/Data Store Read5'
         *  DataStoreWrite: '<S274>/Data Store Write2'
         *  Logic: '<S172>/AND'
         *  Logic: '<S172>/AND1'
         *  Logic: '<S172>/AND10'
         *  Logic: '<S172>/AND11'
         *  Logic: '<S172>/AND12'
         *  Logic: '<S172>/AND13'
         *  Logic: '<S172>/AND14'
         *  Logic: '<S172>/AND15'
         *  Logic: '<S172>/AND16'
         *  Logic: '<S172>/AND17'
         *  Logic: '<S172>/AND18'
         *  Logic: '<S172>/AND19'
         *  Logic: '<S172>/AND2'
         *  Logic: '<S172>/AND3'
         *  Logic: '<S172>/AND4'
         *  Logic: '<S172>/AND5'
         *  Logic: '<S172>/AND6'
         *  Logic: '<S172>/AND7'
         *  Logic: '<S172>/AND8'
         *  Logic: '<S172>/AND9'
         *  Logic: '<S172>/NOT1'
         *  Logic: '<S172>/NOT2'
         *  Logic: '<S172>/NOT3'
         *  Logic: '<S182>/AND'
         *  Logic: '<S184>/AND'
         *  Logic: '<S185>/AND'
         *  Logic: '<S185>/AND1'
         *  Logic: '<S187>/AND'
         *  Logic: '<S189>/AND'
         *  Logic: '<S191>/AND'
         *  RelationalOperator: '<S172>/GreaterThan'
         *  RelationalOperator: '<S172>/GreaterThan1'
         *  RelationalOperator: '<S172>/GreaterThan10'
         *  RelationalOperator: '<S172>/GreaterThan11'
         *  RelationalOperator: '<S172>/GreaterThan12'
         *  RelationalOperator: '<S172>/GreaterThan13'
         *  RelationalOperator: '<S172>/GreaterThan14'
         *  RelationalOperator: '<S172>/GreaterThan15'
         *  RelationalOperator: '<S172>/GreaterThan16'
         *  RelationalOperator: '<S172>/GreaterThan17'
         *  RelationalOperator: '<S172>/GreaterThan18'
         *  RelationalOperator: '<S172>/GreaterThan19'
         *  RelationalOperator: '<S172>/GreaterThan2'
         *  RelationalOperator: '<S172>/GreaterThan20'
         *  RelationalOperator: '<S172>/GreaterThan21'
         *  RelationalOperator: '<S172>/GreaterThan22'
         *  RelationalOperator: '<S172>/GreaterThan23'
         *  RelationalOperator: '<S172>/GreaterThan24'
         *  RelationalOperator: '<S172>/GreaterThan25'
         *  RelationalOperator: '<S172>/GreaterThan26'
         *  RelationalOperator: '<S172>/GreaterThan27'
         *  RelationalOperator: '<S172>/GreaterThan28'
         *  RelationalOperator: '<S172>/GreaterThan29'
         *  RelationalOperator: '<S172>/GreaterThan3'
         *  RelationalOperator: '<S172>/GreaterThan30'
         *  RelationalOperator: '<S172>/GreaterThan31'
         *  RelationalOperator: '<S172>/GreaterThan32'
         *  RelationalOperator: '<S172>/GreaterThan33'
         *  RelationalOperator: '<S172>/GreaterThan4'
         *  RelationalOperator: '<S172>/GreaterThan5'
         *  RelationalOperator: '<S172>/GreaterThan6'
         *  RelationalOperator: '<S172>/GreaterThan7'
         *  RelationalOperator: '<S172>/GreaterThan8'
         *  RelationalOperator: '<S172>/GreaterThan9'
         *  RelationalOperator: '<S180>/Equal'
         *  RelationalOperator: '<S181>/Equal'
         *  RelationalOperator: '<S182>/Equal2'
         *  RelationalOperator: '<S183>/Equal2'
         *  RelationalOperator: '<S185>/Equal'
         *  RelationalOperator: '<S185>/Equal1'
         *  RelationalOperator: '<S185>/Equal2'
         *  RelationalOperator: '<S186>/Equal'
         *  RelationalOperator: '<S187>/Equal'
         *  RelationalOperator: '<S187>/Equal2'
         *  RelationalOperator: '<S189>/Equal'
         *  RelationalOperator: '<S189>/Equal2'
         *  RelationalOperator: '<S191>/Equal'
         *  RelationalOperator: '<S191>/Equal2'
         */
        localB->OR1_o = (localB->Transmissionsubtasks_l.Equal7_a ||
                         localB->Transmissionsubtasks_pw.Equal7_m ||
                         localB->Transmissionsubtasks_d.Equal7_m ||
                         localB->Transmissionsubtasks_a.Equal7_m);

        /* Logic: '<S172>/OR2' */
        localB->OR2_p = (localB->Receptionsubstasks_h.AND ||
                         localB->Receptionsubstasks_k.AND ||
                         localB->Receptionsubstasks_g.AND ||
                         localB->Receptionsubstasks_e.AND);

        /* Logic: '<S172>/OR3' */
        localB->OR3_b = (localB->Receptionsubstasks_h.AND1 ||
                         localB->Receptionsubstasks_k.AND1 ||
                         localB->Receptionsubstasks_g.AND1 ||
                         localB->Receptionsubstasks_e.AND1);

        /* Logic: '<S172>/OR4' */
        localB->OR4 = (localB->Transmissionsubtasks_l.Equal7 ||
                       localB->Transmissionsubtasks_pw.Equal7 ||
                       localB->Transmissionsubtasks_d.Equal7 ||
                       localB->Transmissionsubtasks_a.Equal7);
      } else if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S184>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S184>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S188>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S188>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S190>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S190>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S192>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S192>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S176>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S176>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S176>/Transmission subtasks' */

          /* Disable for Outport: '<S176>/Send CAN1' incorporates:
           *  RelationalOperator: '<S196>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S176>/Receive CAN1' incorporates:
           *  Logic: '<S193>/AND'
           */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S176>/Send CAN2' incorporates:
           *  RelationalOperator: '<S197>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S176>/Receive CAN2' incorporates:
           *  Logic: '<S193>/AND1'
           */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S177>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S177>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S177>/Transmission subtasks' */

          /* Disable for Outport: '<S177>/Send CAN1' incorporates:
           *  RelationalOperator: '<S214>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Logic: '<S211>/AND' incorporates:
           *  Outport: '<S177>/Receive CAN1'
           */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S177>/Send CAN2' incorporates:
           *  RelationalOperator: '<S215>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Logic: '<S211>/AND1' incorporates:
           *  Outport: '<S177>/Receive CAN2'
           */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S178>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S178>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S178>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S232>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN1'
           */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Logic: '<S229>/AND' incorporates:
           *  Outport: '<S178>/Receive CAN1'
           */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for RelationalOperator: '<S233>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN2'
           */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Logic: '<S229>/AND1' incorporates:
           *  Outport: '<S178>/Receive CAN2'
           */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S179>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S179>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S179>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S250>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN1'
           */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Logic: '<S247>/AND' incorporates:
           *  Outport: '<S179>/Receive CAN1'
           */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for RelationalOperator: '<S251>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN2'
           */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Logic: '<S247>/AND1' incorporates:
           *  Outport: '<S179>/Receive CAN2'
           */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote3' */

        /* Disable for Logic: '<S172>/OR1' incorporates:
         *  Outport: '<S172>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S172>/OR4' incorporates:
         *  Outport: '<S172>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S172>/OR2' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S172>/OR3' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S170>/controller basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S170>/controller basic cycle 1' incorporates:
       *  EnablePort: '<S173>/Enable'
       */
      if (rtb_DataStoreRead2_f3) {
        localDW->controllerbasiccycle1_MODE = true;

        /* DataStoreRead: '<S173>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Potentiometer Voting' incorporates:
         *  EnablePort: '<S401>/Enable'
         */
        if ((*rtd_Local_Ticks >= 266.0) && (*rtd_Local_Ticks < localC->Sum11)) {
          /* Switch: '<S401>/Switch' incorporates:
           *  Constant: '<S401>/Constant'
           *  Constant: '<S401>/Constant1'
           *  DataStoreRead: '<S401>/Data Store Read'
           *  DataStoreRead: '<S401>/Data Store Read1'
           *  Sum: '<S401>/Minus'
           */
          if ((uint16_T)(localDW->ArtPot1 - localDW->ArtPot2) > ((uint16_T)250U))
          {
            rtb_Equal1_hn = false;
          } else {
            rtb_Equal1_hn = true;
          }

          /* End of Switch: '<S401>/Switch' */

          /* Switch: '<S401>/Switch1' incorporates:
           *  Constant: '<S401>/Constant'
           *  Constant: '<S401>/Constant1'
           *  DataStoreRead: '<S401>/Data Store Read1'
           *  DataStoreRead: '<S401>/Data Store Read2'
           *  Sum: '<S401>/Minus1'
           */
          if ((uint16_T)(localDW->ArtPot2 - localDW->ArtPot3) > ((uint16_T)250U))
          {
            rtb_Equal2_pz = false;
          } else {
            rtb_Equal2_pz = true;
          }

          /* End of Switch: '<S401>/Switch1' */

          /* Switch: '<S401>/Switch2' incorporates:
           *  Constant: '<S401>/Constant'
           *  Constant: '<S401>/Constant1'
           *  DataStoreRead: '<S401>/Data Store Read'
           *  DataStoreRead: '<S401>/Data Store Read2'
           *  Sum: '<S401>/Minus2'
           */
          if ((uint16_T)(localDW->ArtPot1 - localDW->ArtPot3) > ((uint16_T)250U))
          {
            rtb_Equal3_c = false;
          } else {
            rtb_Equal3_c = true;
          }

          /* End of Switch: '<S401>/Switch2' */

          /* MATLAB Function: '<S401>/MATLAB Function' */
          /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Potentiometer Voting/MATLAB Function': '<S492>:1' */
          if (rtb_Equal1_hn && rtb_Equal2_pz && rtb_Equal3_c) {
            /* '<S492>:1:3' */
            /* '<S492>:1:5' */
            rtb_DataStoreRead4_dd = 0.0;
          } else {
            rtb_Equal4_or = !rtb_Equal3_c;
            rtb_Equal5_c = !rtb_Equal2_pz;
            if (rtb_Equal1_hn && rtb_Equal5_c && rtb_Equal4_or) {
              /* '<S492>:1:7' */
              /* '<S492>:1:8' */
              rtb_DataStoreRead4_dd = 3.0;
            } else {
              rtb_Equal1_hn = !rtb_Equal1_hn;
              if (rtb_Equal1_hn && rtb_Equal2_pz && rtb_Equal4_or) {
                /* '<S492>:1:10' */
                /* '<S492>:1:11' */
                rtb_DataStoreRead4_dd = 1.0;
              } else if (rtb_Equal1_hn && rtb_Equal5_c && rtb_Equal3_c) {
                /* '<S492>:1:13' */
                /* '<S492>:1:14' */
                rtb_DataStoreRead4_dd = 2.0;
              } else {
                /* '<S492>:1:17' */
                rtb_DataStoreRead4_dd = 0.0;
              }
            }
          }

          /* End of MATLAB Function: '<S401>/MATLAB Function' */

          /* Outputs for Enabled SubSystem: '<S401>/1 Wrong' incorporates:
           *  EnablePort: '<S487>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 1.0) {
            /* Outputs for Enabled SubSystem: '<S487>/Trailer 1' incorporates:
             *  EnablePort: '<S493>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S493>/Data Store Write' incorporates:
               *  Constant: '<S493>/Constant'
               */
              localDW->FCU_Master_ID = 3.0;

              /* DataStoreWrite: '<S493>/Data Store Write2' incorporates:
               *  Constant: '<S493>/Constant1'
               */
              localDW->FCU_Faulty_Node = 2.0;

              /* DataStoreWrite: '<S493>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S493>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot2;
            } else {
              /* Outputs for Enabled SubSystem: '<S487>/Trailer 2' incorporates:
               *  EnablePort: '<S494>/Enable'
               */
              /* DataStoreWrite: '<S494>/Data Store Write' incorporates:
               *  Constant: '<S494>/Constant'
               */
              localDW->FCU_Master_ID = 6.0;

              /* DataStoreWrite: '<S494>/Data Store Write2' incorporates:
               *  Constant: '<S494>/Constant1'
               */
              localDW->FCU_Faulty_Node = 5.0;

              /* DataStoreWrite: '<S494>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S494>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot2;

              /* End of Outputs for SubSystem: '<S487>/Trailer 2' */
            }

            /* End of Outputs for SubSystem: '<S487>/Trailer 1' */
          }

          /* End of Outputs for SubSystem: '<S401>/1 Wrong' */

          /* Outputs for Enabled SubSystem: '<S401>/2 Wrong' incorporates:
           *  EnablePort: '<S488>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 2.0) {
            /* Outputs for Enabled SubSystem: '<S488>/Trailer 1' incorporates:
             *  EnablePort: '<S495>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S495>/Data Store Write' incorporates:
               *  Constant: '<S495>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S495>/Data Store Write2' incorporates:
               *  Constant: '<S495>/Constant1'
               */
              localDW->FCU_Faulty_Node = 3.0;

              /* DataStoreWrite: '<S495>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S495>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            } else {
              /* Outputs for Enabled SubSystem: '<S488>/Trailer 2' incorporates:
               *  EnablePort: '<S496>/Enable'
               */
              /* DataStoreWrite: '<S496>/Data Store Write' incorporates:
               *  Constant: '<S496>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S496>/Data Store Write2' incorporates:
               *  Constant: '<S496>/Constant1'
               */
              localDW->FCU_Faulty_Node = 6.0;

              /* DataStoreWrite: '<S496>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S496>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;

              /* End of Outputs for SubSystem: '<S488>/Trailer 2' */
            }

            /* End of Outputs for SubSystem: '<S488>/Trailer 1' */
          }

          /* End of Outputs for SubSystem: '<S401>/2 Wrong' */

          /* Outputs for Enabled SubSystem: '<S401>/3 Wrong' incorporates:
           *  EnablePort: '<S489>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 3.0) {
            /* Outputs for Enabled SubSystem: '<S489>/Trailer 1' incorporates:
             *  EnablePort: '<S497>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S497>/Data Store Write' incorporates:
               *  Constant: '<S497>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S497>/Data Store Write2' incorporates:
               *  Constant: '<S497>/Constant1'
               */
              localDW->FCU_Faulty_Node = 4.0;

              /* DataStoreWrite: '<S497>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S497>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            } else {
              /* Outputs for Enabled SubSystem: '<S489>/Trailer 2' incorporates:
               *  EnablePort: '<S498>/Enable'
               */
              /* DataStoreWrite: '<S498>/Data Store Write' incorporates:
               *  Constant: '<S498>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S498>/Data Store Write2' incorporates:
               *  Constant: '<S498>/Constant1'
               */
              localDW->FCU_Faulty_Node = 7.0;

              /* DataStoreWrite: '<S498>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S498>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;

              /* End of Outputs for SubSystem: '<S489>/Trailer 2' */
            }

            /* End of Outputs for SubSystem: '<S489>/Trailer 1' */
          }

          /* End of Outputs for SubSystem: '<S401>/3 Wrong' */

          /* Outputs for Enabled SubSystem: '<S401>/All Correct' incorporates:
           *  EnablePort: '<S490>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 0.0) {
            /* Outputs for Enabled SubSystem: '<S490>/Trailer 1' incorporates:
             *  EnablePort: '<S499>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S499>/Data Store Write' incorporates:
               *  Constant: '<S499>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S499>/Data Store Write2' incorporates:
               *  Constant: '<S499>/Constant1'
               */
              localDW->FCU_Faulty_Node = 0.0;

              /* DataStoreWrite: '<S499>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S499>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            } else {
              /* Outputs for Enabled SubSystem: '<S490>/Trailer 2' incorporates:
               *  EnablePort: '<S500>/Enable'
               */
              /* DataStoreWrite: '<S500>/Data Store Write' incorporates:
               *  Constant: '<S500>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S500>/Data Store Write2' incorporates:
               *  Constant: '<S500>/Constant1'
               */
              localDW->FCU_Faulty_Node = 0.0;

              /* DataStoreWrite: '<S500>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S500>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;

              /* End of Outputs for SubSystem: '<S490>/Trailer 2' */
            }

            /* End of Outputs for SubSystem: '<S490>/Trailer 1' */
          }

          /* End of Outputs for SubSystem: '<S401>/All Correct' */

          /* DataStoreRead: '<S401>/Data Store Read3' incorporates:
           *  Constant: '<S401>/Constant2'
           *  Constant: '<S401>/Constant3'
           *  Constant: '<S401>/Constant4'
           *  Constant: '<S487>/Constant2'
           *  Constant: '<S488>/Constant2'
           *  Constant: '<S489>/Constant2'
           *  Constant: '<S490>/Constant2'
           *  Constant: '<S491>/Constant'
           *  RelationalOperator: '<S401>/Equal'
           *  RelationalOperator: '<S401>/Equal1'
           *  RelationalOperator: '<S401>/Equal2'
           *  RelationalOperator: '<S487>/Equal'
           *  RelationalOperator: '<S488>/Equal'
           *  RelationalOperator: '<S489>/Equal'
           *  RelationalOperator: '<S490>/Equal'
           *  RelationalOperator: '<S491>/Compare'
           */
          FCU_Fault_Node = localDW->FCU_Faulty_Node;

          /* DataStoreRead: '<S401>/Data Store Read4' */
          FCU_Master = localDW->FCU_Master_ID;

          /* DataStoreRead: '<S401>/Data Store Read5' */
          Pot_Final = localDW->ArtPotFinal;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Potentiometer Voting' */

        /* Logic: '<S173>/AND20' incorporates:
         *  Constant: '<S173>/Constant16'
         *  Constant: '<S173>/Constant23'
         *  Constant: '<S401>/Constant2'
         *  Constant: '<S401>/Constant3'
         *  Constant: '<S401>/Constant4'
         *  Constant: '<S487>/Constant2'
         *  Constant: '<S488>/Constant2'
         *  Constant: '<S489>/Constant2'
         *  Constant: '<S490>/Constant2'
         *  Constant: '<S491>/Constant'
         *  Logic: '<S173>/AND10'
         *  RelationalOperator: '<S173>/GreaterThan20'
         *  RelationalOperator: '<S173>/GreaterThan21'
         *  RelationalOperator: '<S173>/GreaterThan34'
         *  RelationalOperator: '<S173>/GreaterThan35'
         *  RelationalOperator: '<S401>/Equal'
         *  RelationalOperator: '<S401>/Equal1'
         *  RelationalOperator: '<S401>/Equal2'
         *  RelationalOperator: '<S487>/Equal'
         *  RelationalOperator: '<S488>/Equal'
         *  RelationalOperator: '<S489>/Equal'
         *  RelationalOperator: '<S490>/Equal'
         *  RelationalOperator: '<S491>/Compare'
         */
        rtb_AND20_e = ((*rtd_Local_Ticks >= 270.0) && (*rtd_Local_Ticks <
          localC->Sum18_e));

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Reset Variables BC1' */
        COMPTaskResetVariablesBC1(rtb_AND20_e, 270.0, 272.0,
          &localDW->BC1_Sync_processed, rtd_Board_ID, &localDW->Desync_Positive,
          rtd_Local_Ticks, rtd_Master_ID, &localDW->Sync_bc1_missed_counter,
          rtd_Toggle_Pin_A0, &localDW->Toggle_Pin_A1);

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' incorporates:
         *  EnablePort: '<S403>/Enable'
         */
        if ((*rtd_Local_Ticks >= 174.0) && (*rtd_Local_Ticks < localC->Sum6_b))
        {
          localDW->COMPTaskRx_PotValues1_check_MOD = true;

          /* DataStoreRead: '<S403>/Data Store Read1' */
          rtb_DataStoreRead1_nwf = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S403>/Data Store Read2' */
          rtb_DataStoreRead2_k5 = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S403>/Data Store Read' */
          rtb_DataStoreRead_ge = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S403>/Data Store Read3' */
          rtb_DataStoreRead3_d1 = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S403>/OR' incorporates:
           *  Constant: '<S403>/Constant'
           *  Constant: '<S403>/Constant2'
           *  RelationalOperator: '<S403>/Equal'
           *  RelationalOperator: '<S403>/Equal1'
           */
          rtb_OR_e = ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 5.0));

          /* Outputs for Enabled SubSystem: '<S403>/Process_Messages' incorporates:
           *  EnablePort: '<S503>/Enable'
           */
          if (!rtb_OR_e) {
            localDW->Process_Messages_MODE_ie = true;

            /* Outputs for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_nwf,
              &rtb_DataStoreRead_ge, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_ei,
              &localDW->DemuxmessageCAN1andcheckcohe_ei);

            /* End of Outputs for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_k5,
              &rtb_DataStoreRead3_d1, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_ad,
              &localDW->DemuxmessageCAN1andcheckcohe_ad);

            /* End of Outputs for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S503>/Switch' incorporates:
             *  Constant: '<S403>/Constant1'
             *  DataStoreWrite: '<S503>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_ei.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_ad.Buffer_8;
            }

            /* End of Switch generated from: '<S503>/Switch' */

            /* BitConcat: '<S505>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S503>/Data Store Write'
             */
            PotValue1_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S503>/Data Store Write1' */
            localDW->ArtPot1 = PotValue1_RX_s;

            /* Logic: '<S503>/OR' incorporates:
             *  DataStoreWrite: '<S503>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_ad.Equal1);

            /* Outputs for Enabled SubSystem: '<S503>/Desync calculation' incorporates:
             *  EnablePort: '<S508>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S508>/Switch1' incorporates:
               *  Constant: '<S173>/Constant5'
               *  Constant: '<S508>/Constant'
               *  Constant: '<S508>/Constant1'
               *  Constant: '<S508>/delay_estimation_1'
               *  Constant: '<S508>/delay_estimation_2'
               *  Product: '<S508>/Multiply'
               *  Product: '<S508>/Multiply1'
               *  Sum: '<S508>/Minus'
               *  Sum: '<S508>/Minus1'
               *  Sum: '<S508>/Sum'
               *  Sum: '<S508>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcohe_ei.BitShift1_mu.y + 94.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcohe_ad.BitShift1_i.y + 94.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S508>/Switch1' */

              /* Saturate: '<S508>/Saturation' */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S508>/Saturation' */
                Desync_Sync_bc1_vem_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S508>/Saturation' */
                Desync_Sync_bc1_vem_s = (-15.0);
              } else {
                /* Saturate: '<S508>/Saturation' */
                Desync_Sync_bc1_vem_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S508>/Saturation' */

              /* DataStoreWrite: '<S508>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_vem_s;
            }

            /* End of Outputs for SubSystem: '<S503>/Desync calculation' */

            /* DataStoreWrite: '<S503>/Data Store Write3' incorporates:
             *  Constant: '<S503>/Constant2'
             *  DataStoreWrite: '<S503>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Outputs for SubSystem: '<S403>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S403>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR_e, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S403>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S403>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S403>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' incorporates:
         *  EnablePort: '<S404>/Enable'
         */
        if ((*rtd_Local_Ticks >= 90.0) && (*rtd_Local_Ticks < localC->Sum8)) {
          localDW->COMPTaskRx_PotValues1_check2_MO = true;

          /* Outputs for Enabled SubSystem: '<S404>/Subsystem' incorporates:
           *  EnablePort: '<S533>/Enable'
           */
          if (*rtd_Board_ID != 1.0) {
            localDW->Subsystem_MODE = true;

            /* M-S-Function: '<S534>/Level-2 M-file S-Function' */
            /* read from analog input for filtered inputs*/
            rtb_Level2MfileSFunction_i = AninGet(ANIN_PORTF_PIN10,0);

            /* MATLABSystem: '<S533>/Moving Average' incorporates:
             *  DataTypeConversion: '<S533>/Cast To Double'
             */
            if (localDW->obj.TunablePropsChanged) {
              localDW->obj.TunablePropsChanged = false;
            }

            obj = localDW->obj.pStatistic;
            if (obj->isInitialized != 1) {
              obj->isSetupComplete = false;
              obj->isInitialized = 1;
              obj->pCumSum = 0.0;
              for (i = 0; i < 29; i++) {
                obj->pCumSumRev[i] = 0.0;
              }

              obj->pCumRevIndex = 1.0;
              obj->pModValueRev = 0.0;
              obj->isSetupComplete = true;
              obj->pCumSum = 0.0;
              for (i = 0; i < 29; i++) {
                obj->pCumSumRev[i] = 0.0;
              }

              obj->pCumRevIndex = 1.0;
              obj->pModValueRev = 0.0;
            }

            rtb_DataStoreRead4_dd = obj->pCumRevIndex;
            rtb_DataStoreRead14 = obj->pCumSum;
            for (i = 0; i < 29; i++) {
              csumrev[i] = obj->pCumSumRev[i];
            }

            rtb_Plus1_b = obj->pModValueRev;
            rtb_Plus2_p = 0.0;
            rtb_DataStoreRead_pp5 = 0.0;
            rtb_DataStoreRead14 += (real_T)rtb_Level2MfileSFunction_i;
            if (rtb_Plus1_b == 0.0) {
              rtb_Plus2_p = csumrev[(int32_T)rtb_DataStoreRead4_dd - 1] +
                rtb_DataStoreRead14;
            }

            csumrev[(int32_T)rtb_DataStoreRead4_dd - 1] =
              rtb_Level2MfileSFunction_i;
            if (rtb_DataStoreRead4_dd != 29.0) {
              rtb_DataStoreRead4_dd++;
            } else {
              rtb_DataStoreRead4_dd = 1.0;
              rtb_DataStoreRead14 = 0.0;
              for (i = 27; i >= 0; i--) {
                csumrev[i] += csumrev[i + 1];
              }
            }

            if (rtb_Plus1_b == 0.0) {
              rtb_DataStoreRead_pp5 = rtb_Plus2_p / 30.0;
            }

            obj->pCumSum = rtb_DataStoreRead14;
            for (i = 0; i < 29; i++) {
              obj->pCumSumRev[i] = csumrev[i];
            }

            obj->pCumRevIndex = rtb_DataStoreRead4_dd;
            if (rtb_Plus1_b > 0.0) {
              obj->pModValueRev = rtb_Plus1_b - 1.0;
            } else {
              obj->pModValueRev = 0.0;
            }

            /* Gain: '<S533>/Gain' incorporates:
             *  DataStoreWrite: '<S533>/Data Store Write'
             *  MATLABSystem: '<S533>/Moving Average'
             */
            localDW->OwnPot = (uint16_T)(1.0 * rtb_DataStoreRead_pp5);
          } else if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S404>/Subsystem' */
        } else if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          /* Disable for Enabled SubSystem: '<S404>/Subsystem' */
          if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S404>/Subsystem' */
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' incorporates:
         *  EnablePort: '<S405>/Enable'
         */
        if ((*rtd_Local_Ticks >= 258.0) && (*rtd_Local_Ticks < localC->Sum7_n))
        {
          localDW->COMPTaskRx_PotValues2_check_M_h = true;

          /* DataStoreRead: '<S405>/Data Store Read1' */
          rtb_DataStoreRead1_mv = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S405>/Data Store Read2' */
          rtb_DataStoreRead2_co = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S405>/Data Store Read' */
          rtb_DataStoreRead_p1 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S405>/Data Store Read3' */
          rtb_DataStoreRead3_ny = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S405>/OR' incorporates:
           *  Constant: '<S405>/Constant'
           *  Constant: '<S405>/Constant2'
           *  RelationalOperator: '<S405>/Equal'
           *  RelationalOperator: '<S405>/Equal1'
           */
          rtb_OR_c0 = ((*rtd_Board_ID == 3.0) || (*rtd_Board_ID == 6.0));

          /* Outputs for Enabled SubSystem: '<S405>/Process_Messages' incorporates:
           *  EnablePort: '<S535>/Enable'
           */
          if (!rtb_OR_c0) {
            localDW->Process_Messages_MODE_e = true;

            /* Outputs for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_mv,
              &rtb_DataStoreRead_p1, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_am,
              &localDW->DemuxmessageCAN1andcheckcohe_am);

            /* End of Outputs for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_co,
              &rtb_DataStoreRead3_ny, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_j,
              &localDW->DemuxmessageCAN1andcheckcoher_j);

            /* End of Outputs for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S535>/Switch' incorporates:
             *  Constant: '<S405>/Constant1'
             *  DataStoreWrite: '<S535>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_am.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_am.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_am.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_j.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_j.Buffer_8;
            }

            /* End of Switch generated from: '<S535>/Switch' */

            /* BitConcat: '<S537>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S535>/Data Store Write'
             */
            PotValue2_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S535>/Data Store Write1' */
            localDW->ArtPot2 = PotValue2_RX_s;

            /* Logic: '<S535>/OR' incorporates:
             *  DataStoreWrite: '<S535>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_am.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_j.Equal1);

            /* Outputs for Enabled SubSystem: '<S535>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx_g, 178.0,
                              localB->DemuxmessageCAN1andcheckcohe_am.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_am.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcoher_j.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S535>/Desync calculation' */

            /* DataStoreWrite: '<S535>/Data Store Write3' incorporates:
             *  Constant: '<S173>/Constant11'
             *  Constant: '<S535>/Constant2'
             *  DataStoreWrite: '<S535>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Outputs for SubSystem: '<S405>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S405>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR_c0, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S405>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues2_check_M_h) {
          /* Disable for Enabled SubSystem: '<S405>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S405>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_M_h = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' incorporates:
         *  EnablePort: '<S406>/Enable'
         */
        if ((*rtd_Local_Ticks >= 342.0) && (*rtd_Local_Ticks < localC->Sum10)) {
          localDW->COMPTaskRx_PotValues3_check_MOD = true;

          /* DataStoreRead: '<S406>/Data Store Read1' */
          rtb_DataStoreRead1_eq = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S406>/Data Store Read2' */
          rtb_DataStoreRead2_la = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S406>/Data Store Read' */
          rtb_DataStoreRead_dao = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S406>/Data Store Read3' */
          rtb_DataStoreRead3_ly = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S406>/OR' incorporates:
           *  Constant: '<S406>/Constant'
           *  Constant: '<S406>/Constant2'
           *  RelationalOperator: '<S406>/Equal'
           *  RelationalOperator: '<S406>/Equal1'
           */
          rtb_OR_mp = ((*rtd_Board_ID == 4.0) || (*rtd_Board_ID == 7.0));

          /* Outputs for Enabled SubSystem: '<S406>/Process_Messages' incorporates:
           *  EnablePort: '<S565>/Enable'
           */
          if (!rtb_OR_mp) {
            localDW->Process_Messages_MODE_i = true;

            /* Outputs for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_eq,
              &rtb_DataStoreRead_dao, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_gx,
              &localDW->DemuxmessageCAN1andcheckcohe_gx);

            /* End of Outputs for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_la,
              &rtb_DataStoreRead3_ly, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_j1,
              &localDW->DemuxmessageCAN1andcheckcohe_j1);

            /* End of Outputs for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S565>/Switch' incorporates:
             *  Constant: '<S406>/Constant1'
             *  DataStoreWrite: '<S565>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_gx.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_gx.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_j1.Buffer_8;
            }

            /* End of Switch generated from: '<S565>/Switch' */

            /* BitConcat: '<S567>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S565>/Data Store Write'
             */
            PotValue3_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S565>/Data Store Write1' */
            localDW->ArtPot3 = PotValue3_RX_s;

            /* Logic: '<S565>/OR' incorporates:
             *  DataStoreWrite: '<S565>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_gx.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_j1.Equal1);

            /* Outputs for Enabled SubSystem: '<S565>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx_g, 262.0,
                              localB->DemuxmessageCAN1andcheckcohe_gx.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_gx.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcohe_j1.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S565>/Desync calculation' */

            /* DataStoreWrite: '<S565>/Data Store Write3' incorporates:
             *  Constant: '<S173>/Constant19'
             *  Constant: '<S565>/Constant2'
             *  DataStoreWrite: '<S565>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Outputs for SubSystem: '<S406>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S406>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR_mp, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S406>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S406>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S406>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S407>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1_h) &&
            (!localDW->BC1_Sync_processed)) {
          localDW->COMPTaskSyncbc1check_MODE_g = true;

          /* DataStoreRead: '<S407>/Data Store Read1' */
          rtb_DataStoreRead1_bj = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S407>/Data Store Read2' */
          rtb_DataStoreRead2_ow = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S407>/Data Store Read' */
          rtb_DataStoreRead_pn = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S407>/Data Store Read3' */
          rtb_DataStoreRead3_p = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S407>/Data Store Read15' */
          rtb_DataStoreRead15_o = *rtd_Master_ID;

          /* RelationalOperator: '<S407>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S407>/Equal5' incorporates:
           *  Constant: '<S407>/Constant26'
           *  DataStoreRead: '<S407>/Data Store Read6'
           */
          rtb_Equal2_pz = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S407>/Process_Messages' incorporates:
           *  EnablePort: '<S595>/Enable'
           */
          if (rtb_Equal1_hn && rtb_Equal2_pz) {
            localDW->Process_Messages_MODE_j = true;

            /* Outputs for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_bj,
              &rtb_DataStoreRead_pn, 1.0, rtb_DataStoreRead15_o,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoh_adb,
              &localDW->DemuxmessageCAN1andcheckcoh_adb);

            /* End of Outputs for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_ow,
              &rtb_DataStoreRead3_p, 1.0, rtb_DataStoreRead15_o,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_i,
              &localDW->DemuxmessageCAN1andcheckcoher_i);

            /* End of Outputs for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S595>/Switch' incorporates:
             *  Constant: '<S407>/Constant'
             *  DataStoreWrite: '<S595>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoh_adb.AND) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoh_adb.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_i.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_8;
            }

            /* End of Switch generated from: '<S595>/Switch' */

            /* Logic: '<S595>/OR' incorporates:
             *  DataStoreWrite: '<S595>/Data Store Write2'
             */
            localDW->new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoh_adb.AND
              || localB->DemuxmessageCAN1andcheckcoher_i.AND);

            /* Outputs for Enabled SubSystem: '<S595>/Desync calculation' incorporates:
             *  EnablePort: '<S599>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S599>/Switch1' incorporates:
               *  Constant: '<S173>/Constant'
               *  Constant: '<S599>/Constant'
               *  Constant: '<S599>/Constant1'
               *  Constant: '<S599>/delay_estimation_1'
               *  Constant: '<S599>/delay_estimation_2'
               *  Product: '<S599>/Multiply'
               *  Product: '<S599>/Multiply1'
               *  Sum: '<S599>/Minus'
               *  Sum: '<S599>/Minus1'
               *  Sum: '<S599>/Sum'
               *  Sum: '<S599>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoh_adb.AND) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoh_adb.BitShift1_mg.y + 0.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_i.BitShift1_e.y + 0.0) +
                  3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S599>/Switch1' */

              /* Saturate: '<S599>/Saturation' */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S599>/Saturation' */
                Desync_Sync_bc1_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S599>/Saturation' */
                Desync_Sync_bc1_s = (-15.0);
              } else {
                /* Saturate: '<S599>/Saturation' */
                Desync_Sync_bc1_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S599>/Saturation' */

              /* DataStoreWrite: '<S599>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_s;
            }

            /* End of Outputs for SubSystem: '<S595>/Desync calculation' */

            /* DataStoreWrite: '<S595>/Data Store Write3' incorporates:
             *  Constant: '<S595>/Constant2'
             *  DataStoreWrite: '<S595>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Outputs for SubSystem: '<S407>/Process_Messages' */

          /* Logic: '<S407>/AND1' incorporates:
           *  Constant: '<S407>/Constant'
           *  DataStoreWrite: '<S595>/Data Store Write2'
           *  Logic: '<S407>/AND'
           *  Logic: '<S407>/NOT'
           */
          rtb_AND1_en = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S407>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_en, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S407>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S407>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S407>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Sync bc1 check' */

        /* Logic: '<S173>/AND19' incorporates:
         *  Constant: '<S173>/Constant11'
         *  Constant: '<S173>/Constant12'
         *  Constant: '<S173>/Constant14'
         *  Constant: '<S173>/Constant16'
         *  Constant: '<S173>/Constant19'
         *  Constant: '<S173>/Constant20'
         *  Constant: '<S173>/Constant4'
         *  Constant: '<S173>/Constant41'
         *  Constant: '<S173>/Constant6'
         *  Constant: '<S173>/Constant8'
         *  Constant: '<S403>/Constant1'
         *  Constant: '<S404>/Constant'
         *  Constant: '<S405>/Constant1'
         *  Constant: '<S406>/Constant1'
         *  Constant: '<S407>/Constant'
         *  DataStoreRead: '<S173>/Data Store Read6'
         *  DataStoreRead: '<S173>/Data Store Read7'
         *  DataStoreWrite: '<S503>/Data Store Write2'
         *  DataStoreWrite: '<S535>/Data Store Write2'
         *  DataStoreWrite: '<S565>/Data Store Write2'
         *  DataStoreWrite: '<S595>/Data Store Write2'
         *  Logic: '<S173>/AND1'
         *  Logic: '<S173>/AND18'
         *  Logic: '<S173>/AND2'
         *  Logic: '<S173>/AND5'
         *  Logic: '<S173>/AND6'
         *  Logic: '<S173>/AND7'
         *  Logic: '<S173>/AND9'
         *  Logic: '<S173>/NOT2'
         *  Logic: '<S173>/NOT5'
         *  Logic: '<S403>/NOT'
         *  Logic: '<S405>/NOT'
         *  Logic: '<S406>/NOT'
         *  Logic: '<S407>/AND'
         *  RelationalOperator: '<S173>/GreaterThan10'
         *  RelationalOperator: '<S173>/GreaterThan11'
         *  RelationalOperator: '<S173>/GreaterThan14'
         *  RelationalOperator: '<S173>/GreaterThan15'
         *  RelationalOperator: '<S173>/GreaterThan18'
         *  RelationalOperator: '<S173>/GreaterThan19'
         *  RelationalOperator: '<S173>/GreaterThan2'
         *  RelationalOperator: '<S173>/GreaterThan3'
         *  RelationalOperator: '<S173>/GreaterThan4'
         *  RelationalOperator: '<S173>/GreaterThan5'
         *  RelationalOperator: '<S173>/GreaterThan8'
         *  RelationalOperator: '<S173>/GreaterThan9'
         *  RelationalOperator: '<S404>/NotEqual'
         */
        rtb_AND19_n = ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks <
          localC->Sum2_a) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S173>/COMP Task - Update LT1' */
        COMPTaskUpdateLT1(rtb_AND19_n, 84.0, 86.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, &localDW->Role_ID, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10, &localDW->new_msg_Rx_g);

        /* End of Outputs for SubSystem: '<S173>/COMP Task - Update LT1' */

        /* Logic: '<S173>/AND17' incorporates:
         *  Constant: '<S173>/Constant'
         *  Constant: '<S173>/Constant17'
         *  Constant: '<S173>/Constant4'
         *  DataStoreRead: '<S173>/Data Store Read11'
         *  Logic: '<S173>/AND'
         *  Logic: '<S173>/NOT4'
         *  RelationalOperator: '<S173>/GreaterThan'
         *  RelationalOperator: '<S173>/GreaterThan1'
         */
        rtb_AND17_j = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_k) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 1' incorporates:
         *  EnablePort: '<S397>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 94.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_g)) {
          localDW->COMMTaskPotValuetrailer1_MODE = true;

          /* Logic: '<S397>/OR' incorporates:
           *  Constant: '<S397>/Constant'
           *  Constant: '<S397>/Constant1'
           *  RelationalOperator: '<S397>/Equal'
           *  RelationalOperator: '<S397>/Equal1'
           */
          rtb_Equal1_hn = ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 5.0));

          /* Logic: '<S397>/NOT' */
          rtb_NOT_ee = !rtb_Equal1_hn;

          /* Product: '<S397>/Product' incorporates:
           *  Constant: '<S397>/Constant59'
           */
          rtb_Product_p = 22.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S397>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_ee, 94.0, rtb_Product_p, rtd_Local_Ticks,
                               &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                               rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                               rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_ij,
                               &localC->Receptionsubstasks_ij,
                               &localDW->Receptionsubstasks_ij);

          /* End of Outputs for SubSystem: '<S397>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S397>/Transmission subtasks' incorporates:
           *  EnablePort: '<S410>/Enable'
           */
          if (rtb_Equal1_hn) {
            localDW->Transmissionsubtasks_MODE_d = true;

            /* DataStoreRead: '<S410>/Data Store Read' */
            rtb_DataStoreRead_gt = *rtd_Local_Ticks;

            /* RelationalOperator: '<S410>/Equal2' */
            rtb_Equal1_hn = (rtb_DataStoreRead_gt > 94.0);

            /* Logic: '<S410>/AND' incorporates:
             *  Constant: '<S410>/Constant6'
             *  RelationalOperator: '<S410>/GreaterThan2'
             */
            rtb_AND_o = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S410>/AND1' incorporates:
             *  Constant: '<S410>/Constant7'
             *  RelationalOperator: '<S410>/GreaterThan3'
             */
            rtb_AND1_d = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S410>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S414>/Enable'
             */
            if (rtb_DataStoreRead_gt == 94.0) {
              /* DataStoreRead: '<S414>/Data Store Read' */
              PotValue1_s = localDW->OwnPot;

              /* DataStoreWrite: '<S414>/Data Store Write' */
              localDW->ArtPot1 = PotValue1_s;
              localB->Constant_a = ((uint8_T)0U);

              /* DataTypeConversion: '<S427>/Modify Scaling Only' incorporates:
               *  Constant: '<S414>/Constant'
               *  DataTypeConversion: '<S427>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_n = (uint8_T)((uint32_T)PotValue1_s >> 8);

              /* DataTypeConversion: '<S428>/Modify Scaling Only' incorporates:
               *  DataTypeConversion: '<S428>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_mk = (uint8_T)PotValue1_s;
            }

            /* End of Outputs for SubSystem: '<S410>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_o, rtb_DataStoreRead_gt, 94.0,
              rtb_Product_p, localB->ModifyScalingOnly_n,
              localB->ModifyScalingOnly_mk, localB->Constant_a, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_e,
              &localDW->CheckmsgtransmissionCAN1_e);

            /* End of Outputs for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_d, rtb_DataStoreRead_gt, 94.0,
              rtb_Product_p, localB->ModifyScalingOnly_n,
              localB->ModifyScalingOnly_mk, localB->Constant_a, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_c,
              &localDW->CheckmsgtransmissionCAN2_c);

            /* End of Outputs for SubSystem: '<S410>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Outputs for SubSystem: '<S397>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S397>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S397>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S397>/Transmission subtasks' */

          /* Disable for Outport: '<S397>/Send CAN1' incorporates:
           *  RelationalOperator: '<S412>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN1' incorporates:
           *  Logic: '<S409>/AND'
           */
          localB->Receptionsubstasks_ij.AND = false;

          /* Disable for Outport: '<S397>/Send CAN2' incorporates:
           *  RelationalOperator: '<S413>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN2' incorporates:
           *  Logic: '<S409>/AND1'
           */
          localB->Receptionsubstasks_ij.AND1 = false;
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMM Task - PotValue trailer 1' */

        /* Outputs for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 2' incorporates:
         *  EnablePort: '<S398>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 178.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_e)) {
          localDW->COMMTaskPotValuetrailer2_MODE = true;

          /* Logic: '<S398>/OR' incorporates:
           *  Constant: '<S398>/Constant'
           *  Constant: '<S398>/Constant2'
           *  RelationalOperator: '<S398>/Equal'
           *  RelationalOperator: '<S398>/Equal1'
           */
          rtb_Equal1_hn = ((*rtd_Board_ID == 3.0) || (*rtd_Board_ID == 6.0));

          /* Logic: '<S398>/NOT' */
          rtb_NOT_ki = !rtb_Equal1_hn;

          /* Product: '<S398>/Product' incorporates:
           *  Constant: '<S398>/Constant59'
           */
          rtb_Product_e = 23.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S398>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_ki, 178.0, rtb_Product_e, rtd_Local_Ticks,
                               &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                               rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                               rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_g1,
                               &localC->Receptionsubstasks_g1,
                               &localDW->Receptionsubstasks_g1);

          /* End of Outputs for SubSystem: '<S398>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S398>/Transmission subtasks' incorporates:
           *  EnablePort: '<S430>/Enable'
           */
          if (rtb_Equal1_hn) {
            localDW->Transmissionsubtasks_MODE_j = true;

            /* DataStoreRead: '<S430>/Data Store Read' */
            rtb_DataStoreRead_ea = *rtd_Local_Ticks;

            /* RelationalOperator: '<S430>/Equal2' */
            rtb_Equal1_hn = (rtb_DataStoreRead_ea > 178.0);

            /* Logic: '<S430>/AND' incorporates:
             *  Constant: '<S430>/Constant6'
             *  RelationalOperator: '<S430>/GreaterThan2'
             */
            rtb_AND_io = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S430>/AND1' incorporates:
             *  Constant: '<S430>/Constant7'
             *  RelationalOperator: '<S430>/GreaterThan3'
             */
            rtb_AND1_b = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S430>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S434>/Enable'
             */
            if (rtb_DataStoreRead_ea == 178.0) {
              /* DataStoreRead: '<S434>/Data Store Read' */
              PotValue2_s = localDW->OwnPot;

              /* DataStoreWrite: '<S434>/Data Store Write' */
              localDW->ArtPot2 = PotValue2_s;
              localB->Constant_p = ((uint8_T)0U);

              /* DataTypeConversion: '<S447>/Modify Scaling Only' incorporates:
               *  Constant: '<S434>/Constant'
               *  DataTypeConversion: '<S447>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_e = (uint8_T)((uint32_T)PotValue2_s >> 8);

              /* DataTypeConversion: '<S448>/Modify Scaling Only' incorporates:
               *  DataTypeConversion: '<S448>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_mz = (uint8_T)PotValue2_s;
            }

            /* End of Outputs for SubSystem: '<S430>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_io, rtb_DataStoreRead_ea, 178.0,
              rtb_Product_e, localB->ModifyScalingOnly_e,
              localB->ModifyScalingOnly_mz, localB->Constant_p, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_m,
              &localDW->CheckmsgtransmissionCAN1_m);

            /* End of Outputs for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_b, rtb_DataStoreRead_ea, 178.0,
              rtb_Product_e, localB->ModifyScalingOnly_e,
              localB->ModifyScalingOnly_mz, localB->Constant_p, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_m,
              &localDW->CheckmsgtransmissionCAN2_m);

            /* End of Outputs for SubSystem: '<S430>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Outputs for SubSystem: '<S398>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S398>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S398>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S398>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S398>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND' incorporates:
           *  Outport: '<S398>/Receive CAN1'
           */
          localB->Receptionsubstasks_g1.AND = false;

          /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND1' incorporates:
           *  Outport: '<S398>/Receive CAN2'
           */
          localB->Receptionsubstasks_g1.AND1 = false;
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMM Task - PotValue trailer 2' */

        /* Outputs for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 3' incorporates:
         *  EnablePort: '<S399>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 262.0) && (rtb_DataStoreRead8_c <
             localC->Sum9)) {
          localDW->COMMTaskPotValuetrailer3_MODE = true;

          /* Logic: '<S399>/OR' incorporates:
           *  Constant: '<S399>/Constant'
           *  Constant: '<S399>/Constant2'
           *  RelationalOperator: '<S399>/Equal'
           *  RelationalOperator: '<S399>/Equal1'
           */
          rtb_Equal1_hn = ((*rtd_Board_ID == 4.0) || (*rtd_Board_ID == 7.0));

          /* Logic: '<S399>/NOT' */
          rtb_NOT_ij = !rtb_Equal1_hn;

          /* Product: '<S399>/Product' incorporates:
           *  Constant: '<S399>/Constant59'
           */
          rtb_Product = 24.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S399>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_ij, 262.0, rtb_Product, rtd_Local_Ticks,
                               &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                               rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                               rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_a,
                               &localC->Receptionsubstasks_a,
                               &localDW->Receptionsubstasks_a);

          /* End of Outputs for SubSystem: '<S399>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S399>/Transmission subtasks' incorporates:
           *  EnablePort: '<S450>/Enable'
           */
          if (rtb_Equal1_hn) {
            localDW->Transmissionsubtasks_MODE_p = true;

            /* DataStoreRead: '<S450>/Data Store Read' */
            rtb_DataStoreRead_ch = *rtd_Local_Ticks;

            /* RelationalOperator: '<S450>/Equal2' */
            rtb_Equal1_hn = (rtb_DataStoreRead_ch > 262.0);

            /* Logic: '<S450>/AND' incorporates:
             *  Constant: '<S450>/Constant6'
             *  RelationalOperator: '<S450>/GreaterThan2'
             */
            rtb_AND_jk = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S450>/AND1' incorporates:
             *  Constant: '<S450>/Constant7'
             *  RelationalOperator: '<S450>/GreaterThan3'
             */
            rtb_AND1_jf = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S450>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S454>/Enable'
             */
            if (rtb_DataStoreRead_ch == 262.0) {
              /* DataStoreRead: '<S454>/Data Store Read' */
              PotValue3_s = localDW->OwnPot;

              /* DataStoreWrite: '<S454>/Data Store Write' */
              localDW->ArtPot3 = PotValue3_s;
              localB->Constant_d = ((uint8_T)0U);

              /* DataTypeConversion: '<S467>/Modify Scaling Only' incorporates:
               *  Constant: '<S454>/Constant'
               *  DataTypeConversion: '<S467>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_g = (uint8_T)((uint32_T)PotValue3_s >> 8);

              /* DataTypeConversion: '<S468>/Modify Scaling Only' incorporates:
               *  DataTypeConversion: '<S468>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_m = (uint8_T)PotValue3_s;
            }

            /* End of Outputs for SubSystem: '<S450>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_jk, rtb_DataStoreRead_ch, 262.0,
              rtb_Product, localB->ModifyScalingOnly_g,
              localB->ModifyScalingOnly_m, localB->Constant_d, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_k,
              &localDW->CheckmsgtransmissionCAN1_k);

            /* End of Outputs for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_jf, rtb_DataStoreRead_ch, 262.0,
              rtb_Product, localB->ModifyScalingOnly_g,
              localB->ModifyScalingOnly_m, localB->Constant_d, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_n,
              &localDW->CheckmsgtransmissionCAN2_n);

            /* End of Outputs for SubSystem: '<S450>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Outputs for SubSystem: '<S399>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S399>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S399>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S399>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S399>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

          /* Disable for Logic: '<S449>/AND' incorporates:
           *  Outport: '<S399>/Receive CAN1'
           */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_n.Equal7 = false;

          /* Disable for Logic: '<S449>/AND1' incorporates:
           *  Outport: '<S399>/Receive CAN2'
           */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S173>/COMM Task - PotValue trailer 3' */

        /* Outputs for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc1(rtb_AND17_j, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                        &localDW->Msg_Rx_f, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                        rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                        &localDW->Role_ID, rtd_RxID_CAN1, rtd_RxID_CAN2,
                        rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_TxID_CAN1,
                        rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_g, &localB->COMMTaskSyncbc1_f,
                        &localC->COMMTaskSyncbc1_f, &localDW->COMMTaskSyncbc1_f);

        /* End of Outputs for SubSystem: '<S173>/COMM Task - Sync bc 1' */

        /* Logic: '<S173>/OR' incorporates:
         *  Constant: '<S173>/Constant'
         *  Constant: '<S173>/Constant11'
         *  Constant: '<S173>/Constant19'
         *  Constant: '<S173>/Constant5'
         *  Constant: '<S414>/Constant'
         *  Constant: '<S434>/Constant'
         *  Constant: '<S454>/Constant'
         *  Logic: '<S173>/AND3'
         *  Logic: '<S173>/AND4'
         *  Logic: '<S173>/AND8'
         *  RelationalOperator: '<S173>/GreaterThan12'
         *  RelationalOperator: '<S173>/GreaterThan13'
         *  RelationalOperator: '<S173>/GreaterThan16'
         *  RelationalOperator: '<S173>/GreaterThan17'
         *  RelationalOperator: '<S173>/GreaterThan6'
         *  RelationalOperator: '<S173>/GreaterThan7'
         *  RelationalOperator: '<S410>/Equal16'
         *  RelationalOperator: '<S430>/Equal16'
         *  RelationalOperator: '<S450>/Equal16'
         */
        localB->OR_f = (localB->COMMTaskSyncbc1_f.Transmissionsubtasks1.Equal7_a
                        || localB->CheckmsgtransmissionCAN1_e.Equal7 ||
                        localB->CheckmsgtransmissionCAN1_m.Equal7 ||
                        localB->CheckmsgtransmissionCAN1_k.Equal7);

        /* Logic: '<S173>/OR1' */
        localB->OR1_e = (localB->COMMTaskSyncbc1_f.Transmissionsubtasks1.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_c.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_m.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_n.Equal7);

        /* Logic: '<S173>/OR2' */
        localB->OR2_m = (localB->COMMTaskSyncbc1_f.Receptionsubstasks_j.AND ||
                         localB->Receptionsubstasks_ij.AND ||
                         localB->Receptionsubstasks_g1.AND ||
                         localB->Receptionsubstasks_a.AND);

        /* Logic: '<S173>/OR3' */
        localB->OR3_e = (localB->COMMTaskSyncbc1_f.Receptionsubstasks_j.AND1 ||
                         localB->Receptionsubstasks_ij.AND1 ||
                         localB->Receptionsubstasks_g1.AND1 ||
                         localB->Receptionsubstasks_a.AND1);
      } else if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S403>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S403>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          /* Disable for Enabled SubSystem: '<S404>/Subsystem' */
          if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S404>/Subsystem' */
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_M_h) {
          /* Disable for Enabled SubSystem: '<S405>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S405>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_M_h = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S406>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S406>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S407>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S407>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S397>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S397>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S397>/Transmission subtasks' */

          /* Disable for Outport: '<S397>/Send CAN1' incorporates:
           *  RelationalOperator: '<S412>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN1' incorporates:
           *  Logic: '<S409>/AND'
           */
          localB->Receptionsubstasks_ij.AND = false;

          /* Disable for Outport: '<S397>/Send CAN2' incorporates:
           *  RelationalOperator: '<S413>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN2' incorporates:
           *  Logic: '<S409>/AND1'
           */
          localB->Receptionsubstasks_ij.AND1 = false;
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S398>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S398>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S398>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S398>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND' incorporates:
           *  Outport: '<S398>/Receive CAN1'
           */
          localB->Receptionsubstasks_g1.AND = false;

          /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND1' incorporates:
           *  Outport: '<S398>/Receive CAN2'
           */
          localB->Receptionsubstasks_g1.AND1 = false;
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S399>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S399>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S399>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S399>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

          /* Disable for Logic: '<S449>/AND' incorporates:
           *  Outport: '<S399>/Receive CAN1'
           */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_n.Equal7 = false;

          /* Disable for Logic: '<S449>/AND1' incorporates:
           *  Outport: '<S399>/Receive CAN2'
           */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S173>/OR' incorporates:
         *  Outport: '<S173>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S173>/OR1' incorporates:
         *  Outport: '<S173>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S173>/OR2' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S173>/OR3' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S170>/controller basic cycle 1' */

      /* Outputs for Enabled SubSystem: '<S170>/controller basic cycle 2' incorporates:
       *  EnablePort: '<S174>/Enable'
       */
      if (localDW->basic_cycle_count == 2.0) {
        localDW->controllerbasiccycle2_MODE = true;

        /* DataStoreRead: '<S174>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Logic: '<S174>/AND20' incorporates:
         *  Constant: '<S174>/Constant16'
         *  RelationalOperator: '<S174>/GreaterThan34'
         *  RelationalOperator: '<S174>/GreaterThan35'
         */
        rtb_AND20 = ((*rtd_Local_Ticks >= 270.0) && (*rtd_Local_Ticks <
          localC->Sum18));

        /* Outputs for Enabled SubSystem: '<S174>/COMP Task - Reset Variables BC1' */
        COMPTaskResetVariablesBC1(rtb_AND20, 270.0, 272.0,
          &localDW->BC1_Sync_processed, rtd_Board_ID, &localDW->Desync_Positive,
          rtd_Local_Ticks, rtd_Master_ID, &localDW->Sync_bc1_missed_counter,
          rtd_Toggle_Pin_A0, &localDW->Toggle_Pin_A1);

        /* End of Outputs for SubSystem: '<S174>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' incorporates:
         *  EnablePort: '<S631>/Enable'
         */
        if ((*rtd_Local_Ticks >= 254.0) && (*rtd_Local_Ticks < localC->Sum7)) {
          localDW->COMPTaskRx_PotValues2_check_MOD = true;

          /* DataStoreRead: '<S631>/Data Store Read1' */
          rtb_DataStoreRead1_df = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S631>/Data Store Read2' */
          rtb_DataStoreRead2_a = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S631>/Data Store Read' */
          rtb_DataStoreRead_cs = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S631>/Data Store Read3' */
          rtb_DataStoreRead3_i = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S631>/AND' incorporates:
           *  Constant: '<S631>/Constant'
           *  DataStoreRead: '<S631>/Data Store Read5'
           *  RelationalOperator: '<S631>/Equal'
           *  RelationalOperator: '<S631>/Equal1'
           */
          rtb_AND_o3 = ((*rtd_Trailer_ID == 2.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Outputs for Enabled SubSystem: '<S631>/Process_Messages' incorporates:
           *  EnablePort: '<S695>/Enable'
           */
          if (!rtb_AND_o3) {
            localDW->Process_Messages_MODE_g = true;

            /* Outputs for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_df,
              &rtb_DataStoreRead_cs, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_gn,
              &localDW->DemuxmessageCAN1andcheckcohe_gn);

            /* End of Outputs for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_a,
              &rtb_DataStoreRead3_i, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_c,
              &localDW->DemuxmessageCAN1andcheckcoher_c);

            /* End of Outputs for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S695>/Switch' incorporates:
             *  Constant: '<S631>/Constant1'
             *  DataStoreWrite: '<S695>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_gn.Equal1) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_gn.Buffer_8;
            } else {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_c.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_c.Buffer_8;
            }

            /* End of Switch generated from: '<S695>/Switch' */

            /* BitConcat: '<S697>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S695>/Data Store Write'
             */
            Trailer2Articulation_RX_s = (uint16_T)(localDW->Msg_Rx.Buffer_2 << 8
              | localDW->Msg_Rx.Buffer_3);

            /* Logic: '<S695>/OR' incorporates:
             *  DataStoreWrite: '<S695>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcohe_gn.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_c.Equal1);

            /* Outputs for Enabled SubSystem: '<S695>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx, 174.0,
                              localB->DemuxmessageCAN1andcheckcohe_gn.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_gn.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcoher_c.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S695>/Desync calculation' */

            /* DataStoreWrite: '<S695>/Data Store Write3' incorporates:
             *  Constant: '<S174>/Constant11'
             *  Constant: '<S695>/Constant2'
             *  DataStoreWrite: '<S695>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Outputs for SubSystem: '<S631>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S631>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND_o3, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S631>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S631>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S631>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */

        /* Outputs for Enabled SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' incorporates:
         *  EnablePort: '<S632>/Enable'
         */
        if ((*rtd_Local_Ticks >= 170.0) && (*rtd_Local_Ticks < localC->Sum6)) {
          localDW->COMPTaskRx_Trailer1Articulation = true;

          /* DataStoreRead: '<S632>/Data Store Read1' */
          rtb_DataStoreRead1_cu = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S632>/Data Store Read2' */
          rtb_DataStoreRead2_e = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S632>/Data Store Read' */
          rtb_DataStoreRead_fu = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S632>/Data Store Read3' */
          rtb_DataStoreRead3_bo = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S632>/AND' incorporates:
           *  Constant: '<S632>/Constant2'
           *  DataStoreRead: '<S632>/Data Store Read5'
           *  RelationalOperator: '<S632>/Equal'
           *  RelationalOperator: '<S632>/Equal2'
           */
          rtb_AND_n = ((*rtd_Trailer_ID == 1.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Outputs for Enabled SubSystem: '<S632>/Process_Messages' incorporates:
           *  EnablePort: '<S725>/Enable'
           */
          if (!rtb_AND_n) {
            localDW->Process_Messages_MODE_h = true;

            /* Outputs for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_cu,
              &rtb_DataStoreRead_fu, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_f,
              &localDW->DemuxmessageCAN1andcheckcoher_f);

            /* End of Outputs for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_e,
              &rtb_DataStoreRead3_bo, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_n,
              &localDW->DemuxmessageCAN1andcheckcoher_n);

            /* End of Outputs for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S725>/Switch' incorporates:
             *  Constant: '<S632>/Constant1'
             *  DataStoreWrite: '<S725>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_f.Equal1) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_f.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_8;
            } else {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_n.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_n.Buffer_8;
            }

            /* End of Switch generated from: '<S725>/Switch' */

            /* BitConcat: '<S727>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S725>/Data Store Write'
             */
            Trailer1Articulation_RX_s = (uint16_T)(localDW->Msg_Rx.Buffer_2 << 8
              | localDW->Msg_Rx.Buffer_3);

            /* Logic: '<S725>/OR' incorporates:
             *  DataStoreWrite: '<S725>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcoher_f.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_n.Equal1);

            /* Outputs for Enabled SubSystem: '<S725>/Desync calculation' incorporates:
             *  EnablePort: '<S730>/Enable'
             */
            if (localDW->new_msg_Rx) {
              /* Switch: '<S730>/Switch1' incorporates:
               *  Constant: '<S174>/Constant5'
               *  Constant: '<S730>/Constant'
               *  Constant: '<S730>/Constant1'
               *  Constant: '<S730>/delay_estimation_1'
               *  Constant: '<S730>/delay_estimation_2'
               *  Product: '<S730>/Multiply'
               *  Product: '<S730>/Multiply1'
               *  Sum: '<S730>/Minus'
               *  Sum: '<S730>/Minus1'
               *  Sum: '<S730>/Sum'
               *  Sum: '<S730>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_f.Equal1) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_f.BitShift1_mu.y + 90.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_n.BitShift1_i.y + 90.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S730>/Switch1' */

              /* Saturate: '<S730>/Saturation' */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S730>/Saturation' */
                Desync_Sync_bc2_vem_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S730>/Saturation' */
                Desync_Sync_bc2_vem_s = (-15.0);
              } else {
                /* Saturate: '<S730>/Saturation' */
                Desync_Sync_bc2_vem_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S730>/Saturation' */

              /* DataStoreWrite: '<S730>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc2_vem_s;
            }

            /* End of Outputs for SubSystem: '<S725>/Desync calculation' */

            /* DataStoreWrite: '<S725>/Data Store Write3' incorporates:
             *  Constant: '<S725>/Constant2'
             *  DataStoreWrite: '<S725>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Outputs for SubSystem: '<S632>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S632>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND_n, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S632>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S632>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S632>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Outputs for SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Outputs for Enabled SubSystem: '<S174>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S633>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1) && (
             !localDW->BC1_Sync_processed)) {
          localDW->COMPTaskSyncbc1check_MODE = true;

          /* DataStoreRead: '<S633>/Data Store Read1' */
          rtb_DataStoreRead1_i5 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S633>/Data Store Read2' */
          rtb_DataStoreRead2_c = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S633>/Data Store Read' */
          rtb_DataStoreRead_j = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S633>/Data Store Read3' */
          rtb_DataStoreRead3 = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S633>/Data Store Read15' */
          rtb_DataStoreRead15 = *rtd_Master_ID;

          /* RelationalOperator: '<S633>/Equal' */
          rtb_Equal1_hn = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S633>/Equal5' incorporates:
           *  Constant: '<S633>/Constant26'
           *  DataStoreRead: '<S633>/Data Store Read6'
           */
          rtb_Equal2_pz = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S633>/Process_Messages' incorporates:
           *  EnablePort: '<S755>/Enable'
           */
          if (rtb_Equal1_hn && rtb_Equal2_pz) {
            localDW->Process_Messages_MODE = true;

            /* Outputs for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_i5,
              &rtb_DataStoreRead_j, 1.0, rtb_DataStoreRead15,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_m,
              &localDW->DemuxmessageCAN1andcheckcoher_m);

            /* End of Outputs for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_c,
              &rtb_DataStoreRead3, 1.0, rtb_DataStoreRead15,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_fc,
              &localDW->DemuxmessageCAN1andcheckcohe_fc);

            /* End of Outputs for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S755>/Switch' incorporates:
             *  Constant: '<S633>/Constant'
             *  DataStoreWrite: '<S755>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_m.AND) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_m.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_m.Buffer_8;
            } else {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Constant;
              localDW->Msg_Rx.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_2;
              localDW->Msg_Rx.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_3;
              localDW->Msg_Rx.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_4;
              localDW->Msg_Rx.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_5;
              localDW->Msg_Rx.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_6;
              localDW->Msg_Rx.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_7;
              localDW->Msg_Rx.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_fc.Buffer_8;
            }

            /* End of Switch generated from: '<S755>/Switch' */

            /* Logic: '<S755>/OR' incorporates:
             *  DataStoreWrite: '<S755>/Data Store Write2'
             */
            localDW->new_msg_Rx = (localB->DemuxmessageCAN1andcheckcoher_m.AND ||
              localB->DemuxmessageCAN1andcheckcohe_fc.AND);

            /* Outputs for Enabled SubSystem: '<S755>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx, 0.0,
                              localB->DemuxmessageCAN1andcheckcoher_m.AND,
                              localB->DemuxmessageCAN1andcheckcoher_m.BitShift1_mg.y,
                              localB->DemuxmessageCAN1andcheckcohe_fc.BitShift1_e.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S755>/Desync calculation' */

            /* DataStoreWrite: '<S755>/Data Store Write3' incorporates:
             *  Constant: '<S174>/Constant'
             *  Constant: '<S755>/Constant2'
             *  DataStoreWrite: '<S755>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S633>/Process_Messages' */

          /* Logic: '<S633>/AND1' incorporates:
           *  Constant: '<S174>/Constant'
           *  Constant: '<S633>/Constant'
           *  DataStoreWrite: '<S755>/Data Store Write2'
           *  Logic: '<S633>/AND'
           *  Logic: '<S633>/NOT'
           */
          rtb_AND1_h = (rtb_Equal1_hn && (!rtb_Equal2_pz));

          /* Outputs for Enabled SubSystem: '<S633>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_h, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S633>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S633>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S633>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S174>/COMP Task - Sync bc1 check' */

        /* Logic: '<S174>/AND19' incorporates:
         *  Constant: '<S174>/Constant'
         *  Constant: '<S174>/Constant11'
         *  Constant: '<S174>/Constant12'
         *  Constant: '<S174>/Constant16'
         *  Constant: '<S174>/Constant4'
         *  Constant: '<S174>/Constant41'
         *  Constant: '<S174>/Constant6'
         *  Constant: '<S174>/Constant8'
         *  Constant: '<S631>/Constant1'
         *  Constant: '<S632>/Constant1'
         *  Constant: '<S633>/Constant'
         *  DataStoreRead: '<S174>/Data Store Read6'
         *  DataStoreRead: '<S174>/Data Store Read7'
         *  DataStoreWrite: '<S695>/Data Store Write2'
         *  DataStoreWrite: '<S725>/Data Store Write2'
         *  DataStoreWrite: '<S755>/Data Store Write2'
         *  Logic: '<S174>/AND1'
         *  Logic: '<S174>/AND18'
         *  Logic: '<S174>/AND2'
         *  Logic: '<S174>/AND5'
         *  Logic: '<S174>/AND6'
         *  Logic: '<S174>/NOT2'
         *  Logic: '<S174>/NOT5'
         *  Logic: '<S631>/NOT'
         *  Logic: '<S632>/NOT'
         *  Logic: '<S633>/AND'
         *  RelationalOperator: '<S174>/GreaterThan10'
         *  RelationalOperator: '<S174>/GreaterThan11'
         *  RelationalOperator: '<S174>/GreaterThan2'
         *  RelationalOperator: '<S174>/GreaterThan3'
         *  RelationalOperator: '<S174>/GreaterThan4'
         *  RelationalOperator: '<S174>/GreaterThan5'
         *  RelationalOperator: '<S174>/GreaterThan8'
         *  RelationalOperator: '<S174>/GreaterThan9'
         */
        rtb_AND19 = ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks <
          localC->Sum2) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S174>/COMP Task - Update LT1' */
        COMPTaskUpdateLT1(rtb_AND19, 84.0, 86.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, &localDW->Role_ID, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10, &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S174>/COMP Task - Update LT1' */

        /* Logic: '<S174>/AND17' incorporates:
         *  Constant: '<S174>/Constant'
         *  Constant: '<S174>/Constant17'
         *  Constant: '<S174>/Constant4'
         *  DataStoreRead: '<S174>/Data Store Read11'
         *  Logic: '<S174>/AND'
         *  Logic: '<S174>/NOT4'
         *  RelationalOperator: '<S174>/GreaterThan'
         *  RelationalOperator: '<S174>/GreaterThan1'
         */
        rtb_AND17 = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' incorporates:
         *  EnablePort: '<S627>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 90.0) && (rtb_DataStoreRead8_c <
             localC->Sum3)) {
          localDW->COMMTaskArticualtionangletrai_k = true;

          /* Logic: '<S627>/AND' incorporates:
           *  Constant: '<S627>/Constant'
           *  DataStoreRead: '<S627>/Data Store Read2'
           *  RelationalOperator: '<S627>/Equal'
           *  RelationalOperator: '<S627>/Equal1'
           */
          rtb_Equal1_hn = ((*rtd_Trailer_ID == 1.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Logic: '<S627>/NOT' */
          rtb_NOT_iz = !rtb_Equal1_hn;

          /* Outputs for Enabled SubSystem: '<S627>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_iz, 90.0, rtd_Local_Ticks, &localDW->Msg_Rx,
                             rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                             rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                             rtd_Rx_State_CAN2, &localDW->new_msg_Rx,
                             &localB->Receptionsubstasks_c,
                             &localC->Receptionsubstasks_c,
                             &localDW->Receptionsubstasks_c);

          /* End of Outputs for SubSystem: '<S627>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S627>/Transmission subtasks' incorporates:
           *  EnablePort: '<S636>/Enable'
           */
          if (rtb_Equal1_hn) {
            localDW->Transmissionsubtasks_MODE_c = true;

            /* DataStoreRead: '<S636>/Data Store Read' */
            rtb_DataStoreRead_c = *rtd_Local_Ticks;

            /* RelationalOperator: '<S636>/Equal2' */
            rtb_Equal1_hn = (rtb_DataStoreRead_c > 90.0);

            /* Logic: '<S636>/AND' incorporates:
             *  Constant: '<S636>/Constant6'
             *  RelationalOperator: '<S636>/GreaterThan2'
             */
            rtb_AND_gj = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S636>/AND1' incorporates:
             *  Constant: '<S636>/Constant7'
             *  RelationalOperator: '<S636>/GreaterThan3'
             */
            rtb_AND1_p = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S636>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S640>/Enable'
             */
            if (rtb_DataStoreRead_c == 90.0) {
              /* DataStoreRead: '<S640>/Data Store Read' */
              Trailer1_Articulation_s = localDW->ArtPotFinal;
              localB->Constant_o = ((uint8_T)0U);

              /* DataTypeConversion: '<S653>/Modify Scaling Only' incorporates:
               *  Constant: '<S640>/Constant'
               *  DataTypeConversion: '<S653>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_p = (uint8_T)((uint32_T)
                Trailer1_Articulation_s >> 8);

              /* DataTypeConversion: '<S654>/Modify Scaling Only' incorporates:
               *  DataTypeConversion: '<S654>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_k = (uint8_T)Trailer1_Articulation_s;
            }

            /* End of Outputs for SubSystem: '<S636>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1_g(rtb_AND_gj, rtb_DataStoreRead_c, 90.0,
              localB->ModifyScalingOnly_p, localB->ModifyScalingOnly_k,
              localB->Constant_o, rtd_Board_ID, rtd_Msg_Tx_CAN1, rtd_TxID_CAN1,
              rtd_Tx_msg_count_CAN1, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN1_g0,
              &localC->CheckmsgtransmissionCAN1_g0,
              &localDW->CheckmsgtransmissionCAN1_g0);

            /* End of Outputs for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2_i(rtb_AND1_p, rtb_DataStoreRead_c, 90.0,
              localB->ModifyScalingOnly_p, localB->ModifyScalingOnly_k,
              localB->Constant_o, rtd_Board_ID, rtd_Msg_Tx_CAN2, rtd_TxID_CAN2,
              rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN2_im,
              &localC->CheckmsgtransmissionCAN2_im,
              &localDW->CheckmsgtransmissionCAN2_im);

            /* End of Outputs for SubSystem: '<S636>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Outputs for SubSystem: '<S627>/Transmission subtasks' */
        } else if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S627>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S627>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S627>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S627>/Transmission subtasks' */

          /* Disable for Outport: '<S627>/Send CAN1' incorporates:
           *  RelationalOperator: '<S638>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

          /* Disable for Logic: '<S635>/AND' incorporates:
           *  Outport: '<S627>/Receive CAN1'
           */
          localB->Receptionsubstasks_c.AND = false;

          /* Disable for Outport: '<S627>/Send CAN2' incorporates:
           *  RelationalOperator: '<S639>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_im.Equal7 = false;

          /* Disable for Logic: '<S635>/AND1' incorporates:
           *  Outport: '<S627>/Receive CAN2'
           */
          localB->Receptionsubstasks_c.AND1 = false;
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Outputs for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */

        /* Outputs for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' incorporates:
         *  EnablePort: '<S628>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 174.0) && (rtb_DataStoreRead8_c <
             localC->Sum5)) {
          localDW->COMMTaskArticualtionangletraile = true;

          /* Logic: '<S628>/AND' incorporates:
           *  Constant: '<S628>/Constant'
           *  DataStoreRead: '<S628>/Data Store Read2'
           *  RelationalOperator: '<S628>/Equal'
           *  RelationalOperator: '<S628>/Equal1'
           */
          rtb_Equal1_hn = ((*rtd_Trailer_ID == 2.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Logic: '<S628>/NOT' */
          rtb_NOT_kn = !rtb_Equal1_hn;

          /* Outputs for Enabled SubSystem: '<S628>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_kn, 174.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx, &localB->Receptionsubstasks_o,
                             &localC->Receptionsubstasks_o,
                             &localDW->Receptionsubstasks_o);

          /* End of Outputs for SubSystem: '<S628>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S628>/Transmission subtasks' incorporates:
           *  EnablePort: '<S656>/Enable'
           */
          if (rtb_Equal1_hn) {
            localDW->Transmissionsubtasks_MODE = true;

            /* DataStoreRead: '<S656>/Data Store Read' */
            rtb_DataStoreRead_io = *rtd_Local_Ticks;

            /* RelationalOperator: '<S656>/Equal2' */
            rtb_Equal1_hn = (rtb_DataStoreRead_io > 174.0);

            /* Logic: '<S656>/AND' incorporates:
             *  Constant: '<S656>/Constant6'
             *  RelationalOperator: '<S656>/GreaterThan2'
             */
            rtb_AND_j0 = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S656>/AND1' incorporates:
             *  Constant: '<S656>/Constant7'
             *  RelationalOperator: '<S656>/GreaterThan3'
             */
            rtb_AND1_n = (rtb_Equal1_hn && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S656>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S660>/Enable'
             */
            if (rtb_DataStoreRead_io == 174.0) {
              /* DataStoreRead: '<S660>/Data Store Read' */
              Trailer2_Articulation_s = localDW->ArtPotFinal;
              localB->Constant = ((uint8_T)0U);

              /* DataTypeConversion: '<S673>/Modify Scaling Only' incorporates:
               *  Constant: '<S660>/Constant'
               *  DataTypeConversion: '<S673>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly = (uint8_T)((uint32_T)
                Trailer2_Articulation_s >> 8);

              /* DataTypeConversion: '<S674>/Modify Scaling Only' incorporates:
               *  DataTypeConversion: '<S674>/Extract Desired Bits'
               */
              localB->ModifyScalingOnly_i = (uint8_T)Trailer2_Articulation_s;
            }

            /* End of Outputs for SubSystem: '<S656>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1_g(rtb_AND_j0, rtb_DataStoreRead_io, 174.0,
              localB->ModifyScalingOnly, localB->ModifyScalingOnly_i,
              localB->Constant, rtd_Board_ID, rtd_Msg_Tx_CAN1, rtd_TxID_CAN1,
              rtd_Tx_msg_count_CAN1, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN1_h,
              &localC->CheckmsgtransmissionCAN1_h,
              &localDW->CheckmsgtransmissionCAN1_h);

            /* End of Outputs for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2_i(rtb_AND1_n, rtb_DataStoreRead_io, 174.0,
              localB->ModifyScalingOnly, localB->ModifyScalingOnly_i,
              localB->Constant, rtd_Board_ID, rtd_Msg_Tx_CAN2, rtd_TxID_CAN2,
              rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN2_k,
              &localC->CheckmsgtransmissionCAN2_k,
              &localDW->CheckmsgtransmissionCAN2_k);

            /* End of Outputs for SubSystem: '<S656>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S628>/Transmission subtasks' */
        } else if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S628>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S628>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S628>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

          /* Disable for Logic: '<S655>/AND' incorporates:
           *  Outport: '<S628>/Receive CAN1'
           */
          localB->Receptionsubstasks_o.AND = false;

          /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_k.Equal7 = false;

          /* Disable for Logic: '<S655>/AND1' incorporates:
           *  Outport: '<S628>/Receive CAN2'
           */
          localB->Receptionsubstasks_o.AND1 = false;
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Outputs for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */

        /* Outputs for Enabled SubSystem: '<S174>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc1(rtb_AND17, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                        &localDW->Msg_Rx, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                        rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                        &localDW->Role_ID, rtd_RxID_CAN1, rtd_RxID_CAN2,
                        rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_TxID_CAN1,
                        rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx, &localB->COMMTaskSyncbc1_d,
                        &localC->COMMTaskSyncbc1_d, &localDW->COMMTaskSyncbc1_d);

        /* End of Outputs for SubSystem: '<S174>/COMM Task - Sync bc 1' */

        /* Logic: '<S174>/OR' incorporates:
         *  Constant: '<S174>/Constant'
         *  Constant: '<S174>/Constant11'
         *  Constant: '<S174>/Constant5'
         *  Constant: '<S640>/Constant'
         *  Constant: '<S660>/Constant'
         *  Logic: '<S174>/AND3'
         *  Logic: '<S174>/AND4'
         *  RelationalOperator: '<S174>/GreaterThan12'
         *  RelationalOperator: '<S174>/GreaterThan13'
         *  RelationalOperator: '<S174>/GreaterThan6'
         *  RelationalOperator: '<S174>/GreaterThan7'
         *  RelationalOperator: '<S636>/Equal16'
         *  RelationalOperator: '<S656>/Equal16'
         */
        localB->OR = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks1.Equal7_a ||
                      localB->CheckmsgtransmissionCAN1_g0.Equal7 ||
                      localB->CheckmsgtransmissionCAN1_h.Equal7);

        /* Logic: '<S174>/OR1' */
        localB->OR1 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks1.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_im.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_k.Equal7);

        /* Logic: '<S174>/OR2' */
        localB->OR2 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_j.AND ||
                       localB->Receptionsubstasks_c.AND ||
                       localB->Receptionsubstasks_o.AND);

        /* Logic: '<S174>/OR3' */
        localB->OR3 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_j.AND1 ||
                       localB->Receptionsubstasks_c.AND1 ||
                       localB->Receptionsubstasks_o.AND1);
      } else if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S631>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S631>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S632>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S632>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S633>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S633>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S627>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S627>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S627>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S627>/Transmission subtasks' */

          /* Disable for Outport: '<S627>/Send CAN1' incorporates:
           *  RelationalOperator: '<S638>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

          /* Disable for Logic: '<S635>/AND' incorporates:
           *  Outport: '<S627>/Receive CAN1'
           */
          localB->Receptionsubstasks_c.AND = false;

          /* Disable for Outport: '<S627>/Send CAN2' incorporates:
           *  RelationalOperator: '<S639>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_im.Equal7 = false;

          /* Disable for Logic: '<S635>/AND1' incorporates:
           *  Outport: '<S627>/Receive CAN2'
           */
          localB->Receptionsubstasks_c.AND1 = false;
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S628>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S628>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S628>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

          /* Disable for Logic: '<S655>/AND' incorporates:
           *  Outport: '<S628>/Receive CAN1'
           */
          localB->Receptionsubstasks_o.AND = false;

          /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_k.Equal7 = false;

          /* Disable for Logic: '<S655>/AND1' incorporates:
           *  Outport: '<S628>/Receive CAN2'
           */
          localB->Receptionsubstasks_o.AND1 = false;
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S174>/OR' incorporates:
         *  Outport: '<S174>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S174>/OR1' incorporates:
         *  Outport: '<S174>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S174>/OR2' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S174>/OR3' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S170>/controller basic cycle 2' */

      /* Switch generated from: '<S170>/Switch' incorporates:
       *  Constant: '<S170>/Constant2'
       *  Constant: '<S172>/Constant'
       *  Constant: '<S172>/Constant12'
       *  Constant: '<S172>/Constant14'
       *  Constant: '<S172>/Constant17'
       *  Constant: '<S172>/Constant19'
       *  Constant: '<S172>/Constant2'
       *  Constant: '<S172>/Constant21'
       *  Constant: '<S172>/Constant23'
       *  Constant: '<S172>/Constant25'
       *  Constant: '<S172>/Constant27'
       *  Constant: '<S172>/Constant28'
       *  Constant: '<S172>/Constant3'
       *  Constant: '<S172>/Constant31'
       *  Constant: '<S172>/Constant33'
       *  Constant: '<S172>/Constant34'
       *  Constant: '<S172>/Constant6'
       *  Constant: '<S172>/Constant8'
       *  Constant: '<S172>/Constant9'
       *  Constant: '<S173>/Constant'
       *  Constant: '<S173>/Constant11'
       *  Constant: '<S173>/Constant12'
       *  Constant: '<S173>/Constant14'
       *  Constant: '<S173>/Constant16'
       *  Constant: '<S173>/Constant17'
       *  Constant: '<S173>/Constant19'
       *  Constant: '<S173>/Constant20'
       *  Constant: '<S173>/Constant23'
       *  Constant: '<S173>/Constant4'
       *  Constant: '<S173>/Constant41'
       *  Constant: '<S173>/Constant5'
       *  Constant: '<S173>/Constant6'
       *  Constant: '<S173>/Constant8'
       *  Constant: '<S174>/Constant'
       *  Constant: '<S174>/Constant11'
       *  Constant: '<S174>/Constant12'
       *  Constant: '<S174>/Constant16'
       *  Constant: '<S174>/Constant17'
       *  Constant: '<S174>/Constant4'
       *  Constant: '<S174>/Constant41'
       *  Constant: '<S174>/Constant5'
       *  Constant: '<S174>/Constant6'
       *  Constant: '<S174>/Constant8'
       *  Constant: '<S184>/Constant'
       *  Constant: '<S185>/Constant1'
       *  Constant: '<S185>/Constant4'
       *  Constant: '<S187>/Constant4'
       *  Constant: '<S188>/Constant1'
       *  Constant: '<S189>/Constant4'
       *  Constant: '<S190>/Constant1'
       *  Constant: '<S191>/Constant4'
       *  Constant: '<S192>/Constant1'
       *  Constant: '<S401>/Constant2'
       *  Constant: '<S401>/Constant3'
       *  Constant: '<S401>/Constant4'
       *  Constant: '<S403>/Constant1'
       *  Constant: '<S404>/Constant'
       *  Constant: '<S405>/Constant1'
       *  Constant: '<S406>/Constant1'
       *  Constant: '<S407>/Constant'
       *  Constant: '<S414>/Constant'
       *  Constant: '<S434>/Constant'
       *  Constant: '<S454>/Constant'
       *  Constant: '<S487>/Constant2'
       *  Constant: '<S488>/Constant2'
       *  Constant: '<S489>/Constant2'
       *  Constant: '<S490>/Constant2'
       *  Constant: '<S491>/Constant'
       *  Constant: '<S631>/Constant1'
       *  Constant: '<S632>/Constant1'
       *  Constant: '<S633>/Constant'
       *  Constant: '<S640>/Constant'
       *  Constant: '<S660>/Constant'
       *  DataStoreRead: '<S141>/Data Store Read10'
       *  DataStoreRead: '<S172>/Data Store Read11'
       *  DataStoreRead: '<S172>/Data Store Read6'
       *  DataStoreRead: '<S172>/Data Store Read7'
       *  DataStoreRead: '<S173>/Data Store Read6'
       *  DataStoreRead: '<S174>/Data Store Read6'
       *  DataStoreRead: '<S185>/Data Store Read'
       *  DataStoreRead: '<S185>/Data Store Read1'
       *  DataStoreRead: '<S187>/Data Store Read5'
       *  DataStoreRead: '<S189>/Data Store Read5'
       *  DataStoreRead: '<S191>/Data Store Read5'
       *  DataStoreWrite: '<S274>/Data Store Write2'
       *  DataStoreWrite: '<S503>/Data Store Write2'
       *  DataStoreWrite: '<S535>/Data Store Write2'
       *  DataStoreWrite: '<S565>/Data Store Write2'
       *  DataStoreWrite: '<S595>/Data Store Write2'
       *  DataStoreWrite: '<S695>/Data Store Write2'
       *  DataStoreWrite: '<S725>/Data Store Write2'
       *  DataStoreWrite: '<S755>/Data Store Write2'
       *  Logic: '<S172>/AND'
       *  Logic: '<S172>/AND1'
       *  Logic: '<S172>/AND10'
       *  Logic: '<S172>/AND11'
       *  Logic: '<S172>/AND12'
       *  Logic: '<S172>/AND13'
       *  Logic: '<S172>/AND14'
       *  Logic: '<S172>/AND15'
       *  Logic: '<S172>/AND16'
       *  Logic: '<S172>/AND17'
       *  Logic: '<S172>/AND18'
       *  Logic: '<S172>/AND19'
       *  Logic: '<S172>/AND2'
       *  Logic: '<S172>/AND3'
       *  Logic: '<S172>/AND4'
       *  Logic: '<S172>/AND5'
       *  Logic: '<S172>/AND6'
       *  Logic: '<S172>/AND7'
       *  Logic: '<S172>/AND8'
       *  Logic: '<S172>/AND9'
       *  Logic: '<S172>/NOT1'
       *  Logic: '<S172>/NOT2'
       *  Logic: '<S172>/NOT3'
       *  Logic: '<S173>/AND1'
       *  Logic: '<S173>/AND10'
       *  Logic: '<S173>/AND18'
       *  Logic: '<S173>/AND3'
       *  Logic: '<S173>/AND4'
       *  Logic: '<S173>/AND5'
       *  Logic: '<S173>/AND6'
       *  Logic: '<S173>/AND7'
       *  Logic: '<S173>/AND8'
       *  Logic: '<S173>/AND9'
       *  Logic: '<S173>/NOT2'
       *  Logic: '<S174>/AND1'
       *  Logic: '<S174>/AND18'
       *  Logic: '<S174>/AND3'
       *  Logic: '<S174>/AND4'
       *  Logic: '<S174>/AND5'
       *  Logic: '<S174>/AND6'
       *  Logic: '<S174>/NOT2'
       *  Logic: '<S182>/AND'
       *  Logic: '<S184>/AND'
       *  Logic: '<S185>/AND'
       *  Logic: '<S185>/AND1'
       *  Logic: '<S187>/AND'
       *  Logic: '<S189>/AND'
       *  Logic: '<S191>/AND'
       *  Logic: '<S403>/NOT'
       *  Logic: '<S405>/NOT'
       *  Logic: '<S406>/NOT'
       *  Logic: '<S407>/AND'
       *  Logic: '<S631>/NOT'
       *  Logic: '<S632>/NOT'
       *  Logic: '<S633>/AND'
       *  RelationalOperator: '<S170>/Equal2'
       *  RelationalOperator: '<S172>/GreaterThan'
       *  RelationalOperator: '<S172>/GreaterThan1'
       *  RelationalOperator: '<S172>/GreaterThan10'
       *  RelationalOperator: '<S172>/GreaterThan11'
       *  RelationalOperator: '<S172>/GreaterThan12'
       *  RelationalOperator: '<S172>/GreaterThan13'
       *  RelationalOperator: '<S172>/GreaterThan14'
       *  RelationalOperator: '<S172>/GreaterThan15'
       *  RelationalOperator: '<S172>/GreaterThan16'
       *  RelationalOperator: '<S172>/GreaterThan17'
       *  RelationalOperator: '<S172>/GreaterThan18'
       *  RelationalOperator: '<S172>/GreaterThan19'
       *  RelationalOperator: '<S172>/GreaterThan2'
       *  RelationalOperator: '<S172>/GreaterThan20'
       *  RelationalOperator: '<S172>/GreaterThan21'
       *  RelationalOperator: '<S172>/GreaterThan22'
       *  RelationalOperator: '<S172>/GreaterThan23'
       *  RelationalOperator: '<S172>/GreaterThan24'
       *  RelationalOperator: '<S172>/GreaterThan25'
       *  RelationalOperator: '<S172>/GreaterThan26'
       *  RelationalOperator: '<S172>/GreaterThan27'
       *  RelationalOperator: '<S172>/GreaterThan28'
       *  RelationalOperator: '<S172>/GreaterThan29'
       *  RelationalOperator: '<S172>/GreaterThan3'
       *  RelationalOperator: '<S172>/GreaterThan30'
       *  RelationalOperator: '<S172>/GreaterThan31'
       *  RelationalOperator: '<S172>/GreaterThan32'
       *  RelationalOperator: '<S172>/GreaterThan33'
       *  RelationalOperator: '<S172>/GreaterThan4'
       *  RelationalOperator: '<S172>/GreaterThan5'
       *  RelationalOperator: '<S172>/GreaterThan6'
       *  RelationalOperator: '<S172>/GreaterThan7'
       *  RelationalOperator: '<S172>/GreaterThan8'
       *  RelationalOperator: '<S172>/GreaterThan9'
       *  RelationalOperator: '<S173>/GreaterThan10'
       *  RelationalOperator: '<S173>/GreaterThan11'
       *  RelationalOperator: '<S173>/GreaterThan12'
       *  RelationalOperator: '<S173>/GreaterThan13'
       *  RelationalOperator: '<S173>/GreaterThan14'
       *  RelationalOperator: '<S173>/GreaterThan15'
       *  RelationalOperator: '<S173>/GreaterThan16'
       *  RelationalOperator: '<S173>/GreaterThan17'
       *  RelationalOperator: '<S173>/GreaterThan18'
       *  RelationalOperator: '<S173>/GreaterThan19'
       *  RelationalOperator: '<S173>/GreaterThan2'
       *  RelationalOperator: '<S173>/GreaterThan20'
       *  RelationalOperator: '<S173>/GreaterThan21'
       *  RelationalOperator: '<S173>/GreaterThan3'
       *  RelationalOperator: '<S173>/GreaterThan6'
       *  RelationalOperator: '<S173>/GreaterThan7'
       *  RelationalOperator: '<S173>/GreaterThan8'
       *  RelationalOperator: '<S173>/GreaterThan9'
       *  RelationalOperator: '<S174>/GreaterThan10'
       *  RelationalOperator: '<S174>/GreaterThan11'
       *  RelationalOperator: '<S174>/GreaterThan12'
       *  RelationalOperator: '<S174>/GreaterThan13'
       *  RelationalOperator: '<S174>/GreaterThan2'
       *  RelationalOperator: '<S174>/GreaterThan3'
       *  RelationalOperator: '<S174>/GreaterThan6'
       *  RelationalOperator: '<S174>/GreaterThan7'
       *  RelationalOperator: '<S174>/GreaterThan8'
       *  RelationalOperator: '<S174>/GreaterThan9'
       *  RelationalOperator: '<S180>/Equal'
       *  RelationalOperator: '<S181>/Equal'
       *  RelationalOperator: '<S182>/Equal2'
       *  RelationalOperator: '<S183>/Equal2'
       *  RelationalOperator: '<S185>/Equal'
       *  RelationalOperator: '<S185>/Equal1'
       *  RelationalOperator: '<S185>/Equal2'
       *  RelationalOperator: '<S186>/Equal'
       *  RelationalOperator: '<S187>/Equal'
       *  RelationalOperator: '<S187>/Equal2'
       *  RelationalOperator: '<S189>/Equal'
       *  RelationalOperator: '<S189>/Equal2'
       *  RelationalOperator: '<S191>/Equal'
       *  RelationalOperator: '<S191>/Equal2'
       *  RelationalOperator: '<S401>/Equal'
       *  RelationalOperator: '<S401>/Equal1'
       *  RelationalOperator: '<S401>/Equal2'
       *  RelationalOperator: '<S404>/NotEqual'
       *  RelationalOperator: '<S410>/Equal16'
       *  RelationalOperator: '<S430>/Equal16'
       *  RelationalOperator: '<S450>/Equal16'
       *  RelationalOperator: '<S487>/Equal'
       *  RelationalOperator: '<S488>/Equal'
       *  RelationalOperator: '<S489>/Equal'
       *  RelationalOperator: '<S490>/Equal'
       *  RelationalOperator: '<S491>/Compare'
       *  RelationalOperator: '<S636>/Equal16'
       *  RelationalOperator: '<S656>/Equal16'
       *  Switch generated from: '<S170>/Switch1'
       */
      if (rtb_DataStoreRead_h2y) {
        /* Switch generated from: '<S170>/Switch' */
        localB->signal1 = localB->OR1_o;

        /* Switch generated from: '<S170>/Switch' */
        localB->signal2 = localB->OR4;

        /* Switch generated from: '<S170>/Switch' */
        localB->signal3 = localB->OR2_p;

        /* Switch generated from: '<S170>/Switch' */
        localB->signal4 = localB->OR3_b;
      } else if (rtb_DataStoreRead2_f3) {
        /* Switch generated from: '<S170>/Switch1' incorporates:
         *  Switch generated from: '<S170>/Switch'
         */
        localB->signal1 = localB->OR_f;

        /* Switch generated from: '<S170>/Switch1' incorporates:
         *  Switch generated from: '<S170>/Switch'
         */
        localB->signal2 = localB->OR1_e;

        /* Switch generated from: '<S170>/Switch1' incorporates:
         *  Switch generated from: '<S170>/Switch'
         */
        localB->signal3 = localB->OR2_m;

        /* Switch generated from: '<S170>/Switch1' incorporates:
         *  Switch generated from: '<S170>/Switch'
         */
        localB->signal4 = localB->OR3_e;
      } else {
        /* Switch generated from: '<S170>/Switch' incorporates:
         *  Switch generated from: '<S170>/Switch1'
         */
        localB->signal1 = localB->OR;

        /* Switch generated from: '<S170>/Switch' incorporates:
         *  Switch generated from: '<S170>/Switch1'
         */
        localB->signal2 = localB->OR1;

        /* Switch generated from: '<S170>/Switch' incorporates:
         *  Switch generated from: '<S170>/Switch1'
         */
        localB->signal3 = localB->OR2;

        /* Switch generated from: '<S170>/Switch' incorporates:
         *  Switch generated from: '<S170>/Switch1'
         */
        localB->signal4 = localB->OR3;
      }

      /* End of Switch generated from: '<S170>/Switch' */

      /* DataStoreRead: '<S171>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S171>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S171>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S171>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S171>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S171>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S171>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;

      /* DataStoreRead: '<S171>/Data Store Read3' */
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;

      /* DataStoreRead: '<S171>/Data Store Read3' */
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S171>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S171>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S171>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S171>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S171>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S171>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S175>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG;
    } else if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S184>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S184>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S188>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S188>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S190>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S190>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S192>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S192>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S176>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S176>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S176>/Transmission subtasks' */

          /* Disable for Outport: '<S176>/Send CAN1' incorporates:
           *  RelationalOperator: '<S196>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S176>/Receive CAN1' incorporates:
           *  Logic: '<S193>/AND'
           */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S176>/Send CAN2' incorporates:
           *  RelationalOperator: '<S197>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S176>/Receive CAN2' incorporates:
           *  Logic: '<S193>/AND1'
           */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S177>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S177>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S177>/Transmission subtasks' */

          /* Disable for Outport: '<S177>/Send CAN1' incorporates:
           *  RelationalOperator: '<S214>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Logic: '<S211>/AND' incorporates:
           *  Outport: '<S177>/Receive CAN1'
           */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S177>/Send CAN2' incorporates:
           *  RelationalOperator: '<S215>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Logic: '<S211>/AND1' incorporates:
           *  Outport: '<S177>/Receive CAN2'
           */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S178>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S178>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S178>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S232>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN1'
           */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Logic: '<S229>/AND' incorporates:
           *  Outport: '<S178>/Receive CAN1'
           */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for RelationalOperator: '<S233>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN2'
           */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Logic: '<S229>/AND1' incorporates:
           *  Outport: '<S178>/Receive CAN2'
           */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S179>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S179>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S179>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S250>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN1'
           */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Logic: '<S247>/AND' incorporates:
           *  Outport: '<S179>/Receive CAN1'
           */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for RelationalOperator: '<S251>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN2'
           */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Logic: '<S247>/AND1' incorporates:
           *  Outport: '<S179>/Receive CAN2'
           */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote3' */

        /* Disable for Logic: '<S172>/OR1' incorporates:
         *  Outport: '<S172>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S172>/OR4' incorporates:
         *  Outport: '<S172>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S172>/OR2' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S172>/OR3' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S403>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S403>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          /* Disable for Enabled SubSystem: '<S404>/Subsystem' */
          if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S404>/Subsystem' */
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_M_h) {
          /* Disable for Enabled SubSystem: '<S405>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S405>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_M_h = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S406>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S406>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S407>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S407>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S397>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S397>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S397>/Transmission subtasks' */

          /* Disable for Outport: '<S397>/Send CAN1' incorporates:
           *  RelationalOperator: '<S412>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN1' incorporates:
           *  Logic: '<S409>/AND'
           */
          localB->Receptionsubstasks_ij.AND = false;

          /* Disable for Outport: '<S397>/Send CAN2' incorporates:
           *  RelationalOperator: '<S413>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN2' incorporates:
           *  Logic: '<S409>/AND1'
           */
          localB->Receptionsubstasks_ij.AND1 = false;
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S398>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S398>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S398>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S398>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND' incorporates:
           *  Outport: '<S398>/Receive CAN1'
           */
          localB->Receptionsubstasks_g1.AND = false;

          /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND1' incorporates:
           *  Outport: '<S398>/Receive CAN2'
           */
          localB->Receptionsubstasks_g1.AND1 = false;
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S399>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S399>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S399>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S399>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

          /* Disable for Logic: '<S449>/AND' incorporates:
           *  Outport: '<S399>/Receive CAN1'
           */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_n.Equal7 = false;

          /* Disable for Logic: '<S449>/AND1' incorporates:
           *  Outport: '<S399>/Receive CAN2'
           */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S173>/OR' incorporates:
         *  Outport: '<S173>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S173>/OR1' incorporates:
         *  Outport: '<S173>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S173>/OR2' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S173>/OR3' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S631>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S631>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S632>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S632>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S633>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S633>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S627>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S627>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S627>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S627>/Transmission subtasks' */

          /* Disable for Outport: '<S627>/Send CAN1' incorporates:
           *  RelationalOperator: '<S638>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

          /* Disable for Logic: '<S635>/AND' incorporates:
           *  Outport: '<S627>/Receive CAN1'
           */
          localB->Receptionsubstasks_c.AND = false;

          /* Disable for Outport: '<S627>/Send CAN2' incorporates:
           *  RelationalOperator: '<S639>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_im.Equal7 = false;

          /* Disable for Logic: '<S635>/AND1' incorporates:
           *  Outport: '<S627>/Receive CAN2'
           */
          localB->Receptionsubstasks_c.AND1 = false;
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S628>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S628>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S628>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

          /* Disable for Logic: '<S655>/AND' incorporates:
           *  Outport: '<S628>/Receive CAN1'
           */
          localB->Receptionsubstasks_o.AND = false;

          /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_k.Equal7 = false;

          /* Disable for Logic: '<S655>/AND1' incorporates:
           *  Outport: '<S628>/Receive CAN2'
           */
          localB->Receptionsubstasks_o.AND1 = false;
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S174>/OR' incorporates:
         *  Outport: '<S174>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S174>/OR1' incorporates:
         *  Outport: '<S174>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S174>/OR2' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S174>/OR3' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 2' */

      /* Disable for Switch generated from: '<S170>/Switch' incorporates:
       *  Outport: '<S170>/Send_CAN1'
       */
      localB->signal1 = false;

      /* Disable for Switch generated from: '<S170>/Switch' incorporates:
       *  Outport: '<S170>/Send_CAN2'
       */
      localB->signal2 = false;

      /* Disable for Switch generated from: '<S170>/Switch' incorporates:
       *  Outport: '<S170>/Receive_CAN1'
       */
      localB->signal3 = false;

      /* Disable for Switch generated from: '<S170>/Switch' incorporates:
       *  Outport: '<S170>/Receive_CAN2'
       */
      localB->signal4 = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S141>/Controller Matrix Cycle' */
  } else if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S141>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S184>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S274>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S184>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S188>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S188>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S190>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S190>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S192>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S192>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S176>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S176>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S176>/Transmission subtasks' */

          /* Disable for Outport: '<S176>/Send CAN1' incorporates:
           *  RelationalOperator: '<S196>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S176>/Receive CAN1' incorporates:
           *  Logic: '<S193>/AND'
           */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S176>/Send CAN2' incorporates:
           *  RelationalOperator: '<S197>/Equal7'
           */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S176>/Receive CAN2' incorporates:
           *  Logic: '<S193>/AND1'
           */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S177>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S177>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S177>/Transmission subtasks' */

          /* Disable for Outport: '<S177>/Send CAN1' incorporates:
           *  RelationalOperator: '<S214>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Logic: '<S211>/AND' incorporates:
           *  Outport: '<S177>/Receive CAN1'
           */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S177>/Send CAN2' incorporates:
           *  RelationalOperator: '<S215>/Equal7'
           */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Logic: '<S211>/AND1' incorporates:
           *  Outport: '<S177>/Receive CAN2'
           */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S178>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S178>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S178>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S232>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN1'
           */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Logic: '<S229>/AND' incorporates:
           *  Outport: '<S178>/Receive CAN1'
           */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for RelationalOperator: '<S233>/Equal7' incorporates:
           *  Outport: '<S178>/Send CAN2'
           */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Logic: '<S229>/AND1' incorporates:
           *  Outport: '<S178>/Receive CAN2'
           */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S172>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S179>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S179>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S179>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S250>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN1'
           */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Logic: '<S247>/AND' incorporates:
           *  Outport: '<S179>/Receive CAN1'
           */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for RelationalOperator: '<S251>/Equal7' incorporates:
           *  Outport: '<S179>/Send CAN2'
           */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Logic: '<S247>/AND1' incorporates:
           *  Outport: '<S179>/Receive CAN2'
           */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S172>/COMM Task - Vote3' */

        /* Disable for Logic: '<S172>/OR1' incorporates:
         *  Outport: '<S172>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S172>/OR4' incorporates:
         *  Outport: '<S172>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S172>/OR2' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S172>/OR3' incorporates:
         *  Outport: '<S172>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S403>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S503>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S403>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          /* Disable for Enabled SubSystem: '<S404>/Subsystem' */
          if (localDW->Subsystem_MODE) {
            localDW->Subsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S404>/Subsystem' */
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_M_h) {
          /* Disable for Enabled SubSystem: '<S405>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S535>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S405>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_M_h = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S406>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S565>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S406>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S173>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S407>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S595>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S407>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S397>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S397>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_e,
                 &localDW->CheckmsgtransmissionCAN1_e);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S410>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S410>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S410>/Send CAN1' incorporates:
             *  RelationalOperator: '<S412>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

            /* Disable for Outport: '<S410>/Send CAN2' incorporates:
             *  RelationalOperator: '<S413>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S397>/Transmission subtasks' */

          /* Disable for Outport: '<S397>/Send CAN1' incorporates:
           *  RelationalOperator: '<S412>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN1' incorporates:
           *  Logic: '<S409>/AND'
           */
          localB->Receptionsubstasks_ij.AND = false;

          /* Disable for Outport: '<S397>/Send CAN2' incorporates:
           *  RelationalOperator: '<S413>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S397>/Receive CAN2' incorporates:
           *  Logic: '<S409>/AND1'
           */
          localB->Receptionsubstasks_ij.AND1 = false;
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S398>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S398>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S398>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S430>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S430>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
             *  Outport: '<S430>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_m.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S398>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S432>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND' incorporates:
           *  Outport: '<S398>/Receive CAN1'
           */
          localB->Receptionsubstasks_g1.AND = false;

          /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
           *  Outport: '<S398>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_m.Equal7 = false;

          /* Disable for Logic: '<S429>/AND1' incorporates:
           *  Outport: '<S398>/Receive CAN2'
           */
          localB->Receptionsubstasks_g1.AND1 = false;
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S399>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S399>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S399>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S450>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S450>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

            /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
             *  Outport: '<S450>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_n.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S399>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S452>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_k.Equal7 = false;

          /* Disable for Logic: '<S449>/AND' incorporates:
           *  Outport: '<S399>/Receive CAN1'
           */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for RelationalOperator: '<S453>/Equal7' incorporates:
           *  Outport: '<S399>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_n.Equal7 = false;

          /* Disable for Logic: '<S449>/AND1' incorporates:
           *  Outport: '<S399>/Receive CAN2'
           */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S173>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S173>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S173>/OR' incorporates:
         *  Outport: '<S173>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S173>/OR1' incorporates:
         *  Outport: '<S173>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S173>/OR2' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S173>/OR3' incorporates:
         *  Outport: '<S173>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S170>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S631>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S695>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S631>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S632>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S725>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S632>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S174>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S633>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S755>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S633>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S627>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S627>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S627>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g0.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_g0,
                 &localDW->CheckmsgtransmissionCAN1_g0);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S636>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_im.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_im,
                 &localDW->CheckmsgtransmissionCAN2_im);
            }

            /* End of Disable for SubSystem: '<S636>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S636>/Send CAN1' incorporates:
             *  RelationalOperator: '<S638>/Equal7'
             */
            localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

            /* Disable for Outport: '<S636>/Send CAN2' incorporates:
             *  RelationalOperator: '<S639>/Equal7'
             */
            localB->CheckmsgtransmissionCAN2_im.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S627>/Transmission subtasks' */

          /* Disable for Outport: '<S627>/Send CAN1' incorporates:
           *  RelationalOperator: '<S638>/Equal7'
           */
          localB->CheckmsgtransmissionCAN1_g0.Equal7 = false;

          /* Disable for Logic: '<S635>/AND' incorporates:
           *  Outport: '<S627>/Receive CAN1'
           */
          localB->Receptionsubstasks_c.AND = false;

          /* Disable for Outport: '<S627>/Send CAN2' incorporates:
           *  RelationalOperator: '<S639>/Equal7'
           */
          localB->CheckmsgtransmissionCAN2_im.Equal7 = false;

          /* Disable for Logic: '<S635>/AND1' incorporates:
           *  Outport: '<S627>/Receive CAN2'
           */
          localB->Receptionsubstasks_c.AND1 = false;
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S628>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S628>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S628>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_m_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S656>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_n_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S656>/Check msg transmission CAN2' */

            /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN1'
             */
            localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

            /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
             *  Outport: '<S656>/Send CAN2'
             */
            localB->CheckmsgtransmissionCAN2_k.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/Transmission subtasks' */

          /* Disable for RelationalOperator: '<S658>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN1'
           */
          localB->CheckmsgtransmissionCAN1_h.Equal7 = false;

          /* Disable for Logic: '<S655>/AND' incorporates:
           *  Outport: '<S628>/Receive CAN1'
           */
          localB->Receptionsubstasks_o.AND = false;

          /* Disable for RelationalOperator: '<S659>/Equal7' incorporates:
           *  Outport: '<S628>/Send CAN2'
           */
          localB->CheckmsgtransmissionCAN2_k.Equal7 = false;

          /* Disable for Logic: '<S655>/AND1' incorporates:
           *  Outport: '<S628>/Receive CAN2'
           */
          localB->Receptionsubstasks_o.AND1 = false;
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S174>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S174>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S174>/OR' incorporates:
         *  Outport: '<S174>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S174>/OR1' incorporates:
         *  Outport: '<S174>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S174>/OR2' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S174>/OR3' incorporates:
         *  Outport: '<S174>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S170>/controller basic cycle 2' */
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S141>/Controller Matrix Cycle' */

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Send_Message_CAN1'
     */
    localB->signal1 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Send_Message_CAN2'
     */
    localB->signal2 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Receive_Message_CAN1'
     */
    localB->signal3 = false;

    /* Disable for Switch generated from: '<S170>/Switch' incorporates:
     *  Outport: '<S141>/Receive_Message_CAN2'
     */
    localB->signal4 = false;
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Logic: '<S27>/NOT1' */
  /* End of Outputs for SubSystem: '<S27>/Matrix Cycle Manager' */

  /* Logic: '<S27>/OR' incorporates:
   *  DataStoreRead: '<S27>/Data Store Read1'
   */
  rtb_DataStoreRead_h2y = (localB->signal3 || localDW->Initialization_flag);

  /* Chart: '<S27>/Chart' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  if (localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    /* Transition: '<S125>:10' */
    /* Entry 'Send_Trigger': '<S125>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S8>/CAN1 Send' */
      /* Event: '<S125>:3' */
      CAN1Send(rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13,
               rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1, &localB->CAN1Send_o,
               &localDW->CAN1Send_o);

      /* End of Outputs for SubSystem: '<S8>/CAN1 Send' */
    }

    /* During 'Send_Trigger': '<S125>:9' */
  } else if (localB->signal1) {
    /* Outputs for Function Call SubSystem: '<S8>/CAN1 Send' */
    /* Event: '<S125>:3' */
    CAN1Send(rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13,
             rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1, &localB->CAN1Send_o,
             &localDW->CAN1Send_o);

    /* End of Outputs for SubSystem: '<S8>/CAN1 Send' */
  }

  /* End of Chart: '<S27>/Chart' */

  /* Chart: '<S27>/Chart1' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  if (localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    /* Transition: '<S126>:10' */
    /* Entry 'Send_Trigger': '<S126>:9' */
    if (rtb_DataStoreRead_h2y) {
      /* Outputs for Function Call SubSystem: '<S8>/CAN1 Recieve' */
      /* Event: '<S126>:3' */
      CAN1Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12, &localB->CAN1Recieve_h,
                  &localC->CAN1Recieve_h, &localDW->CAN1Recieve_h);

      /* End of Outputs for SubSystem: '<S8>/CAN1 Recieve' */
    }

    /* During 'Send_Trigger': '<S126>:9' */
  } else if (rtb_DataStoreRead_h2y) {
    /* Outputs for Function Call SubSystem: '<S8>/CAN1 Recieve' */
    /* Event: '<S126>:3' */
    CAN1Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12, &localB->CAN1Recieve_h,
                &localC->CAN1Recieve_h, &localDW->CAN1Recieve_h);

    /* End of Outputs for SubSystem: '<S8>/CAN1 Recieve' */
  }

  /* End of Chart: '<S27>/Chart1' */

  /* Logic: '<S27>/OR1' incorporates:
   *  DataStoreRead: '<S27>/Data Store Read1'
   */
  rtb_DataStoreRead_h2y = (localDW->Initialization_flag || localB->signal4);

  /* Chart: '<S27>/Chart2' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  if (localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    /* Transition: '<S127>:10' */
    /* Entry 'Send_Trigger': '<S127>:9' */
    if (rtb_DataStoreRead_h2y) {
      /* Outputs for Function Call SubSystem: '<S8>/CAN2 Recieve' */
      /* Event: '<S127>:3' */
      CAN2Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8, &localB->CAN2Recieve_b,
                  &localC->CAN2Recieve_b, &localDW->CAN2Recieve_b);

      /* End of Outputs for SubSystem: '<S8>/CAN2 Recieve' */
    }

    /* During 'Send_Trigger': '<S127>:9' */
  } else if (rtb_DataStoreRead_h2y) {
    /* Outputs for Function Call SubSystem: '<S8>/CAN2 Recieve' */
    /* Event: '<S127>:3' */
    CAN2Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8, &localB->CAN2Recieve_b,
                &localC->CAN2Recieve_b, &localDW->CAN2Recieve_b);

    /* End of Outputs for SubSystem: '<S8>/CAN2 Recieve' */
  }

  /* End of Chart: '<S27>/Chart2' */

  /* Chart: '<S27>/Chart3' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  if (localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    /* Transition: '<S128>:10' */
    /* Entry 'Send_Trigger': '<S128>:9' */
    if (localB->signal2) {
      /* Outputs for Function Call SubSystem: '<S8>/CAN2 Send' */
      /* Event: '<S128>:3' */
      CAN2Send(rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9,
               rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2, &localB->CAN2Send_h,
               &localDW->CAN2Send_h);

      /* End of Outputs for SubSystem: '<S8>/CAN2 Send' */
    }

    /* During 'Send_Trigger': '<S128>:9' */
  } else if (localB->signal2) {
    /* Outputs for Function Call SubSystem: '<S8>/CAN2 Send' */
    /* Event: '<S128>:3' */
    CAN2Send(rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9,
             rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2, &localB->CAN2Send_h,
             &localDW->CAN2Send_h);

    /* End of Outputs for SubSystem: '<S8>/CAN2 Send' */
  }

  /* End of Chart: '<S27>/Chart3' */

  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A0' incorporates:
   *  EnablePort: '<S130>/Enable'
   */
  /* Logic: '<S27>/AND' incorporates:
   *  Constant: '<S27>/Constant1'
   */
  if ((*rtd_Toggle_Pin_A0) && (1.0 != 0.0)) {
    localDW->DEBUGToggledigitalpinA0_MODE = true;

    /* Switch: '<S130>/Switch' incorporates:
     *  DataStoreRead: '<S130>/Data Store Read'
     */
    if (localDW->A0_Pin_State) {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant1'
       */
      localDW->A0_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant'
       */
      localDW->A0_Pin_State = true;
    }

    /* End of Switch: '<S130>/Switch' */

    /* DataStoreWrite: '<S130>/Data Store Write' incorporates:
     *  Constant: '<S130>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = false;

    /* DataStoreRead: '<S130>/Data Store Read1' */
    localB->DataStoreRead1_o1 = localDW->A0_Pin_State;

    /* Update for M-S-Function: '<S142>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o1 == 0) {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Logic: '<S27>/AND' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin A0' */

  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A1' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* Logic: '<S27>/AND1' incorporates:
   *  Constant: '<S27>/Constant4'
   *  DataStoreRead: '<S27>/Data Store Read3'
   */
  if (localDW->Toggle_Pin_A1 && (1.0 != 0.0)) {
    localDW->DEBUGToggledigitalpinA1_MODE = true;

    /* Switch: '<S131>/Switch' incorporates:
     *  DataStoreRead: '<S131>/Data Store Read'
     */
    if (localDW->A1_Pin_State) {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant1'
       */
      localDW->A1_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant'
       */
      localDW->A1_Pin_State = true;
    }

    /* End of Switch: '<S131>/Switch' */

    /* DataStoreWrite: '<S131>/Data Store Write' incorporates:
     *  Constant: '<S131>/Constant2'
     */
    localDW->Toggle_Pin_A1 = false;

    /* DataStoreRead: '<S131>/Data Store Read1' */
    localB->DataStoreRead1_e = localDW->A1_Pin_State;

    /* Update for M-S-Function: '<S143>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_e == 0) {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Logic: '<S27>/AND1' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin A1' */

  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin D10' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  /* Logic: '<S27>/AND6' incorporates:
   *  Constant: '<S27>/Constant9'
   *  DataStoreRead: '<S27>/Data Store Read14'
   */
  if (localDW->Toggle_Pin_D10 && (1.0 != 0.0)) {
    localDW->DEBUGToggledigitalpinD10_MODE = true;

    /* Switch: '<S134>/Switch' incorporates:
     *  DataStoreRead: '<S134>/Data Store Read'
     */
    if (localDW->D10_Pin_State) {
      /* DataStoreWrite: '<S134>/Data Store Write1' incorporates:
       *  Constant: '<S134>/Constant1'
       */
      localDW->D10_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S134>/Data Store Write1' incorporates:
       *  Constant: '<S134>/Constant'
       */
      localDW->D10_Pin_State = true;
    }

    /* End of Switch: '<S134>/Switch' */

    /* DataStoreWrite: '<S134>/Data Store Write' incorporates:
     *  Constant: '<S134>/Constant2'
     */
    localDW->Toggle_Pin_D10 = false;

    /* DataStoreRead: '<S134>/Data Store Read1' */
    localB->DataStoreRead1_h = localDW->D10_Pin_State;

    /* Update for M-S-Function: '<S146>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_h == 0) {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Logic: '<S27>/AND6' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin D10' */

  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A4' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  /* Constant: '<S27>/Constant7' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA4_MODE = true;

    /* Switch: '<S133>/Switch' incorporates:
     *  DataStoreRead: '<S133>/Data Store Read'
     */
    if (localDW->A4_Pin_State) {
      /* DataStoreWrite: '<S133>/Data Store Write1' incorporates:
       *  Constant: '<S133>/Constant1'
       */
      localDW->A4_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S133>/Data Store Write1' incorporates:
       *  Constant: '<S133>/Constant'
       */
      localDW->A4_Pin_State = true;
    }

    /* End of Switch: '<S133>/Switch' */
    /* DataStoreRead: '<S133>/Data Store Read1' */
    localB->DataStoreRead1_m = localDW->A4_Pin_State;

    /* Update for M-S-Function: '<S145>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_m == 0) {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Constant: '<S27>/Constant7' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin A4' */

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  /* Logic: '<S27>/AND3' incorporates:
   *  Constant: '<S27>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D12 != 0.0)) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = true;

    /* Switch: '<S137>/Switch' incorporates:
     *  DataStoreRead: '<S137>/Data Store Read'
     */
    if (localDW->D12_Pin_State) {
      /* DataStoreWrite: '<S137>/Data Store Write1' incorporates:
       *  Constant: '<S137>/Constant1'
       */
      localDW->D12_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S137>/Data Store Write1' incorporates:
       *  Constant: '<S137>/Constant'
       */
      localDW->D12_Pin_State = true;
    }

    /* End of Switch: '<S137>/Switch' */
    /* DataStoreRead: '<S137>/Data Store Read1' */
    localB->DataStoreRead1_c = localDW->D12_Pin_State;

    /* DataStoreWrite: '<S137>/Data Store Write2' incorporates:
     *  Constant: '<S137>/Constant2'
     */
    *rtd_Toggle_Pin_D12 = 0.0;

    /* Update for M-S-Function: '<S166>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_c == 0) {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Logic: '<S27>/AND3' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  /* Logic: '<S27>/AND2' incorporates:
   *  Constant: '<S27>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D13 != 0.0)) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = true;

    /* Switch: '<S138>/Switch' incorporates:
     *  DataStoreRead: '<S138>/Data Store Read'
     */
    if (localDW->D13_Pin_State) {
      /* DataStoreWrite: '<S138>/Data Store Write1' incorporates:
       *  Constant: '<S138>/Constant1'
       */
      localDW->D13_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S138>/Data Store Write1' incorporates:
       *  Constant: '<S138>/Constant'
       */
      localDW->D13_Pin_State = true;
    }

    /* End of Switch: '<S138>/Switch' */
    /* DataStoreRead: '<S138>/Data Store Read1' */
    localB->DataStoreRead1_a = localDW->D13_Pin_State;

    /* DataStoreWrite: '<S138>/Data Store Write2' incorporates:
     *  Constant: '<S138>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 0.0;

    /* Update for M-S-Function: '<S167>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_a == 0) {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Logic: '<S27>/AND2' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  /* Logic: '<S27>/AND5' incorporates:
   *  Constant: '<S27>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D8 != 0.0)) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = true;

    /* Switch: '<S139>/Switch' incorporates:
     *  DataStoreRead: '<S139>/Data Store Read'
     */
    if (localDW->D8_Pin_State) {
      /* DataStoreWrite: '<S139>/Data Store Write1' incorporates:
       *  Constant: '<S139>/Constant1'
       */
      localDW->D8_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S139>/Data Store Write1' incorporates:
       *  Constant: '<S139>/Constant'
       */
      localDW->D8_Pin_State = true;
    }

    /* End of Switch: '<S139>/Switch' */
    /* DataStoreRead: '<S139>/Data Store Read1' */
    localB->DataStoreRead1_d = localDW->D8_Pin_State;

    /* DataStoreWrite: '<S139>/Data Store Write2' incorporates:
     *  Constant: '<S139>/Constant2'
     */
    *rtd_Toggle_Pin_D8 = 0.0;

    /* Update for M-S-Function: '<S168>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_d == 0) {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Logic: '<S27>/AND5' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' incorporates:
   *  EnablePort: '<S140>/Enable'
   */
  /* Logic: '<S27>/AND4' incorporates:
   *  Constant: '<S27>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D9 != 0.0)) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = true;

    /* Switch: '<S140>/Switch' incorporates:
     *  DataStoreRead: '<S140>/Data Store Read'
     */
    if (localDW->D9_Pin_State) {
      /* DataStoreWrite: '<S140>/Data Store Write1' incorporates:
       *  Constant: '<S140>/Constant1'
       */
      localDW->D9_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S140>/Data Store Write1' incorporates:
       *  Constant: '<S140>/Constant'
       */
      localDW->D9_Pin_State = true;
    }

    /* End of Switch: '<S140>/Switch' */
    /* DataStoreRead: '<S140>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->D9_Pin_State;

    /* DataStoreWrite: '<S140>/Data Store Write2' incorporates:
     *  Constant: '<S140>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 0.0;

    /* Update for M-S-Function: '<S169>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Logic: '<S27>/AND4' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Outputs for Enabled SubSystem: '<S27>/LT_Update Desync_Positive' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  /* DataStoreRead: '<S27>/Data Store Read6' */
  if (localDW->Desync_Positive) {
    /* RelationalOperator: '<S136>/Equal1' incorporates:
     *  Constant: '<S136>/Constant9'
     *  DataStoreRead: '<S27>/Data Store Read7'
     */
    rtb_DataStoreRead_h2y = (localDW->basic_cycle_count == 1.0);

    /* Switch generated from: '<S136>/Switch' incorporates:
     *  Constant: '<S136>/Constant'
     *  Constant: '<S136>/Constant1'
     *  Constant: '<S136>/Constant8'
     *  DataStoreRead: '<S27>/Data Store Read7'
     *  RelationalOperator: '<S136>/Equal'
     *  Switch generated from: '<S136>/Switch1'
     */
    if (localDW->basic_cycle_count == 0.0) {
      localDW->Switch_1_DIMS1 = 20;
      localDW->Switch_2_DIMS1 = 20;
      memcpy(&rtb_signal1[0], rtConstP.Constant_Value_f, 20U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant1_Value, 20U * sizeof(real_T));
    } else {
      if (rtb_DataStoreRead_h2y) {
        /* Switch generated from: '<S136>/Switch1' incorporates:
         *  Constant: '<S136>/Constant4'
         */
        localDW->Switch1_1_DIMS1 = 14;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant4_Value, 14U * sizeof(real_T));
      } else {
        /* Switch generated from: '<S136>/Switch1' incorporates:
         *  Constant: '<S136>/Constant10'
         */
        localDW->Switch1_1_DIMS1 = 10;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant10_Value, 10U * sizeof
               (real_T));
      }

      localDW->Switch_1_DIMS1 = localDW->Switch1_1_DIMS1;
      for (i = 0; i < localDW->Switch1_1_DIMS1; i++) {
        rtb_signal1[i] = rtb_signal1_h4[i];
      }

      /* Switch generated from: '<S136>/Switch1' incorporates:
       *  Constant: '<S136>/Constant11'
       *  Constant: '<S136>/Constant5'
       *  Switch generated from: '<S136>/Switch'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->Switch1_2_DIMS1 = 14;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant5_Value, 14U * sizeof(real_T));
      } else {
        localDW->Switch1_2_DIMS1 = 10;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant11_Value, 10U * sizeof
               (real_T));
      }

      localDW->Switch_2_DIMS1 = localDW->Switch1_2_DIMS1;
      for (i = 0; i < localDW->Switch1_2_DIMS1; i++) {
        rtb_signal2[i] = rtb_signal1_h4[i];
      }
    }

    /* End of Switch generated from: '<S136>/Switch' */

    /* MATLAB Function: '<S136>/MATLAB Function' incorporates:
     *  Constant: '<S136>/Constant2'
     *  Constant: '<S136>/Constant3'
     *  Constant: '<S136>/Constant6'
     *  Constant: '<S136>/Constant7'
     *  Switch generated from: '<S136>/Switch'
     */
    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/MATLAB Function': '<S165>:1' */
    /* '<S165>:1:13' */
    rtb_DataStoreRead4_dd = 1.0;
    do {
      exitg1 = 0;
      rtb_DataStoreRead14 = rtb_signal1[(int32_T)rtb_DataStoreRead4_dd - 1];
      if (*rtd_Local_Ticks > rtb_DataStoreRead14) {
        /* '<S165>:1:16' */
        /* '<S165>:1:17' */
        rtb_DataStoreRead4_dd++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (rtb_signal2[(int32_T)(rtb_DataStoreRead4_dd - 1.0) - 1] != 0.0) {
      /* '<S165>:1:22' */
      rtb_DataStoreRead14 = rt_roundd(rtb_DataStoreRead14 - (real_T)
        *rtd_Local_Ticks);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }

        if (rtb_DataStoreRead14 >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_DataStoreRead14;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      qY_0 = u1 - 1U;
      if (rtb_DataStoreRead8_c - 1U > u1) {
        qY_0 = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY_0;
    } else {
      /* '<S165>:1:26' */
      rtb_DataStoreRead14 = rt_roundd((real_T)*rtd_Local_Ticks - rtb_signal1
        [(int32_T)(rtb_DataStoreRead4_dd - 1.0) - 1]);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_DataStoreRead14;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      /* '<S165>:1:28' */
      /* '<S165>:1:31' */
      /* '<S165>:1:34' */
      /* '<S165>:1:39' */
      rtb_DataStoreRead14 = rt_roundd((real_T)rtb_DataStoreRead8_c -
        COMM_Phase_init1);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)u1 / COMM_Phase1);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u1 + 1U > 65535U) {
        qY_0 = 65535U;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)qY_0 * COMM_Phase1);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)u1 + COMM_Phase_init1);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u0 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u0 = 0U;
        }
      } else {
        u0 = MAX_uint16_T;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)rtb_DataStoreRead8_c -
        COMM_Phase_init2);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)u1 / COMM_Phase2);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u1 + 1U > 65535U) {
        qY_0 = 65535U;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)qY_0 * COMM_Phase2);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_DataStoreRead14 = rt_roundd((real_T)u1 + COMM_Phase_init2);
      if (rtb_DataStoreRead14 < 65536.0) {
        if (rtb_DataStoreRead14 >= 0.0) {
          u1 = (uint16_T)rtb_DataStoreRead14;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u0 <= u1) {
        u1 = u0;
      }

      qY_0 = (uint32_T)u1 - rtb_DataStoreRead8_c;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      qY = qY_0 - 2U;
      if (qY_0 - 2U > qY_0) {
        qY = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY;
    }

    /* End of MATLAB Function: '<S136>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S136>/Local Time Update with Positive Desync' */
    /* Switch: '<S164>/Switch' incorporates:
     *  DataStoreRead: '<S164>/Data Store Read2'
     *  RelationalOperator: '<S164>/GreaterThan'
     */
    if (rtb_DataStoreRead8_c <= localDW->Desync_Ticks) {
      rtb_DataStoreRead4_dd = rtb_DataStoreRead8_c;
    } else {
      rtb_DataStoreRead4_dd = localDW->Desync_Ticks;
    }

    /* End of Switch: '<S164>/Switch' */

    /* Sum: '<S164>/Minus' */
    rtb_DataStoreRead14 = (real_T)*rtd_Local_Ticks + rtb_DataStoreRead4_dd;

    /* Sum: '<S164>/Minus1' incorporates:
     *  DataStoreRead: '<S164>/Data Store Read2'
     */
    rtb_DataStoreRead4_dd -= localDW->Desync_Ticks;

    /* Logic: '<S164>/NOT' incorporates:
     *  Constant: '<S164>/Constant'
     *  DataStoreWrite: '<S164>/Data Store Write'
     *  RelationalOperator: '<S164>/Equal'
     */
    localDW->Desync_Positive = (rtb_DataStoreRead4_dd > 0.0);

    /* DataStoreWrite: '<S164>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S164>/Cast'
     */
    *rtd_Local_Ticks = (uint16_T)rtb_DataStoreRead14;

    /* DataStoreWrite: '<S164>/Data Store Write2' */
    localDW->Desync_Ticks = rtb_DataStoreRead4_dd;

    /* End of Outputs for SubSystem: '<S136>/Local Time Update with Positive Desync' */
  }

  /* End of DataStoreRead: '<S27>/Data Store Read6' */
  /* End of Outputs for SubSystem: '<S27>/LT_Update Desync_Positive' */

  /* Chart: '<S27>/Chart4' incorporates:
   *  Constant: '<S27>/Constant3'
   */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  if (localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    /* Transition: '<S129>:10' */
    /* Entry 'Send_Trigger': '<S129>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S8>/Measure EXecution time' */
      /* Event: '<S129>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S8>/Measure EXecution time' */
    }

    /* During 'Send_Trigger': '<S129>:9' */
  } else if (1.0 != 0.0) {
    /* Outputs for Function Call SubSystem: '<S8>/Measure EXecution time' */
    /* Event: '<S129>:3' */
    MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                         &localDW->MeasureEXecutiontime_d);

    /* End of Outputs for SubSystem: '<S8>/Measure EXecution time' */
  }

  /* End of Chart: '<S27>/Chart4' */
}

/* Model step function */
void HANcoder_E407_TTA_Template_DS_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction_g;
  boolean_T rtb_Level2MfileSFunction_l;
  real_T rtb_Multiply;
  real_T rtb_Multiply1;
  real_T rtb_Multiply2;
  int32_T rowIdx;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T rtb_SampleTimeCrowBar;

  /* DigitalClock: '<S8>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* Outputs for Enabled SubSystem: '<S8>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  /* Logic: '<S8>/NOT' incorporates:
   *  DataStoreRead: '<S8>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S23>/Data Store Write' incorporates:
     *  Constant: '<S23>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S118>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S23>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S8>/NOT' */
  /* End of Outputs for SubSystem: '<S8>/Initialize Clock Schedule' */

  /* If: '<S8>/If' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read1'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* M-S-Function: '<S114>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S22>/Multiply' incorporates:
     *  Constant: '<S22>/Constant'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_l ? 1.0 : 0.0;

    /* M-S-Function: '<S115>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S22>/Multiply1' incorporates:
     *  Constant: '<S22>/Constant1'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_l ? 2.0 : 0.0;

    /* M-S-Function: '<S116>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN5);

    /* Product: '<S22>/Multiply2' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    rtb_Multiply2 = rtb_Level2MfileSFunction_l ? 4.0 : 0.0;

    /* M-S-Function: '<S117>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN6);

    /* Sum: '<S22>/Add' incorporates:
     *  Constant: '<S22>/Constant3'
     *  Product: '<S22>/Multiply3'
     */
    Board_ID_s = ((rtb_Multiply + rtb_Multiply1) + rtb_Multiply2) +
      (rtb_Level2MfileSFunction_l ? 8.0 : 0.0);

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
  }

  /* End of If: '<S8>/If' */

  /* DataStoreWrite: '<S8>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;

  /* M-S-Function: '<S10>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_g = DiginGet(DIGIN_PORTA_PIN0);

  /* Outputs for Triggered SubSystem: '<S12>/J-K Flip-Flop' incorporates:
   *  TriggerPort: '<S13>/Trigger'
   */
  if ((!rtb_Level2MfileSFunction_g) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* CombinatorialLogic: '<S13>/Logic' incorporates:
     *  Memory generated from: '<S12>/J-K Flip-Flop'
     *  Memory: '<S13>/Memory'
     */
    rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                       rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
    rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
    rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

    /* Update for Memory: '<S13>/Memory' */
    rtDWork.Memory_PreviousInput = rtB.Logic[0];
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction_g;

  /* End of Outputs for SubSystem: '<S12>/J-K Flip-Flop' */
  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S21>/S-Function' */

  /* Constant: '<S8>/Constant' */
  script_run_s = script_run;

  /* Constant: '<S2>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S14>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S15>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S16>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for Memory generated from: '<S12>/J-K Flip-Flop' incorporates:
   *  Constant: '<S6>/Constant'
   */
  rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

  /* Update for Memory generated from: '<S12>/J-K Flip-Flop' incorporates:
   *  Constant: '<S6>/Constant'
   */
  rtDWork.TmpLatchAtJKFlipFlopInport2_Pre = true;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void HANcoder_E407_TTA_Template_DS_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult1;
    tCanFilter canFilter1;
    uint8_t canResult2;
    tCanFilter canFilter2;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 1 */
    CanIoInit(0);

    /* initialize the CAN I/O module for channel 2 */
    CanIoInit(1);

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* Start for DataStoreMemory: '<S8>/Data Store Memory5' */
    rtDWork.Master_ID = 1.0;

    /* Start for If: '<S8>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S8>/If Action Subsystem' */

    /* Start for M-S-Function: '<S114>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S115>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S116>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S117>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN6, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S8>/If Action Subsystem' */

    /* Start for M-S-Function: '<S10>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for S-Function (sfcn_timeout_event_irq): '<S21>/S-Function' incorporates:
     *  SubSystem: '<S8>/Local Time generation'
     */

    /* Start for function-call system: '<S8>/Local Time generation' */

    /* Start for Chart: '<S24>/Chart' incorporates:
     *  SubSystem: '<S8>/TTA System'
     */
    TTASystem_Start(&rtDWork.TTASystem_c);
    ;

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S21>/S-Function' */

    /* Start for DataStoreMemory: '<S8>/Data Store Memory14' */
    rtDWork.RxID_CAN2 = 1U;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory8' */
    rtDWork.RxID_CAN1 = 1U;

    /* Start for S-Function (sfcn_timeout_init): '<S26>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for DataStoreMemory: '<S8>/Data Store Memory' */
    rtDWork.Tx_msg_count_CAN1 = 1.0;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory20' */
    rtDWork.Tx_msg_count_CAN2 = 1.0;

    /* Start for M-S-Function: '<S2>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* store the CAN controller's filter configuration */
    canFilter2.mask = 0x00000000;
    canFilter2.code = 0x00000000;
    canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult2 = CanConnect(1, 1000000, &canFilter2);
    configASSERT(canResult2 == TRUE);

    /* Start for M-S-Function: '<S9>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  /* SystemInitialize for Triggered SubSystem: '<S12>/J-K Flip-Flop' */
  /* SystemInitialize for Outport: '<S13>/!Q' */
  rtB.Logic[1] = true;

  /* End of SystemInitialize for SubSystem: '<S12>/J-K Flip-Flop' */

  /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S21>/S-Function' incorporates:
   *  SubSystem: '<S8>/Local Time generation'
   */

  /* System initialize for function-call system: '<S8>/Local Time generation' */

  /* SystemInitialize for Chart: '<S24>/Chart' incorporates:
   *  SubSystem: '<S8>/TTA System'
   */
  TTASystem_Init(&rtB.TTASystem_c, &rtDWork.TTASystem_c);
  ;

  /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S21>/S-Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
