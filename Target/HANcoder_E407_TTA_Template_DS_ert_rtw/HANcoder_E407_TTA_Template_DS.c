/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template_DS'.
 *
 * Model version                  : 10.24
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jun  6 14:53:45 2023
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
void PwmoutIRQ_PWMOUT_MODULE_TIM2(void);
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
real_T simulation_time;                /* '<S9>/Digital Clock' */
real_T script_run_s;                   /* '<S9>/Constant' */
real_T Board_ID_s;                     /* '<S23>/Add' */
uint32_T SI_FreeHeap;                  /* '<S16>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S17>/Level-2 M-file S-Function' */
uint16_T local_ticks_interrupt;        /* '<S25>/Switch' */
uint8_T SI_CPUload;                    /* '<S15>/Level-2 M-file S-Function' */
real_T Master_ID_s;                    /* '<S191>/Data Store Read' */
real_T Role_ID_s;                      /* '<S191>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S191>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S191>/Data Store Read12' */
real_T votes_Board_1_DEBUG;            /* '<S191>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S191>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S191>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S191>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S191>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S191>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S195>/Data Store Read24' */
real_T Motor_Setpoint_s;               /* '<S797>/Number of Trailers' */
real_T PosError;                       /* '<S801>/Sum' */
real_T Desync_Sync_bc2_vem_s;          /* '<S736>/Saturation' */
real_T Trailer_Amount_s;               /* '<S721>/Number of Trailers' */
real_T Member1_ID_s;                   /* '<S721>/Number of Trailers1' */
real_T Desync_Sync_bc1_s;              /* '<S624>/Saturation' */
real_T Desync_Sync_bc1_vem_s;          /* '<S534>/Saturation' */
real_T FCU_Fault_Node;                 /* '<S421>/Data Store Read3' */
real_T FCU_Master;                     /* '<S421>/Data Store Read4' */
real_T Desync_Sync_bc0_s;              /* '<S298>/Saturation' */
real_T TM1_timeout_counter_s;          /* '<S286>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S287>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S288>/Switch' */
real_T Trailer_ID_s;                   /* '<S154>/Data Store Read9' */
uint16_T Trailer2Articulation_RX_s;    /* '<S766>/BitConcat2' */
uint16_T Trailer1Articulation_RX_s;    /* '<S733>/BitConcat2' */
uint16_T Steering_Input_s;             /* '<S721>/Desired Steering Angle' */
uint16_T ArtAngle1_s;                  /* '<S721>/Data Store Read' */
uint16_T ArtAngle2_s;                  /* '<S721>/Data Store Read1' */
uint16_T Trailer2_Articulation_s;      /* '<S688>/Data Store Read' */
uint16_T Trailer1_Articulation_s;      /* '<S668>/Data Store Read' */
uint16_T PotValue3_RX_s;               /* '<S592>/BitConcat2' */
uint16_T PotValue2_RX_s;               /* '<S562>/BitConcat2' */
uint16_T PotValue1_RX_s;               /* '<S531>/BitConcat2' */
uint16_T Pot_Final;                    /* '<S421>/Data Store Read5' */
uint16_T PotValue3_s;                  /* '<S475>/Data Store Read' */
uint16_T PotValue2_s;                  /* '<S455>/Data Store Read' */
uint16_T PotValue1_s;                  /* '<S435>/Data Store Read' */
uint16_T Rx_init_LT;                   /* '<S172>/Cast' */
int16_T PosPIDOut;                     /* '<S846>/Saturation' */
uint8_T Vote_s;                        /* '<S326>/Cast' */
uint8_T Rx_init_id;                    /* '<S176>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S175>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S174>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S143>/Switch' */
boolean_T BC1_sync_processed_s;        /* '<S191>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S191>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S191>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S191>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S191>/Data Store Read9' */
boolean_T reset_bc2_s;                 /* '<S656>/Data Store Read' */
boolean_T reset_bc1_s;                 /* '<S422>/Data Store Read' */
boolean_T reset_s;                     /* '<S202>/Data Store Read' */
real_T Tx_temporal_msg_CAN2;           /* '<S21>/Cast To Double' */
uint32_T TxCAN2_counter_s;             /* '<S21>/Sum1' */
uint32_T TxID_CAN2_s;                  /* '<S21>/Data Store Read3' */
real_T Rx_temporal_msg_CAN2;           /* '<S84>/Cast To Double' */
uint32_T RxCAN2_counter_s;             /* '<S20>/Sum1' */
uint32_T RxID_CAN2_s;                  /* '<S20>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN2;            /* '<S84>/Local_Time' */
real_T Rx_temporal_msg_CAN1;           /* '<S32>/Cast To Double' */
uint32_T RxCAN1_counter_s;             /* '<S18>/Sum1' */
uint32_T RxID_CAN1_s;                  /* '<S18>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN1;            /* '<S32>/Local_Time' */
real_T Tx_temporal_msg_CAN1;           /* '<S19>/Cast To Double' */
uint32_T TxCAN1_counter_s;             /* '<S19>/Sum1' */
uint32_T TxID_CAN1_s;                  /* '<S19>/Data Store Read3' */

/* Exported block parameters */
real_T COMM_Phase1 = 10.0;             /* Variable: COMM_Phase1
                                        * Referenced by:
                                        *   '<S155>/Constant2'
                                        *   '<S172>/Constant1'
                                        *   '<S216>/Constant24'
                                        *   '<S216>/Constant27'
                                        *   '<S234>/Constant24'
                                        *   '<S234>/Constant27'
                                        *   '<S252>/Constant24'
                                        *   '<S252>/Constant27'
                                        *   '<S270>/Constant24'
                                        *   '<S270>/Constant27'
                                        *   '<S298>/Constant'
                                        *   '<S433>/Constant24'
                                        *   '<S433>/Constant27'
                                        *   '<S453>/Constant24'
                                        *   '<S453>/Constant27'
                                        *   '<S473>/Constant24'
                                        *   '<S473>/Constant27'
                                        *   '<S493>/Constant24'
                                        *   '<S493>/Constant27'
                                        *   '<S534>/Constant'
                                        *   '<S565>/Constant'
                                        *   '<S595>/Constant'
                                        *   '<S624>/Constant'
                                        *   '<S666>/Constant24'
                                        *   '<S666>/Constant27'
                                        *   '<S686>/Constant24'
                                        *   '<S686>/Constant27'
                                        *   '<S706>/Constant24'
                                        *   '<S706>/Constant27'
                                        *   '<S736>/Constant'
                                        *   '<S769>/Constant'
                                        *   '<S861>/Constant'
                                        */
real_T COMM_Phase2 = 10.0;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S155>/Constant3'
                                        *   '<S172>/Constant2'
                                        *   '<S217>/Constant24'
                                        *   '<S217>/Constant27'
                                        *   '<S235>/Constant24'
                                        *   '<S235>/Constant27'
                                        *   '<S253>/Constant24'
                                        *   '<S253>/Constant27'
                                        *   '<S271>/Constant24'
                                        *   '<S271>/Constant27'
                                        *   '<S298>/Constant1'
                                        *   '<S434>/Constant24'
                                        *   '<S434>/Constant27'
                                        *   '<S454>/Constant24'
                                        *   '<S454>/Constant27'
                                        *   '<S474>/Constant24'
                                        *   '<S474>/Constant27'
                                        *   '<S494>/Constant24'
                                        *   '<S494>/Constant27'
                                        *   '<S534>/Constant1'
                                        *   '<S565>/Constant1'
                                        *   '<S595>/Constant1'
                                        *   '<S624>/Constant1'
                                        *   '<S667>/Constant24'
                                        *   '<S667>/Constant27'
                                        *   '<S687>/Constant24'
                                        *   '<S687>/Constant27'
                                        *   '<S707>/Constant24'
                                        *   '<S707>/Constant27'
                                        *   '<S736>/Constant1'
                                        *   '<S769>/Constant1'
                                        *   '<S861>/Constant1'
                                        */
real_T COMM_Phase_init1 = 0.0;         /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S155>/Constant6'
                                        *   '<S216>/Constant'
                                        *   '<S234>/Constant'
                                        *   '<S252>/Constant'
                                        *   '<S270>/Constant'
                                        *   '<S433>/Constant'
                                        *   '<S453>/Constant'
                                        *   '<S473>/Constant'
                                        *   '<S493>/Constant'
                                        *   '<S666>/Constant'
                                        *   '<S686>/Constant'
                                        *   '<S706>/Constant'
                                        */
real_T COMM_Phase_init2 = 5.0;         /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S155>/Constant7'
                                        *   '<S217>/Constant'
                                        *   '<S235>/Constant'
                                        *   '<S253>/Constant'
                                        *   '<S271>/Constant'
                                        *   '<S434>/Constant'
                                        *   '<S454>/Constant'
                                        *   '<S474>/Constant'
                                        *   '<S494>/Constant'
                                        *   '<S667>/Constant'
                                        *   '<S687>/Constant'
                                        *   '<S707>/Constant'
                                        */
real_T script_run = 0.0;               /* Variable: script_run
                                        * Referenced by: '<S9>/Constant'
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

/* Forward declaration for local functions */
static void SystemCore_setup(dsp_simulink_MovingAverage *obj);
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_22U;
static tCanDataTypes canRxData_0_44U;
static tCanDataTypes canRxData_0_23U;
static tCanDataTypes canRxData_0_31U;
static tCanDataTypes canRxData_0_32U;
static tCanDataTypes canRxData_0_46U;
static tCanDataTypes canRxData_0_24U;
static tCanDataTypes canRxData_0_48U;
static tCanDataTypes canRxData_0_66U;
static tCanDataTypes canRxData_0_69U;
static tCanDataTypes canRxData_0_72U;
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
static tCanDataTypes canRxData_1_66U;
static tCanDataTypes canRxData_1_69U;
static tCanDataTypes canRxData_1_72U;
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
  /* Output and update for function-call system: '<S9>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* Switch: '<S25>/Switch' */
    if (rtB.Logic[0]) {
      /* Switch: '<S25>/Switch' incorporates:
       *  Constant: '<S25>/Constant2'
       *  DataStoreRead: '<S25>/Data Store Read'
       *  Sum: '<S25>/Sum1'
       */
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      /* Switch: '<S25>/Switch' incorporates:
       *  DataStoreRead: '<S25>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S25>/Switch' */

    /* DataStoreWrite: '<S25>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S25>/Chart' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    if (rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_TTA_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_TTA_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      /* Transition: '<S138>:10' */
      /* Entry 'Send_Trigger': '<S138>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S9>/TTA System' */
        /* Event: '<S138>:3' */
        TTASystem(rtM, &rtDWork.Board_ID, &rtDWork.Local_Ticks,
                  &rtDWork.Master_ID, &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
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

        /* End of Outputs for SubSystem: '<S9>/TTA System' */
      }

      /* During 'Send_Trigger': '<S138>:9' */
    } else if (rtB.Logic[0]) {
      /* Outputs for Function Call SubSystem: '<S9>/TTA System' */
      /* Event: '<S138>:3' */
      TTASystem(rtM, &rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
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

      /* End of Outputs for SubSystem: '<S9>/TTA System' */
    }

    /* End of Chart: '<S25>/Chart' */
    /* M-S-Function: '<S139>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S25>/Sum' incorporates:
     *  Constant: '<S25>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)100U));

    /* Update for M-S-Function: '<S140>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S25>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

void PwmoutIRQ_PWMOUT_MODULE_TIM2(void)
{
}

/* Output and update for function-call system: '<S9>/CAN1 Send' */
void CAN1Send(const msg_buffer_type *rtd_Msg_Tx_CAN1, boolean_T
              *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D13, const uint32_T
              *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1, rtB_CAN1Send
              *localB, rtDW_CAN1Send *localDW)
{
  /* DataStoreWrite: '<S19>/Data Store Write2' incorporates:
   *  Constant: '<S19>/Constant8'
   *  DataStoreRead: '<S19>/Data Store Read4'
   *  Sum: '<S19>/Plus'
   */
  *rtd_Tx_msg_count_CAN1 += 1.0;

  /* DataStoreWrite: '<S19>/Data Store Write1' incorporates:
   *  Constant: '<S19>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S19>/Constant3'
   *  DataStoreRead: '<S19>/Data Store Read'
   */
  TxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S19>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN1_counter_s;

  /* Outputs for Enabled SubSystem: '<S19>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S80>/Enable'
   */
  /* Logic: '<S19>/AND' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Constant: '<S19>/Constant2'
   *  DataStoreRead: '<S19>/Data Store Read1'
   *  RelationalOperator: '<S19>/Equal'
   */
  if ((*rtd_TxID_CAN1 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S80>/Data Store Write2' incorporates:
     *  Constant: '<S80>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 1.0;
  }

  /* End of Logic: '<S19>/AND' */
  /* End of Outputs for SubSystem: '<S19>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S19>/Cast To Double' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  Tx_temporal_msg_CAN1 = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataStoreRead: '<S19>/Data Store Read3' */
  TxID_CAN1_s = *rtd_TxID_CAN1;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataTypeConversion: '<S19>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN1_s;

  /* DataTypeConversion: '<S19>/Data Type Conversion10' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN1->Buffer_8;

  /* DataTypeConversion: '<S19>/Data Type Conversion4' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN1->Buffer_2;

  /* DataTypeConversion: '<S19>/Data Type Conversion5' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN1->Buffer_3;

  /* DataTypeConversion: '<S19>/Data Type Conversion6' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN1->Buffer_4;

  /* DataTypeConversion: '<S19>/Data Type Conversion7' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN1->Buffer_5;

  /* DataTypeConversion: '<S19>/Data Type Conversion8' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN1->Buffer_6;

  /* DataTypeConversion: '<S19>/Data Type Conversion9' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read2'
   */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN1->Buffer_7;

  /* Update for M-S-Function: '<S79>/S-Function' */
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
 *    '<S48>/Enabled Subsystem'
 *    '<S50>/Enabled Subsystem'
 *    '<S52>/Enabled Subsystem'
 *    '<S54>/Enabled Subsystem'
 *    '<S56>/Enabled Subsystem'
 *    '<S58>/Enabled Subsystem'
 *    '<S60>/Enabled Subsystem'
 *    '<S62>/Enabled Subsystem'
 *    '<S64>/Enabled Subsystem'
 *    '<S66>/Enabled Subsystem'
 *    ...
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S48>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S49>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S49>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S49>/In3' */
    localB->In3 = rtu_In3;

    /* SignalConversion generated from: '<S49>/In4' */
    localB->In4 = rtu_In4;

    /* SignalConversion generated from: '<S49>/In5' */
    localB->In5 = rtu_In5;

    /* SignalConversion generated from: '<S49>/In6' */
    localB->In6 = rtu_In6;

    /* SignalConversion generated from: '<S49>/In7' */
    localB->In7 = rtu_In7;

    /* SignalConversion generated from: '<S49>/In8' */
    localB->In8 = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S48>/Enabled Subsystem' */
}

/* System initialize for function-call system: '<S9>/CAN1 Recieve' */
void CAN1Recieve_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S31>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S70>/S-Function' incorporates:
   *  Constant: '<S44>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 1U);

  /* End of SystemInitialize for SubSystem: '<S31>/Sync_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S72>/S-Function' incorporates:
   *  Constant: '<S45>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 11U);

  /* End of SystemInitialize for SubSystem: '<S31>/Vote1_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S74>/S-Function' incorporates:
   *  Constant: '<S46>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 12U);

  /* End of SystemInitialize for SubSystem: '<S31>/Vote2_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S76>/S-Function' incorporates:
   *  Constant: '<S47>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 13U);

  /* End of SystemInitialize for SubSystem: '<S31>/Vote3_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue1_ID_CAN' */

  /* Start for M-S-Function: '<S48>/S-Function' incorporates:
   *  Constant: '<S33>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 22U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue1_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN' */

  /* Start for M-S-Function: '<S50>/S-Function' incorporates:
   *  Constant: '<S34>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 44U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN7' */

  /* Start for M-S-Function: '<S64>/S-Function' incorporates:
   *  Constant: '<S41>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 66U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN7' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN1' */

  /* Start for M-S-Function: '<S52>/S-Function' incorporates:
   *  Constant: '<S35>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 23U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN1' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN4' */

  /* Start for M-S-Function: '<S58>/S-Function' incorporates:
   *  Constant: '<S38>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 46U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN4' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN8' */

  /* Start for M-S-Function: '<S66>/S-Function' incorporates:
   *  Constant: '<S42>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 69U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN8' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN5' */

  /* Start for M-S-Function: '<S60>/S-Function' incorporates:
   *  Constant: '<S39>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 24U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN5' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN6' */

  /* Start for M-S-Function: '<S62>/S-Function' incorporates:
   *  Constant: '<S40>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 48U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN6' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN9' */

  /* Start for M-S-Function: '<S68>/S-Function' incorporates:
   *  Constant: '<S43>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 72U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN9' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN2' */

  /* Start for M-S-Function: '<S54>/S-Function' incorporates:
   *  Constant: '<S36>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 31U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN2' */

  /* SystemInitialize for Enabled SubSystem: '<S31>/PotValue2_ID_CAN3' */

  /* Start for M-S-Function: '<S56>/S-Function' incorporates:
   *  Constant: '<S37>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 32U);

  /* End of SystemInitialize for SubSystem: '<S31>/PotValue2_ID_CAN3' */
}

/* Disable for function-call system: '<S9>/CAN1 Recieve' */
void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S31>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S70>/S-Function' incorporates:
     *  Outport: '<S44>/CAN_new'
     */
    localB->SFunction_o1_o = 0;
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S72>/S-Function' incorporates:
     *  Outport: '<S45>/CAN_new'
     */
    localB->SFunction_o1_m = 0;
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S74>/S-Function' incorporates:
     *  Outport: '<S46>/CAN_new'
     */
    localB->SFunction_o1_j = 0;
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S76>/S-Function' incorporates:
     *  Outport: '<S47>/CAN_new'
     */
    localB->SFunction_o1 = 0;
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue1_ID_CAN' */
  if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S48>/S-Function' incorporates:
     *  Outport: '<S33>/CAN_new'
     */
    localB->SFunction_o1_jc = 0;
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN' */
  if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S50>/S-Function' incorporates:
     *  Outport: '<S34>/CAN_new'
     */
    localB->SFunction_o1_kx = 0;
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN7' */
  if (localDW->PotValue2_ID_CAN7_MODE) {
    /* Disable for M-S-Function: '<S64>/S-Function' incorporates:
     *  Outport: '<S41>/CAN_new'
     */
    localB->SFunction_o1_l = 0;
    localDW->PotValue2_ID_CAN7_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN7' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN1' */
  if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S52>/S-Function' incorporates:
     *  Outport: '<S35>/CAN_new'
     */
    localB->SFunction_o1_ek = 0;
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN1' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN4' */
  if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S58>/S-Function' incorporates:
     *  Outport: '<S38>/CAN_new'
     */
    localB->SFunction_o1_bx = 0;
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN4' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN8' */
  if (localDW->PotValue2_ID_CAN8_MODE) {
    /* Disable for M-S-Function: '<S66>/S-Function' incorporates:
     *  Outport: '<S42>/CAN_new'
     */
    localB->SFunction_o1_b = 0;
    localDW->PotValue2_ID_CAN8_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN8' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN5' */
  if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S60>/S-Function' incorporates:
     *  Outport: '<S39>/CAN_new'
     */
    localB->SFunction_o1_i = 0;
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN5' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN6' */
  if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S62>/S-Function' incorporates:
     *  Outport: '<S40>/CAN_new'
     */
    localB->SFunction_o1_e = 0;
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN6' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN9' */
  if (localDW->PotValue2_ID_CAN9_MODE) {
    /* Disable for M-S-Function: '<S68>/S-Function' incorporates:
     *  Outport: '<S43>/CAN_new'
     */
    localB->SFunction_o1_jn = 0;
    localDW->PotValue2_ID_CAN9_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN9' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN2' */
  if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S54>/S-Function' incorporates:
     *  Outport: '<S36>/CAN_new'
     */
    localB->SFunction_o1_ic = 0;
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN2' */

  /* Disable for Enabled SubSystem: '<S31>/PotValue2_ID_CAN3' */
  if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S56>/S-Function' incorporates:
     *  Outport: '<S37>/CAN_new'
     */
    localB->SFunction_o1_k = 0;
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S31>/PotValue2_ID_CAN3' */
}

/* Output and update for function-call system: '<S9>/CAN1 Recieve' */
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
  uint8_T rtb_SFunction_o3_j;
  uint8_T rtb_SFunction_o4_o;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_f;
  uint8_T rtb_SFunction_o7_h;
  uint8_T rtb_SFunction_o8_b;
  uint8_T rtb_SFunction_o9_b;
  uint8_T rtb_SFunction_o2_lc;
  uint8_T rtb_SFunction_o3_i;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_l;
  uint8_T rtb_SFunction_o6_c;
  uint8_T rtb_SFunction_o7_m;
  uint8_T rtb_SFunction_o8_ox;
  uint8_T rtb_SFunction_o9_h;
  uint8_T rtb_SFunction_o2_g;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_nl;
  uint8_T rtb_SFunction_o5_am;
  uint8_T rtb_SFunction_o6_mg;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_ck;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_ph;
  uint8_T rtb_SFunction_o3_ln;
  uint8_T rtb_SFunction_o4_g;
  uint8_T rtb_SFunction_o5_n;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_cx;
  uint8_T rtb_SFunction_o8_b2;
  uint8_T rtb_SFunction_o9_m;
  uint8_T rtb_SFunction_o2_hl;
  uint8_T rtb_SFunction_o3_jq;
  uint8_T rtb_SFunction_o4_aw;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_d;
  uint8_T rtb_SFunction_o7_lb;
  uint8_T rtb_SFunction_o8_cz;
  uint8_T rtb_SFunction_o9_p;
  uint8_T rtb_SFunction_o2_pc;
  uint8_T rtb_SFunction_o3_i0;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_l;
  uint8_T rtb_SFunction_o7_hl;
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
  uint8_T rtb_SFunction_o3_ps;
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
  boolean_T rtb_Equal12;
  boolean_T rtb_Equal13;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal1_e1;
  boolean_T rtb_Equal2_b4;
  boolean_T rtb_Equal3_pm;
  boolean_T rtb_Equal4_nn;
  boolean_T rtb_Equal5_d;
  boolean_T rtb_Equal6_a;
  boolean_T rtb_Equal7_g;
  boolean_T rtb_Equal9_f;
  boolean_T rtb_Equal_e2;

  /* Sum: '<S18>/Sum1' incorporates:
   *  Constant: '<S18>/Constant3'
   *  DataStoreRead: '<S18>/Data Store Read1'
   */
  RxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S18>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN1_counter_s;

  /* DataStoreRead: '<S18>/Data Store Read' */
  RxID_CAN1_s = *rtd_RxID_CAN1;

  /* RelationalOperator: '<S31>/Equal' incorporates:
   *  Constant: '<S31>/Constant'
   */
  rtb_Equal_e2 = (RxID_CAN1_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S31>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  if (rtb_Equal_e2) {
    localDW->Sync_ID_CAN_MODE = true;

    /* M-S-Function: '<S70>/S-Function' incorporates:
     *  Constant: '<S44>/Constant'
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

    /* Outputs for Enabled SubSystem: '<S70>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_o, rtb_SFunction_o2_lv,
                     rtb_SFunction_o3_l, rtb_SFunction_o4_p, rtb_SFunction_o5_a,
                     rtb_SFunction_o6_h, rtb_SFunction_o7_a, rtb_SFunction_o8_cm,
                     rtb_SFunction_o9_n, &localB->EnabledSubsystem_ez);

    /* End of Outputs for SubSystem: '<S70>/Enabled Subsystem' */
  } else if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S70>/S-Function' incorporates:
     *  Outport: '<S44>/CAN_new'
     */
    localB->SFunction_o1_o = 0;
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/Sync_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal1' incorporates:
   *  Constant: '<S31>/Constant1'
   */
  rtb_Equal1_e1 = (RxID_CAN1_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S31>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (rtb_Equal1_e1) {
    localDW->Vote1_ID_CAN_MODE = true;

    /* M-S-Function: '<S72>/S-Function' incorporates:
     *  Constant: '<S45>/Constant1'
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

    /* Outputs for Enabled SubSystem: '<S72>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_m, rtb_SFunction_o2_l,
                     rtb_SFunction_o3_n, rtb_SFunction_o4_a, rtb_SFunction_o5_d,
                     rtb_SFunction_o6_m, rtb_SFunction_o7_c, rtb_SFunction_o8_o,
                     rtb_SFunction_o9_j, &localB->EnabledSubsystem_i5);

    /* End of Outputs for SubSystem: '<S72>/Enabled Subsystem' */
  } else if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S72>/S-Function' incorporates:
     *  Outport: '<S45>/CAN_new'
     */
    localB->SFunction_o1_m = 0;
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal2' incorporates:
   *  Constant: '<S31>/Constant2'
   */
  rtb_Equal2_b4 = (RxID_CAN1_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S31>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (rtb_Equal2_b4) {
    localDW->Vote2_ID_CAN_MODE = true;

    /* M-S-Function: '<S74>/S-Function' incorporates:
     *  Constant: '<S46>/Constant2'
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

    /* Outputs for Enabled SubSystem: '<S74>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_j, rtb_SFunction_o2_h,
                     rtb_SFunction_o3_c, rtb_SFunction_o4_m, rtb_SFunction_o5_c,
                     rtb_SFunction_o6_n, rtb_SFunction_o7_f, rtb_SFunction_o8_c,
                     rtb_SFunction_o9_e, &localB->EnabledSubsystem_fv);

    /* End of Outputs for SubSystem: '<S74>/Enabled Subsystem' */
  } else if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S74>/S-Function' incorporates:
     *  Outport: '<S46>/CAN_new'
     */
    localB->SFunction_o1_j = 0;
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal3' incorporates:
   *  Constant: '<S31>/Constant3'
   */
  rtb_Equal3_pm = (RxID_CAN1_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S31>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S47>/Enable'
   */
  if (rtb_Equal3_pm) {
    localDW->Vote3_ID_CAN_MODE = true;

    /* M-S-Function: '<S76>/S-Function' incorporates:
     *  Constant: '<S47>/Constant3'
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

    /* Outputs for Enabled SubSystem: '<S76>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &localB->EnabledSubsystem_o1);

    /* End of Outputs for SubSystem: '<S76>/Enabled Subsystem' */
  } else if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S76>/S-Function' incorporates:
     *  Outport: '<S47>/CAN_new'
     */
    localB->SFunction_o1 = 0;
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal4' */
  rtb_Equal4_nn = (RxID_CAN1_s == localC->Product);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue1_ID_CAN' incorporates:
   *  EnablePort: '<S33>/Enable'
   */
  if (rtb_Equal4_nn) {
    localDW->PotValue1_ID_CAN_MODE = true;

    /* M-S-Function: '<S48>/S-Function' incorporates:
     *  Constant: '<S33>/Constant3'
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

    /* Outputs for Enabled SubSystem: '<S48>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_jc, rtb_SFunction_o2_ca,
                     rtb_SFunction_o3_ij, rtb_SFunction_o4_b,
                     rtb_SFunction_o5_ol, rtb_SFunction_o6_a,
                     rtb_SFunction_o7_cv, rtb_SFunction_o8_n4,
                     rtb_SFunction_o9_a, &localB->EnabledSubsystem_n);

    /* End of Outputs for SubSystem: '<S48>/Enabled Subsystem' */
  } else if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S48>/S-Function' incorporates:
     *  Outport: '<S33>/CAN_new'
     */
    localB->SFunction_o1_jc = 0;
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue1_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal5' */
  rtb_Equal5_d = (RxID_CAN1_s == localC->Product1);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN' incorporates:
   *  EnablePort: '<S34>/Enable'
   */
  if (rtb_Equal5_d) {
    localDW->PotValue2_ID_CAN_MODE = true;

    /* M-S-Function: '<S50>/S-Function' incorporates:
     *  Constant: '<S34>/Constant3'
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

    /* Outputs for Enabled SubSystem: '<S50>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_kx, rtb_SFunction_o2_n,
                     rtb_SFunction_o3_kl, rtb_SFunction_o4_i, rtb_SFunction_o5_k,
                     rtb_SFunction_o6_lh, rtb_SFunction_o7_c3,
                     rtb_SFunction_o8_i, rtb_SFunction_o9_nb,
                     &localB->EnabledSubsystem_e);

    /* End of Outputs for SubSystem: '<S50>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S50>/S-Function' incorporates:
     *  Outport: '<S34>/CAN_new'
     */
    localB->SFunction_o1_kx = 0;
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN' */

  /* RelationalOperator: '<S31>/Equal12' */
  rtb_Equal12 = (RxID_CAN1_s == localC->Product6);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN7' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtb_Equal12) {
    localDW->PotValue2_ID_CAN7_MODE = true;

    /* M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S41>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_l = CanIoGetMessage(0, 66U, NULL,
      &canRxData_0_66U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_l > 0) {
      /* read the data */
      rtb_SFunction_o2_g = canRxData_0_66U.uint8_T_info[0];
      rtb_SFunction_o3_p = canRxData_0_66U.uint8_T_info[1];
      rtb_SFunction_o4_nl = canRxData_0_66U.uint8_T_info[2];
      rtb_SFunction_o5_am = canRxData_0_66U.uint8_T_info[3];
      rtb_SFunction_o6_mg = canRxData_0_66U.uint8_T_info[4];
      rtb_SFunction_o7_l = canRxData_0_66U.uint8_T_info[5];
      rtb_SFunction_o8_ck = canRxData_0_66U.uint8_T_info[6];
      rtb_SFunction_o9_l = canRxData_0_66U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_l, rtb_SFunction_o2_g,
                     rtb_SFunction_o3_p, rtb_SFunction_o4_nl,
                     rtb_SFunction_o5_am, rtb_SFunction_o6_mg,
                     rtb_SFunction_o7_l, rtb_SFunction_o8_ck, rtb_SFunction_o9_l,
                     &localB->EnabledSubsystem_ps);

    /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN7_MODE) {
    /* Disable for M-S-Function: '<S64>/S-Function' incorporates:
     *  Outport: '<S41>/CAN_new'
     */
    localB->SFunction_o1_l = 0;
    localDW->PotValue2_ID_CAN7_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN7' */

  /* RelationalOperator: '<S31>/Equal6' */
  rtb_Equal6_a = (RxID_CAN1_s == localC->Product2);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN1' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  if (rtb_Equal6_a) {
    localDW->PotValue2_ID_CAN1_MODE = true;

    /* M-S-Function: '<S52>/S-Function' incorporates:
     *  Constant: '<S35>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ek = CanIoGetMessage(0, 23U, NULL,
      &canRxData_0_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ek > 0) {
      /* read the data */
      rtb_SFunction_o2_j = canRxData_0_23U.uint8_T_info[0];
      rtb_SFunction_o3_ps = canRxData_0_23U.uint8_T_info[1];
      rtb_SFunction_o4_pk = canRxData_0_23U.uint8_T_info[2];
      rtb_SFunction_o5_al = canRxData_0_23U.uint8_T_info[3];
      rtb_SFunction_o6_hl = canRxData_0_23U.uint8_T_info[4];
      rtb_SFunction_o7_o = canRxData_0_23U.uint8_T_info[5];
      rtb_SFunction_o8_nm = canRxData_0_23U.uint8_T_info[6];
      rtb_SFunction_o9_i = canRxData_0_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_ek, rtb_SFunction_o2_j,
                     rtb_SFunction_o3_ps, rtb_SFunction_o4_pk,
                     rtb_SFunction_o5_al, rtb_SFunction_o6_hl,
                     rtb_SFunction_o7_o, rtb_SFunction_o8_nm, rtb_SFunction_o9_i,
                     &localB->EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S52>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S52>/S-Function' incorporates:
     *  Outport: '<S35>/CAN_new'
     */
    localB->SFunction_o1_ek = 0;
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN1' */

  /* RelationalOperator: '<S31>/Equal9' */
  rtb_Equal9_f = (RxID_CAN1_s == localC->Product3);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN4' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  if (rtb_Equal9_f) {
    localDW->PotValue2_ID_CAN4_MODE = true;

    /* M-S-Function: '<S58>/S-Function' incorporates:
     *  Constant: '<S38>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_bx = CanIoGetMessage(0, 46U, NULL,
      &canRxData_0_46U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_bx > 0) {
      /* read the data */
      rtb_SFunction_o2_pc = canRxData_0_46U.uint8_T_info[0];
      rtb_SFunction_o3_i0 = canRxData_0_46U.uint8_T_info[1];
      rtb_SFunction_o4_l = canRxData_0_46U.uint8_T_info[2];
      rtb_SFunction_o5_o = canRxData_0_46U.uint8_T_info[3];
      rtb_SFunction_o6_l = canRxData_0_46U.uint8_T_info[4];
      rtb_SFunction_o7_hl = canRxData_0_46U.uint8_T_info[5];
      rtb_SFunction_o8_d = canRxData_0_46U.uint8_T_info[6];
      rtb_SFunction_o9_d = canRxData_0_46U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S58>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_bx, rtb_SFunction_o2_pc,
                     rtb_SFunction_o3_i0, rtb_SFunction_o4_l, rtb_SFunction_o5_o,
                     rtb_SFunction_o6_l, rtb_SFunction_o7_hl, rtb_SFunction_o8_d,
                     rtb_SFunction_o9_d, &localB->EnabledSubsystem_j);

    /* End of Outputs for SubSystem: '<S58>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S58>/S-Function' incorporates:
     *  Outport: '<S38>/CAN_new'
     */
    localB->SFunction_o1_bx = 0;
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN4' */

  /* RelationalOperator: '<S31>/Equal13' */
  rtb_Equal13 = (RxID_CAN1_s == localC->Product7);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN8' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtb_Equal13) {
    localDW->PotValue2_ID_CAN8_MODE = true;

    /* M-S-Function: '<S66>/S-Function' incorporates:
     *  Constant: '<S42>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(0, 69U, NULL,
      &canRxData_0_69U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_lc = canRxData_0_69U.uint8_T_info[0];
      rtb_SFunction_o3_i = canRxData_0_69U.uint8_T_info[1];
      rtb_SFunction_o4_n = canRxData_0_69U.uint8_T_info[2];
      rtb_SFunction_o5_l = canRxData_0_69U.uint8_T_info[3];
      rtb_SFunction_o6_c = canRxData_0_69U.uint8_T_info[4];
      rtb_SFunction_o7_m = canRxData_0_69U.uint8_T_info[5];
      rtb_SFunction_o8_ox = canRxData_0_69U.uint8_T_info[6];
      rtb_SFunction_o9_h = canRxData_0_69U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S66>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_b, rtb_SFunction_o2_lc,
                     rtb_SFunction_o3_i, rtb_SFunction_o4_n, rtb_SFunction_o5_l,
                     rtb_SFunction_o6_c, rtb_SFunction_o7_m, rtb_SFunction_o8_ox,
                     rtb_SFunction_o9_h, &localB->EnabledSubsystem_nn);

    /* End of Outputs for SubSystem: '<S66>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN8_MODE) {
    /* Disable for M-S-Function: '<S66>/S-Function' incorporates:
     *  Outport: '<S42>/CAN_new'
     */
    localB->SFunction_o1_b = 0;
    localDW->PotValue2_ID_CAN8_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN8' */

  /* RelationalOperator: '<S31>/Equal10' */
  rtb_Equal10 = (RxID_CAN1_s == localC->Product4);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN5' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  if (rtb_Equal10) {
    localDW->PotValue2_ID_CAN5_MODE = true;

    /* M-S-Function: '<S60>/S-Function' incorporates:
     *  Constant: '<S39>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(0, 24U, NULL,
      &canRxData_0_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_hl = canRxData_0_24U.uint8_T_info[0];
      rtb_SFunction_o3_jq = canRxData_0_24U.uint8_T_info[1];
      rtb_SFunction_o4_aw = canRxData_0_24U.uint8_T_info[2];
      rtb_SFunction_o5_m = canRxData_0_24U.uint8_T_info[3];
      rtb_SFunction_o6_d = canRxData_0_24U.uint8_T_info[4];
      rtb_SFunction_o7_lb = canRxData_0_24U.uint8_T_info[5];
      rtb_SFunction_o8_cz = canRxData_0_24U.uint8_T_info[6];
      rtb_SFunction_o9_p = canRxData_0_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S60>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_i, rtb_SFunction_o2_hl,
                     rtb_SFunction_o3_jq, rtb_SFunction_o4_aw,
                     rtb_SFunction_o5_m, rtb_SFunction_o6_d, rtb_SFunction_o7_lb,
                     rtb_SFunction_o8_cz, rtb_SFunction_o9_p,
                     &localB->EnabledSubsystem_o);

    /* End of Outputs for SubSystem: '<S60>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S60>/S-Function' incorporates:
     *  Outport: '<S39>/CAN_new'
     */
    localB->SFunction_o1_i = 0;
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN5' */

  /* RelationalOperator: '<S31>/Equal11' */
  rtb_Equal11 = (RxID_CAN1_s == localC->Product5);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN6' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  if (rtb_Equal11) {
    localDW->PotValue2_ID_CAN6_MODE = true;

    /* M-S-Function: '<S62>/S-Function' incorporates:
     *  Constant: '<S40>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(0, 48U, NULL,
      &canRxData_0_48U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_ph = canRxData_0_48U.uint8_T_info[0];
      rtb_SFunction_o3_ln = canRxData_0_48U.uint8_T_info[1];
      rtb_SFunction_o4_g = canRxData_0_48U.uint8_T_info[2];
      rtb_SFunction_o5_n = canRxData_0_48U.uint8_T_info[3];
      rtb_SFunction_o6_o = canRxData_0_48U.uint8_T_info[4];
      rtb_SFunction_o7_cx = canRxData_0_48U.uint8_T_info[5];
      rtb_SFunction_o8_b2 = canRxData_0_48U.uint8_T_info[6];
      rtb_SFunction_o9_m = canRxData_0_48U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S62>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_e, rtb_SFunction_o2_ph,
                     rtb_SFunction_o3_ln, rtb_SFunction_o4_g, rtb_SFunction_o5_n,
                     rtb_SFunction_o6_o, rtb_SFunction_o7_cx,
                     rtb_SFunction_o8_b2, rtb_SFunction_o9_m,
                     &localB->EnabledSubsystem_f);

    /* End of Outputs for SubSystem: '<S62>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S62>/S-Function' incorporates:
     *  Outport: '<S40>/CAN_new'
     */
    localB->SFunction_o1_e = 0;
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN6' */

  /* RelationalOperator: '<S31>/Equal14' */
  rtb_Equal14 = (RxID_CAN1_s == localC->Product8);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN9' incorporates:
   *  EnablePort: '<S43>/Enable'
   */
  if (rtb_Equal14) {
    localDW->PotValue2_ID_CAN9_MODE = true;

    /* M-S-Function: '<S68>/S-Function' incorporates:
     *  Constant: '<S43>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_jn = CanIoGetMessage(0, 72U, NULL,
      &canRxData_0_72U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_jn > 0) {
      /* read the data */
      rtb_SFunction_o2_p = canRxData_0_72U.uint8_T_info[0];
      rtb_SFunction_o3_j = canRxData_0_72U.uint8_T_info[1];
      rtb_SFunction_o4_o = canRxData_0_72U.uint8_T_info[2];
      rtb_SFunction_o5_j = canRxData_0_72U.uint8_T_info[3];
      rtb_SFunction_o6_f = canRxData_0_72U.uint8_T_info[4];
      rtb_SFunction_o7_h = canRxData_0_72U.uint8_T_info[5];
      rtb_SFunction_o8_b = canRxData_0_72U.uint8_T_info[6];
      rtb_SFunction_o9_b = canRxData_0_72U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S68>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_jn, rtb_SFunction_o2_p,
                     rtb_SFunction_o3_j, rtb_SFunction_o4_o, rtb_SFunction_o5_j,
                     rtb_SFunction_o6_f, rtb_SFunction_o7_h, rtb_SFunction_o8_b,
                     rtb_SFunction_o9_b, &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S68>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN9_MODE) {
    /* Disable for M-S-Function: '<S68>/S-Function' incorporates:
     *  Outport: '<S43>/CAN_new'
     */
    localB->SFunction_o1_jn = 0;
    localDW->PotValue2_ID_CAN9_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN9' */

  /* RelationalOperator: '<S31>/Equal7' incorporates:
   *  Constant: '<S31>/Constant7'
   */
  rtb_Equal7_g = (RxID_CAN1_s == 31.0);

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN2' incorporates:
   *  EnablePort: '<S36>/Enable'
   */
  if (rtb_Equal7_g) {
    localDW->PotValue2_ID_CAN2_MODE = true;

    /* M-S-Function: '<S54>/S-Function' incorporates:
     *  Constant: '<S36>/Constant7'
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

    /* Outputs for Enabled SubSystem: '<S54>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_ic, rtb_SFunction_o2_c,
                     rtb_SFunction_o3_o, rtb_SFunction_o4_f, rtb_SFunction_o5_h,
                     rtb_SFunction_o6_b, rtb_SFunction_o7_ce, rtb_SFunction_o8_n,
                     rtb_SFunction_o9_c, &localB->EnabledSubsystem_p);

    /* End of Outputs for SubSystem: '<S54>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S54>/S-Function' incorporates:
     *  Outport: '<S36>/CAN_new'
     */
    localB->SFunction_o1_ic = 0;
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN2' */

  /* Outputs for Enabled SubSystem: '<S31>/PotValue2_ID_CAN3' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  /* RelationalOperator: '<S31>/Equal8' incorporates:
   *  Constant: '<S31>/Constant8'
   */
  if (RxID_CAN1_s == 32.0) {
    localDW->PotValue2_ID_CAN3_MODE = true;

    /* M-S-Function: '<S56>/S-Function' incorporates:
     *  Constant: '<S37>/Constant8'
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

    /* Outputs for Enabled SubSystem: '<S56>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_k, rtb_SFunction_o2_e,
                     rtb_SFunction_o3_k, rtb_SFunction_o4_j, rtb_SFunction_o5_nk,
                     rtb_SFunction_o6_dh, rtb_SFunction_o7_p, rtb_SFunction_o8_m,
                     rtb_SFunction_o9_f, &localB->EnabledSubsystem_a);

    /* End of Outputs for SubSystem: '<S56>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S56>/S-Function' incorporates:
     *  Outport: '<S37>/CAN_new'
     */
    localB->SFunction_o1_k = 0;
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of RelationalOperator: '<S31>/Equal8' */
  /* End of Outputs for SubSystem: '<S31>/PotValue2_ID_CAN3' */

  /* Switch generated from: '<S31>/Switch' incorporates:
   *  Switch generated from: '<S31>/Switch1'
   *  Switch generated from: '<S31>/Switch10'
   *  Switch generated from: '<S31>/Switch11'
   *  Switch generated from: '<S31>/Switch12'
   *  Switch generated from: '<S31>/Switch13'
   *  Switch generated from: '<S31>/Switch2'
   *  Switch generated from: '<S31>/Switch3'
   *  Switch generated from: '<S31>/Switch4'
   *  Switch generated from: '<S31>/Switch5'
   *  Switch generated from: '<S31>/Switch6'
   *  Switch generated from: '<S31>/Switch7'
   *  Switch generated from: '<S31>/Switch8'
   *  Switch generated from: '<S31>/Switch9'
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
      /* Switch generated from: '<S31>/Switch1' */
      rtb_signal1_m = localB->SFunction_o1_m;
    } else if (rtb_Equal2_b4) {
      /* Switch generated from: '<S31>/Switch2' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       */
      rtb_signal1_m = localB->SFunction_o1_j;
    } else if (rtb_Equal3_pm) {
      /* Switch generated from: '<S31>/Switch3' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch2'
       */
      rtb_signal1_m = localB->SFunction_o1;
    } else if (rtb_Equal4_nn) {
      /* Switch generated from: '<S31>/Switch4' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       */
      rtb_signal1_m = localB->SFunction_o1_jc;
    } else if (rtb_Equal5_d) {
      /* Switch generated from: '<S31>/Switch5' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       */
      rtb_signal1_m = localB->SFunction_o1_kx;
    } else if (rtb_Equal12) {
      /* Switch generated from: '<S31>/Switch11' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       */
      rtb_signal1_m = localB->SFunction_o1_l;
    } else if (rtb_Equal6_a) {
      /* Switch generated from: '<S31>/Switch7' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       */
      rtb_signal1_m = localB->SFunction_o1_ek;
    } else if (rtb_Equal9_f) {
      /* Switch generated from: '<S31>/Switch8' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       */
      rtb_signal1_m = localB->SFunction_o1_bx;
    } else if (rtb_Equal13) {
      /* Switch generated from: '<S31>/Switch12' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch8'
       */
      rtb_signal1_m = localB->SFunction_o1_b;
    } else if (rtb_Equal10) {
      /* Switch generated from: '<S31>/Switch9' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch12'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch8'
       */
      rtb_signal1_m = localB->SFunction_o1_i;
    } else if (rtb_Equal11) {
      /* Switch generated from: '<S31>/Switch10' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch12'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch8'
       *  Switch generated from: '<S31>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_e;
    } else if (rtb_Equal14) {
      /* Switch generated from: '<S31>/Switch13' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch10'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch12'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch8'
       *  Switch generated from: '<S31>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_jn;
    } else if (rtb_Equal7_g) {
      /* Switch generated from: '<S31>/Switch6' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch10'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch12'
       *  Switch generated from: '<S31>/Switch13'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch8'
       *  Switch generated from: '<S31>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_ic;
    } else {
      /* Switch generated from: '<S31>/Switch8' incorporates:
       *  Switch generated from: '<S31>/Switch1'
       *  Switch generated from: '<S31>/Switch10'
       *  Switch generated from: '<S31>/Switch11'
       *  Switch generated from: '<S31>/Switch12'
       *  Switch generated from: '<S31>/Switch13'
       *  Switch generated from: '<S31>/Switch2'
       *  Switch generated from: '<S31>/Switch3'
       *  Switch generated from: '<S31>/Switch4'
       *  Switch generated from: '<S31>/Switch5'
       *  Switch generated from: '<S31>/Switch6'
       *  Switch generated from: '<S31>/Switch7'
       *  Switch generated from: '<S31>/Switch9'
       */
      rtb_signal1_m = localB->SFunction_o1_k;
    }

    /* Switch generated from: '<S31>/Switch1' incorporates:
     *  Switch generated from: '<S31>/Switch10'
     *  Switch generated from: '<S31>/Switch11'
     *  Switch generated from: '<S31>/Switch12'
     *  Switch generated from: '<S31>/Switch13'
     *  Switch generated from: '<S31>/Switch2'
     *  Switch generated from: '<S31>/Switch3'
     *  Switch generated from: '<S31>/Switch4'
     *  Switch generated from: '<S31>/Switch5'
     *  Switch generated from: '<S31>/Switch6'
     *  Switch generated from: '<S31>/Switch7'
     *  Switch generated from: '<S31>/Switch8'
     *  Switch generated from: '<S31>/Switch9'
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
    } else if (rtb_Equal3_pm) {
      rtb_signal2_n4 = localB->EnabledSubsystem_o1.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_o1.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_o1.In3;
      rtb_signal5 = localB->EnabledSubsystem_o1.In4;
      rtb_signal6 = localB->EnabledSubsystem_o1.In5;
      rtb_signal7 = localB->EnabledSubsystem_o1.In6;
      rtb_signal8 = localB->EnabledSubsystem_o1.In7;
      rtb_signal9 = localB->EnabledSubsystem_o1.In8;
    } else if (rtb_Equal4_nn) {
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
    } else if (rtb_Equal12) {
      rtb_signal2_n4 = localB->EnabledSubsystem_ps.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_ps.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_ps.In3;
      rtb_signal5 = localB->EnabledSubsystem_ps.In4;
      rtb_signal6 = localB->EnabledSubsystem_ps.In5;
      rtb_signal7 = localB->EnabledSubsystem_ps.In6;
      rtb_signal8 = localB->EnabledSubsystem_ps.In7;
      rtb_signal9 = localB->EnabledSubsystem_ps.In8;
    } else if (rtb_Equal6_a) {
      rtb_signal2_n4 = localB->EnabledSubsystem_i.In1;
      rtb_signal3_h2 = localB->EnabledSubsystem_i.In2;
      rtb_signal4_pa = localB->EnabledSubsystem_i.In3;
      rtb_signal5 = localB->EnabledSubsystem_i.In4;
      rtb_signal6 = localB->EnabledSubsystem_i.In5;
      rtb_signal7 = localB->EnabledSubsystem_i.In6;
      rtb_signal8 = localB->EnabledSubsystem_i.In7;
      rtb_signal9 = localB->EnabledSubsystem_i.In8;
    } else {
      if (rtb_Equal9_f) {
        rtb_signal2_n4 = localB->EnabledSubsystem_j.In1;
      } else if (rtb_Equal13) {
        rtb_signal2_n4 = localB->EnabledSubsystem_nn.In1;
      } else if (rtb_Equal10) {
        rtb_signal2_n4 = localB->EnabledSubsystem_o.In1;
      } else if (rtb_Equal11) {
        rtb_signal2_n4 = localB->EnabledSubsystem_f.In1;
      } else if (rtb_Equal14) {
        rtb_signal2_n4 = localB->EnabledSubsystem_k.In1;
      } else if (rtb_Equal7_g) {
        rtb_signal2_n4 = localB->EnabledSubsystem_p.In1;
      } else {
        rtb_signal2_n4 = localB->EnabledSubsystem_a.In1;
      }

      if (rtb_Equal9_f) {
        rtb_signal3_h2 = localB->EnabledSubsystem_j.In2;
      } else if (rtb_Equal13) {
        rtb_signal3_h2 = localB->EnabledSubsystem_nn.In2;
      } else if (rtb_Equal10) {
        rtb_signal3_h2 = localB->EnabledSubsystem_o.In2;
      } else if (rtb_Equal11) {
        rtb_signal3_h2 = localB->EnabledSubsystem_f.In2;
      } else if (rtb_Equal14) {
        rtb_signal3_h2 = localB->EnabledSubsystem_k.In2;
      } else if (rtb_Equal7_g) {
        rtb_signal3_h2 = localB->EnabledSubsystem_p.In2;
      } else {
        rtb_signal3_h2 = localB->EnabledSubsystem_a.In2;
      }

      if (rtb_Equal9_f) {
        rtb_signal4_pa = localB->EnabledSubsystem_j.In3;
      } else if (rtb_Equal13) {
        rtb_signal4_pa = localB->EnabledSubsystem_nn.In3;
      } else if (rtb_Equal10) {
        rtb_signal4_pa = localB->EnabledSubsystem_o.In3;
      } else if (rtb_Equal11) {
        rtb_signal4_pa = localB->EnabledSubsystem_f.In3;
      } else if (rtb_Equal14) {
        rtb_signal4_pa = localB->EnabledSubsystem_k.In3;
      } else if (rtb_Equal7_g) {
        rtb_signal4_pa = localB->EnabledSubsystem_p.In3;
      } else {
        rtb_signal4_pa = localB->EnabledSubsystem_a.In3;
      }

      if (rtb_Equal9_f) {
        rtb_signal5 = localB->EnabledSubsystem_j.In4;
      } else if (rtb_Equal13) {
        rtb_signal5 = localB->EnabledSubsystem_nn.In4;
      } else if (rtb_Equal10) {
        rtb_signal5 = localB->EnabledSubsystem_o.In4;
      } else if (rtb_Equal11) {
        rtb_signal5 = localB->EnabledSubsystem_f.In4;
      } else if (rtb_Equal14) {
        rtb_signal5 = localB->EnabledSubsystem_k.In4;
      } else if (rtb_Equal7_g) {
        rtb_signal5 = localB->EnabledSubsystem_p.In4;
      } else {
        rtb_signal5 = localB->EnabledSubsystem_a.In4;
      }

      if (rtb_Equal9_f) {
        rtb_signal6 = localB->EnabledSubsystem_j.In5;
      } else if (rtb_Equal13) {
        rtb_signal6 = localB->EnabledSubsystem_nn.In5;
      } else if (rtb_Equal10) {
        rtb_signal6 = localB->EnabledSubsystem_o.In5;
      } else if (rtb_Equal11) {
        rtb_signal6 = localB->EnabledSubsystem_f.In5;
      } else if (rtb_Equal14) {
        rtb_signal6 = localB->EnabledSubsystem_k.In5;
      } else if (rtb_Equal7_g) {
        rtb_signal6 = localB->EnabledSubsystem_p.In5;
      } else {
        rtb_signal6 = localB->EnabledSubsystem_a.In5;
      }

      if (rtb_Equal9_f) {
        rtb_signal7 = localB->EnabledSubsystem_j.In6;
      } else if (rtb_Equal13) {
        rtb_signal7 = localB->EnabledSubsystem_nn.In6;
      } else if (rtb_Equal10) {
        rtb_signal7 = localB->EnabledSubsystem_o.In6;
      } else if (rtb_Equal11) {
        rtb_signal7 = localB->EnabledSubsystem_f.In6;
      } else if (rtb_Equal14) {
        rtb_signal7 = localB->EnabledSubsystem_k.In6;
      } else if (rtb_Equal7_g) {
        rtb_signal7 = localB->EnabledSubsystem_p.In6;
      } else {
        rtb_signal7 = localB->EnabledSubsystem_a.In6;
      }

      if (rtb_Equal9_f) {
        rtb_signal8 = localB->EnabledSubsystem_j.In7;
      } else if (rtb_Equal13) {
        rtb_signal8 = localB->EnabledSubsystem_nn.In7;
      } else if (rtb_Equal10) {
        rtb_signal8 = localB->EnabledSubsystem_o.In7;
      } else if (rtb_Equal11) {
        rtb_signal8 = localB->EnabledSubsystem_f.In7;
      } else if (rtb_Equal14) {
        rtb_signal8 = localB->EnabledSubsystem_k.In7;
      } else if (rtb_Equal7_g) {
        rtb_signal8 = localB->EnabledSubsystem_p.In7;
      } else {
        rtb_signal8 = localB->EnabledSubsystem_a.In7;
      }

      if (rtb_Equal9_f) {
        rtb_signal9 = localB->EnabledSubsystem_j.In8;
      } else if (rtb_Equal13) {
        rtb_signal9 = localB->EnabledSubsystem_nn.In8;
      } else if (rtb_Equal10) {
        rtb_signal9 = localB->EnabledSubsystem_o.In8;
      } else if (rtb_Equal11) {
        rtb_signal9 = localB->EnabledSubsystem_f.In8;
      } else if (rtb_Equal14) {
        rtb_signal9 = localB->EnabledSubsystem_k.In8;
      } else if (rtb_Equal7_g) {
        rtb_signal9 = localB->EnabledSubsystem_p.In8;
      } else {
        rtb_signal9 = localB->EnabledSubsystem_a.In8;
      }
    }
  }

  /* End of Switch generated from: '<S31>/Switch' */

  /* Outputs for Enabled SubSystem: '<S18>/Buffer ready' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* Logic: '<S18>/AND2' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant7'
   *  DataStoreRead: '<S18>/Data Store Read10'
   *  RelationalOperator: '<S18>/Equal3'
   *  RelationalOperator: '<S18>/Equal6'
   */
  if ((*rtd_Rx_State_CAN1 == 1.0) && (0.0 == rtb_signal1_m)) {
    /* DataStoreWrite: '<S29>/Data Store Write' incorporates:
     *  Constant: '<S29>/New_Msg'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)2U);

    /* DataStoreWrite: '<S29>/Data Store Write1' incorporates:
     *  Constant: '<S29>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S18>/AND2' */
  /* End of Outputs for SubSystem: '<S18>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S18>/Update message buffers' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  /* Logic: '<S18>/AND3' incorporates:
   *  Constant: '<S18>/Constant4'
   *  Constant: '<S18>/Constant5'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S32>/Constant2'
   *  Constant: '<S32>/SET'
   *  DataStoreRead: '<S18>/Data Store Read9'
   *  Logic: '<S32>/AND'
   *  RelationalOperator: '<S18>/Equal4'
   *  RelationalOperator: '<S18>/Equal7'
   *  RelationalOperator: '<S32>/Equal'
   */
  if ((*rtd_Rx_State_CAN1 == 2.0) && (rtb_signal1_m >= 1.0)) {
    /* DataStoreWrite: '<S32>/Data Store Write1' */
    rtd_Msg_Rx_CAN1->Buffer_1 = rtb_signal2_n4;
    rtd_Msg_Rx_CAN1->Buffer_2 = rtb_signal3_h2;
    rtd_Msg_Rx_CAN1->Buffer_3 = rtb_signal4_pa;
    rtd_Msg_Rx_CAN1->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN1->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN1->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN1->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN1->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S32>/Data Store Write' incorporates:
     *  Constant: '<S32>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S32>/Data Store Write2' incorporates:
     *  Constant: '<S32>/SET'
     */
    *rtd_New_Msg_Ready_CAN1 = true;

    /* DataStoreWrite: '<S32>/Data Store Write5' incorporates:
     *  Constant: '<S32>/Idle_State'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)3U);

    /* DataStoreRead: '<S32>/Local_Time' */
    Rx_msg_ticks_CAN1 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S32>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN1 = Rx_msg_ticks_CAN1;

    /* DataTypeConversion: '<S32>/Cast To Double' */
    Rx_temporal_msg_CAN1 = rtb_signal2_n4;

    /* Outputs for Enabled SubSystem: '<S32>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN1 == 1.0)) {
      /* DataStoreWrite: '<S78>/Data Store Write2' incorporates:
       *  Constant: '<S78>/Constant2'
       */
      *rtd_Toggle_Pin_D12 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S32>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S18>/AND3' */
  /* End of Outputs for SubSystem: '<S18>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S18>/Prepare buffer' incorporates:
   *  EnablePort: '<S30>/Enable'
   */
  /* RelationalOperator: '<S18>/Equal5' incorporates:
   *  Constant: '<S18>/Constant6'
   *  DataStoreRead: '<S18>/Data Store Read4'
   */
  if (*rtd_Rx_State_CAN1 == 0.0) {
    /* DataStoreWrite: '<S30>/Data Store Write' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)1U);

    /* DataStoreWrite: '<S30>/Data Store Write1' incorporates:
     *  Constant: '<S30>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S18>/Equal5' */
  /* End of Outputs for SubSystem: '<S18>/Prepare buffer' */
}

/* System initialize for function-call system: '<S9>/CAN2 Recieve' */
void CAN2Recieve_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S83>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S122>/S-Function' incorporates:
   *  Constant: '<S96>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 1U);

  /* End of SystemInitialize for SubSystem: '<S83>/Sync_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S124>/S-Function' incorporates:
   *  Constant: '<S97>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 11U);

  /* End of SystemInitialize for SubSystem: '<S83>/Vote1_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S126>/S-Function' incorporates:
   *  Constant: '<S98>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 12U);

  /* End of SystemInitialize for SubSystem: '<S83>/Vote2_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S128>/S-Function' incorporates:
   *  Constant: '<S99>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 13U);

  /* End of SystemInitialize for SubSystem: '<S83>/Vote3_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue1_ID_CAN' */

  /* Start for M-S-Function: '<S100>/S-Function' incorporates:
   *  Constant: '<S85>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 22U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue1_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN' */

  /* Start for M-S-Function: '<S102>/S-Function' incorporates:
   *  Constant: '<S86>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 44U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN7' */

  /* Start for M-S-Function: '<S116>/S-Function' incorporates:
   *  Constant: '<S93>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 66U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN7' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN1' */

  /* Start for M-S-Function: '<S104>/S-Function' incorporates:
   *  Constant: '<S87>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 23U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN1' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN4' */

  /* Start for M-S-Function: '<S110>/S-Function' incorporates:
   *  Constant: '<S90>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 46U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN4' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN8' */

  /* Start for M-S-Function: '<S118>/S-Function' incorporates:
   *  Constant: '<S94>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 69U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN8' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN5' */

  /* Start for M-S-Function: '<S112>/S-Function' incorporates:
   *  Constant: '<S91>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 24U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN5' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN6' */

  /* Start for M-S-Function: '<S114>/S-Function' incorporates:
   *  Constant: '<S92>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 48U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN6' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN9' */

  /* Start for M-S-Function: '<S120>/S-Function' incorporates:
   *  Constant: '<S95>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 72U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN9' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN2' */

  /* Start for M-S-Function: '<S106>/S-Function' incorporates:
   *  Constant: '<S88>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 31U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN2' */

  /* SystemInitialize for Enabled SubSystem: '<S83>/PotValue2_ID_CAN3' */

  /* Start for M-S-Function: '<S108>/S-Function' incorporates:
   *  Constant: '<S89>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 32U);

  /* End of SystemInitialize for SubSystem: '<S83>/PotValue2_ID_CAN3' */
}

/* Disable for function-call system: '<S9>/CAN2 Recieve' */
void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S83>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S122>/S-Function' incorporates:
     *  Outport: '<S96>/CAN_new'
     */
    localB->SFunction_o1_cg = 0;
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S124>/S-Function' incorporates:
     *  Outport: '<S97>/CAN_new'
     */
    localB->SFunction_o1_c = 0;
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S126>/S-Function' incorporates:
     *  Outport: '<S98>/CAN_new'
     */
    localB->SFunction_o1_d = 0;
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S128>/S-Function' incorporates:
     *  Outport: '<S99>/CAN_new'
     */
    localB->SFunction_o1 = 0;
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue1_ID_CAN' */
  if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S100>/S-Function' incorporates:
     *  Outport: '<S85>/CAN_new'
     */
    localB->SFunction_o1_jb = 0;
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN' */
  if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S102>/S-Function' incorporates:
     *  Outport: '<S86>/CAN_new'
     */
    localB->SFunction_o1_h = 0;
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN7' */
  if (localDW->PotValue2_ID_CAN7_MODE) {
    /* Disable for M-S-Function: '<S116>/S-Function' incorporates:
     *  Outport: '<S93>/CAN_new'
     */
    localB->SFunction_o1_dm = 0;
    localDW->PotValue2_ID_CAN7_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN7' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN1' */
  if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S104>/S-Function' incorporates:
     *  Outport: '<S87>/CAN_new'
     */
    localB->SFunction_o1_bz = 0;
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN1' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN4' */
  if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S110>/S-Function' incorporates:
     *  Outport: '<S90>/CAN_new'
     */
    localB->SFunction_o1_j = 0;
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN4' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN8' */
  if (localDW->PotValue2_ID_CAN8_MODE) {
    /* Disable for M-S-Function: '<S118>/S-Function' incorporates:
     *  Outport: '<S94>/CAN_new'
     */
    localB->SFunction_o1_k = 0;
    localDW->PotValue2_ID_CAN8_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN8' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN5' */
  if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S112>/S-Function' incorporates:
     *  Outport: '<S91>/CAN_new'
     */
    localB->SFunction_o1_p = 0;
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN5' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN6' */
  if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S114>/S-Function' incorporates:
     *  Outport: '<S92>/CAN_new'
     */
    localB->SFunction_o1_b = 0;
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN6' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN9' */
  if (localDW->PotValue2_ID_CAN9_MODE) {
    /* Disable for M-S-Function: '<S120>/S-Function' incorporates:
     *  Outport: '<S95>/CAN_new'
     */
    localB->SFunction_o1_f = 0;
    localDW->PotValue2_ID_CAN9_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN9' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN2' */
  if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S106>/S-Function' incorporates:
     *  Outport: '<S88>/CAN_new'
     */
    localB->SFunction_o1_jv = 0;
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN2' */

  /* Disable for Enabled SubSystem: '<S83>/PotValue2_ID_CAN3' */
  if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S108>/S-Function' incorporates:
     *  Outport: '<S89>/CAN_new'
     */
    localB->SFunction_o1_m = 0;
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S83>/PotValue2_ID_CAN3' */
}

/* Output and update for function-call system: '<S9>/CAN2 Recieve' */
void CAN2Recieve(const uint16_T *rtd_Local_Ticks, msg_buffer_type
                 *rtd_Msg_Rx_CAN2, uint16_T *rtd_Msg_Rx_Ticks_CAN2, boolean_T
                 *rtd_New_Msg_Ready_CAN2, const uint32_T *rtd_RxID_CAN2, uint8_T
                 *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
                 *rtd_Toggle_Pin_D8, rtB_CAN2Recieve *localB, const
                 rtC_CAN2Recieve *localC, rtDW_CAN2Recieve *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_k;
  uint8_T rtb_SFunction_o3_oi;
  uint8_T rtb_SFunction_o4_ap;
  uint8_T rtb_SFunction_o5_ap;
  uint8_T rtb_SFunction_o6_bc;
  uint8_T rtb_SFunction_o7_b;
  uint8_T rtb_SFunction_o8_g;
  uint8_T rtb_SFunction_o9_es;
  uint8_T rtb_SFunction_o2_b;
  uint8_T rtb_SFunction_o3_ph;
  uint8_T rtb_SFunction_o4_e;
  uint8_T rtb_SFunction_o5_o5;
  uint8_T rtb_SFunction_o6_o4;
  uint8_T rtb_SFunction_o7_hb;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_mk;
  uint8_T rtb_SFunction_o2_a;
  uint8_T rtb_SFunction_o3_lh;
  uint8_T rtb_SFunction_o4_gx;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_bg;
  uint8_T rtb_SFunction_o7_e;
  uint8_T rtb_SFunction_o8_e;
  uint8_T rtb_SFunction_o9_ic;
  uint8_T rtb_SFunction_o2_bg;
  uint8_T rtb_SFunction_o3_n0;
  uint8_T rtb_SFunction_o4_gn;
  uint8_T rtb_SFunction_o5_m2;
  uint8_T rtb_SFunction_o6_p;
  uint8_T rtb_SFunction_o7_eb;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_bs;
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_i4;
  uint8_T rtb_SFunction_o4_ag;
  uint8_T rtb_SFunction_o5_kz;
  uint8_T rtb_SFunction_o6_pd;
  uint8_T rtb_SFunction_o7_pb;
  uint8_T rtb_SFunction_o8_c2;
  uint8_T rtb_SFunction_o9_hf;
  uint8_T rtb_SFunction_o2_b0;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_h;
  uint8_T rtb_SFunction_o5_jp;
  uint8_T rtb_SFunction_o6_fl;
  uint8_T rtb_SFunction_o7_oc;
  uint8_T rtb_SFunction_o8_cka;
  uint8_T rtb_SFunction_o9_k;
  uint8_T rtb_SFunction_o2_o;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_lw;
  uint8_T rtb_SFunction_o6_j;
  uint8_T rtb_SFunction_o7_g;
  uint8_T rtb_SFunction_o8_e5;
  uint8_T rtb_SFunction_o9_o;
  uint8_T rtb_SFunction_o2_oc;
  uint8_T rtb_SFunction_o3_km;
  uint8_T rtb_SFunction_o4_g3;
  uint8_T rtb_SFunction_o5_g;
  uint8_T rtb_SFunction_o6_hp;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_k;
  uint8_T rtb_SFunction_o9_e4;
  uint8_T rtb_SFunction_o2_lw;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_j3;
  uint8_T rtb_SFunction_o5_em;
  uint8_T rtb_SFunction_o6_hpq;
  uint8_T rtb_SFunction_o7_fd;
  uint8_T rtb_SFunction_o8_dt;
  uint8_T rtb_SFunction_o9_g;
  uint8_T rtb_SFunction_o2_d;
  uint8_T rtb_SFunction_o3_c5;
  uint8_T rtb_SFunction_o4_av;
  uint8_T rtb_SFunction_o5_cm;
  uint8_T rtb_SFunction_o6_d0;
  uint8_T rtb_SFunction_o7_de;
  uint8_T rtb_SFunction_o8_eq;
  uint8_T rtb_SFunction_o9_gz;
  uint8_T rtb_SFunction_o2_bgk;
  uint8_T rtb_SFunction_o3_nv;
  uint8_T rtb_SFunction_o4_cj;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_c1;
  uint8_T rtb_SFunction_o7_ov;
  uint8_T rtb_SFunction_o8_g0;
  uint8_T rtb_SFunction_o9_p4;
  uint8_T rtb_SFunction_o2_nj;
  uint8_T rtb_SFunction_o3_d;
  uint8_T rtb_SFunction_o4_bo;
  uint8_T rtb_SFunction_o5_hi;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_mx;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_cb;
  uint8_T rtb_SFunction_o2_m;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_fu;
  uint8_T rtb_SFunction_o5_nl;
  uint8_T rtb_SFunction_o6_ol;
  uint8_T rtb_SFunction_o7_ps;
  uint8_T rtb_SFunction_o8_c25;
  uint8_T rtb_SFunction_o9_dl;
  uint8_T rtb_SFunction_o2_gs;
  uint8_T rtb_SFunction_o3_b2;
  uint8_T rtb_SFunction_o4_k;
  uint8_T rtb_SFunction_o5_le;
  uint8_T rtb_SFunction_o6_fa;
  uint8_T rtb_SFunction_o7_ma;
  uint8_T rtb_SFunction_o8_is;
  uint8_T rtb_SFunction_o9_i1;
  uint8_T rtb_SFunction_o2_b1;
  uint8_T rtb_SFunction_o3_od;
  uint8_T rtb_SFunction_o4_gf;
  uint8_T rtb_SFunction_o5_ci;
  uint8_T rtb_SFunction_o6_cc;
  uint8_T rtb_SFunction_o7_n;
  uint8_T rtb_SFunction_o8_p;
  uint8_T rtb_SFunction_o9_kv;
  int8_T rtb_signal1_gx;
  uint8_T rtb_signal2_ny;
  uint8_T rtb_signal3_p;
  uint8_T rtb_signal4_kp;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;
  boolean_T rtb_Equal10;
  boolean_T rtb_Equal11;
  boolean_T rtb_Equal12;
  boolean_T rtb_Equal13;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal1_ac;
  boolean_T rtb_Equal2_j2;
  boolean_T rtb_Equal3_d;
  boolean_T rtb_Equal4_d5;
  boolean_T rtb_Equal5_lb;
  boolean_T rtb_Equal6_p;
  boolean_T rtb_Equal7_j;
  boolean_T rtb_Equal9_i;
  boolean_T rtb_Equal_cz;

  /* Sum: '<S20>/Sum1' incorporates:
   *  Constant: '<S20>/Constant3'
   *  DataStoreRead: '<S20>/Data Store Read1'
   */
  RxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S20>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN2_counter_s;

  /* DataStoreRead: '<S20>/Data Store Read' */
  RxID_CAN2_s = *rtd_RxID_CAN2;

  /* RelationalOperator: '<S83>/Equal' incorporates:
   *  Constant: '<S83>/Constant'
   */
  rtb_Equal_cz = (RxID_CAN2_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S83>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  if (rtb_Equal_cz) {
    localDW->Sync_ID_CAN_MODE = true;

    /* M-S-Function: '<S122>/S-Function' incorporates:
     *  Constant: '<S96>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_cg = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_cg > 0) {
      /* read the data */
      rtb_SFunction_o2_bg = canRxData_1_1U.uint8_T_info[0];
      rtb_SFunction_o3_n0 = canRxData_1_1U.uint8_T_info[1];
      rtb_SFunction_o4_gn = canRxData_1_1U.uint8_T_info[2];
      rtb_SFunction_o5_m2 = canRxData_1_1U.uint8_T_info[3];
      rtb_SFunction_o6_p = canRxData_1_1U.uint8_T_info[4];
      rtb_SFunction_o7_eb = canRxData_1_1U.uint8_T_info[5];
      rtb_SFunction_o8_a = canRxData_1_1U.uint8_T_info[6];
      rtb_SFunction_o9_bs = canRxData_1_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S122>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_cg, rtb_SFunction_o2_bg,
                     rtb_SFunction_o3_n0, rtb_SFunction_o4_gn,
                     rtb_SFunction_o5_m2, rtb_SFunction_o6_p,
                     rtb_SFunction_o7_eb, rtb_SFunction_o8_a,
                     rtb_SFunction_o9_bs, &localB->EnabledSubsystem_dw);

    /* End of Outputs for SubSystem: '<S122>/Enabled Subsystem' */
  } else if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S122>/S-Function' incorporates:
     *  Outport: '<S96>/CAN_new'
     */
    localB->SFunction_o1_cg = 0;
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/Sync_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal1' incorporates:
   *  Constant: '<S83>/Constant1'
   */
  rtb_Equal1_ac = (RxID_CAN2_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S83>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  if (rtb_Equal1_ac) {
    localDW->Vote1_ID_CAN_MODE = true;

    /* M-S-Function: '<S124>/S-Function' incorporates:
     *  Constant: '<S97>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c = CanIoGetMessage(1, 11U, NULL,
      &canRxData_1_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c > 0) {
      /* read the data */
      rtb_SFunction_o2_a = canRxData_1_11U.uint8_T_info[0];
      rtb_SFunction_o3_lh = canRxData_1_11U.uint8_T_info[1];
      rtb_SFunction_o4_gx = canRxData_1_11U.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_1_11U.uint8_T_info[3];
      rtb_SFunction_o6_bg = canRxData_1_11U.uint8_T_info[4];
      rtb_SFunction_o7_e = canRxData_1_11U.uint8_T_info[5];
      rtb_SFunction_o8_e = canRxData_1_11U.uint8_T_info[6];
      rtb_SFunction_o9_ic = canRxData_1_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S124>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_c, rtb_SFunction_o2_a,
                     rtb_SFunction_o3_lh, rtb_SFunction_o4_gx,
                     rtb_SFunction_o5_e, rtb_SFunction_o6_bg, rtb_SFunction_o7_e,
                     rtb_SFunction_o8_e, rtb_SFunction_o9_ic,
                     &localB->EnabledSubsystem_dv);

    /* End of Outputs for SubSystem: '<S124>/Enabled Subsystem' */
  } else if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S124>/S-Function' incorporates:
     *  Outport: '<S97>/CAN_new'
     */
    localB->SFunction_o1_c = 0;
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal2' incorporates:
   *  Constant: '<S83>/Constant2'
   */
  rtb_Equal2_j2 = (RxID_CAN2_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S83>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S98>/Enable'
   */
  if (rtb_Equal2_j2) {
    localDW->Vote2_ID_CAN_MODE = true;

    /* M-S-Function: '<S126>/S-Function' incorporates:
     *  Constant: '<S98>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_d = CanIoGetMessage(1, 12U, NULL,
      &canRxData_1_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_d > 0) {
      /* read the data */
      rtb_SFunction_o2_b = canRxData_1_12U.uint8_T_info[0];
      rtb_SFunction_o3_ph = canRxData_1_12U.uint8_T_info[1];
      rtb_SFunction_o4_e = canRxData_1_12U.uint8_T_info[2];
      rtb_SFunction_o5_o5 = canRxData_1_12U.uint8_T_info[3];
      rtb_SFunction_o6_o4 = canRxData_1_12U.uint8_T_info[4];
      rtb_SFunction_o7_hb = canRxData_1_12U.uint8_T_info[5];
      rtb_SFunction_o8_f = canRxData_1_12U.uint8_T_info[6];
      rtb_SFunction_o9_mk = canRxData_1_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S126>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_d, rtb_SFunction_o2_b,
                     rtb_SFunction_o3_ph, rtb_SFunction_o4_e,
                     rtb_SFunction_o5_o5, rtb_SFunction_o6_o4,
                     rtb_SFunction_o7_hb, rtb_SFunction_o8_f,
                     rtb_SFunction_o9_mk, &localB->EnabledSubsystem_pkh);

    /* End of Outputs for SubSystem: '<S126>/Enabled Subsystem' */
  } else if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S126>/S-Function' incorporates:
     *  Outport: '<S98>/CAN_new'
     */
    localB->SFunction_o1_d = 0;
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal3' incorporates:
   *  Constant: '<S83>/Constant3'
   */
  rtb_Equal3_d = (RxID_CAN2_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S83>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S99>/Enable'
   */
  if (rtb_Equal3_d) {
    localDW->Vote3_ID_CAN_MODE = true;

    /* M-S-Function: '<S128>/S-Function' incorporates:
     *  Constant: '<S99>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(1, 13U, NULL,
      &canRxData_1_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_k = canRxData_1_13U.uint8_T_info[0];
      rtb_SFunction_o3_oi = canRxData_1_13U.uint8_T_info[1];
      rtb_SFunction_o4_ap = canRxData_1_13U.uint8_T_info[2];
      rtb_SFunction_o5_ap = canRxData_1_13U.uint8_T_info[3];
      rtb_SFunction_o6_bc = canRxData_1_13U.uint8_T_info[4];
      rtb_SFunction_o7_b = canRxData_1_13U.uint8_T_info[5];
      rtb_SFunction_o8_g = canRxData_1_13U.uint8_T_info[6];
      rtb_SFunction_o9_es = canRxData_1_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S128>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1, rtb_SFunction_o2_k,
                     rtb_SFunction_o3_oi, rtb_SFunction_o4_ap,
                     rtb_SFunction_o5_ap, rtb_SFunction_o6_bc,
                     rtb_SFunction_o7_b, rtb_SFunction_o8_g, rtb_SFunction_o9_es,
                     &localB->EnabledSubsystem_pn);

    /* End of Outputs for SubSystem: '<S128>/Enabled Subsystem' */
  } else if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S128>/S-Function' incorporates:
     *  Outport: '<S99>/CAN_new'
     */
    localB->SFunction_o1 = 0;
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal4' */
  rtb_Equal4_d5 = (RxID_CAN2_s == localC->Product);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue1_ID_CAN' incorporates:
   *  EnablePort: '<S85>/Enable'
   */
  if (rtb_Equal4_d5) {
    localDW->PotValue1_ID_CAN_MODE = true;

    /* M-S-Function: '<S100>/S-Function' incorporates:
     *  Constant: '<S85>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_jb = CanIoGetMessage(1, 22U, NULL,
      &canRxData_1_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_jb > 0) {
      /* read the data */
      rtb_SFunction_o2_b1 = canRxData_1_22U.uint8_T_info[0];
      rtb_SFunction_o3_od = canRxData_1_22U.uint8_T_info[1];
      rtb_SFunction_o4_gf = canRxData_1_22U.uint8_T_info[2];
      rtb_SFunction_o5_ci = canRxData_1_22U.uint8_T_info[3];
      rtb_SFunction_o6_cc = canRxData_1_22U.uint8_T_info[4];
      rtb_SFunction_o7_n = canRxData_1_22U.uint8_T_info[5];
      rtb_SFunction_o8_p = canRxData_1_22U.uint8_T_info[6];
      rtb_SFunction_o9_kv = canRxData_1_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_jb, rtb_SFunction_o2_b1,
                     rtb_SFunction_o3_od, rtb_SFunction_o4_gf,
                     rtb_SFunction_o5_ci, rtb_SFunction_o6_cc,
                     rtb_SFunction_o7_n, rtb_SFunction_o8_p, rtb_SFunction_o9_kv,
                     &localB->EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */
  } else if (localDW->PotValue1_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S100>/S-Function' incorporates:
     *  Outport: '<S85>/CAN_new'
     */
    localB->SFunction_o1_jb = 0;
    localDW->PotValue1_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue1_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal5' */
  rtb_Equal5_lb = (RxID_CAN2_s == localC->Product1);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtb_Equal5_lb) {
    localDW->PotValue2_ID_CAN_MODE = true;

    /* M-S-Function: '<S102>/S-Function' incorporates:
     *  Constant: '<S86>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_h = CanIoGetMessage(1, 44U, NULL,
      &canRxData_1_44U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_h > 0) {
      /* read the data */
      rtb_SFunction_o2_gs = canRxData_1_44U.uint8_T_info[0];
      rtb_SFunction_o3_b2 = canRxData_1_44U.uint8_T_info[1];
      rtb_SFunction_o4_k = canRxData_1_44U.uint8_T_info[2];
      rtb_SFunction_o5_le = canRxData_1_44U.uint8_T_info[3];
      rtb_SFunction_o6_fa = canRxData_1_44U.uint8_T_info[4];
      rtb_SFunction_o7_ma = canRxData_1_44U.uint8_T_info[5];
      rtb_SFunction_o8_is = canRxData_1_44U.uint8_T_info[6];
      rtb_SFunction_o9_i1 = canRxData_1_44U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S102>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_h, rtb_SFunction_o2_gs,
                     rtb_SFunction_o3_b2, rtb_SFunction_o4_k,
                     rtb_SFunction_o5_le, rtb_SFunction_o6_fa,
                     rtb_SFunction_o7_ma, rtb_SFunction_o8_is,
                     rtb_SFunction_o9_i1, &localB->EnabledSubsystem_d);

    /* End of Outputs for SubSystem: '<S102>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN_MODE) {
    /* Disable for M-S-Function: '<S102>/S-Function' incorporates:
     *  Outport: '<S86>/CAN_new'
     */
    localB->SFunction_o1_h = 0;
    localDW->PotValue2_ID_CAN_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN' */

  /* RelationalOperator: '<S83>/Equal12' */
  rtb_Equal12 = (RxID_CAN2_s == localC->Product6);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN7' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_Equal12) {
    localDW->PotValue2_ID_CAN7_MODE = true;

    /* M-S-Function: '<S116>/S-Function' incorporates:
     *  Constant: '<S93>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_dm = CanIoGetMessage(1, 66U, NULL,
      &canRxData_1_66U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_dm > 0) {
      /* read the data */
      rtb_SFunction_o2_o = canRxData_1_66U.uint8_T_info[0];
      rtb_SFunction_o3_a = canRxData_1_66U.uint8_T_info[1];
      rtb_SFunction_o4_c = canRxData_1_66U.uint8_T_info[2];
      rtb_SFunction_o5_lw = canRxData_1_66U.uint8_T_info[3];
      rtb_SFunction_o6_j = canRxData_1_66U.uint8_T_info[4];
      rtb_SFunction_o7_g = canRxData_1_66U.uint8_T_info[5];
      rtb_SFunction_o8_e5 = canRxData_1_66U.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_1_66U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S116>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_dm, rtb_SFunction_o2_o,
                     rtb_SFunction_o3_a, rtb_SFunction_o4_c, rtb_SFunction_o5_lw,
                     rtb_SFunction_o6_j, rtb_SFunction_o7_g, rtb_SFunction_o8_e5,
                     rtb_SFunction_o9_o, &localB->EnabledSubsystem_j);

    /* End of Outputs for SubSystem: '<S116>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN7_MODE) {
    /* Disable for M-S-Function: '<S116>/S-Function' incorporates:
     *  Outport: '<S93>/CAN_new'
     */
    localB->SFunction_o1_dm = 0;
    localDW->PotValue2_ID_CAN7_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN7' */

  /* RelationalOperator: '<S83>/Equal6' */
  rtb_Equal6_p = (RxID_CAN2_s == localC->Product2);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN1' incorporates:
   *  EnablePort: '<S87>/Enable'
   */
  if (rtb_Equal6_p) {
    localDW->PotValue2_ID_CAN1_MODE = true;

    /* M-S-Function: '<S104>/S-Function' incorporates:
     *  Constant: '<S87>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_bz = CanIoGetMessage(1, 23U, NULL,
      &canRxData_1_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_bz > 0) {
      /* read the data */
      rtb_SFunction_o2_m = canRxData_1_23U.uint8_T_info[0];
      rtb_SFunction_o3_m = canRxData_1_23U.uint8_T_info[1];
      rtb_SFunction_o4_fu = canRxData_1_23U.uint8_T_info[2];
      rtb_SFunction_o5_nl = canRxData_1_23U.uint8_T_info[3];
      rtb_SFunction_o6_ol = canRxData_1_23U.uint8_T_info[4];
      rtb_SFunction_o7_ps = canRxData_1_23U.uint8_T_info[5];
      rtb_SFunction_o8_c25 = canRxData_1_23U.uint8_T_info[6];
      rtb_SFunction_o9_dl = canRxData_1_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S104>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_bz, rtb_SFunction_o2_m,
                     rtb_SFunction_o3_m, rtb_SFunction_o4_fu,
                     rtb_SFunction_o5_nl, rtb_SFunction_o6_ol,
                     rtb_SFunction_o7_ps, rtb_SFunction_o8_c25,
                     rtb_SFunction_o9_dl, &localB->EnabledSubsystem_o);

    /* End of Outputs for SubSystem: '<S104>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN1_MODE) {
    /* Disable for M-S-Function: '<S104>/S-Function' incorporates:
     *  Outport: '<S87>/CAN_new'
     */
    localB->SFunction_o1_bz = 0;
    localDW->PotValue2_ID_CAN1_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN1' */

  /* RelationalOperator: '<S83>/Equal9' */
  rtb_Equal9_i = (RxID_CAN2_s == localC->Product3);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN4' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_Equal9_i) {
    localDW->PotValue2_ID_CAN4_MODE = true;

    /* M-S-Function: '<S110>/S-Function' incorporates:
     *  Constant: '<S90>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_j = CanIoGetMessage(1, 46U, NULL,
      &canRxData_1_46U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_j > 0) {
      /* read the data */
      rtb_SFunction_o2_d = canRxData_1_46U.uint8_T_info[0];
      rtb_SFunction_o3_c5 = canRxData_1_46U.uint8_T_info[1];
      rtb_SFunction_o4_av = canRxData_1_46U.uint8_T_info[2];
      rtb_SFunction_o5_cm = canRxData_1_46U.uint8_T_info[3];
      rtb_SFunction_o6_d0 = canRxData_1_46U.uint8_T_info[4];
      rtb_SFunction_o7_de = canRxData_1_46U.uint8_T_info[5];
      rtb_SFunction_o8_eq = canRxData_1_46U.uint8_T_info[6];
      rtb_SFunction_o9_gz = canRxData_1_46U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S110>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_j, rtb_SFunction_o2_d,
                     rtb_SFunction_o3_c5, rtb_SFunction_o4_av,
                     rtb_SFunction_o5_cm, rtb_SFunction_o6_d0,
                     rtb_SFunction_o7_de, rtb_SFunction_o8_eq,
                     rtb_SFunction_o9_gz, &localB->EnabledSubsystem_f);

    /* End of Outputs for SubSystem: '<S110>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN4_MODE) {
    /* Disable for M-S-Function: '<S110>/S-Function' incorporates:
     *  Outport: '<S90>/CAN_new'
     */
    localB->SFunction_o1_j = 0;
    localDW->PotValue2_ID_CAN4_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN4' */

  /* RelationalOperator: '<S83>/Equal13' */
  rtb_Equal13 = (RxID_CAN2_s == localC->Product7);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN8' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (rtb_Equal13) {
    localDW->PotValue2_ID_CAN8_MODE = true;

    /* M-S-Function: '<S118>/S-Function' incorporates:
     *  Constant: '<S94>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(1, 69U, NULL,
      &canRxData_1_69U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_b0 = canRxData_1_69U.uint8_T_info[0];
      rtb_SFunction_o3_e = canRxData_1_69U.uint8_T_info[1];
      rtb_SFunction_o4_h = canRxData_1_69U.uint8_T_info[2];
      rtb_SFunction_o5_jp = canRxData_1_69U.uint8_T_info[3];
      rtb_SFunction_o6_fl = canRxData_1_69U.uint8_T_info[4];
      rtb_SFunction_o7_oc = canRxData_1_69U.uint8_T_info[5];
      rtb_SFunction_o8_cka = canRxData_1_69U.uint8_T_info[6];
      rtb_SFunction_o9_k = canRxData_1_69U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S118>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_k, rtb_SFunction_o2_b0,
                     rtb_SFunction_o3_e, rtb_SFunction_o4_h, rtb_SFunction_o5_jp,
                     rtb_SFunction_o6_fl, rtb_SFunction_o7_oc,
                     rtb_SFunction_o8_cka, rtb_SFunction_o9_k,
                     &localB->EnabledSubsystem_pk);

    /* End of Outputs for SubSystem: '<S118>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN8_MODE) {
    /* Disable for M-S-Function: '<S118>/S-Function' incorporates:
     *  Outport: '<S94>/CAN_new'
     */
    localB->SFunction_o1_k = 0;
    localDW->PotValue2_ID_CAN8_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN8' */

  /* RelationalOperator: '<S83>/Equal10' */
  rtb_Equal10 = (RxID_CAN2_s == localC->Product4);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN5' incorporates:
   *  EnablePort: '<S91>/Enable'
   */
  if (rtb_Equal10) {
    localDW->PotValue2_ID_CAN5_MODE = true;

    /* M-S-Function: '<S112>/S-Function' incorporates:
     *  Constant: '<S91>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_p = CanIoGetMessage(1, 24U, NULL,
      &canRxData_1_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_p > 0) {
      /* read the data */
      rtb_SFunction_o2_lw = canRxData_1_24U.uint8_T_info[0];
      rtb_SFunction_o3_b = canRxData_1_24U.uint8_T_info[1];
      rtb_SFunction_o4_j3 = canRxData_1_24U.uint8_T_info[2];
      rtb_SFunction_o5_em = canRxData_1_24U.uint8_T_info[3];
      rtb_SFunction_o6_hpq = canRxData_1_24U.uint8_T_info[4];
      rtb_SFunction_o7_fd = canRxData_1_24U.uint8_T_info[5];
      rtb_SFunction_o8_dt = canRxData_1_24U.uint8_T_info[6];
      rtb_SFunction_o9_g = canRxData_1_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S112>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_p, rtb_SFunction_o2_lw,
                     rtb_SFunction_o3_b, rtb_SFunction_o4_j3,
                     rtb_SFunction_o5_em, rtb_SFunction_o6_hpq,
                     rtb_SFunction_o7_fd, rtb_SFunction_o8_dt,
                     rtb_SFunction_o9_g, &localB->EnabledSubsystem_oe);

    /* End of Outputs for SubSystem: '<S112>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN5_MODE) {
    /* Disable for M-S-Function: '<S112>/S-Function' incorporates:
     *  Outport: '<S91>/CAN_new'
     */
    localB->SFunction_o1_p = 0;
    localDW->PotValue2_ID_CAN5_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN5' */

  /* RelationalOperator: '<S83>/Equal11' */
  rtb_Equal11 = (RxID_CAN2_s == localC->Product5);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN6' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtb_Equal11) {
    localDW->PotValue2_ID_CAN6_MODE = true;

    /* M-S-Function: '<S114>/S-Function' incorporates:
     *  Constant: '<S92>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(1, 48U, NULL,
      &canRxData_1_48U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_oc = canRxData_1_48U.uint8_T_info[0];
      rtb_SFunction_o3_km = canRxData_1_48U.uint8_T_info[1];
      rtb_SFunction_o4_g3 = canRxData_1_48U.uint8_T_info[2];
      rtb_SFunction_o5_g = canRxData_1_48U.uint8_T_info[3];
      rtb_SFunction_o6_hp = canRxData_1_48U.uint8_T_info[4];
      rtb_SFunction_o7_d = canRxData_1_48U.uint8_T_info[5];
      rtb_SFunction_o8_k = canRxData_1_48U.uint8_T_info[6];
      rtb_SFunction_o9_e4 = canRxData_1_48U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S114>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_b, rtb_SFunction_o2_oc,
                     rtb_SFunction_o3_km, rtb_SFunction_o4_g3,
                     rtb_SFunction_o5_g, rtb_SFunction_o6_hp, rtb_SFunction_o7_d,
                     rtb_SFunction_o8_k, rtb_SFunction_o9_e4,
                     &localB->EnabledSubsystem_p);

    /* End of Outputs for SubSystem: '<S114>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN6_MODE) {
    /* Disable for M-S-Function: '<S114>/S-Function' incorporates:
     *  Outport: '<S92>/CAN_new'
     */
    localB->SFunction_o1_b = 0;
    localDW->PotValue2_ID_CAN6_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN6' */

  /* RelationalOperator: '<S83>/Equal14' */
  rtb_Equal14 = (RxID_CAN2_s == localC->Product8);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN9' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_Equal14) {
    localDW->PotValue2_ID_CAN9_MODE = true;

    /* M-S-Function: '<S120>/S-Function' incorporates:
     *  Constant: '<S95>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_f = CanIoGetMessage(1, 72U, NULL,
      &canRxData_1_72U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_f > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_1_72U.uint8_T_info[0];
      rtb_SFunction_o3_i4 = canRxData_1_72U.uint8_T_info[1];
      rtb_SFunction_o4_ag = canRxData_1_72U.uint8_T_info[2];
      rtb_SFunction_o5_kz = canRxData_1_72U.uint8_T_info[3];
      rtb_SFunction_o6_pd = canRxData_1_72U.uint8_T_info[4];
      rtb_SFunction_o7_pb = canRxData_1_72U.uint8_T_info[5];
      rtb_SFunction_o8_c2 = canRxData_1_72U.uint8_T_info[6];
      rtb_SFunction_o9_hf = canRxData_1_72U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S120>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_f, rtb_SFunction_o2_f,
                     rtb_SFunction_o3_i4, rtb_SFunction_o4_ag,
                     rtb_SFunction_o5_kz, rtb_SFunction_o6_pd,
                     rtb_SFunction_o7_pb, rtb_SFunction_o8_c2,
                     rtb_SFunction_o9_hf, &localB->EnabledSubsystem_ae);

    /* End of Outputs for SubSystem: '<S120>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN9_MODE) {
    /* Disable for M-S-Function: '<S120>/S-Function' incorporates:
     *  Outport: '<S95>/CAN_new'
     */
    localB->SFunction_o1_f = 0;
    localDW->PotValue2_ID_CAN9_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN9' */

  /* RelationalOperator: '<S83>/Equal7' incorporates:
   *  Constant: '<S83>/Constant7'
   */
  rtb_Equal7_j = (RxID_CAN2_s == 31.0);

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN2' incorporates:
   *  EnablePort: '<S88>/Enable'
   */
  if (rtb_Equal7_j) {
    localDW->PotValue2_ID_CAN2_MODE = true;

    /* M-S-Function: '<S106>/S-Function' incorporates:
     *  Constant: '<S88>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_jv = CanIoGetMessage(1, 31U, NULL,
      &canRxData_1_31U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_jv > 0) {
      /* read the data */
      rtb_SFunction_o2_nj = canRxData_1_31U.uint8_T_info[0];
      rtb_SFunction_o3_d = canRxData_1_31U.uint8_T_info[1];
      rtb_SFunction_o4_bo = canRxData_1_31U.uint8_T_info[2];
      rtb_SFunction_o5_hi = canRxData_1_31U.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_1_31U.uint8_T_info[4];
      rtb_SFunction_o7_mx = canRxData_1_31U.uint8_T_info[5];
      rtb_SFunction_o8_l = canRxData_1_31U.uint8_T_info[6];
      rtb_SFunction_o9_cb = canRxData_1_31U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S106>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_jv, rtb_SFunction_o2_nj,
                     rtb_SFunction_o3_d, rtb_SFunction_o4_bo,
                     rtb_SFunction_o5_hi, rtb_SFunction_o6_k,
                     rtb_SFunction_o7_mx, rtb_SFunction_o8_l,
                     rtb_SFunction_o9_cb, &localB->EnabledSubsystem_e);

    /* End of Outputs for SubSystem: '<S106>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN2_MODE) {
    /* Disable for M-S-Function: '<S106>/S-Function' incorporates:
     *  Outport: '<S88>/CAN_new'
     */
    localB->SFunction_o1_jv = 0;
    localDW->PotValue2_ID_CAN2_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN2' */

  /* Outputs for Enabled SubSystem: '<S83>/PotValue2_ID_CAN3' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  /* RelationalOperator: '<S83>/Equal8' incorporates:
   *  Constant: '<S83>/Constant8'
   */
  if (RxID_CAN2_s == 32.0) {
    localDW->PotValue2_ID_CAN3_MODE = true;

    /* M-S-Function: '<S108>/S-Function' incorporates:
     *  Constant: '<S89>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(1, 32U, NULL,
      &canRxData_1_32U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_bgk = canRxData_1_32U.uint8_T_info[0];
      rtb_SFunction_o3_nv = canRxData_1_32U.uint8_T_info[1];
      rtb_SFunction_o4_cj = canRxData_1_32U.uint8_T_info[2];
      rtb_SFunction_o5_f = canRxData_1_32U.uint8_T_info[3];
      rtb_SFunction_o6_c1 = canRxData_1_32U.uint8_T_info[4];
      rtb_SFunction_o7_ov = canRxData_1_32U.uint8_T_info[5];
      rtb_SFunction_o8_g0 = canRxData_1_32U.uint8_T_info[6];
      rtb_SFunction_o9_p4 = canRxData_1_32U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S108>/Enabled Subsystem' */
    EnabledSubsystem(localB->SFunction_o1_m, rtb_SFunction_o2_bgk,
                     rtb_SFunction_o3_nv, rtb_SFunction_o4_cj,
                     rtb_SFunction_o5_f, rtb_SFunction_o6_c1,
                     rtb_SFunction_o7_ov, rtb_SFunction_o8_g0,
                     rtb_SFunction_o9_p4, &localB->EnabledSubsystem_a);

    /* End of Outputs for SubSystem: '<S108>/Enabled Subsystem' */
  } else if (localDW->PotValue2_ID_CAN3_MODE) {
    /* Disable for M-S-Function: '<S108>/S-Function' incorporates:
     *  Outport: '<S89>/CAN_new'
     */
    localB->SFunction_o1_m = 0;
    localDW->PotValue2_ID_CAN3_MODE = false;
  }

  /* End of RelationalOperator: '<S83>/Equal8' */
  /* End of Outputs for SubSystem: '<S83>/PotValue2_ID_CAN3' */

  /* Switch generated from: '<S83>/Switch' incorporates:
   *  Switch generated from: '<S83>/Switch1'
   *  Switch generated from: '<S83>/Switch10'
   *  Switch generated from: '<S83>/Switch11'
   *  Switch generated from: '<S83>/Switch12'
   *  Switch generated from: '<S83>/Switch13'
   *  Switch generated from: '<S83>/Switch2'
   *  Switch generated from: '<S83>/Switch3'
   *  Switch generated from: '<S83>/Switch4'
   *  Switch generated from: '<S83>/Switch5'
   *  Switch generated from: '<S83>/Switch6'
   *  Switch generated from: '<S83>/Switch7'
   *  Switch generated from: '<S83>/Switch8'
   *  Switch generated from: '<S83>/Switch9'
   */
  if (rtb_Equal_cz) {
    rtb_signal1_gx = localB->SFunction_o1_cg;
    rtb_signal2_ny = localB->EnabledSubsystem_dw.In1;
    rtb_signal3_p = localB->EnabledSubsystem_dw.In2;
    rtb_signal4_kp = localB->EnabledSubsystem_dw.In3;
    rtb_signal5 = localB->EnabledSubsystem_dw.In4;
    rtb_signal6 = localB->EnabledSubsystem_dw.In5;
    rtb_signal7 = localB->EnabledSubsystem_dw.In6;
    rtb_signal8 = localB->EnabledSubsystem_dw.In7;
    rtb_signal9 = localB->EnabledSubsystem_dw.In8;
  } else {
    if (rtb_Equal1_ac) {
      /* Switch generated from: '<S83>/Switch1' */
      rtb_signal1_gx = localB->SFunction_o1_c;
    } else if (rtb_Equal2_j2) {
      /* Switch generated from: '<S83>/Switch2' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       */
      rtb_signal1_gx = localB->SFunction_o1_d;
    } else if (rtb_Equal3_d) {
      /* Switch generated from: '<S83>/Switch3' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch2'
       */
      rtb_signal1_gx = localB->SFunction_o1;
    } else if (rtb_Equal4_d5) {
      /* Switch generated from: '<S83>/Switch4' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       */
      rtb_signal1_gx = localB->SFunction_o1_jb;
    } else if (rtb_Equal5_lb) {
      /* Switch generated from: '<S83>/Switch5' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       */
      rtb_signal1_gx = localB->SFunction_o1_h;
    } else if (rtb_Equal12) {
      /* Switch generated from: '<S83>/Switch11' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       */
      rtb_signal1_gx = localB->SFunction_o1_dm;
    } else if (rtb_Equal6_p) {
      /* Switch generated from: '<S83>/Switch7' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       */
      rtb_signal1_gx = localB->SFunction_o1_bz;
    } else if (rtb_Equal9_i) {
      /* Switch generated from: '<S83>/Switch8' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       */
      rtb_signal1_gx = localB->SFunction_o1_j;
    } else if (rtb_Equal13) {
      /* Switch generated from: '<S83>/Switch12' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch8'
       */
      rtb_signal1_gx = localB->SFunction_o1_k;
    } else if (rtb_Equal10) {
      /* Switch generated from: '<S83>/Switch9' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch12'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch8'
       */
      rtb_signal1_gx = localB->SFunction_o1_p;
    } else if (rtb_Equal11) {
      /* Switch generated from: '<S83>/Switch10' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch12'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch8'
       *  Switch generated from: '<S83>/Switch9'
       */
      rtb_signal1_gx = localB->SFunction_o1_b;
    } else if (rtb_Equal14) {
      /* Switch generated from: '<S83>/Switch13' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch10'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch12'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch8'
       *  Switch generated from: '<S83>/Switch9'
       */
      rtb_signal1_gx = localB->SFunction_o1_f;
    } else if (rtb_Equal7_j) {
      /* Switch generated from: '<S83>/Switch6' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch10'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch12'
       *  Switch generated from: '<S83>/Switch13'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch8'
       *  Switch generated from: '<S83>/Switch9'
       */
      rtb_signal1_gx = localB->SFunction_o1_jv;
    } else {
      /* Switch generated from: '<S83>/Switch8' incorporates:
       *  Switch generated from: '<S83>/Switch1'
       *  Switch generated from: '<S83>/Switch10'
       *  Switch generated from: '<S83>/Switch11'
       *  Switch generated from: '<S83>/Switch12'
       *  Switch generated from: '<S83>/Switch13'
       *  Switch generated from: '<S83>/Switch2'
       *  Switch generated from: '<S83>/Switch3'
       *  Switch generated from: '<S83>/Switch4'
       *  Switch generated from: '<S83>/Switch5'
       *  Switch generated from: '<S83>/Switch6'
       *  Switch generated from: '<S83>/Switch7'
       *  Switch generated from: '<S83>/Switch9'
       */
      rtb_signal1_gx = localB->SFunction_o1_m;
    }

    /* Switch generated from: '<S83>/Switch1' incorporates:
     *  Switch generated from: '<S83>/Switch10'
     *  Switch generated from: '<S83>/Switch11'
     *  Switch generated from: '<S83>/Switch12'
     *  Switch generated from: '<S83>/Switch13'
     *  Switch generated from: '<S83>/Switch2'
     *  Switch generated from: '<S83>/Switch3'
     *  Switch generated from: '<S83>/Switch4'
     *  Switch generated from: '<S83>/Switch5'
     *  Switch generated from: '<S83>/Switch6'
     *  Switch generated from: '<S83>/Switch7'
     *  Switch generated from: '<S83>/Switch8'
     *  Switch generated from: '<S83>/Switch9'
     */
    if (rtb_Equal1_ac) {
      rtb_signal2_ny = localB->EnabledSubsystem_dv.In1;
      rtb_signal3_p = localB->EnabledSubsystem_dv.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_dv.In3;
      rtb_signal5 = localB->EnabledSubsystem_dv.In4;
      rtb_signal6 = localB->EnabledSubsystem_dv.In5;
      rtb_signal7 = localB->EnabledSubsystem_dv.In6;
      rtb_signal8 = localB->EnabledSubsystem_dv.In7;
      rtb_signal9 = localB->EnabledSubsystem_dv.In8;
    } else if (rtb_Equal2_j2) {
      rtb_signal2_ny = localB->EnabledSubsystem_pkh.In1;
      rtb_signal3_p = localB->EnabledSubsystem_pkh.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_pkh.In3;
      rtb_signal5 = localB->EnabledSubsystem_pkh.In4;
      rtb_signal6 = localB->EnabledSubsystem_pkh.In5;
      rtb_signal7 = localB->EnabledSubsystem_pkh.In6;
      rtb_signal8 = localB->EnabledSubsystem_pkh.In7;
      rtb_signal9 = localB->EnabledSubsystem_pkh.In8;
    } else if (rtb_Equal3_d) {
      rtb_signal2_ny = localB->EnabledSubsystem_pn.In1;
      rtb_signal3_p = localB->EnabledSubsystem_pn.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_pn.In3;
      rtb_signal5 = localB->EnabledSubsystem_pn.In4;
      rtb_signal6 = localB->EnabledSubsystem_pn.In5;
      rtb_signal7 = localB->EnabledSubsystem_pn.In6;
      rtb_signal8 = localB->EnabledSubsystem_pn.In7;
      rtb_signal9 = localB->EnabledSubsystem_pn.In8;
    } else if (rtb_Equal4_d5) {
      rtb_signal2_ny = localB->EnabledSubsystem_i.In1;
      rtb_signal3_p = localB->EnabledSubsystem_i.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_i.In3;
      rtb_signal5 = localB->EnabledSubsystem_i.In4;
      rtb_signal6 = localB->EnabledSubsystem_i.In5;
      rtb_signal7 = localB->EnabledSubsystem_i.In6;
      rtb_signal8 = localB->EnabledSubsystem_i.In7;
      rtb_signal9 = localB->EnabledSubsystem_i.In8;
    } else if (rtb_Equal5_lb) {
      rtb_signal2_ny = localB->EnabledSubsystem_d.In1;
      rtb_signal3_p = localB->EnabledSubsystem_d.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_d.In3;
      rtb_signal5 = localB->EnabledSubsystem_d.In4;
      rtb_signal6 = localB->EnabledSubsystem_d.In5;
      rtb_signal7 = localB->EnabledSubsystem_d.In6;
      rtb_signal8 = localB->EnabledSubsystem_d.In7;
      rtb_signal9 = localB->EnabledSubsystem_d.In8;
    } else if (rtb_Equal12) {
      rtb_signal2_ny = localB->EnabledSubsystem_j.In1;
      rtb_signal3_p = localB->EnabledSubsystem_j.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_j.In3;
      rtb_signal5 = localB->EnabledSubsystem_j.In4;
      rtb_signal6 = localB->EnabledSubsystem_j.In5;
      rtb_signal7 = localB->EnabledSubsystem_j.In6;
      rtb_signal8 = localB->EnabledSubsystem_j.In7;
      rtb_signal9 = localB->EnabledSubsystem_j.In8;
    } else if (rtb_Equal6_p) {
      rtb_signal2_ny = localB->EnabledSubsystem_o.In1;
      rtb_signal3_p = localB->EnabledSubsystem_o.In2;
      rtb_signal4_kp = localB->EnabledSubsystem_o.In3;
      rtb_signal5 = localB->EnabledSubsystem_o.In4;
      rtb_signal6 = localB->EnabledSubsystem_o.In5;
      rtb_signal7 = localB->EnabledSubsystem_o.In6;
      rtb_signal8 = localB->EnabledSubsystem_o.In7;
      rtb_signal9 = localB->EnabledSubsystem_o.In8;
    } else {
      if (rtb_Equal9_i) {
        rtb_signal2_ny = localB->EnabledSubsystem_f.In1;
      } else if (rtb_Equal13) {
        rtb_signal2_ny = localB->EnabledSubsystem_pk.In1;
      } else if (rtb_Equal10) {
        rtb_signal2_ny = localB->EnabledSubsystem_oe.In1;
      } else if (rtb_Equal11) {
        rtb_signal2_ny = localB->EnabledSubsystem_p.In1;
      } else if (rtb_Equal14) {
        rtb_signal2_ny = localB->EnabledSubsystem_ae.In1;
      } else if (rtb_Equal7_j) {
        rtb_signal2_ny = localB->EnabledSubsystem_e.In1;
      } else {
        rtb_signal2_ny = localB->EnabledSubsystem_a.In1;
      }

      if (rtb_Equal9_i) {
        rtb_signal3_p = localB->EnabledSubsystem_f.In2;
      } else if (rtb_Equal13) {
        rtb_signal3_p = localB->EnabledSubsystem_pk.In2;
      } else if (rtb_Equal10) {
        rtb_signal3_p = localB->EnabledSubsystem_oe.In2;
      } else if (rtb_Equal11) {
        rtb_signal3_p = localB->EnabledSubsystem_p.In2;
      } else if (rtb_Equal14) {
        rtb_signal3_p = localB->EnabledSubsystem_ae.In2;
      } else if (rtb_Equal7_j) {
        rtb_signal3_p = localB->EnabledSubsystem_e.In2;
      } else {
        rtb_signal3_p = localB->EnabledSubsystem_a.In2;
      }

      if (rtb_Equal9_i) {
        rtb_signal4_kp = localB->EnabledSubsystem_f.In3;
      } else if (rtb_Equal13) {
        rtb_signal4_kp = localB->EnabledSubsystem_pk.In3;
      } else if (rtb_Equal10) {
        rtb_signal4_kp = localB->EnabledSubsystem_oe.In3;
      } else if (rtb_Equal11) {
        rtb_signal4_kp = localB->EnabledSubsystem_p.In3;
      } else if (rtb_Equal14) {
        rtb_signal4_kp = localB->EnabledSubsystem_ae.In3;
      } else if (rtb_Equal7_j) {
        rtb_signal4_kp = localB->EnabledSubsystem_e.In3;
      } else {
        rtb_signal4_kp = localB->EnabledSubsystem_a.In3;
      }

      if (rtb_Equal9_i) {
        rtb_signal5 = localB->EnabledSubsystem_f.In4;
      } else if (rtb_Equal13) {
        rtb_signal5 = localB->EnabledSubsystem_pk.In4;
      } else if (rtb_Equal10) {
        rtb_signal5 = localB->EnabledSubsystem_oe.In4;
      } else if (rtb_Equal11) {
        rtb_signal5 = localB->EnabledSubsystem_p.In4;
      } else if (rtb_Equal14) {
        rtb_signal5 = localB->EnabledSubsystem_ae.In4;
      } else if (rtb_Equal7_j) {
        rtb_signal5 = localB->EnabledSubsystem_e.In4;
      } else {
        rtb_signal5 = localB->EnabledSubsystem_a.In4;
      }

      if (rtb_Equal9_i) {
        rtb_signal6 = localB->EnabledSubsystem_f.In5;
      } else if (rtb_Equal13) {
        rtb_signal6 = localB->EnabledSubsystem_pk.In5;
      } else if (rtb_Equal10) {
        rtb_signal6 = localB->EnabledSubsystem_oe.In5;
      } else if (rtb_Equal11) {
        rtb_signal6 = localB->EnabledSubsystem_p.In5;
      } else if (rtb_Equal14) {
        rtb_signal6 = localB->EnabledSubsystem_ae.In5;
      } else if (rtb_Equal7_j) {
        rtb_signal6 = localB->EnabledSubsystem_e.In5;
      } else {
        rtb_signal6 = localB->EnabledSubsystem_a.In5;
      }

      if (rtb_Equal9_i) {
        rtb_signal7 = localB->EnabledSubsystem_f.In6;
      } else if (rtb_Equal13) {
        rtb_signal7 = localB->EnabledSubsystem_pk.In6;
      } else if (rtb_Equal10) {
        rtb_signal7 = localB->EnabledSubsystem_oe.In6;
      } else if (rtb_Equal11) {
        rtb_signal7 = localB->EnabledSubsystem_p.In6;
      } else if (rtb_Equal14) {
        rtb_signal7 = localB->EnabledSubsystem_ae.In6;
      } else if (rtb_Equal7_j) {
        rtb_signal7 = localB->EnabledSubsystem_e.In6;
      } else {
        rtb_signal7 = localB->EnabledSubsystem_a.In6;
      }

      if (rtb_Equal9_i) {
        rtb_signal8 = localB->EnabledSubsystem_f.In7;
      } else if (rtb_Equal13) {
        rtb_signal8 = localB->EnabledSubsystem_pk.In7;
      } else if (rtb_Equal10) {
        rtb_signal8 = localB->EnabledSubsystem_oe.In7;
      } else if (rtb_Equal11) {
        rtb_signal8 = localB->EnabledSubsystem_p.In7;
      } else if (rtb_Equal14) {
        rtb_signal8 = localB->EnabledSubsystem_ae.In7;
      } else if (rtb_Equal7_j) {
        rtb_signal8 = localB->EnabledSubsystem_e.In7;
      } else {
        rtb_signal8 = localB->EnabledSubsystem_a.In7;
      }

      if (rtb_Equal9_i) {
        rtb_signal9 = localB->EnabledSubsystem_f.In8;
      } else if (rtb_Equal13) {
        rtb_signal9 = localB->EnabledSubsystem_pk.In8;
      } else if (rtb_Equal10) {
        rtb_signal9 = localB->EnabledSubsystem_oe.In8;
      } else if (rtb_Equal11) {
        rtb_signal9 = localB->EnabledSubsystem_p.In8;
      } else if (rtb_Equal14) {
        rtb_signal9 = localB->EnabledSubsystem_ae.In8;
      } else if (rtb_Equal7_j) {
        rtb_signal9 = localB->EnabledSubsystem_e.In8;
      } else {
        rtb_signal9 = localB->EnabledSubsystem_a.In8;
      }
    }
  }

  /* End of Switch generated from: '<S83>/Switch' */

  /* Outputs for Enabled SubSystem: '<S20>/Buffer ready' incorporates:
   *  EnablePort: '<S81>/Enable'
   */
  /* Logic: '<S20>/AND2' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/Constant7'
   *  DataStoreRead: '<S20>/Data Store Read10'
   *  RelationalOperator: '<S20>/Equal3'
   *  RelationalOperator: '<S20>/Equal6'
   */
  if ((*rtd_Rx_State_CAN2 == 1.0) && (0.0 == rtb_signal1_gx)) {
    /* DataStoreWrite: '<S81>/Data Store Write' incorporates:
     *  Constant: '<S81>/New_Msg'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)2U);

    /* DataStoreWrite: '<S81>/Data Store Write1' incorporates:
     *  Constant: '<S81>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S20>/AND2' */
  /* End of Outputs for SubSystem: '<S20>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S20>/Update message buffers' incorporates:
   *  EnablePort: '<S84>/Enable'
   */
  /* Logic: '<S20>/AND3' incorporates:
   *  Constant: '<S20>/Constant4'
   *  Constant: '<S20>/Constant5'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S84>/Constant2'
   *  Constant: '<S84>/SET'
   *  DataStoreRead: '<S20>/Data Store Read9'
   *  Logic: '<S84>/AND'
   *  RelationalOperator: '<S20>/Equal4'
   *  RelationalOperator: '<S20>/Equal7'
   *  RelationalOperator: '<S84>/Equal'
   */
  if ((*rtd_Rx_State_CAN2 == 2.0) && (rtb_signal1_gx >= 1.0)) {
    /* DataStoreWrite: '<S84>/Data Store Write1' */
    rtd_Msg_Rx_CAN2->Buffer_1 = rtb_signal2_ny;
    rtd_Msg_Rx_CAN2->Buffer_2 = rtb_signal3_p;
    rtd_Msg_Rx_CAN2->Buffer_3 = rtb_signal4_kp;
    rtd_Msg_Rx_CAN2->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN2->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN2->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN2->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN2->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S84>/Data Store Write' incorporates:
     *  Constant: '<S84>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S84>/Data Store Write2' incorporates:
     *  Constant: '<S84>/SET'
     */
    *rtd_New_Msg_Ready_CAN2 = true;

    /* DataStoreWrite: '<S84>/Data Store Write5' incorporates:
     *  Constant: '<S84>/Idle_State'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)3U);

    /* DataStoreRead: '<S84>/Local_Time' */
    Rx_msg_ticks_CAN2 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S84>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN2 = Rx_msg_ticks_CAN2;

    /* DataTypeConversion: '<S84>/Cast To Double' */
    Rx_temporal_msg_CAN2 = rtb_signal2_ny;

    /* Outputs for Enabled SubSystem: '<S84>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S130>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN2 == 1.0)) {
      /* DataStoreWrite: '<S130>/Data Store Write2' incorporates:
       *  Constant: '<S130>/Constant2'
       */
      *rtd_Toggle_Pin_D8 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S84>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S20>/AND3' */
  /* End of Outputs for SubSystem: '<S20>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S20>/Prepare buffer' incorporates:
   *  EnablePort: '<S82>/Enable'
   */
  /* RelationalOperator: '<S20>/Equal5' incorporates:
   *  Constant: '<S20>/Constant6'
   *  DataStoreRead: '<S20>/Data Store Read4'
   */
  if (*rtd_Rx_State_CAN2 == 0.0) {
    /* DataStoreWrite: '<S82>/Data Store Write' incorporates:
     *  Constant: '<S82>/Constant1'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)1U);

    /* DataStoreWrite: '<S82>/Data Store Write1' incorporates:
     *  Constant: '<S82>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S20>/Equal5' */
  /* End of Outputs for SubSystem: '<S20>/Prepare buffer' */
}

/* Output and update for function-call system: '<S9>/CAN2 Send' */
void CAN2Send(const msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
              *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D9, const uint32_T
              *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2, rtB_CAN2Send
              *localB, rtDW_CAN2Send *localDW)
{
  /* DataStoreWrite: '<S21>/Data Store Write2' incorporates:
   *  Constant: '<S21>/Constant8'
   *  DataStoreRead: '<S21>/Data Store Read4'
   *  Sum: '<S21>/Plus'
   */
  *rtd_Tx_msg_count_CAN2 += 1.0;

  /* DataStoreWrite: '<S21>/Data Store Write1' incorporates:
   *  Constant: '<S21>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant3'
   *  DataStoreRead: '<S21>/Data Store Read'
   */
  TxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S21>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN2_counter_s;

  /* Outputs for Enabled SubSystem: '<S21>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  /* Logic: '<S21>/AND' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Constant: '<S21>/Constant2'
   *  DataStoreRead: '<S21>/Data Store Read1'
   *  RelationalOperator: '<S21>/Equal'
   */
  if ((*rtd_TxID_CAN2 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S132>/Data Store Write2' incorporates:
     *  Constant: '<S132>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 1.0;
  }

  /* End of Logic: '<S21>/AND' */
  /* End of Outputs for SubSystem: '<S21>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S21>/Cast To Double' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  Tx_temporal_msg_CAN2 = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataStoreRead: '<S21>/Data Store Read3' */
  TxID_CAN2_s = *rtd_TxID_CAN2;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataTypeConversion: '<S21>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN2_s;

  /* DataTypeConversion: '<S21>/Data Type Conversion10' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN2->Buffer_8;

  /* DataTypeConversion: '<S21>/Data Type Conversion4' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN2->Buffer_2;

  /* DataTypeConversion: '<S21>/Data Type Conversion5' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN2->Buffer_3;

  /* DataTypeConversion: '<S21>/Data Type Conversion6' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN2->Buffer_4;

  /* DataTypeConversion: '<S21>/Data Type Conversion7' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN2->Buffer_5;

  /* DataTypeConversion: '<S21>/Data Type Conversion8' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN2->Buffer_6;

  /* DataTypeConversion: '<S21>/Data Type Conversion9' incorporates:
   *  DataStoreRead: '<S21>/Data Store Read2'
   */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN2->Buffer_7;

  /* Update for M-S-Function: '<S131>/S-Function' */
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

/* System initialize for function-call system: '<S9>/Measure EXecution time' */
void MeasureEXecutiontime_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S26>/DEBUG - Toggle digital pin A3' */

  /* Start for M-S-Function: '<S142>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN8, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S26>/DEBUG - Toggle digital pin A3' */
}

/* Disable for function-call system: '<S9>/Measure EXecution time' */
void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW)
{
  /* Disable for Enabled SubSystem: '<S26>/DEBUG - Toggle digital pin A3' */
  if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S26>/DEBUG - Toggle digital pin A3' */
}

/* Output and update for function-call system: '<S9>/Measure EXecution time' */
void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW)
{
  /* Outputs for Enabled SubSystem: '<S26>/DEBUG - Toggle digital pin A3' incorporates:
   *  EnablePort: '<S141>/Enable'
   */
  /* Constant: '<S26>/Constant1' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA3_MODE = true;

    /* Switch: '<S141>/Switch' incorporates:
     *  DataStoreRead: '<S141>/Data Store Read'
     */
    if (localDW->A3_Pin_State) {
      /* DataStoreWrite: '<S141>/Data Store Write1' incorporates:
       *  Constant: '<S141>/Constant1'
       */
      localDW->A3_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S141>/Data Store Write1' incorporates:
       *  Constant: '<S141>/Constant'
       */
      localDW->A3_Pin_State = true;
    }

    /* End of Switch: '<S141>/Switch' */
    /* DataStoreRead: '<S141>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A3_Pin_State;

    /* Update for M-S-Function: '<S142>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Constant: '<S26>/Constant1' */
  /* End of Outputs for SubSystem: '<S26>/DEBUG - Toggle digital pin A3' */
}

/*
 * Output and update for atomic system:
 *    '<S173>/Bit Shift3'
 *    '<S299>/Bit Shift3'
 *    '<S311>/Bit Shift3'
 *    '<S335>/Bit Shift3'
 *    '<S347>/Bit Shift3'
 *    '<S364>/Bit Shift3'
 *    '<S376>/Bit Shift3'
 *    '<S393>/Bit Shift3'
 *    '<S405>/Bit Shift3'
 *    '<S535>/Bit Shift3'
 *    ...
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S177>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S182>:1' */
  /* '<S182>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S173>/Bit Shift4'
 *    '<S220>/Bit Shift'
 *    '<S226>/Bit Shift'
 *    '<S238>/Bit Shift'
 *    '<S244>/Bit Shift'
 *    '<S256>/Bit Shift'
 *    '<S262>/Bit Shift'
 *    '<S274>/Bit Shift'
 *    '<S280>/Bit Shift'
 *    '<S299>/Bit Shift4'
 *    ...
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S178>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S183>:1' */
  /* '<S183>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Disable for enable system:
 *    '<S196>/Reception substasks'
 *    '<S197>/Reception substasks'
 *    '<S198>/Reception substasks'
 *    '<S199>/Reception substasks'
 *    '<S420>/Reception substasks'
 *    '<S652>/Reception substasks'
 *    '<S653>/Reception substasks'
 *    '<S654>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Logic: '<S213>/AND' incorporates:
   *  Outport: '<S213>/Receive CAN1'
   */
  localB->AND = false;

  /* Disable for Logic: '<S213>/AND1' incorporates:
   *  Outport: '<S213>/Receive CAN2'
   */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S196>/Reception substasks'
 *    '<S197>/Reception substasks'
 *    '<S198>/Reception substasks'
 *    '<S199>/Reception substasks'
 *    '<S420>/Reception substasks'
 *    '<S652>/Reception substasks'
 *    '<S653>/Reception substasks'
 *    '<S654>/Reception substasks'
 */
void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_d, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_new_msg_Rx_l, rtB_Receptionsubstasks
  *localB, const rtC_Receptionsubstasks *localC, rtDW_Receptionsubstasks
  *localDW)
{
  boolean_T rtb_Equal2_dx;

  /* Outputs for Enabled SubSystem: '<S196>/Reception substasks' incorporates:
   *  EnablePort: '<S213>/Enable'
   */
  if (rtu_Enable) {
    localDW->Receptionsubstasks_MODE = true;

    /* Outputs for Enabled SubSystem: '<S213>/RX buffers update' incorporates:
     *  EnablePort: '<S215>/Enable'
     */
    /* RelationalOperator: '<S213>/Equal16' incorporates:
     *  DataStoreRead: '<S213>/Data Store Read'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S215>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S215>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S215>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S215>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S215>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S215>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S215>/Data Store Write' incorporates:
       *  Constant: '<S215>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Template_DS_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S215>/Data Store Write3' incorporates:
       *  Constant: '<S215>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S213>/Equal16' */
    /* End of Outputs for SubSystem: '<S213>/RX buffers update' */

    /* RelationalOperator: '<S213>/Equal2' incorporates:
     *  DataStoreRead: '<S213>/Data Store Read'
     */
    rtb_Equal2_dx = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S213>/AND' incorporates:
     *  DataStoreRead: '<S213>/Data Store Read1'
     *  Logic: '<S213>/NOT'
     */
    localB->AND = (rtb_Equal2_dx && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S213>/AND1' incorporates:
     *  DataStoreRead: '<S213>/Data Store Read2'
     *  Logic: '<S213>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_dx && (!*rtd_New_Msg_Ready_CAN2));
  } else if (localDW->Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S196>/Reception substasks' */
}

/*
 * Output and update for atomic system:
 *    '<S220>/Bit Shift1'
 *    '<S226>/Bit Shift1'
 *    '<S238>/Bit Shift1'
 *    '<S244>/Bit Shift1'
 *    '<S256>/Bit Shift1'
 *    '<S262>/Bit Shift1'
 *    '<S274>/Bit Shift1'
 *    '<S280>/Bit Shift1'
 *    '<S437>/Bit Shift1'
 *    '<S443>/Bit Shift1'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S222>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S224>:1' */
  /* '<S224>:1:6' */
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
 * System initialize for enable system:
 *    '<S196>/Transmission subtasks'
 *    '<S420>/Transmission subtasks1'
 *    '<S654>/Transmission subtasks1'
 */
void Transmissionsubtasks_Init(rtB_Transmissionsubtasks *localB, const
  rtC_Transmissionsubtasks *localC)
{
  /* SystemInitialize for Enabled SubSystem: '<S214>/Msg_Value_Data_Encoded' */
  /* SystemInitialize for SignalConversion generated from: '<S218>/Constant' */
  localB->TmpBufferAtConstantOutport1 = localC->Constant;

  /* End of SystemInitialize for SubSystem: '<S214>/Msg_Value_Data_Encoded' */
}

/*
 * Disable for enable system:
 *    '<S196>/Transmission subtasks'
 *    '<S420>/Transmission subtasks1'
 *    '<S654>/Transmission subtasks1'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S214>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for RelationalOperator: '<S216>/Equal7' incorporates:
     *  Outport: '<S216>/Send CAN1'
     */
    localB->Equal7_a = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S214>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S214>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for RelationalOperator: '<S217>/Equal7' incorporates:
     *  Outport: '<S217>/Send CAN2'
     */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S214>/Check msg transmission CAN2' */
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S196>/Transmission subtasks'
 *    '<S420>/Transmission subtasks1'
 *    '<S654>/Transmission subtasks1'
 */
void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1,
  uint32_T *rtd_TxID_CAN2, const real_T *rtd_Tx_msg_count_CAN1, const real_T
  *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW)
{
  real_T rtb_Minus2_h;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast1_o;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast9;
  boolean_T rtb_Equal2_bx;

  /* Outputs for Enabled SubSystem: '<S196>/Transmission subtasks' incorporates:
   *  EnablePort: '<S214>/Enable'
   */
  if (rtu_Enable) {
    localDW->Transmissionsubtasks_MODE = true;

    /* RelationalOperator: '<S214>/Equal2' incorporates:
     *  DataStoreRead: '<S214>/Data Store Read'
     */
    rtb_Equal2_bx = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S214>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S218>/Enable'
     */
    /* RelationalOperator: '<S214>/Equal16' incorporates:
     *  DataStoreRead: '<S214>/Data Store Read'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* SignalConversion generated from: '<S218>/Constant' */
      localB->TmpBufferAtConstantOutport1 = localC->Constant;
    }

    /* End of RelationalOperator: '<S214>/Equal16' */
    /* End of Outputs for SubSystem: '<S214>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S214>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S216>/Enable'
     */
    /* Logic: '<S214>/AND' incorporates:
     *  Constant: '<S214>/Constant6'
     *  Constant: '<S216>/Constant22'
     *  Constant: '<S216>/Constant24'
     *  Constant: '<S216>/Constant8'
     *  DataStoreRead: '<S214>/Data Store Read'
     *  DataStoreRead: '<S214>/Data Store Read2'
     *  Math: '<S216>/Mod'
     *  RelationalOperator: '<S214>/GreaterThan2'
     *  RelationalOperator: '<S216>/Equal4'
     *  Sum: '<S216>/Minus'
     */
    if (rtb_Equal2_bx && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;

      /* Sum: '<S216>/Minus2' incorporates:
       *  Constant: '<S216>/Constant'
       */
      rtb_Minus2_h = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S216>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S219>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_h, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S219>/Cast4' */
        rtb_Cast4 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S220>/Bit Shift1' */
        BitShift1(rtb_Cast4, &localB->BitShift1_a);

        /* End of Outputs for SubSystem: '<S220>/Bit Shift1' */

        /* DataTypeConversion: '<S219>/Cast1' */
        rtb_Cast1_o = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S220>/Bit Shift' */
        BitShift4(rtb_Cast1_o, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S220>/Bit Shift' */

        /* DataStoreWrite: '<S219>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S219>/Cast16'
         *  Sum: '<S220>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_a.y + localB->BitShift_f.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->TmpBufferAtConstantOutport1;

        /* DataStoreWrite: '<S219>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S216>/TX buffer update CAN1' */

      /* RelationalOperator: '<S216>/Equal7' incorporates:
       *  Constant: '<S216>/Constant11'
       *  Constant: '<S216>/Constant22'
       *  Constant: '<S216>/Constant24'
       *  Constant: '<S216>/Constant27'
       *  Constant: '<S216>/Constant8'
       *  DataStoreRead: '<S214>/Data Store Read'
       *  Math: '<S216>/Mod'
       *  Math: '<S216>/Mod1'
       *  RelationalOperator: '<S216>/Equal4'
       *  Sum: '<S216>/Minus'
       *  Sum: '<S216>/Minus1'
       */
      localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_h,
        COMM_Phase1) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
      /* Disable for RelationalOperator: '<S216>/Equal7' incorporates:
       *  Outport: '<S216>/Send CAN1'
       */
      localB->Equal7_a = false;
      localDW->CheckmsgtransmissionCAN1_MODE = false;
    }

    /* End of Logic: '<S214>/AND' */
    /* End of Outputs for SubSystem: '<S214>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S214>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S217>/Enable'
     */
    /* Logic: '<S214>/AND1' incorporates:
     *  Constant: '<S214>/Constant7'
     *  Constant: '<S217>/Constant22'
     *  Constant: '<S217>/Constant24'
     *  Constant: '<S217>/Constant8'
     *  DataStoreRead: '<S214>/Data Store Read'
     *  DataStoreRead: '<S214>/Data Store Read3'
     *  Math: '<S217>/Mod'
     *  RelationalOperator: '<S214>/GreaterThan3'
     *  RelationalOperator: '<S217>/Equal4'
     *  Sum: '<S217>/Minus'
     */
    if (rtb_Equal2_bx && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;

      /* Sum: '<S217>/Minus2' incorporates:
       *  Constant: '<S217>/Constant'
       */
      rtb_Minus2_h = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S217>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S225>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_h, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S225>/Cast18' */
        rtb_Cast18 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S226>/Bit Shift1' */
        BitShift1(rtb_Cast18, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S226>/Bit Shift1' */

        /* DataTypeConversion: '<S225>/Cast9' */
        rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S226>/Bit Shift' */
        BitShift4(rtb_Cast9, &localB->BitShift_e);

        /* End of Outputs for SubSystem: '<S226>/Bit Shift' */

        /* DataStoreWrite: '<S225>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S225>/Cast17'
         *  Sum: '<S226>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_h.y + localB->BitShift_e.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->TmpBufferAtConstantOutport1;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->TmpBufferAtConstantOutport1;

        /* DataStoreWrite: '<S225>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S217>/TX buffer update CAN2' */

      /* RelationalOperator: '<S217>/Equal7' incorporates:
       *  Constant: '<S217>/Constant11'
       *  Constant: '<S217>/Constant22'
       *  Constant: '<S217>/Constant24'
       *  Constant: '<S217>/Constant27'
       *  Constant: '<S217>/Constant8'
       *  DataStoreRead: '<S214>/Data Store Read'
       *  Math: '<S217>/Mod'
       *  Math: '<S217>/Mod1'
       *  RelationalOperator: '<S217>/Equal4'
       *  Sum: '<S217>/Minus'
       *  Sum: '<S217>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_h,
        COMM_Phase2) == 0.0);
    } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
      /* Disable for RelationalOperator: '<S217>/Equal7' incorporates:
       *  Outport: '<S217>/Send CAN2'
       */
      localB->Equal7 = false;
      localDW->CheckmsgtransmissionCAN2_MODE = false;
    }

    /* End of Logic: '<S214>/AND1' */
    /* End of Outputs for SubSystem: '<S214>/Check msg transmission CAN2' */
  } else if (localDW->Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S196>/Transmission subtasks' */
}

/*
 * Disable for enable system:
 *    '<S232>/Check msg transmission CAN1'
 *    '<S250>/Check msg transmission CAN1'
 *    '<S268>/Check msg transmission CAN1'
 *    '<S664>/Check msg transmission CAN1'
 *    '<S684>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  /* Disable for RelationalOperator: '<S234>/Equal7' incorporates:
   *  Outport: '<S234>/Send CAN1'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S232>/Check msg transmission CAN1'
 *    '<S250>/Check msg transmission CAN1'
 *    '<S268>/Check msg transmission CAN1'
 *    '<S664>/Check msg transmission CAN1'
 *    '<S684>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_k,
  uint8_T rtu_ValueDomainMsg_m, uint8_T rtu_ValueDomainMsg_f, uint8_T
  rtu_ValueDomainMsg_fd, uint8_T rtu_ValueDomainMsg_fx, uint8_T
  rtu_ValueDomainMsg_ka, const real_T *rtd_Board_ID, msg_buffer_type
  *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, const real_T *rtd_Tx_msg_count_CAN1,
  const uint8_T *rtd_basic_cycle_count, rtB_CheckmsgtransmissionCAN1 *localB,
  const rtC_CheckmsgtransmissionCAN1 *localC, rtDW_CheckmsgtransmissionCAN1
  *localDW)
{
  real_T rtb_Minus2_bk;
  uint8_T rtb_Cast1_f;
  uint8_T rtb_Cast4;

  /* Outputs for Enabled SubSystem: '<S232>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S234>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN1_MODE = true;

    /* Sum: '<S234>/Minus2' incorporates:
     *  Constant: '<S234>/Constant'
     */
    rtb_Minus2_bk = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S234>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S237>/Enable'
     */
    /* RelationalOperator: '<S234>/Equal4' incorporates:
     *  Constant: '<S234>/Constant22'
     *  Constant: '<S234>/Constant24'
     *  Constant: '<S234>/Constant8'
     *  Math: '<S234>/Mod'
     *  Sum: '<S234>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_bk, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S237>/Cast4' */
      rtb_Cast4 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S238>/Bit Shift1' */
      BitShift1(rtb_Cast4, &localB->BitShift1_b);

      /* End of Outputs for SubSystem: '<S238>/Bit Shift1' */

      /* DataTypeConversion: '<S237>/Cast1' */
      rtb_Cast1_f = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S238>/Bit Shift' */
      BitShift4(rtb_Cast1_f, &localB->BitShift_o);

      /* End of Outputs for SubSystem: '<S238>/Bit Shift' */

      /* DataStoreWrite: '<S237>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S237>/Cast16'
       *  Sum: '<S238>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_b.y + localB->BitShift_o.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_m;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_fd;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_fx;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_ka;

      /* DataStoreWrite: '<S237>/Data Store Write8' */
      *rtd_TxID_CAN1 = localC->Cast;
    }

    /* End of RelationalOperator: '<S234>/Equal4' */
    /* End of Outputs for SubSystem: '<S234>/TX buffer update CAN1' */

    /* RelationalOperator: '<S234>/Equal7' incorporates:
     *  Constant: '<S234>/Constant11'
     *  Constant: '<S234>/Constant27'
     *  Math: '<S234>/Mod1'
     *  Sum: '<S234>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_bk, COMM_Phase1)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionCAN_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S232>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S232>/Check msg transmission CAN2'
 *    '<S250>/Check msg transmission CAN2'
 *    '<S268>/Check msg transmission CAN2'
 *    '<S664>/Check msg transmission CAN2'
 *    '<S684>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_j_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  /* Disable for RelationalOperator: '<S235>/Equal7' incorporates:
   *  Outport: '<S235>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S232>/Check msg transmission CAN2'
 *    '<S250>/Check msg transmission CAN2'
 *    '<S268>/Check msg transmission CAN2'
 *    '<S664>/Check msg transmission CAN2'
 *    '<S684>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_h,
  uint8_T rtu_ValueDomainMsg_m, uint8_T rtu_ValueDomainMsg_mt, uint8_T
  rtu_ValueDomainMsg_l, uint8_T rtu_ValueDomainMsg_hp, uint8_T
  rtu_ValueDomainMsg_l5, const real_T *rtd_Board_ID, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, const real_T *rtd_Tx_msg_count_CAN2,
  const uint8_T *rtd_basic_cycle_count, rtB_CheckmsgtransmissionCAN2 *localB,
  const rtC_CheckmsgtransmissionCAN2 *localC, rtDW_CheckmsgtransmissionCAN2
  *localDW)
{
  real_T rtb_Minus2_n;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S232>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S235>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN2_MODE = true;

    /* Sum: '<S235>/Minus2' incorporates:
     *  Constant: '<S235>/Constant'
     */
    rtb_Minus2_n = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S235>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S243>/Enable'
     */
    /* RelationalOperator: '<S235>/Equal4' incorporates:
     *  Constant: '<S235>/Constant22'
     *  Constant: '<S235>/Constant24'
     *  Constant: '<S235>/Constant8'
     *  Math: '<S235>/Mod'
     *  Sum: '<S235>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_n, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S243>/Cast18' */
      rtb_Cast18 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S244>/Bit Shift1' */
      BitShift1(rtb_Cast18, &localB->BitShift1_f);

      /* End of Outputs for SubSystem: '<S244>/Bit Shift1' */

      /* DataTypeConversion: '<S243>/Cast9' */
      rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S244>/Bit Shift' */
      BitShift4(rtb_Cast9, &localB->BitShift_i);

      /* End of Outputs for SubSystem: '<S244>/Bit Shift' */

      /* DataStoreWrite: '<S243>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S243>/Cast17'
       *  Sum: '<S244>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_f.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_h;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_m;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_mt;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_l;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_hp;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_l5;

      /* DataStoreWrite: '<S243>/Data Store Write5' */
      *rtd_TxID_CAN2 = localC->Cast8;
    }

    /* End of RelationalOperator: '<S235>/Equal4' */
    /* End of Outputs for SubSystem: '<S235>/TX buffer update CAN2' */

    /* RelationalOperator: '<S235>/Equal7' incorporates:
     *  Constant: '<S235>/Constant11'
     *  Constant: '<S235>/Constant27'
     *  Math: '<S235>/Mod1'
     *  Sum: '<S235>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_n, COMM_Phase2)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_j_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S232>/Check msg transmission CAN2' */
}

/*
 * Disable for enable system:
 *    '<S197>/Transmission subtasks'
 *    '<S198>/Transmission subtasks'
 *    '<S199>/Transmission subtasks'
 */
void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW)
{
  /* Disable for Enabled SubSystem: '<S232>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_l.CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionCAN_Disable(&localB->CheckmsgtransmissionCAN1_l,
      &localDW->CheckmsgtransmissionCAN1_l);
  }

  /* End of Disable for SubSystem: '<S232>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S232>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_f.CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_j_Disable(&localB->CheckmsgtransmissionCAN2_f,
      &localDW->CheckmsgtransmissionCAN2_f);
  }

  /* End of Disable for SubSystem: '<S232>/Check msg transmission CAN2' */
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S197>/Transmission subtasks'
 *    '<S198>/Transmission subtasks'
 *    '<S199>/Transmission subtasks'
 */
void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark, const
  real_T *rtd_Board_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Tx_CAN1, msg_buffer_type *rtd_Msg_Tx_CAN2, const uint8_T
  *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, const real_T *
  rtd_Tx_msg_count_CAN1, const real_T *rtd_Tx_msg_count_CAN2, const uint8_T
  *rtd_basic_cycle_count, rtB_Transmissionsubtasks_f *localB, const
  rtC_Transmissionsubtasks_d *localC, rtDW_Transmissionsubtasks_h *localDW)
{
  boolean_T rtb_AND1_j;
  boolean_T rtb_AND_pn;
  boolean_T rtb_Equal2_m;

  /* Outputs for Enabled SubSystem: '<S197>/Transmission subtasks' incorporates:
   *  EnablePort: '<S232>/Enable'
   */
  if (rtu_Enable) {
    localDW->Transmissionsubtasks_MODE = true;

    /* RelationalOperator: '<S232>/Equal2' incorporates:
     *  DataStoreRead: '<S232>/Data Store Read'
     */
    rtb_Equal2_m = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S232>/AND' incorporates:
     *  Constant: '<S232>/Constant6'
     *  DataStoreRead: '<S232>/Data Store Read2'
     *  RelationalOperator: '<S232>/GreaterThan2'
     */
    rtb_AND_pn = (rtb_Equal2_m && (*rtd_Tx_msg_count_CAN1 <= 7.0));

    /* Logic: '<S232>/AND1' incorporates:
     *  Constant: '<S232>/Constant7'
     *  DataStoreRead: '<S232>/Data Store Read3'
     *  RelationalOperator: '<S232>/GreaterThan3'
     */
    rtb_AND1_j = (rtb_Equal2_m && (*rtd_Tx_msg_count_CAN2 <= 7.0));

    /* Outputs for Enabled SubSystem: '<S232>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S236>/Enable'
     */
    /* RelationalOperator: '<S232>/Equal16' incorporates:
     *  DataStoreRead: '<S232>/Data Store Read'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal2 = *rtd_Own_Vote;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal3 = localC->TmpBufferAtConstantOutport1;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal4 = localC->TmpBufferAtConstantOutport1;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal5 = localC->TmpBufferAtConstantOutport1;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal6 = localC->TmpBufferAtConstantOutport1;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal7 = localC->TmpBufferAtConstantOutport1;

      /* SignalConversion generated from: '<S236>/Value_domain_msg' */
      localB->signal8 = localC->TmpBufferAtConstantOutport1;
    }

    /* End of RelationalOperator: '<S232>/Equal16' */
    /* End of Outputs for SubSystem: '<S232>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S232>/Check msg transmission CAN1' */
    /* DataStoreRead: '<S232>/Data Store Read' */
    CheckmsgtransmissionCAN1(rtb_AND_pn, *rtd_Local_Ticks, rtu_Time_Mark,
      localB->signal2, localB->signal3, localB->signal4, localB->signal5,
      localB->signal6, localB->signal7, localB->signal8, (real_T *)rtd_Board_ID,
      rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, (real_T *)rtd_Tx_msg_count_CAN1, (uint8_T *)
      rtd_basic_cycle_count, &localB->CheckmsgtransmissionCAN1_l,
      &localC->CheckmsgtransmissionCAN1_l, &localDW->CheckmsgtransmissionCAN1_l);

    /* End of Outputs for SubSystem: '<S232>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S232>/Check msg transmission CAN2' */
    CheckmsgtransmissionCAN2(rtb_AND1_j, *rtd_Local_Ticks, rtu_Time_Mark,
      localB->signal2, localB->signal3, localB->signal4, localB->signal5,
      localB->signal6, localB->signal7, localB->signal8, (real_T *)rtd_Board_ID,
      rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, (real_T *)rtd_Tx_msg_count_CAN2, (uint8_T *)
      rtd_basic_cycle_count, &localB->CheckmsgtransmissionCAN2_f,
      &localC->CheckmsgtransmissionCAN2_f, &localDW->CheckmsgtransmissionCAN2_f);

    /* End of Outputs for SubSystem: '<S232>/Check msg transmission CAN2' */
  } else if (localDW->Transmissionsubtasks_MODE) {
    Transmissionsubtasks_l_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S197>/Transmission subtasks' */
}

/*
 * Output and update for enable system:
 *    '<S202>/RESET Board - Return to initialization'
 *    '<S422>/RESET Board - Return to initialization'
 *    '<S656>/RESET Board - Return to initialization'
 */
void RESETBoardReturntoinitializatio(boolean_T rtu_Enable, boolean_T
  *rtd_Initialization_flag, real_T *rtd_Master_ID, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, boolean_T
  *rtd_Reset_Board_n, real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1, uint32_T
  *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2,
  boolean_T *rtd_Toggle_Pin_A0, const rtC_RESETBoardReturntoinitializ *localC)
{
  /* Outputs for Enabled SubSystem: '<S202>/RESET Board - Return to initialization' incorporates:
   *  EnablePort: '<S292>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S292>/Data Store Write' */
    *rtd_Reset_Board_n = localC->Cast;

    /* DataStoreWrite: '<S292>/Data Store Write1' */
    *rtd_New_Msg_Ready_CAN1 = localC->Cast;

    /* DataStoreWrite: '<S292>/Data Store Write10' */
    *rtd_New_Msg_Ready_CAN2 = localC->Cast;

    /* DataStoreWrite: '<S292>/Data Store Write2' */
    *rtd_Initialization_flag = localC->NOT;

    /* DataStoreWrite: '<S292>/Data Store Write4' incorporates:
     *  Constant: '<S292>/Constant'
     */
    *rtd_Role_ID = 0.0;

    /* DataStoreWrite: '<S292>/Data Store Write5' incorporates:
     *  Constant: '<S292>/Constant'
     */
    *rtd_Master_ID = 0.0;

    /* DataStoreWrite: '<S292>/Data Store Write6' */
    *rtd_Rx_State_CAN1 = localC->Cast6;

    /* DataStoreWrite: '<S292>/Data Store Write9' */
    *rtd_Rx_State_CAN2 = localC->Cast6;

    /* DataStoreWrite: '<S292>/Data Store Write3' incorporates:
     *  Constant: '<S292>/Constant1'
     */
    *rtd_RxID_CAN1 = 1U;

    /* DataStoreWrite: '<S292>/Data Store Write8' incorporates:
     *  Constant: '<S292>/Constant1'
     */
    *rtd_RxID_CAN2 = 1U;

    /* DataStoreWrite: '<S292>/Data Store Write7' incorporates:
     *  Constant: '<S292>/Constant3'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Outputs for SubSystem: '<S202>/RESET Board - Return to initialization' */
}

/*
 * Output and update for atomic system:
 *    '<S299>/Bit Shift'
 *    '<S311>/Bit Shift'
 *    '<S335>/Bit Shift'
 *    '<S347>/Bit Shift'
 *    '<S364>/Bit Shift'
 *    '<S376>/Bit Shift'
 *    '<S393>/Bit Shift'
 *    '<S405>/Bit Shift'
 *    '<S535>/Bit Shift'
 *    '<S547>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S301>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S306>:1' */
  /* '<S306>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S299>/Bit Shift1'
 *    '<S311>/Bit Shift1'
 *    '<S335>/Bit Shift1'
 *    '<S347>/Bit Shift1'
 *    '<S364>/Bit Shift1'
 *    '<S376>/Bit Shift1'
 *    '<S393>/Bit Shift1'
 *    '<S405>/Bit Shift1'
 *    '<S535>/Bit Shift1'
 *    '<S547>/Bit Shift1'
 *    ...
 */
void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S302>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S307>:1' */
  /* '<S307>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S299>/Bit Shift2'
 *    '<S311>/Bit Shift2'
 *    '<S335>/Bit Shift2'
 *    '<S347>/Bit Shift2'
 *    '<S364>/Bit Shift2'
 *    '<S376>/Bit Shift2'
 *    '<S393>/Bit Shift2'
 *    '<S405>/Bit Shift2'
 *    '<S535>/Bit Shift2'
 *    '<S547>/Bit Shift2'
 *    ...
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S303>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S308>:1' */
  /* '<S308>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Disable for enable system:
 *    '<S294>/Demux message CAN1 and check coherence'
 *    '<S620>/Demux message CAN1 and check coherence'
 *    '<S857>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW)
{
  /* Disable for Logic: '<S296>/AND' incorporates:
   *  Outport: '<S296>/CAN1_msg_coherent'
   */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_f = false;
}

/*
 * Output and update for enable system:
 *    '<S294>/Demux message CAN1 and check coherence'
 *    '<S620>/Demux message CAN1 and check coherence'
 *    '<S857>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckcoh *localB, rtDW_DemuxmessageCAN1andcheckco
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S296>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_f = true;

    /* Outputs for Atomic SubSystem: '<S299>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_f);

    /* End of Outputs for SubSystem: '<S299>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S299>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_f.y, &localB->BitShift1_mg);

    /* End of Outputs for SubSystem: '<S299>/Bit Shift1' */

    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S300>/Constant'
     *  Constant: '<S300>/Constant1'
     *  DataStoreWrite: '<S300>/Data Store Write'
     *  RelationalOperator: '<S300>/GreaterThan'
     *  Sum: '<S300>/Plus'
     */
    if (localB->BitShift1_mg.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S300>/Switch' */

    /* Outputs for Atomic SubSystem: '<S299>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_d);

    /* End of Outputs for SubSystem: '<S299>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S299>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_c);

    /* End of Outputs for SubSystem: '<S299>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S299>/Bit Shift2' */
    BitShift2(localB->BitShift4_c.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S299>/Bit Shift2' */

    /* Logic: '<S296>/AND' incorporates:
     *  RelationalOperator: '<S296>/Equal'
     *  RelationalOperator: '<S296>/Equal1'
     */
    localB->AND = ((localB->BitShift_d.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_n.y == rtu_expected_board_id));

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S296>/CAN1_msg' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* SignalConversion generated from: '<S296>/Constant' incorporates:
     *  Constant: '<S296>/Constant'
     */
    localB->TmpBufferAtConstantOutport1 = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_f) {
    DemuxmessageCAN1andchec_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S294>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S294>/Demux message CAN1 and check coherence1'
 *    '<S620>/Demux message CAN1 and check coherence1'
 *    '<S857>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW)
{
  /* Disable for Logic: '<S297>/AND' incorporates:
   *  Outport: '<S297>/CAN2_msg_coherent'
   */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_m = false;
}

/*
 * Output and update for enable system:
 *    '<S294>/Demux message CAN1 and check coherence1'
 *    '<S620>/Demux message CAN1 and check coherence1'
 *    '<S857>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_k *localB, rtDW_DemuxmessageCAN1andcheck_o
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S297>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_m = true;

    /* Outputs for Atomic SubSystem: '<S311>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S311>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S311>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_e);

    /* End of Outputs for SubSystem: '<S311>/Bit Shift1' */

    /* Switch: '<S312>/Switch' incorporates:
     *  Constant: '<S312>/Constant'
     *  Constant: '<S312>/Constant1'
     *  DataStoreWrite: '<S312>/Data Store Write'
     *  RelationalOperator: '<S312>/GreaterThan'
     *  Sum: '<S312>/Plus'
     */
    if (localB->BitShift1_e.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S312>/Switch' */

    /* Outputs for Atomic SubSystem: '<S311>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S311>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S311>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S311>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S311>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_d);

    /* End of Outputs for SubSystem: '<S311>/Bit Shift2' */

    /* Logic: '<S297>/AND' incorporates:
     *  RelationalOperator: '<S297>/Equal'
     *  RelationalOperator: '<S297>/Equal1'
     */
    localB->AND = ((localB->BitShift_h.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_d.y == rtu_expected_board_id));

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S297>/CAN2_msg' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* SignalConversion generated from: '<S297>/Constant' incorporates:
     *  Constant: '<S297>/Constant'
     */
    localB->TmpBufferAtConstantOutport1 = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_m) {
    DemuxmessageCAN1andch_l_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S204>/Reset Tx msg counter'
 *    '<S208>/Reset Tx msg counter'
 *    '<S210>/Reset Tx msg counter'
 *    '<S212>/Reset Tx msg counter'
 *    '<S424>/Reset Tx msg counter'
 *    '<S426>/Reset Tx msg counter'
 *    '<S427>/Reset Tx msg counter'
 *    '<S428>/Reset Tx msg counter'
 *    '<S658>/Reset Tx msg counter'
 *    '<S659>/Reset Tx msg counter'
 *    '<S661>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S204>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S295>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S295>/Data Store Write2' incorporates:
     *  Constant: '<S295>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S295>/Data Store Write1' incorporates:
     *  Constant: '<S295>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S204>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S324>/Desync_Negative'
 *    '<S650>/Desync_Negative'
 *    '<S887>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, const
                     real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S324>/Desync_Negative' incorporates:
   *  EnablePort: '<S325>/Enable'
   */
  if (rtu_Enable) {
    /* DataTypeConversion: '<S325>/Cast' incorporates:
     *  DataStoreRead: '<S325>/Data Store Read'
     *  DataStoreWrite: '<S325>/Data Store Write1'
     *  Sum: '<S325>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S324>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S208>/Process_Messages1'
 *    '<S210>/Process_Messages'
 *    '<S212>/Process_Messages'
 */
void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW)
{
  /* Disable for Enabled SubSystem: '<S331>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcoher_d) {
    /* Disable for RelationalOperator: '<S333>/Equal' incorporates:
     *  Outport: '<S333>/CAN1_msg_coherent'
     */
    localB->Equal_h = false;
    localDW->DemuxmessageCAN1andcheckcoher_d = false;
  }

  /* End of Disable for SubSystem: '<S331>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S331>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcoher_g) {
    /* Disable for RelationalOperator: '<S334>/Equal' incorporates:
     *  Outport: '<S334>/CAN2_msg_coherent'
     */
    localB->Equal = false;
    localDW->DemuxmessageCAN1andcheckcoher_g = false;
  }

  /* End of Disable for SubSystem: '<S331>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S208>/Process_Messages1'
 *    '<S210>/Process_Messages'
 *    '<S212>/Process_Messages'
 */
void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG, boolean_T *rtd_new_msg_Rx_l, rtB_Process_Messages1
  *localB, rtDW_Process_Messages1 *localDW)
{
  /* Outputs for Enabled SubSystem: '<S208>/Process_Messages1' incorporates:
   *  EnablePort: '<S331>/Enable'
   */
  if (rtu_Enable) {
    localDW->Process_Messages1_MODE = true;

    /* Outputs for Enabled SubSystem: '<S331>/Demux message CAN1 and check coherence' incorporates:
     *  EnablePort: '<S333>/Enable'
     */
    if (rtu_new_CAN1_msg) {
      localDW->DemuxmessageCAN1andcheckcoher_d = true;

      /* Outputs for Atomic SubSystem: '<S335>/Bit Shift3' */
      BitShift3(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift3_a);

      /* End of Outputs for SubSystem: '<S335>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S335>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_a.y, &localB->BitShift1_i);

      /* End of Outputs for SubSystem: '<S335>/Bit Shift1' */

      /* Switch: '<S336>/Switch' incorporates:
       *  Constant: '<S336>/Constant1'
       *  RelationalOperator: '<S336>/GreaterThan'
       */
      if (localB->BitShift1_i.y > 1.0) {
        /* DataStoreWrite: '<S336>/Data Store Write' incorporates:
         *  Constant: '<S336>/Constant'
         *  Sum: '<S336>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S336>/Switch' */

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_2_i = rtu_Rx_msg_CAN1->Buffer_2;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_3_p = rtu_Rx_msg_CAN1->Buffer_3;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_4_k = rtu_Rx_msg_CAN1->Buffer_4;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_5_b = rtu_Rx_msg_CAN1->Buffer_5;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_6_d = rtu_Rx_msg_CAN1->Buffer_6;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_7_h = rtu_Rx_msg_CAN1->Buffer_7;

      /* SignalConversion generated from: '<S333>/CAN1_msg' */
      localB->Buffer_8_p = rtu_Rx_msg_CAN1->Buffer_8;

      /* Outputs for Atomic SubSystem: '<S335>/Bit Shift4' */
      BitShift4(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift4_i);

      /* End of Outputs for SubSystem: '<S335>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S335>/Bit Shift2' */
      BitShift2(localB->BitShift4_i.y, &localB->BitShift2_e);

      /* End of Outputs for SubSystem: '<S335>/Bit Shift2' */

      /* RelationalOperator: '<S333>/Equal' */
      localB->Equal_h = (localB->BitShift2_e.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S335>/Bit Shift' */
      BitShift(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift_b);

      /* End of Outputs for SubSystem: '<S335>/Bit Shift' */

      /* SignalConversion generated from: '<S333>/Constant' incorporates:
       *  Constant: '<S333>/Constant'
       */
      localB->TmpBufferAtConstantOutport1_d = ((uint8_T)0U);
    } else if (localDW->DemuxmessageCAN1andcheckcoher_d) {
      /* Disable for RelationalOperator: '<S333>/Equal' incorporates:
       *  Outport: '<S333>/CAN1_msg_coherent'
       */
      localB->Equal_h = false;
      localDW->DemuxmessageCAN1andcheckcoher_d = false;
    }

    /* End of Outputs for SubSystem: '<S331>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S331>/Demux message CAN1 and check coherence1' incorporates:
     *  EnablePort: '<S334>/Enable'
     */
    if (rtu_new_CAN2_msg) {
      localDW->DemuxmessageCAN1andcheckcoher_g = true;

      /* Outputs for Atomic SubSystem: '<S347>/Bit Shift3' */
      BitShift3(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift3_e);

      /* End of Outputs for SubSystem: '<S347>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S347>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S347>/Bit Shift1' */

      /* Switch: '<S348>/Switch' incorporates:
       *  Constant: '<S348>/Constant1'
       *  RelationalOperator: '<S348>/GreaterThan'
       */
      if (localB->BitShift1_g.y > 1.0) {
        /* DataStoreWrite: '<S348>/Data Store Write' incorporates:
         *  Constant: '<S348>/Constant'
         *  Sum: '<S348>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S348>/Switch' */

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_2 = rtu_Rx_Msg_CAN2->Buffer_2;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_3 = rtu_Rx_Msg_CAN2->Buffer_3;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_4 = rtu_Rx_Msg_CAN2->Buffer_4;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_5 = rtu_Rx_Msg_CAN2->Buffer_5;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_6 = rtu_Rx_Msg_CAN2->Buffer_6;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_7 = rtu_Rx_Msg_CAN2->Buffer_7;

      /* SignalConversion generated from: '<S334>/CAN2_msg' */
      localB->Buffer_8 = rtu_Rx_Msg_CAN2->Buffer_8;

      /* Outputs for Atomic SubSystem: '<S347>/Bit Shift4' */
      BitShift4(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift4_k);

      /* End of Outputs for SubSystem: '<S347>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S347>/Bit Shift2' */
      BitShift2(localB->BitShift4_k.y, &localB->BitShift2_b);

      /* End of Outputs for SubSystem: '<S347>/Bit Shift2' */

      /* RelationalOperator: '<S334>/Equal' */
      localB->Equal = (localB->BitShift2_b.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S347>/Bit Shift' */
      BitShift(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift_h);

      /* End of Outputs for SubSystem: '<S347>/Bit Shift' */

      /* SignalConversion generated from: '<S334>/Constant' incorporates:
       *  Constant: '<S334>/Constant'
       */
      localB->TmpBufferAtConstantOutport1 = ((uint8_T)0U);
    } else if (localDW->DemuxmessageCAN1andcheckcoher_g) {
      /* Disable for RelationalOperator: '<S334>/Equal' incorporates:
       *  Outport: '<S334>/CAN2_msg_coherent'
       */
      localB->Equal = false;
      localDW->DemuxmessageCAN1andcheckcoher_g = false;
    }

    /* End of Outputs for SubSystem: '<S331>/Demux message CAN1 and check coherence1' */

    /* Switch generated from: '<S331>/Switch' incorporates:
     *  DataStoreWrite: '<S331>/Data Store Write'
     */
    if (localB->Equal_h) {
      rtd_Msg_Rx_d->Buffer_1 = localB->TmpBufferAtConstantOutport1_d;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2_i;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3_p;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4_k;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5_b;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6_d;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7_h;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8_p;
    } else {
      rtd_Msg_Rx_d->Buffer_1 = localB->TmpBufferAtConstantOutport1;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8;
    }

    /* End of Switch generated from: '<S331>/Switch' */

    /* Logic: '<S331>/OR' incorporates:
     *  DataStoreWrite: '<S331>/Data Store Write2'
     */
    *rtd_new_msg_Rx_l = (localB->Equal_h || localB->Equal);

    /* DataStoreWrite: '<S331>/Data Store Write3' incorporates:
     *  Constant: '<S331>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else if (localDW->Process_Messages1_MODE) {
    Process_Messages1_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S208>/Process_Messages1' */
}

/*
 * Disable for enable system:
 *    '<S417>/Reception substasks'
 *    '<S418>/Reception substasks'
 *    '<S419>/Reception substasks'
 */
void Receptionsubstasks_b_Disable(rtB_Receptionsubstasks_l *localB,
  rtDW_Receptionsubstasks_p *localDW)
{
  /* Disable for Logic: '<S430>/AND' incorporates:
   *  Outport: '<S430>/Receive CAN1'
   */
  localB->AND = false;

  /* Disable for Logic: '<S430>/AND1' incorporates:
   *  Outport: '<S430>/Receive CAN2'
   */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S417>/Reception substasks'
 *    '<S418>/Reception substasks'
 *    '<S419>/Reception substasks'
 */
void Receptionsubstasks_i(boolean_T rtu_Enable, real_T rtu_Time_Mark, real_T
  rtu_RX_ID, const uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_f,
  boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, boolean_T *rtd_new_msg_Rx_g, rtB_Receptionsubstasks_l
  *localB, const rtC_Receptionsubstasks_m *localC, rtDW_Receptionsubstasks_p
  *localDW)
{
  boolean_T rtb_Equal2_iq;

  /* Outputs for Enabled SubSystem: '<S417>/Reception substasks' incorporates:
   *  EnablePort: '<S430>/Enable'
   */
  if (rtu_Enable) {
    localDW->Receptionsubstasks_MODE = true;

    /* Outputs for Enabled SubSystem: '<S430>/RX buffers update' incorporates:
     *  EnablePort: '<S432>/Enable'
     */
    /* RelationalOperator: '<S430>/Equal16' incorporates:
     *  DataStoreRead: '<S430>/Data Store Read'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S432>/Data Store Write11' incorporates:
       *  DataTypeConversion: '<S432>/Cast13'
       */
      *rtd_RxID_CAN2 = (uint32_T)rtu_RX_ID;

      /* DataStoreWrite: '<S432>/Data Store Write6' incorporates:
       *  DataTypeConversion: '<S432>/Cast13'
       */
      *rtd_RxID_CAN1 = (uint32_T)rtu_RX_ID;

      /* DataStoreWrite: '<S432>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S432>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S432>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S432>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S432>/Data Store Write' incorporates:
       *  Constant: '<S432>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_f = HANcoder_E407_TTA_Template_DS_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S432>/Data Store Write3' incorporates:
       *  Constant: '<S432>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_g = false;
    }

    /* End of RelationalOperator: '<S430>/Equal16' */
    /* End of Outputs for SubSystem: '<S430>/RX buffers update' */

    /* RelationalOperator: '<S430>/Equal2' incorporates:
     *  DataStoreRead: '<S430>/Data Store Read'
     */
    rtb_Equal2_iq = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S430>/AND' incorporates:
     *  DataStoreRead: '<S430>/Data Store Read1'
     *  Logic: '<S430>/NOT'
     */
    localB->AND = (rtb_Equal2_iq && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S430>/AND1' incorporates:
     *  DataStoreRead: '<S430>/Data Store Read2'
     *  Logic: '<S430>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_iq && (!*rtd_New_Msg_Ready_CAN2));
  } else if (localDW->Receptionsubstasks_MODE) {
    Receptionsubstasks_b_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S417>/Reception substasks' */
}

/*
 * Disable for enable system:
 *    '<S431>/Check msg transmission CAN1'
 *    '<S451>/Check msg transmission CAN1'
 *    '<S471>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionC_b_Disable(rtB_CheckmsgtransmissionCAN1_e *localB,
  rtDW_CheckmsgtransmissionCAN1_b *localDW)
{
  /* Disable for RelationalOperator: '<S433>/Equal7' incorporates:
   *  Outport: '<S433>/Send CAN1'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S431>/Check msg transmission CAN1'
 *    '<S451>/Check msg transmission CAN1'
 *    '<S471>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1_e(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_f, uint8_T rtu_ValueDomainMsg_n, uint8_T
  rtu_ValueDomainMsg_o, uint8_T rtu_ValueDomainMsg_m, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_j, const real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, const real_T
  *rtd_Tx_msg_count_CAN1, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN1_e *localB, rtDW_CheckmsgtransmissionCAN1_b
  *localDW)
{
  real_T rtb_Minus2_g;
  uint8_T rtb_Cast1_d;
  uint8_T rtb_Cast4;

  /* Outputs for Enabled SubSystem: '<S431>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S433>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN1_MODE = true;

    /* Sum: '<S433>/Minus2' incorporates:
     *  Constant: '<S433>/Constant'
     */
    rtb_Minus2_g = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S433>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S436>/Enable'
     */
    /* RelationalOperator: '<S433>/Equal4' incorporates:
     *  Constant: '<S433>/Constant22'
     *  Constant: '<S433>/Constant24'
     *  Constant: '<S433>/Constant8'
     *  Math: '<S433>/Mod'
     *  Sum: '<S433>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_g, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S436>/Cast4' */
      rtb_Cast4 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S437>/Bit Shift1' */
      BitShift1(rtb_Cast4, &localB->BitShift1_n);

      /* End of Outputs for SubSystem: '<S437>/Bit Shift1' */

      /* DataTypeConversion: '<S436>/Cast1' */
      rtb_Cast1_d = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S437>/Bit Shift' */
      BitShift4(rtb_Cast1_d, &localB->BitShift_i);

      /* End of Outputs for SubSystem: '<S437>/Bit Shift' */

      /* DataStoreWrite: '<S436>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S436>/Cast16'
       *  Sum: '<S437>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_n.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_f;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_o;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_m;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_g;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_j;

      /* DataStoreWrite: '<S436>/Data Store Write8' incorporates:
       *  DataTypeConversion: '<S436>/Cast'
       */
      *rtd_TxID_CAN1 = (uint32_T)rtu_Tx_ID;
    }

    /* End of RelationalOperator: '<S433>/Equal4' */
    /* End of Outputs for SubSystem: '<S433>/TX buffer update CAN1' */

    /* RelationalOperator: '<S433>/Equal7' incorporates:
     *  Constant: '<S433>/Constant11'
     *  Constant: '<S433>/Constant27'
     *  Math: '<S433>/Mod1'
     *  Sum: '<S433>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_g, COMM_Phase1)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionC_b_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S431>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S431>/Check msg transmission CAN2'
 *    '<S451>/Check msg transmission CAN2'
 *    '<S471>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_i_Disable(rtB_CheckmsgtransmissionCAN2_n *localB,
  rtDW_CheckmsgtransmissionCAN2_f *localDW)
{
  /* Disable for RelationalOperator: '<S434>/Equal7' incorporates:
   *  Outport: '<S434>/Send CAN2'
   */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S431>/Check msg transmission CAN2'
 *    '<S451>/Check msg transmission CAN2'
 *    '<S471>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2_c(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, real_T rtu_Tx_ID, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_b, uint8_T
  rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_p, uint8_T
  rtu_ValueDomainMsg_h, uint8_T rtu_ValueDomainMsg_g5, const real_T
  *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2,
  const real_T *rtd_Tx_msg_count_CAN2, const uint8_T *rtd_basic_cycle_count,
  rtB_CheckmsgtransmissionCAN2_n *localB, rtDW_CheckmsgtransmissionCAN2_f
  *localDW)
{
  real_T rtb_Minus2_g;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S431>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S434>/Enable'
   */
  if (rtu_Enable) {
    localDW->CheckmsgtransmissionCAN2_MODE = true;

    /* Sum: '<S434>/Minus2' incorporates:
     *  Constant: '<S434>/Constant'
     */
    rtb_Minus2_g = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S434>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S442>/Enable'
     */
    /* RelationalOperator: '<S434>/Equal4' incorporates:
     *  Constant: '<S434>/Constant22'
     *  Constant: '<S434>/Constant24'
     *  Constant: '<S434>/Constant8'
     *  Math: '<S434>/Mod'
     *  Sum: '<S434>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_g, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S442>/Cast18' */
      rtb_Cast18 = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S443>/Bit Shift1' */
      BitShift1(rtb_Cast18, &localB->BitShift1_c);

      /* End of Outputs for SubSystem: '<S443>/Bit Shift1' */

      /* DataTypeConversion: '<S442>/Cast9' */
      rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S443>/Bit Shift' */
      BitShift4(rtb_Cast9, &localB->BitShift_m);

      /* End of Outputs for SubSystem: '<S443>/Bit Shift' */

      /* DataStoreWrite: '<S442>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S442>/Cast17'
       *  Sum: '<S443>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_c.y + localB->BitShift_m.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_g;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_b;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_p;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_h;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_g5;

      /* DataStoreWrite: '<S442>/Data Store Write5' incorporates:
       *  DataTypeConversion: '<S442>/Cast8'
       */
      *rtd_TxID_CAN2 = (uint32_T)rtu_Tx_ID;
    }

    /* End of RelationalOperator: '<S434>/Equal4' */
    /* End of Outputs for SubSystem: '<S434>/TX buffer update CAN2' */

    /* RelationalOperator: '<S434>/Equal7' incorporates:
     *  Constant: '<S434>/Constant11'
     *  Constant: '<S434>/Constant27'
     *  Math: '<S434>/Mod1'
     *  Sum: '<S434>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_g, COMM_Phase2)
                      == 0.0);
  } else if (localDW->CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_i_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S431>/Check msg transmission CAN2' */
}

/*
 * System initialize for enable system:
 *    '<S193>/COMM Task - Sync bc 1'
 *    '<S194>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc1_Init(rtB_COMMTaskSyncbc1 *localB, const rtC_COMMTaskSyncbc1
  *localC)
{
  /* SystemInitialize for Enabled SubSystem: '<S420>/Transmission subtasks1' */
  Transmissionsubtasks_Init(&localB->Transmissionsubtasks1,
    &localC->Transmissionsubtasks1);

  /* End of SystemInitialize for SubSystem: '<S420>/Transmission subtasks1' */
}

/*
 * Disable for enable system:
 *    '<S193>/COMM Task - Sync bc 1'
 *    '<S194>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc1_Disable(rtB_COMMTaskSyncbc1 *localB, rtDW_COMMTaskSyncbc1
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S420>/Reception substasks' */
  if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
      &localDW->Receptionsubstasks_j);
  }

  /* End of Disable for SubSystem: '<S420>/Reception substasks' */

  /* Disable for Enabled SubSystem: '<S420>/Transmission subtasks1' */
  if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
      &localDW->Transmissionsubtasks1);
  }

  /* End of Disable for SubSystem: '<S420>/Transmission subtasks1' */
  localDW->COMMTaskSyncbc1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S193>/COMM Task - Sync bc 1'
 *    '<S194>/COMM Task - Sync bc 1'
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
  boolean_T rtb_Equal1_lf;
  boolean_T rtb_NOT_ke;

  /* Outputs for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' incorporates:
   *  EnablePort: '<S420>/Enable'
   */
  if (rtu_Enable) {
    localDW->COMMTaskSyncbc1_MODE = true;

    /* RelationalOperator: '<S420>/Equal1' incorporates:
     *  Constant: '<S420>/Constant2'
     *  DataStoreRead: '<S420>/Data Store Read1'
     */
    rtb_Equal1_lf = (*rtd_Role_ID == 1.0);

    /* Logic: '<S420>/NOT' */
    rtb_NOT_ke = !rtb_Equal1_lf;

    /* Outputs for Enabled SubSystem: '<S420>/Reception substasks' */
    Receptionsubstasks(rtb_NOT_ke, rtu_TimeMark, (uint16_T *)rtd_Local_Ticks,
                       rtd_Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                       rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                       rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_new_msg_Rx_g,
                       &localB->Receptionsubstasks_j,
                       &localC->Receptionsubstasks_j,
                       &localDW->Receptionsubstasks_j);

    /* End of Outputs for SubSystem: '<S420>/Reception substasks' */

    /* Outputs for Enabled SubSystem: '<S420>/Transmission subtasks1' */
    Transmissionsubtasks(rtb_Equal1_lf, rtu_TimeMark, (real_T *)rtd_Board_ID,
                         (uint16_T *)rtd_Local_Ticks, rtd_Msg_Tx_CAN1,
                         rtd_Msg_Tx_CAN2, rtd_TxID_CAN1, rtd_TxID_CAN2, (real_T *)
                         rtd_Tx_msg_count_CAN1, (real_T *)rtd_Tx_msg_count_CAN2,
                         (uint8_T *)rtd_basic_cycle_count,
                         &localB->Transmissionsubtasks1,
                         &localC->Transmissionsubtasks1,
                         &localDW->Transmissionsubtasks1);

    /* End of Outputs for SubSystem: '<S420>/Transmission subtasks1' */
  } else if (localDW->COMMTaskSyncbc1_MODE) {
    COMMTaskSyncbc1_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S193>/COMM Task - Sync bc 1' */
}

/*
 * Disable for enable system:
 *    '<S529>/Demux message CAN1 and check coherence'
 *    '<S560>/Demux message CAN1 and check coherence'
 *    '<S590>/Demux message CAN1 and check coherence'
 *    '<S731>/Demux message CAN1 and check coherence'
 *    '<S764>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andch_j_Disable(rtB_DemuxmessageCAN1andcheckc_m *localB,
  rtDW_DemuxmessageCAN1andcheck_g *localDW)
{
  /* Disable for RelationalOperator: '<S532>/Equal1' incorporates:
   *  Outport: '<S532>/CAN1_msg_coherent'
   */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcoher_g = false;
}

/*
 * Output and update for enable system:
 *    '<S529>/Demux message CAN1 and check coherence'
 *    '<S560>/Demux message CAN1 and check coherence'
 *    '<S590>/Demux message CAN1 and check coherence'
 *    '<S731>/Demux message CAN1 and check coherence'
 *    '<S764>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_m *localB, rtDW_DemuxmessageCAN1andcheck_g
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S532>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_g = true;

    /* Outputs for Atomic SubSystem: '<S535>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_k);

    /* End of Outputs for SubSystem: '<S535>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S535>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_k.y, &localB->BitShift1_mu);

    /* End of Outputs for SubSystem: '<S535>/Bit Shift1' */

    /* Switch: '<S536>/Switch' incorporates:
     *  Constant: '<S536>/Constant'
     *  Constant: '<S536>/Constant1'
     *  DataStoreWrite: '<S536>/Data Store Write'
     *  RelationalOperator: '<S536>/GreaterThan'
     *  Sum: '<S536>/Plus'
     */
    if (localB->BitShift1_mu.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S536>/Switch' */

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S532>/CAN1_msg' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Outputs for Atomic SubSystem: '<S535>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_g);

    /* End of Outputs for SubSystem: '<S535>/Bit Shift' */

    /* RelationalOperator: '<S532>/Equal1' */
    localB->Equal1 = (localB->BitShift_g.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S535>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_d);

    /* End of Outputs for SubSystem: '<S535>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S535>/Bit Shift2' */
    BitShift2(localB->BitShift4_d.y, &localB->BitShift2_c);

    /* End of Outputs for SubSystem: '<S535>/Bit Shift2' */

    /* SignalConversion generated from: '<S532>/Constant' incorporates:
     *  Constant: '<S532>/Constant'
     */
    localB->TmpBufferAtConstantOutport1 = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_g) {
    DemuxmessageCAN1andch_j_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S529>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S529>/Demux message CAN1 and check coherence1'
 *    '<S560>/Demux message CAN1 and check coherence1'
 *    '<S590>/Demux message CAN1 and check coherence1'
 *    '<S731>/Demux message CAN1 and check coherence1'
 *    '<S764>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_d_Disable(rtB_DemuxmessageCAN1andcheckc_n *localB,
  rtDW_DemuxmessageCAN1andcheck_j *localDW)
{
  /* Disable for RelationalOperator: '<S533>/Equal1' incorporates:
   *  Outport: '<S533>/CAN2_msg_coherent'
   */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcoher_i = false;
}

/*
 * Output and update for enable system:
 *    '<S529>/Demux message CAN1 and check coherence1'
 *    '<S560>/Demux message CAN1 and check coherence1'
 *    '<S590>/Demux message CAN1 and check coherence1'
 *    '<S731>/Demux message CAN1 and check coherence1'
 *    '<S764>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_a(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T *rtd_msg_count_DEBUG,
  rtB_DemuxmessageCAN1andcheckc_n *localB, rtDW_DemuxmessageCAN1andcheck_j
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S533>/Enable'
   */
  if (rtu_Enable) {
    localDW->DemuxmessageCAN1andcheckcoher_i = true;

    /* Outputs for Atomic SubSystem: '<S547>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S547>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S547>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_i);

    /* End of Outputs for SubSystem: '<S547>/Bit Shift1' */

    /* Switch: '<S548>/Switch' incorporates:
     *  Constant: '<S548>/Constant'
     *  Constant: '<S548>/Constant1'
     *  DataStoreWrite: '<S548>/Data Store Write'
     *  RelationalOperator: '<S548>/GreaterThan'
     *  Sum: '<S548>/Plus'
     */
    if (localB->BitShift1_i.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S548>/Switch' */

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion generated from: '<S533>/CAN2_msg' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Outputs for Atomic SubSystem: '<S547>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_a);

    /* End of Outputs for SubSystem: '<S547>/Bit Shift' */

    /* RelationalOperator: '<S533>/Equal1' */
    localB->Equal1 = (localB->BitShift_a.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S547>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S547>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S547>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S547>/Bit Shift2' */

    /* SignalConversion generated from: '<S533>/Constant' incorporates:
     *  Constant: '<S533>/Constant'
     */
    localB->TmpBufferAtConstantOutport1 = ((uint8_T)0U);
  } else if (localDW->DemuxmessageCAN1andcheckcoher_i) {
    DemuxmessageCAN1andch_d_Disable(localB, localDW);
  }

  /* End of Outputs for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S560>/Desync calculation'
 *    '<S590>/Desync calculation'
 *    '<S764>/Desync calculation'
 *    '<S857>/Desync calculation'
 */
void Desynccalculation(boolean_T rtu_Enable, real_T rtu_TM_COMM, boolean_T
  rtu_New_msg_CAN1, uint8_T rtu_msg_count_CAN1, uint8_T rtu_msg_count_CAN2,
  real_T *rtd_Desync_Ticks, const uint16_T *rtd_Msg_Rx_Ticks_CAN1, const
  uint16_T *rtd_Msg_Rx_Ticks_CAN2)
{
  real_T u0;

  /* Outputs for Enabled SubSystem: '<S560>/Desync calculation' incorporates:
   *  EnablePort: '<S565>/Enable'
   */
  if (rtu_Enable) {
    /* Switch: '<S565>/Switch1' incorporates:
     *  Constant: '<S565>/Constant'
     *  Constant: '<S565>/Constant1'
     *  Constant: '<S565>/delay_estimation_1'
     *  Constant: '<S565>/delay_estimation_2'
     *  DataStoreRead: '<S565>/Data Store Read'
     *  DataStoreRead: '<S565>/Data Store Read1'
     *  Product: '<S565>/Multiply'
     *  Product: '<S565>/Multiply1'
     *  Sum: '<S565>/Minus'
     *  Sum: '<S565>/Minus1'
     *  Sum: '<S565>/Sum'
     *  Sum: '<S565>/Sum1'
     */
    if (rtu_New_msg_CAN1) {
      u0 = ((COMM_Phase1 * (real_T)rtu_msg_count_CAN1 + rtu_TM_COMM) + 3.0) -
        (real_T)*rtd_Msg_Rx_Ticks_CAN1;
    } else {
      u0 = ((COMM_Phase2 * (real_T)rtu_msg_count_CAN2 + rtu_TM_COMM) + 3.0) -
        (real_T)*rtd_Msg_Rx_Ticks_CAN2;
    }

    /* Saturate: '<S565>/Saturation' incorporates:
     *  DataStoreWrite: '<S565>/Data Store Write1'
     *  Switch: '<S565>/Switch1'
     */
    if (u0 > 15.0) {
      *rtd_Desync_Ticks = 15.0;
    } else if (u0 < (-15.0)) {
      *rtd_Desync_Ticks = (-15.0);
    } else {
      *rtd_Desync_Ticks = u0;
    }

    /* End of Saturate: '<S565>/Saturation' */
  }

  /* End of Outputs for SubSystem: '<S560>/Desync calculation' */
}

/*
 * Output and update for enable system:
 *    '<S731>/Member Counter'
 *    '<S764>/Member Counter1'
 */
void MemberCounter(boolean_T rtu_Enable, real_T *rtd_Member1_ID, real_T
                   *rtd_Member2_ID, real_T *rtd_Members_Nr)
{
  real_T rtb_Add_nw;

  /* Outputs for Enabled SubSystem: '<S731>/Member Counter' incorporates:
   *  EnablePort: '<S737>/Enable'
   */
  if (rtu_Enable) {
    /* Sum: '<S737>/Add' incorporates:
     *  Constant: '<S737>/Constant'
     *  DataStoreRead: '<S737>/Data Store Read'
     */
    rtb_Add_nw = *rtd_Members_Nr + 1.0;

    /* DataStoreWrite: '<S737>/Data Store Write' */
    *rtd_Members_Nr = rtb_Add_nw;

    /* Outputs for Enabled SubSystem: '<S737>/Subsystem' incorporates:
     *  EnablePort: '<S762>/Enable'
     */
    /* RelationalOperator: '<S737>/Equal' incorporates:
     *  Constant: '<S737>/Constant1'
     */
    if (rtb_Add_nw == 1.0) {
      /* DataStoreWrite: '<S762>/Data Store Write1' incorporates:
       *  Constant: '<S762>/Constant'
       */
      *rtd_Member1_ID = 1.0;
    }

    /* End of RelationalOperator: '<S737>/Equal' */
    /* End of Outputs for SubSystem: '<S737>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S737>/Subsystem1' incorporates:
     *  EnablePort: '<S763>/Enable'
     */
    /* RelationalOperator: '<S737>/Equal1' incorporates:
     *  Constant: '<S737>/Constant2'
     */
    if (rtb_Add_nw == 2.0) {
      /* DataStoreWrite: '<S763>/Data Store Write1' incorporates:
       *  Constant: '<S763>/Constant'
       */
      *rtd_Member2_ID = 1.0;
    }

    /* End of RelationalOperator: '<S737>/Equal1' */
    /* End of Outputs for SubSystem: '<S737>/Subsystem1' */
  }

  /* End of Outputs for SubSystem: '<S731>/Member Counter' */
}

static void SystemCore_setup(dsp_simulink_MovingAverage *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
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

/* System initialize for function-call system: '<S9>/TTA System' */
void TTASystem_Init(rtB_TTASystem *localB, const rtC_TTASystem *localC,
                    rtDW_TTASystem *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;

  /* Start for DataStoreMemory: '<S28>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* SystemInitialize for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A2' */
  /* Start for M-S-Function: '<S163>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN7, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/DEBUG - Toggle digital pin A2' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/Matrix Cycle Manager' */
  /* SystemInitialize for Enabled SubSystem: '<S160>/Controller Matrix Cycle' */
  /* SystemInitialize for Enabled SubSystem: '<S190>/controller basic cycle 0' */
  /* SystemInitialize for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' */
  /* SystemInitialize for Enabled SubSystem: '<S196>/Transmission subtasks' */
  Transmissionsubtasks_Init(&localB->Transmissionsubtasks_l,
    &localC->Transmissionsubtasks_l);

  /* End of SystemInitialize for SubSystem: '<S196>/Transmission subtasks' */
  /* End of SystemInitialize for SubSystem: '<S192>/COMM Task - Sync bc 0' */
  /* End of SystemInitialize for SubSystem: '<S190>/controller basic cycle 0' */

  /* SystemInitialize for Enabled SubSystem: '<S190>/controller basic cycle 1' */
  /* SystemInitialize for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */
  /* Start for M-S-Function: '<S559>/Level-2 M-file S-Function' */

  /* configure the analog input for filtered inputs */
  AninConfigure(ANIN_PORTF_PIN10,0);

  /* Start for MATLABSystem: '<S425>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  SystemCore_setup(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S425>/Moving Average' */
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0;
    for (i = 0; i < 29; i++) {
      obj->pCumSumRev[i] = 0.0;
    }

    obj->pCumRevIndex = 1.0;
    obj->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S425>/Moving Average' */
  /* End of SystemInitialize for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

  /* SystemInitialize for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
  COMMTaskSyncbc1_Init(&localB->COMMTaskSyncbc1_f, &localC->COMMTaskSyncbc1_f);

  /* End of SystemInitialize for SubSystem: '<S193>/COMM Task - Sync bc 1' */
  /* End of SystemInitialize for SubSystem: '<S190>/controller basic cycle 1' */

  /* SystemInitialize for Enabled SubSystem: '<S190>/controller basic cycle 2' */
  /* SystemInitialize for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' */
  /* SystemInitialize for Enabled SubSystem: '<S660>/Enabled Subsystem' */
  /* Start for M-S-Function: '<S798>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN7, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S799>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN8, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S802>/Level-2 M-file S-Function' */

  /* configure the quadrature encoder module */
  QuadEncConfigure(QUADENC_TIM8_PC6_PC7, QUADENC_CFG_FLOATING);

  /* End of SystemInitialize for SubSystem: '<S660>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S194>/COMP Task - Steering Controller' */

  /* SystemInitialize for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
  COMMTaskSyncbc1_Init(&localB->COMMTaskSyncbc1_d, &localC->COMMTaskSyncbc1_d);

  /* End of SystemInitialize for SubSystem: '<S194>/COMM Task - Sync bc 1' */
  /* End of SystemInitialize for SubSystem: '<S190>/controller basic cycle 2' */
  /* End of SystemInitialize for SubSystem: '<S160>/Controller Matrix Cycle' */
  /* End of SystemInitialize for SubSystem: '<S28>/Matrix Cycle Manager' */

  /* SystemInitialize for Chart: '<S28>/Chart1' incorporates:
   *  SubSystem: '<S9>/CAN1 Recieve'
   */
  CAN1Recieve_Init();

  /* SystemInitialize for Chart: '<S28>/Chart2' incorporates:
   *  SubSystem: '<S9>/CAN2 Recieve'
   */
  CAN2Recieve_Init();

  /* SystemInitialize for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A0' */
  /* Start for M-S-Function: '<S161>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN0, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/DEBUG - Toggle digital pin A0' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A1' */
  /* Start for M-S-Function: '<S162>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/DEBUG - Toggle digital pin A1' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin D10' */
  /* Start for M-S-Function: '<S165>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN4, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/DEBUG - Toggle digital pin D10' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A4' */
  /* Start for M-S-Function: '<S164>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN9, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/DEBUG - Toggle digital pin A4' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' */
  /* Start for M-S-Function: '<S186>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' */
  /* Start for M-S-Function: '<S187>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' */
  /* Start for M-S-Function: '<S188>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN12, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* SystemInitialize for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' */
  /* Start for M-S-Function: '<S189>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN15, DIGOUT_CFG_OPENDRAIN);

  /* End of SystemInitialize for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* SystemInitialize for Chart: '<S28>/Chart4' incorporates:
   *  SubSystem: '<S9>/Measure EXecution time'
   */
  MeasureEXecutiontime_Init();
}

/* System reset for function-call system: '<S9>/TTA System' */
void TTASystem_Reset(rtDW_TTASystem *localDW)
{
  /* SystemReset for Chart: '<S28>/Chart' */
  localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S28>/Chart1' */
  localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S28>/Chart2' */
  localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S28>/Chart3' */
  localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S28>/Chart4' */
  localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ = 0U;
}

/* Disable for function-call system: '<S9>/TTA System' */
void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW)
{
  /* Disable for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A2' */
  if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/DEBUG - Toggle digital pin A2' */

  /* Disable for Enabled SubSystem: '<S28>/Initialization' */
  if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S154>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for SignalConversion generated from: '<S170>/Finish Initialization' incorporates:
       *  Outport: '<S170>/Finish Initialization'
       */
      localB->OutportBufferForFinishInitializ = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S154>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/Initialization' */

  /* Disable for Enabled SubSystem: '<S28>/Matrix Cycle Manager' */
  if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S160>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S204>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S204>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S208>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S208>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S210>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S210>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S212>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S212>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S196>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S196>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S196>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S196>/Transmission subtasks' */
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S197>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S197>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S197>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S197>/Transmission subtasks' */
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S198>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S198>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S198>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S198>/Transmission subtasks' */
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S199>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S199>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S199>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S199>/Transmission subtasks' */
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote3' */

        /* Disable for Logic: '<S192>/OR1' incorporates:
         *  Outport: '<S192>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S192>/OR4' incorporates:
         *  Outport: '<S192>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S192>/OR2' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S192>/OR3' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S424>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S424>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S426>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S426>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S427>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S427>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S428>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S428>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S417>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S417>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S417>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S417>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S418>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S418>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S418>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S418>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S419>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S419>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S419>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S419>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S193>/OR' incorporates:
         *  Outport: '<S193>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S193>/OR1' incorporates:
         *  Outport: '<S193>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S193>/OR2' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S193>/OR3' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S658>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S658>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */
        if (localDW->COMPTaskRx_Trailer2Articulation) {
          /* Disable for Enabled SubSystem: '<S659>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S659>/Process_Messages' */
          localDW->COMPTaskRx_Trailer2Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' */
        if (localDW->COMPTaskSteeringController_MODE) {
          /* Disable for Enabled SubSystem: '<S660>/Enabled Subsystem' */
          if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S660>/Enabled Subsystem' */
          localDW->COMPTaskSteeringController_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Steering Controller' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S661>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S661>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S652>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S652>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S652>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S652>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S653>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S653>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S653>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S653>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S194>/OR' incorporates:
         *  Outport: '<S194>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S194>/OR1' incorporates:
         *  Outport: '<S194>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S194>/OR2' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S194>/OR3' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 2' */

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN1'
       */
      localB->signal1 = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN2'
       */
      localB->signal2_j = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN1'
       */
      localB->signal3_k = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN2'
       */
      localB->signal4_e = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S160>/Controller Matrix Cycle' */
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/Matrix Cycle Manager' */

  /* Disable for Chart: '<S28>/Chart1' incorporates:
   *  SubSystem: '<S9>/CAN1 Recieve'
   */
  CAN1Recieve_Disable(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h);

  /* Disable for Chart: '<S28>/Chart2' incorporates:
   *  SubSystem: '<S9>/CAN2 Recieve'
   */
  CAN2Recieve_Disable(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b);

  /* Disable for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A0' */
  if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/DEBUG - Toggle digital pin A0' */

  /* Disable for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A1' */
  if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/DEBUG - Toggle digital pin A1' */

  /* Disable for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin D10' */
  if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/DEBUG - Toggle digital pin D10' */

  /* Disable for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A4' */
  if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S28>/DEBUG - Toggle digital pin A4' */

  /* Disable for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Disable for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Disable for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Disable for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Disable for Chart: '<S28>/Chart4' incorporates:
   *  SubSystem: '<S9>/Measure EXecution time'
   */
  MeasureEXecutiontime_Disable(&localDW->MeasureEXecutiontime_d);
}

/* Output and update for function-call system: '<S9>/TTA System' */
void TTASystem(RT_MODEL * const rtM, const real_T *rtd_Board_ID, uint16_T
               *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type
               *rtd_Msg_Rx_CAN1, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
               *rtd_Msg_Rx_Ticks_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN2,
               msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
               *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
               *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T
               *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
               *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
               *rtd_Toggle_Pin_D12, real_T *rtd_Toggle_Pin_D13, real_T
               *rtd_Toggle_Pin_D8, real_T *rtd_Toggle_Pin_D9, real_T
               *rtd_Trailer_ID, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2,
               real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
               rtB_TTASystem *localB, const rtC_TTASystem *localC,
               rtDW_TTASystem *localDW)
{
  /* local block i/o variables */
  int32_T rtb_Level2MfileSFunction_p;
  uint16_T rtb_Level2MfileSFunction_i;
  g_dsp_internal_SlidingWindowAve *obj;
  msg_buffer_type rtb_DataStoreRead3;
  msg_buffer_type rtb_DataStoreRead3_d0;
  msg_buffer_type rtb_DataStoreRead3_f;
  msg_buffer_type rtb_DataStoreRead3_gy;
  msg_buffer_type rtb_DataStoreRead3_h;
  msg_buffer_type rtb_DataStoreRead3_h0;
  msg_buffer_type rtb_DataStoreRead3_ha;
  msg_buffer_type rtb_DataStoreRead3_k1;
  msg_buffer_type rtb_DataStoreRead3_n;
  msg_buffer_type rtb_DataStoreRead3_o;
  msg_buffer_type rtb_DataStoreRead3_p;
  msg_buffer_type rtb_DataStoreRead_bx;
  msg_buffer_type rtb_DataStoreRead_cg;
  msg_buffer_type rtb_DataStoreRead_d1;
  msg_buffer_type rtb_DataStoreRead_ge;
  msg_buffer_type rtb_DataStoreRead_jaf;
  msg_buffer_type rtb_DataStoreRead_k;
  msg_buffer_type rtb_DataStoreRead_ks;
  msg_buffer_type rtb_DataStoreRead_mg;
  msg_buffer_type rtb_DataStoreRead_n4;
  msg_buffer_type rtb_DataStoreRead_ow;
  msg_buffer_type rtb_DataStoreRead_py;
  real_T csumrev[29];
  real_T rtb_signal1[20];
  real_T rtb_signal2[20];
  real_T rtb_signal1_h4[15];
  real_T rtb_Atan1_tmp;
  real_T rtb_DataStoreRead14;
  real_T rtb_DataStoreRead15;
  real_T rtb_DataStoreRead15_b;
  real_T rtb_DataStoreRead15_o;
  real_T rtb_DataStoreRead4_dd;
  real_T rtb_DataStoreRead_nc;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  real_T rtb_Product;
  real_T rtb_Product_e;
  real_T rtb_Product_p;
  int32_T exitg1;
  int32_T i;
  int_T linIx;
  uint32_T EnabledSubsystem_ELAPS_T[2];
  uint32_T EnabledSubsystem_ELAPS_T_tmp;
  uint32_T elapseT_H;
  int16_T u0_0;
  uint16_T rtb_DataStoreRead8_c;
  uint16_T rtb_DataStoreRead_bb;
  uint16_T rtb_DataStoreRead_bu;
  uint16_T rtb_DataStoreRead_iw;
  uint16_T rtb_DataStoreRead_l5;
  uint16_T rtb_DataStoreRead_mx;
  uint16_T u0;
  uint16_T u1;
  int8_T rtb_FindNonzeroElements[3];
  uint8_T rtb_Switch_Buffer_1;
  boolean_T rtb_AND17;
  boolean_T rtb_AND17_j;
  boolean_T rtb_AND1_do;
  boolean_T rtb_AND1_h;
  boolean_T rtb_AND1_in;
  boolean_T rtb_AND1_l;
  boolean_T rtb_AND1_n;
  boolean_T rtb_AND1_ny;
  boolean_T rtb_AND1_o;
  boolean_T rtb_AND1_oq;
  boolean_T rtb_AND1_p;
  boolean_T rtb_AND1_pi;
  boolean_T rtb_AND1_ps;
  boolean_T rtb_AND_an;
  boolean_T rtb_AND_b1;
  boolean_T rtb_AND_bp;
  boolean_T rtb_AND_c;
  boolean_T rtb_AND_fg;
  boolean_T rtb_AND_ht;
  boolean_T rtb_AND_i2;
  boolean_T rtb_AND_ib;
  boolean_T rtb_AND_iz;
  boolean_T rtb_AND_jh;
  boolean_T rtb_AND_jk;
  boolean_T rtb_AND_lr;
  boolean_T rtb_AND_p4;
  boolean_T rtb_DataStoreRead1_ah;
  boolean_T rtb_DataStoreRead1_an;
  boolean_T rtb_DataStoreRead1_cd;
  boolean_T rtb_DataStoreRead1_cu;
  boolean_T rtb_DataStoreRead1_ec;
  boolean_T rtb_DataStoreRead1_kx;
  boolean_T rtb_DataStoreRead1_lu;
  boolean_T rtb_DataStoreRead1_m1;
  boolean_T rtb_DataStoreRead1_mv;
  boolean_T rtb_DataStoreRead1_oa;
  boolean_T rtb_DataStoreRead1_oi;
  boolean_T rtb_DataStoreRead2_c;
  boolean_T rtb_DataStoreRead2_cu;
  boolean_T rtb_DataStoreRead2_d;
  boolean_T rtb_DataStoreRead2_f3;
  boolean_T rtb_DataStoreRead2_gt;
  boolean_T rtb_DataStoreRead2_i5;
  boolean_T rtb_DataStoreRead2_k;
  boolean_T rtb_DataStoreRead2_l3;
  boolean_T rtb_DataStoreRead2_ln;
  boolean_T rtb_DataStoreRead2_mu;
  boolean_T rtb_DataStoreRead2_pc;
  boolean_T rtb_DataStoreRead2_pz;
  boolean_T rtb_DataStoreRead_h2y;
  boolean_T rtb_Equal1_ft;
  boolean_T rtb_Equal1_iw;
  boolean_T rtb_Equal2_fk;
  boolean_T rtb_Equal2_fs;
  boolean_T rtb_Equal2_id;
  boolean_T rtb_Equal2_m;
  boolean_T rtb_Equal3_gf;
  boolean_T rtb_Equal4_nu;
  boolean_T rtb_Equal5_c;
  boolean_T rtb_Equal6_f;
  boolean_T rtb_Equal7_g;
  boolean_T rtb_Equal8_b;
  boolean_T rtb_NOT_ah;
  boolean_T rtb_NOT_ao;
  boolean_T rtb_NOT_b4;
  boolean_T rtb_NOT_bb;
  boolean_T rtb_NOT_c;
  boolean_T rtb_NOT_cut;
  boolean_T rtb_NOT_e5;
  boolean_T rtb_NOT_ek;
  boolean_T rtb_NOT_ez;
  boolean_T rtb_NOT_gl;
  boolean_T rtb_NOT_jl;
  boolean_T rtb_NOT_ki;
  boolean_T rtb_OR1_a;
  boolean_T rtb_OR1_cf;
  boolean_T rtb_OR1_j;
  boolean_T tmp;

  /* Outputs for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A2' incorporates:
   *  EnablePort: '<S151>/Enable'
   */
  /* Constant: '<S28>/Constant2' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA2_MODE = true;

    /* Switch: '<S151>/Switch' incorporates:
     *  DataStoreRead: '<S151>/Data Store Read'
     */
    if (localDW->A2_Pin_State) {
      /* DataStoreWrite: '<S151>/Data Store Write1' incorporates:
       *  Constant: '<S151>/Constant1'
       */
      localDW->A2_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S151>/Data Store Write1' incorporates:
       *  Constant: '<S151>/Constant'
       */
      localDW->A2_Pin_State = true;
    }

    /* End of Switch: '<S151>/Switch' */
    /* DataStoreRead: '<S151>/Data Store Read1' */
    localB->DataStoreRead1_o = localDW->A2_Pin_State;

    /* Update for M-S-Function: '<S163>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o == 0) {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Constant: '<S28>/Constant2' */
  /* End of Outputs for SubSystem: '<S28>/DEBUG - Toggle digital pin A2' */

  /* Outputs for Enabled SubSystem: '<S28>/Initialization' incorporates:
   *  EnablePort: '<S154>/Enable'
   */
  /* DataStoreRead: '<S28>/Data Store Read' incorporates:
   *  DataStoreRead: '<S154>/Data Store Read1'
   *  Logic: '<S154>/AND'
   *  Logic: '<S154>/OR'
   *  Logic: '<S154>/OR2'
   *  Logic: '<S154>/OR4'
   *  Logic: '<S154>/OR5'
   */
  if (localDW->Initialization_flag) {
    localDW->Initialization_MODE = true;

    /* Logic: '<S154>/OR1' */
    rtb_DataStoreRead_h2y = ((*rtd_New_Msg_Ready_CAN1) ||
      (*rtd_New_Msg_Ready_CAN2));

    /* RelationalOperator: '<S154>/Equal' incorporates:
     *  Constant: '<S154>/Board nr1'
     */
    rtb_DataStoreRead2_f3 = (*rtd_Board_ID == 2.0);

    /* RelationalOperator: '<S154>/Equal1' incorporates:
     *  Constant: '<S154>/Board nr2'
     */
    rtb_Equal1_iw = (*rtd_Board_ID == 3.0);

    /* RelationalOperator: '<S154>/Equal2' incorporates:
     *  Constant: '<S154>/Board nr3'
     */
    rtb_Equal2_m = (*rtd_Board_ID == 4.0);

    /* RelationalOperator: '<S154>/Equal3' incorporates:
     *  Constant: '<S154>/Board nr4'
     */
    rtb_Equal3_gf = (*rtd_Board_ID == 5.0);

    /* RelationalOperator: '<S154>/Equal4' incorporates:
     *  Constant: '<S154>/Board nr5'
     */
    rtb_Equal4_nu = (*rtd_Board_ID == 6.0);

    /* RelationalOperator: '<S154>/Equal5' incorporates:
     *  Constant: '<S154>/Board nr6'
     */
    rtb_Equal5_c = (*rtd_Board_ID == 7.0);

    /* RelationalOperator: '<S154>/Equal6' incorporates:
     *  Constant: '<S154>/Board nr7'
     */
    rtb_Equal6_f = (*rtd_Board_ID == 11.0);

    /* RelationalOperator: '<S154>/Equal7' incorporates:
     *  Constant: '<S154>/Board nr8'
     */
    rtb_Equal7_g = (*rtd_Board_ID == 12.0);

    /* RelationalOperator: '<S154>/Equal8' incorporates:
     *  Constant: '<S154>/Board nr9'
     */
    rtb_Equal8_b = (*rtd_Board_ID == 13.0);

    /* Logic: '<S154>/OR2' incorporates:
     *  Logic: '<S154>/OR3'
     */
    tmp = (rtb_DataStoreRead2_f3 || rtb_Equal1_iw || rtb_Equal2_m);

    /* Outputs for Enabled SubSystem: '<S154>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S170>/Enable'
     */
    if (((tmp || rtb_Equal3_gf || rtb_Equal4_nu || rtb_Equal5_c || rtb_Equal6_f ||
          rtb_Equal7_g || rtb_Equal8_b) && localDW->Initialization_Timeout) ||
        rtb_DataStoreRead_h2y) {
      localDW->RoleIDandGlobalTimeinit_MODE = true;

      /* Outputs for Enabled SubSystem: '<S170>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S172>/Enable'
       */
      if (rtb_DataStoreRead_h2y) {
        /* DataStoreWrite: '<S172>/Data Store Write4' incorporates:
         *  Constant: '<S172>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* RelationalOperator: '<S172>/Equal' incorporates:
         *  Constant: '<S172>/Constant'
         */
        rtb_DataStoreRead2_f3 = (*rtd_New_Msg_Ready_CAN1 == 1.0);

        /* Switch: '<S172>/Switch' */
        if (rtb_DataStoreRead2_f3) {
          /* Switch: '<S172>/Switch' incorporates:
           *  DataStoreRead: '<S172>/Data Store Read1'
           */
          rtb_Switch_Buffer_1 = rtd_Msg_Rx_CAN1->Buffer_1;
        } else {
          /* Switch: '<S172>/Switch' incorporates:
           *  DataStoreRead: '<S172>/Data Store Read2'
           */
          rtb_Switch_Buffer_1 = rtd_Msg_Rx_CAN2->Buffer_1;
        }

        /* End of Switch: '<S172>/Switch' */

        /* Outputs for Atomic SubSystem: '<S173>/Bit Shift3' */
        BitShift3(rtb_Switch_Buffer_1, &localB->BitShift3_i);

        /* End of Outputs for SubSystem: '<S173>/Bit Shift3' */

        /* Outputs for Atomic SubSystem: '<S173>/Bit Shift1' */
        /* MATLAB Function: '<S175>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S180>:1' */
        /* '<S180>:1:8' */
        Rx_init_mc = (uint8_T)((uint32_T)localB->BitShift3_i.y >> 5);

        /* End of Outputs for SubSystem: '<S173>/Bit Shift1' */

        /* Switch: '<S172>/Switch1' */
        if (rtb_DataStoreRead2_f3) {
          /* DataTypeConversion: '<S172>/Cast' incorporates:
           *  Constant: '<S172>/Constant1'
           *  Constant: '<S172>/Constant3'
           *  Constant: '<S172>/delay_estimation_1'
           *  Product: '<S172>/Multiply'
           *  Sum: '<S172>/Sum'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase1 * (real_T)Rx_init_mc + 0.0) + 3.0);
        } else {
          /* DataTypeConversion: '<S172>/Cast' incorporates:
           *  Constant: '<S172>/Constant2'
           *  Constant: '<S172>/Constant3'
           *  Constant: '<S172>/delay_estimation_2'
           *  Product: '<S172>/Multiply1'
           *  Sum: '<S172>/Sum1'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase2 * (real_T)Rx_init_mc + 0.0) + 3.0);
        }

        /* End of Switch: '<S172>/Switch1' */

        /* DataStoreWrite: '<S172>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT;

        /* Outputs for Atomic SubSystem: '<S173>/Bit Shift' */
        /* MATLAB Function: '<S174>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S179>:1' */
        /* '<S179>:1:8' */
        Rx_init_bc = (uint8_T)((uint32_T)rtb_Switch_Buffer_1 >> 7);

        /* End of Outputs for SubSystem: '<S173>/Bit Shift' */

        /* DataStoreWrite: '<S172>/Data Store Write2' */
        localDW->basic_cycle_count = Rx_init_bc;

        /* Outputs for Atomic SubSystem: '<S173>/Bit Shift4' */
        BitShift4(rtb_Switch_Buffer_1, &localB->BitShift4_d);

        /* End of Outputs for SubSystem: '<S173>/Bit Shift4' */

        /* Outputs for Atomic SubSystem: '<S173>/Bit Shift2' */
        /* MATLAB Function: '<S176>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S181>:1' */
        /* '<S181>:1:8' */
        Rx_init_id = (uint8_T)((uint32_T)localB->BitShift4_d.y >> 4);

        /* End of Outputs for SubSystem: '<S173>/Bit Shift2' */

        /* DataStoreWrite: '<S172>/Data Store Write3' incorporates:
         *  DataTypeConversion: '<S172>/Cast1'
         */
        *rtd_Master_ID = Rx_init_id;
      }

      /* End of Outputs for SubSystem: '<S170>/Global Time Initialization Slave' */

      /* Logic: '<S170>/AND' incorporates:
       *  Constant: '<S170>/Constant2'
       *  RelationalOperator: '<S170>/Equal'
       */
      rtb_DataStoreRead2_f3 = (localDW->Initialization_Timeout &&
        (*rtd_Trailer_ID == 3.0));

      /* Outputs for Enabled SubSystem: '<S170>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S171>/Enable'
       */
      if (rtb_DataStoreRead2_f3) {
        /* DataStoreWrite: '<S171>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast;

        /* DataStoreWrite: '<S171>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;

        /* DataStoreWrite: '<S171>/Data Store Write3' */
        *rtd_Master_ID = *rtd_Board_ID;
      }

      /* End of Outputs for SubSystem: '<S170>/Global Time Initialization Master' */

      /* Switch: '<S170>/Switch2' incorporates:
       *  Constant: '<S170>/Constant1'
       *  DataStoreWrite: '<S170>/Data Store Write'
       *  Switch: '<S170>/Switch1'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->Role_ID = 2.0;
      } else if (rtb_DataStoreRead2_f3) {
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S170>/Constant'
         *  DataStoreWrite: '<S170>/Data Store Write'
         */
        localDW->Role_ID = 1.0;
      }

      /* End of Switch: '<S170>/Switch2' */

      /* DataStoreWrite: '<S170>/Data Store Write3' incorporates:
       *  Constant: '<S170>/RESET2'
       */
      *rtd_New_Msg_Ready_CAN1 = false;

      /* DataStoreWrite: '<S170>/Data Store Write5' incorporates:
       *  Constant: '<S170>/RESET3'
       */
      *rtd_New_Msg_Ready_CAN2 = false;

      /* DataStoreWrite: '<S170>/Data Store Write2' incorporates:
       *  Constant: '<S170>/RESET1'
       */
      localDW->Delay_Counter = 0.0;

      /* SignalConversion generated from: '<S170>/Finish Initialization' incorporates:
       *  Constant: '<S170>/SET'
       */
      localB->OutportBufferForFinishInitializ = 1.0;
    } else if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for SignalConversion generated from: '<S170>/Finish Initialization' incorporates:
       *  Outport: '<S170>/Finish Initialization'
       */
      localB->OutportBufferForFinishInitializ = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S154>/RoleID and Global Time init' */

    /* Logic: '<S154>/NOT' incorporates:
     *  DataStoreRead: '<S154>/Data Store Read1'
     *  DataStoreWrite: '<S154>/Data Store Write1'
     *  Logic: '<S154>/AND'
     *  Logic: '<S154>/OR'
     *  Logic: '<S154>/OR2'
     */
    localDW->Initialization_flag = (localB->OutportBufferForFinishInitializ ==
      0.0);

    /* RelationalOperator: '<S166>/GreaterThan' incorporates:
     *  Constant: '<S154>/Constant'
     *  DataStoreRead: '<S166>/Data Store Read1'
     *  DataStoreWrite: '<S154>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 1356.0);

    /* Switch: '<S166>/Switch' incorporates:
     *  Constant: '<S166>/Increment1'
     *  Constant: '<S166>/Reset'
     *  DataStoreRead: '<S166>/Data Store Read'
     *  DataStoreWrite: '<S154>/Data Store Write'
     *  DataStoreWrite: '<S166>/Data Store Write2'
     *  Sum: '<S166>/Add2'
     */
    if (localDW->Initialization_Timeout) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S166>/Switch' */

    /* Outputs for Enabled SubSystem: '<S154>/Initialize Tractor' incorporates:
     *  EnablePort: '<S167>/Enable'
     */
    if (rtb_Equal6_f || rtb_Equal7_g || rtb_Equal8_b) {
      /* DataStoreWrite: '<S167>/Data Store Write' incorporates:
       *  Constant: '<S167>/Constant'
       */
      *rtd_Trailer_ID = 3.0;
    }

    /* End of Outputs for SubSystem: '<S154>/Initialize Tractor' */

    /* Outputs for Enabled SubSystem: '<S154>/Initialize Trailer 1' incorporates:
     *  EnablePort: '<S168>/Enable'
     */
    if (tmp) {
      /* DataStoreWrite: '<S168>/Data Store Write' incorporates:
       *  Constant: '<S168>/Constant'
       */
      *rtd_Trailer_ID = 1.0;
    }

    /* End of Outputs for SubSystem: '<S154>/Initialize Trailer 1' */

    /* Outputs for Enabled SubSystem: '<S154>/Initialize Trailer 2' incorporates:
     *  EnablePort: '<S169>/Enable'
     */
    if (rtb_Equal3_gf || rtb_Equal4_nu || rtb_Equal5_c) {
      /* DataStoreWrite: '<S169>/Data Store Write' incorporates:
       *  Constant: '<S169>/Constant'
       */
      *rtd_Trailer_ID = 2.0;
    }

    /* End of Outputs for SubSystem: '<S154>/Initialize Trailer 2' */

    /* DataStoreRead: '<S154>/Data Store Read9' incorporates:
     *  Logic: '<S154>/OR4'
     *  Logic: '<S154>/OR5'
     */
    Trailer_ID_s = *rtd_Trailer_ID;
  } else if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S154>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for SignalConversion generated from: '<S170>/Finish Initialization' incorporates:
       *  Outport: '<S170>/Finish Initialization'
       */
      localB->OutportBufferForFinishInitializ = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S154>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of DataStoreRead: '<S28>/Data Store Read' */
  /* End of Outputs for SubSystem: '<S28>/Initialization' */

  /* Outputs for Enabled SubSystem: '<S28>/Basic Cycle Increment' incorporates:
   *  EnablePort: '<S143>/Enable'
   */
  /* RelationalOperator: '<S28>/Equal' incorporates:
   *  Constant: '<S28>/Constant'
   *  DataStoreRead: '<S28>/Data Store Read4'
   *  Switch: '<S28>/Switch'
   */
  if (*rtd_Local_Ticks == 452.0) {
    /* DataStoreWrite: '<S143>/Data Store Write' incorporates:
     *  Constant: '<S143>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S143>/Switch' incorporates:
     *  DataStoreRead: '<S143>/Data Store Read5'
     *  RelationalOperator: '<S143>/LessThanOrEqual'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      /* Switch: '<S143>/Switch' incorporates:
       *  Constant: '<S143>/Increment'
       *  DataStoreRead: '<S143>/Data Store Read4'
       *  Sum: '<S143>/Add'
       */
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      /* Switch: '<S143>/Switch' */
      bacic_cycle_s = localC->Cast_e;
    }

    /* End of Switch: '<S143>/Switch' */

    /* DataStoreWrite: '<S143>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S28>/Equal' */
  /* End of Outputs for SubSystem: '<S28>/Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S28>/Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S160>/Enable'
   */
  /* Logic: '<S28>/NOT1' incorporates:
   *  Constant: '<S160>/Board nr7'
   *  Constant: '<S160>/Board nr8'
   *  Constant: '<S160>/Board nr9'
   *  Constant: '<S160>/Constant'
   *  Constant: '<S160>/Constant1'
   *  Constant: '<S160>/Constant2'
   *  Constant: '<S160>/Constant3'
   *  Constant: '<S160>/Constant4'
   *  Constant: '<S160>/Constant5'
   *  Constant: '<S190>/Constant2'
   *  Constant: '<S192>/Constant'
   *  Constant: '<S192>/Constant12'
   *  Constant: '<S192>/Constant14'
   *  Constant: '<S192>/Constant17'
   *  Constant: '<S192>/Constant19'
   *  Constant: '<S192>/Constant2'
   *  Constant: '<S192>/Constant21'
   *  Constant: '<S192>/Constant23'
   *  Constant: '<S192>/Constant25'
   *  Constant: '<S192>/Constant27'
   *  Constant: '<S192>/Constant28'
   *  Constant: '<S192>/Constant3'
   *  Constant: '<S192>/Constant31'
   *  Constant: '<S192>/Constant33'
   *  Constant: '<S192>/Constant34'
   *  Constant: '<S192>/Constant6'
   *  Constant: '<S192>/Constant8'
   *  Constant: '<S192>/Constant9'
   *  Constant: '<S193>/Constant'
   *  Constant: '<S193>/Constant11'
   *  Constant: '<S193>/Constant12'
   *  Constant: '<S193>/Constant14'
   *  Constant: '<S193>/Constant16'
   *  Constant: '<S193>/Constant17'
   *  Constant: '<S193>/Constant19'
   *  Constant: '<S193>/Constant20'
   *  Constant: '<S193>/Constant23'
   *  Constant: '<S193>/Constant31'
   *  Constant: '<S193>/Constant4'
   *  Constant: '<S193>/Constant41'
   *  Constant: '<S193>/Constant5'
   *  Constant: '<S193>/Constant6'
   *  Constant: '<S193>/Constant8'
   *  Constant: '<S194>/Constant'
   *  Constant: '<S194>/Constant11'
   *  Constant: '<S194>/Constant12'
   *  Constant: '<S194>/Constant13'
   *  Constant: '<S194>/Constant16'
   *  Constant: '<S194>/Constant17'
   *  Constant: '<S194>/Constant19'
   *  Constant: '<S194>/Constant31'
   *  Constant: '<S194>/Constant4'
   *  Constant: '<S194>/Constant41'
   *  Constant: '<S194>/Constant5'
   *  Constant: '<S194>/Constant6'
   *  Constant: '<S194>/Constant8'
   *  Constant: '<S204>/Constant'
   *  Constant: '<S205>/Constant1'
   *  Constant: '<S205>/Constant4'
   *  Constant: '<S207>/Constant4'
   *  Constant: '<S208>/Constant1'
   *  Constant: '<S209>/Constant4'
   *  Constant: '<S210>/Constant1'
   *  Constant: '<S211>/Constant4'
   *  Constant: '<S212>/Constant1'
   *  Constant: '<S421>/Constant2'
   *  Constant: '<S421>/Constant3'
   *  Constant: '<S421>/Constant4'
   *  Constant: '<S424>/Constant1'
   *  Constant: '<S426>/Constant1'
   *  Constant: '<S427>/Constant1'
   *  Constant: '<S428>/Constant'
   *  Constant: '<S429>/Constant1'
   *  Constant: '<S429>/Constant4'
   *  Constant: '<S508>/Constant1'
   *  Constant: '<S508>/Constant2'
   *  Constant: '<S508>/Constant3'
   *  Constant: '<S509>/Constant1'
   *  Constant: '<S509>/Constant3'
   *  Constant: '<S509>/Constant4'
   *  Constant: '<S510>/Constant1'
   *  Constant: '<S510>/Constant3'
   *  Constant: '<S510>/Constant4'
   *  Constant: '<S511>/Constant1'
   *  Constant: '<S511>/Constant3'
   *  Constant: '<S511>/Constant4'
   *  Constant: '<S512>/Constant'
   *  Constant: '<S655>/Constant'
   *  Constant: '<S658>/Constant1'
   *  Constant: '<S659>/Constant1'
   *  Constant: '<S660>/Constant'
   *  Constant: '<S661>/Constant'
   *  Constant: '<S662>/Constant1'
   *  Constant: '<S662>/Constant4'
   *  Constant: '<S721>/Constant1'
   *  Constant: '<S721>/Constant2'
   *  DataStoreRead: '<S160>/Data Store Read10'
   *  DataStoreRead: '<S192>/Data Store Read11'
   *  DataStoreRead: '<S192>/Data Store Read6'
   *  DataStoreRead: '<S192>/Data Store Read7'
   *  DataStoreRead: '<S193>/Data Store Read6'
   *  DataStoreRead: '<S193>/Data Store Read7'
   *  DataStoreRead: '<S194>/Data Store Read6'
   *  DataStoreRead: '<S194>/Data Store Read7'
   *  DataStoreRead: '<S205>/Data Store Read'
   *  DataStoreRead: '<S205>/Data Store Read1'
   *  DataStoreRead: '<S207>/Data Store Read5'
   *  DataStoreRead: '<S209>/Data Store Read5'
   *  DataStoreRead: '<S211>/Data Store Read5'
   *  DataStoreRead: '<S28>/Data Store Read8'
   *  DataStoreRead: '<S429>/Data Store Read'
   *  DataStoreRead: '<S429>/Data Store Read1'
   *  DataStoreRead: '<S655>/Data Store Read5'
   *  DataStoreRead: '<S660>/Data Store Read5'
   *  DataStoreRead: '<S662>/Data Store Read'
   *  DataStoreRead: '<S662>/Data Store Read1'
   *  DataStoreWrite: '<S294>/Data Store Write2'
   *  DataStoreWrite: '<S529>/Data Store Write2'
   *  DataStoreWrite: '<S560>/Data Store Write2'
   *  DataStoreWrite: '<S590>/Data Store Write2'
   *  DataStoreWrite: '<S620>/Data Store Write2'
   *  DataStoreWrite: '<S731>/Data Store Write2'
   *  DataStoreWrite: '<S764>/Data Store Write2'
   *  DataStoreWrite: '<S857>/Data Store Write2'
   *  Logic: '<S160>/OR'
   *  Logic: '<S192>/AND'
   *  Logic: '<S192>/AND1'
   *  Logic: '<S192>/AND10'
   *  Logic: '<S192>/AND11'
   *  Logic: '<S192>/AND12'
   *  Logic: '<S192>/AND13'
   *  Logic: '<S192>/AND14'
   *  Logic: '<S192>/AND15'
   *  Logic: '<S192>/AND16'
   *  Logic: '<S192>/AND17'
   *  Logic: '<S192>/AND18'
   *  Logic: '<S192>/AND19'
   *  Logic: '<S192>/AND2'
   *  Logic: '<S192>/AND3'
   *  Logic: '<S192>/AND4'
   *  Logic: '<S192>/AND5'
   *  Logic: '<S192>/AND6'
   *  Logic: '<S192>/AND7'
   *  Logic: '<S192>/AND8'
   *  Logic: '<S192>/AND9'
   *  Logic: '<S192>/NOT1'
   *  Logic: '<S192>/NOT2'
   *  Logic: '<S192>/NOT3'
   *  Logic: '<S193>/AND1'
   *  Logic: '<S193>/AND10'
   *  Logic: '<S193>/AND16'
   *  Logic: '<S193>/AND18'
   *  Logic: '<S193>/AND19'
   *  Logic: '<S193>/AND2'
   *  Logic: '<S193>/AND20'
   *  Logic: '<S193>/AND3'
   *  Logic: '<S193>/AND4'
   *  Logic: '<S193>/AND5'
   *  Logic: '<S193>/AND6'
   *  Logic: '<S193>/AND7'
   *  Logic: '<S193>/AND8'
   *  Logic: '<S193>/AND9'
   *  Logic: '<S193>/NOT2'
   *  Logic: '<S193>/NOT5'
   *  Logic: '<S194>/AND1'
   *  Logic: '<S194>/AND16'
   *  Logic: '<S194>/AND18'
   *  Logic: '<S194>/AND19'
   *  Logic: '<S194>/AND2'
   *  Logic: '<S194>/AND20'
   *  Logic: '<S194>/AND3'
   *  Logic: '<S194>/AND4'
   *  Logic: '<S194>/AND5'
   *  Logic: '<S194>/AND6'
   *  Logic: '<S194>/AND7'
   *  Logic: '<S194>/AND8'
   *  Logic: '<S194>/NOT2'
   *  Logic: '<S194>/NOT5'
   *  Logic: '<S204>/AND'
   *  Logic: '<S205>/AND'
   *  Logic: '<S205>/AND1'
   *  Logic: '<S207>/AND'
   *  Logic: '<S209>/AND'
   *  Logic: '<S211>/AND'
   *  Logic: '<S424>/NOT'
   *  Logic: '<S426>/NOT'
   *  Logic: '<S427>/NOT'
   *  Logic: '<S428>/AND'
   *  Logic: '<S429>/AND'
   *  Logic: '<S429>/AND1'
   *  Logic: '<S655>/AND'
   *  Logic: '<S658>/NOT'
   *  Logic: '<S659>/NOT'
   *  Logic: '<S660>/AND'
   *  Logic: '<S661>/AND'
   *  Logic: '<S662>/AND'
   *  Logic: '<S662>/AND1'
   *  RelationalOperator: '<S160>/Equal'
   *  RelationalOperator: '<S160>/Equal1'
   *  RelationalOperator: '<S160>/Equal2'
   *  RelationalOperator: '<S160>/Equal3'
   *  RelationalOperator: '<S160>/Equal4'
   *  RelationalOperator: '<S160>/Equal5'
   *  RelationalOperator: '<S160>/Equal6'
   *  RelationalOperator: '<S160>/Equal7'
   *  RelationalOperator: '<S160>/Equal8'
   *  RelationalOperator: '<S190>/Equal2'
   *  RelationalOperator: '<S192>/GreaterThan'
   *  RelationalOperator: '<S192>/GreaterThan1'
   *  RelationalOperator: '<S192>/GreaterThan10'
   *  RelationalOperator: '<S192>/GreaterThan11'
   *  RelationalOperator: '<S192>/GreaterThan12'
   *  RelationalOperator: '<S192>/GreaterThan13'
   *  RelationalOperator: '<S192>/GreaterThan14'
   *  RelationalOperator: '<S192>/GreaterThan15'
   *  RelationalOperator: '<S192>/GreaterThan16'
   *  RelationalOperator: '<S192>/GreaterThan17'
   *  RelationalOperator: '<S192>/GreaterThan18'
   *  RelationalOperator: '<S192>/GreaterThan19'
   *  RelationalOperator: '<S192>/GreaterThan2'
   *  RelationalOperator: '<S192>/GreaterThan20'
   *  RelationalOperator: '<S192>/GreaterThan21'
   *  RelationalOperator: '<S192>/GreaterThan22'
   *  RelationalOperator: '<S192>/GreaterThan23'
   *  RelationalOperator: '<S192>/GreaterThan24'
   *  RelationalOperator: '<S192>/GreaterThan25'
   *  RelationalOperator: '<S192>/GreaterThan26'
   *  RelationalOperator: '<S192>/GreaterThan27'
   *  RelationalOperator: '<S192>/GreaterThan28'
   *  RelationalOperator: '<S192>/GreaterThan29'
   *  RelationalOperator: '<S192>/GreaterThan3'
   *  RelationalOperator: '<S192>/GreaterThan30'
   *  RelationalOperator: '<S192>/GreaterThan31'
   *  RelationalOperator: '<S192>/GreaterThan32'
   *  RelationalOperator: '<S192>/GreaterThan33'
   *  RelationalOperator: '<S192>/GreaterThan4'
   *  RelationalOperator: '<S192>/GreaterThan5'
   *  RelationalOperator: '<S192>/GreaterThan6'
   *  RelationalOperator: '<S192>/GreaterThan7'
   *  RelationalOperator: '<S192>/GreaterThan8'
   *  RelationalOperator: '<S192>/GreaterThan9'
   *  RelationalOperator: '<S193>/GreaterThan10'
   *  RelationalOperator: '<S193>/GreaterThan11'
   *  RelationalOperator: '<S193>/GreaterThan12'
   *  RelationalOperator: '<S193>/GreaterThan13'
   *  RelationalOperator: '<S193>/GreaterThan14'
   *  RelationalOperator: '<S193>/GreaterThan15'
   *  RelationalOperator: '<S193>/GreaterThan16'
   *  RelationalOperator: '<S193>/GreaterThan17'
   *  RelationalOperator: '<S193>/GreaterThan18'
   *  RelationalOperator: '<S193>/GreaterThan19'
   *  RelationalOperator: '<S193>/GreaterThan2'
   *  RelationalOperator: '<S193>/GreaterThan20'
   *  RelationalOperator: '<S193>/GreaterThan21'
   *  RelationalOperator: '<S193>/GreaterThan3'
   *  RelationalOperator: '<S193>/GreaterThan32'
   *  RelationalOperator: '<S193>/GreaterThan33'
   *  RelationalOperator: '<S193>/GreaterThan34'
   *  RelationalOperator: '<S193>/GreaterThan35'
   *  RelationalOperator: '<S193>/GreaterThan4'
   *  RelationalOperator: '<S193>/GreaterThan5'
   *  RelationalOperator: '<S193>/GreaterThan6'
   *  RelationalOperator: '<S193>/GreaterThan7'
   *  RelationalOperator: '<S193>/GreaterThan8'
   *  RelationalOperator: '<S193>/GreaterThan9'
   *  RelationalOperator: '<S194>/GreaterThan10'
   *  RelationalOperator: '<S194>/GreaterThan11'
   *  RelationalOperator: '<S194>/GreaterThan12'
   *  RelationalOperator: '<S194>/GreaterThan13'
   *  RelationalOperator: '<S194>/GreaterThan14'
   *  RelationalOperator: '<S194>/GreaterThan15'
   *  RelationalOperator: '<S194>/GreaterThan16'
   *  RelationalOperator: '<S194>/GreaterThan17'
   *  RelationalOperator: '<S194>/GreaterThan2'
   *  RelationalOperator: '<S194>/GreaterThan3'
   *  RelationalOperator: '<S194>/GreaterThan32'
   *  RelationalOperator: '<S194>/GreaterThan33'
   *  RelationalOperator: '<S194>/GreaterThan34'
   *  RelationalOperator: '<S194>/GreaterThan35'
   *  RelationalOperator: '<S194>/GreaterThan4'
   *  RelationalOperator: '<S194>/GreaterThan5'
   *  RelationalOperator: '<S194>/GreaterThan6'
   *  RelationalOperator: '<S194>/GreaterThan7'
   *  RelationalOperator: '<S194>/GreaterThan8'
   *  RelationalOperator: '<S194>/GreaterThan9'
   *  RelationalOperator: '<S200>/Equal'
   *  RelationalOperator: '<S201>/Equal'
   *  RelationalOperator: '<S203>/Equal2'
   *  RelationalOperator: '<S205>/Equal'
   *  RelationalOperator: '<S205>/Equal1'
   *  RelationalOperator: '<S205>/Equal2'
   *  RelationalOperator: '<S206>/Equal'
   *  RelationalOperator: '<S207>/Equal'
   *  RelationalOperator: '<S207>/Equal2'
   *  RelationalOperator: '<S209>/Equal'
   *  RelationalOperator: '<S209>/Equal2'
   *  RelationalOperator: '<S211>/Equal'
   *  RelationalOperator: '<S211>/Equal2'
   *  RelationalOperator: '<S421>/Equal'
   *  RelationalOperator: '<S421>/Equal1'
   *  RelationalOperator: '<S421>/Equal2'
   *  RelationalOperator: '<S423>/Equal1'
   *  RelationalOperator: '<S423>/Equal2'
   *  RelationalOperator: '<S429>/Equal1'
   *  RelationalOperator: '<S429>/Equal2'
   *  RelationalOperator: '<S429>/Equal3'
   *  RelationalOperator: '<S431>/Equal16'
   *  RelationalOperator: '<S451>/Equal16'
   *  RelationalOperator: '<S471>/Equal16'
   *  RelationalOperator: '<S508>/Equal'
   *  RelationalOperator: '<S508>/Equal1'
   *  RelationalOperator: '<S508>/Equal2'
   *  RelationalOperator: '<S509>/Equal1'
   *  RelationalOperator: '<S509>/Equal2'
   *  RelationalOperator: '<S509>/Equal3'
   *  RelationalOperator: '<S510>/Equal1'
   *  RelationalOperator: '<S510>/Equal2'
   *  RelationalOperator: '<S510>/Equal3'
   *  RelationalOperator: '<S511>/Equal1'
   *  RelationalOperator: '<S511>/Equal2'
   *  RelationalOperator: '<S511>/Equal3'
   *  RelationalOperator: '<S512>/Compare'
   *  RelationalOperator: '<S655>/Equal'
   *  RelationalOperator: '<S655>/Equal1'
   *  RelationalOperator: '<S657>/Equal1'
   *  RelationalOperator: '<S657>/Equal2'
   *  RelationalOperator: '<S660>/Equal'
   *  RelationalOperator: '<S660>/Equal1'
   *  RelationalOperator: '<S662>/Equal1'
   *  RelationalOperator: '<S662>/Equal2'
   *  RelationalOperator: '<S662>/Equal3'
   *  RelationalOperator: '<S664>/Equal16'
   *  RelationalOperator: '<S684>/Equal16'
   *  RelationalOperator: '<S721>/Equal'
   *  RelationalOperator: '<S721>/Equal1'
   */
  if (!localDW->Initialization_flag) {
    localDW->MatrixCycleManager_MODE = true;

    /* Outputs for Enabled SubSystem: '<S160>/Controller Matrix Cycle' incorporates:
     *  EnablePort: '<S190>/Enable'
     */
    if ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 3.0) || (*rtd_Board_ID ==
         4.0) || (*rtd_Board_ID == 5.0) || (*rtd_Board_ID == 6.0) ||
        (*rtd_Board_ID == 7.0) || (*rtd_Board_ID == 11.0) || (*rtd_Board_ID ==
         12.0) || (*rtd_Board_ID == 13.0)) {
      localDW->ControllerMatrixCycle_MODE = true;

      /* RelationalOperator: '<S190>/Equal' incorporates:
       *  Constant: '<S190>/Constant'
       *  DataStoreRead: '<S160>/Data Store Read10'
       */
      rtb_DataStoreRead_h2y = (localDW->basic_cycle_count == 0.0);

      /* RelationalOperator: '<S190>/Equal1' incorporates:
       *  Constant: '<S190>/Constant1'
       *  DataStoreRead: '<S160>/Data Store Read10'
       */
      rtb_DataStoreRead2_f3 = (localDW->basic_cycle_count == 1.0);

      /* Outputs for Enabled SubSystem: '<S190>/controller basic cycle 0' incorporates:
       *  EnablePort: '<S192>/Enable'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->controllerbasiccycle0_MODE = true;

        /* DataStoreRead: '<S192>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Check Timeouts' incorporates:
         *  EnablePort: '<S200>/Enable'
         */
        if ((*rtd_Local_Ticks >= 436.0) && (*rtd_Local_Ticks < localC->Sum14)) {
          /* Outputs for Enabled SubSystem: '<S200>/Timeout and Board error counter' incorporates:
           *  EnablePort: '<S285>/Enable'
           */
          if (*rtd_Local_Ticks == 436.0) {
            /* Logic: '<S285>/AND' incorporates:
             *  Constant: '<S285>/Constant'
             *  DataStoreRead: '<S285>/Data Store Read1'
             *  Logic: '<S285>/NOT'
             *  RelationalOperator: '<S285>/Equal'
             */
            rtb_Equal1_iw = ((11.0 != *rtd_Board_ID) &&
                             (!localDW->BC0_Vote1_processed));

            /* Switch: '<S285>/Switch2' incorporates:
             *  Constant: '<S285>/Constant6'
             *  DataStoreRead: '<S285>/Data Store Read5'
             *  DataStoreWrite: '<S285>/Data Store Write1'
             *  Sum: '<S285>/Plus'
             */
            if (rtb_Equal1_iw) {
              localDW->Board1_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch2' */

            /* Logic: '<S285>/AND1' incorporates:
             *  Constant: '<S285>/Constant17'
             *  DataStoreRead: '<S285>/Data Store Read2'
             *  Logic: '<S285>/NOT1'
             *  RelationalOperator: '<S285>/Equal1'
             */
            rtb_Equal2_m = ((12.0 != *rtd_Board_ID) &&
                            (!localDW->BC0_Vote2_processed));

            /* Switch: '<S285>/Switch1' incorporates:
             *  Constant: '<S285>/Constant1'
             *  DataStoreRead: '<S285>/Data Store Read6'
             *  DataStoreWrite: '<S285>/Data Store Write2'
             *  Sum: '<S285>/Plus1'
             */
            if (rtb_Equal2_m) {
              localDW->Board2_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch1' */

            /* Logic: '<S285>/AND2' incorporates:
             *  Constant: '<S285>/Constant3'
             *  DataStoreRead: '<S285>/Data Store Read3'
             *  Logic: '<S285>/NOT2'
             *  RelationalOperator: '<S285>/Equal2'
             */
            rtb_Equal3_gf = ((13.0 != *rtd_Board_ID) &&
                             (!localDW->BC0_Vote3_processed));

            /* Switch: '<S285>/Switch3' incorporates:
             *  Constant: '<S285>/Constant2'
             *  DataStoreRead: '<S285>/Data Store Read8'
             *  DataStoreWrite: '<S285>/Data Store Write3'
             *  Sum: '<S285>/Plus2'
             */
            if (rtb_Equal3_gf) {
              localDW->Board3_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch3' */

            /* Logic: '<S285>/NOT3' incorporates:
             *  DataStoreRead: '<S285>/Data Store Read13'
             */
            rtb_Equal4_nu = !localDW->BC0_Sync_processed;

            /* Logic: '<S285>/AND8' incorporates:
             *  Constant: '<S285>/Constant8'
             *  Logic: '<S285>/AND5'
             *  RelationalOperator: '<S285>/Equal5'
             *  RelationalOperator: '<S285>/Equal6'
             */
            rtb_Equal5_c = (rtb_Equal4_nu && ((*rtd_Master_ID == 13.0) && (13.0
              != *rtd_Board_ID)));

            /* Switch: '<S285>/Switch4' incorporates:
             *  Constant: '<S285>/Constant13'
             *  DataStoreRead: '<S285>/Data Store Read18'
             *  DataStoreWrite: '<S285>/Data Store Write5'
             *  Sum: '<S285>/Plus3'
             */
            if (rtb_Equal5_c) {
              localDW->Board3_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch4' */

            /* Logic: '<S285>/AND7' incorporates:
             *  Constant: '<S285>/Constant4'
             *  Logic: '<S285>/AND4'
             *  RelationalOperator: '<S285>/Equal4'
             *  RelationalOperator: '<S285>/Equal7'
             */
            rtb_Equal6_f = (rtb_Equal4_nu && ((*rtd_Master_ID == 12.0) && (12.0
              != *rtd_Board_ID)));

            /* Switch: '<S285>/Switch5' incorporates:
             *  Constant: '<S285>/Constant14'
             *  DataStoreRead: '<S285>/Data Store Read20'
             *  DataStoreWrite: '<S285>/Data Store Write6'
             *  Sum: '<S285>/Plus4'
             */
            if (rtb_Equal6_f) {
              localDW->Board2_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch5' */

            /* Logic: '<S285>/AND6' incorporates:
             *  Constant: '<S285>/Constant9'
             *  Logic: '<S285>/AND3'
             *  RelationalOperator: '<S285>/Equal3'
             *  RelationalOperator: '<S285>/Equal8'
             */
            rtb_Equal4_nu = (rtb_Equal4_nu && ((*rtd_Master_ID == 11.0) && (11.0
              != *rtd_Board_ID)));

            /* Switch: '<S285>/Switch6' incorporates:
             *  Constant: '<S285>/Constant15'
             *  DataStoreRead: '<S285>/Data Store Read22'
             *  DataStoreWrite: '<S285>/Data Store Write7'
             *  Sum: '<S285>/Plus5'
             */
            if (rtb_Equal4_nu) {
              localDW->Board1_error_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch6' */

            /* Logic: '<S285>/OR' incorporates:
             *  DataStoreWrite: '<S285>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = (rtb_Equal1_iw || rtb_Equal2_m ||
              rtb_Equal3_gf || rtb_Equal4_nu || rtb_Equal6_f || rtb_Equal5_c);

            /* Switch: '<S286>/Switch' */
            if (rtb_Equal1_iw) {
              /* Switch: '<S286>/Switch' incorporates:
               *  Constant: '<S286>/Constant'
               *  DataStoreRead: '<S286>/Data Store Read1'
               *  Sum: '<S286>/Plus'
               */
              TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
            } else {
              /* Switch: '<S286>/Switch' incorporates:
               *  DataStoreRead: '<S286>/Data Store Read'
               */
              TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
            }

            /* End of Switch: '<S286>/Switch' */

            /* DataStoreWrite: '<S286>/Data Store Write' */
            localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

            /* Switch: '<S287>/Switch' */
            if (rtb_Equal2_m) {
              /* Switch: '<S287>/Switch' incorporates:
               *  Constant: '<S287>/Constant'
               *  DataStoreRead: '<S287>/Data Store Read1'
               *  Sum: '<S287>/Plus'
               */
              TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
            } else {
              /* Switch: '<S287>/Switch' incorporates:
               *  DataStoreRead: '<S287>/Data Store Read'
               */
              TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
            }

            /* End of Switch: '<S287>/Switch' */

            /* DataStoreWrite: '<S287>/Data Store Write' */
            localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

            /* Switch: '<S288>/Switch' */
            if (rtb_Equal3_gf) {
              /* Switch: '<S288>/Switch' incorporates:
               *  Constant: '<S288>/Constant'
               *  DataStoreRead: '<S288>/Data Store Read1'
               *  Sum: '<S288>/Plus'
               */
              TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
            } else {
              /* Switch: '<S288>/Switch' incorporates:
               *  DataStoreRead: '<S288>/Data Store Read'
               */
              TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
            }

            /* End of Switch: '<S288>/Switch' */

            /* DataStoreWrite: '<S288>/Data Store Write' */
            localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

            /* Switch: '<S285>/Switch7' incorporates:
             *  Constant: '<S285>/Constant16'
             *  DataStoreRead: '<S285>/Data Store Read23'
             *  DataStoreRead: '<S285>/Data Store Read25'
             *  DataStoreWrite: '<S285>/Data Store Write9'
             *  Logic: '<S285>/AND9'
             *  Logic: '<S285>/NOT4'
             *  RelationalOperator: '<S285>/Equal9'
             *  Sum: '<S285>/Plus6'
             */
            if ((!localDW->BC0_Sync_processed) && (*rtd_Master_ID !=
                 *rtd_Board_ID)) {
              localDW->Sync_bc0_missed_counter += 1.0;
            }

            /* End of Switch: '<S285>/Switch7' */

            /* DataStoreWrite: '<S285>/Data Store Write4' incorporates:
             *  Constant: '<S285>/Constant5'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S200>/Timeout and Board error counter' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Check Timeouts' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - New Master' incorporates:
         *  EnablePort: '<S201>/Enable'
         */
        if ((*rtd_Local_Ticks >= 440.0) && (*rtd_Local_Ticks < localC->Sum15)) {
          /* Outputs for Enabled SubSystem: '<S201>/New Master' incorporates:
           *  EnablePort: '<S289>/Enable'
           */
          if (*rtd_Local_Ticks == 440.0) {
            /* MinMax: '<S290>/Max1' incorporates:
             *  DataStoreRead: '<S290>/Data Store Read25'
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

            /* RelationalOperator: '<S290>/Equal' incorporates:
             *  Constant: '<S290>/Constant'
             *  DataStoreWrite: '<S289>/Data Store Write'
             *  MinMax: '<S290>/Max1'
             */
            localDW->Reset_Board_n = (0.0 == rtb_DataStoreRead4_dd);

            /* Sum: '<S290>/Plus' incorporates:
             *  Constant: '<S290>/Constant15'
             *  DataStoreRead: '<S290>/Data Store Read25'
             *  DataStoreRead: '<S290>/Data Store Read29'
             *  RelationalOperator: '<S290>/Equal17'
             */
            rtb_DataStoreRead14 = (real_T)(11.0 == localDW->Own_Vote) +
              localDW->Votes_count.First_Board;

            /* Sum: '<S290>/Plus1' incorporates:
             *  Constant: '<S290>/Constant1'
             *  DataStoreRead: '<S290>/Data Store Read25'
             *  DataStoreRead: '<S290>/Data Store Read29'
             *  RelationalOperator: '<S290>/Equal18'
             */
            rtb_Plus1_b = (real_T)(12.0 == localDW->Own_Vote) +
              localDW->Votes_count.Second_Board;

            /* Sum: '<S290>/Plus2' incorporates:
             *  Constant: '<S290>/Constant2'
             *  DataStoreRead: '<S290>/Data Store Read25'
             *  DataStoreRead: '<S290>/Data Store Read29'
             *  RelationalOperator: '<S290>/Equal19'
             */
            rtb_Plus2_p = (real_T)(13.0 == localDW->Own_Vote) +
              localDW->Votes_count.Third_Board;

            /* MinMax: '<S290>/Max' */
            if (rtb_DataStoreRead14 >= rtb_Plus1_b) {
              rtb_DataStoreRead4_dd = rtb_DataStoreRead14;
            } else {
              rtb_DataStoreRead4_dd = rtb_Plus1_b;
            }

            if (rtb_DataStoreRead4_dd < rtb_Plus2_p) {
              rtb_DataStoreRead4_dd = rtb_Plus2_p;
            }

            /* Find: '<S290>/Find Nonzero Elements' incorporates:
             *  Constant: '<S291>/Constant'
             *  MinMax: '<S290>/Max'
             *  RelationalOperator: '<S291>/Compare'
             *  Sum: '<S290>/Subtract'
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

            /* End of Find: '<S290>/Find Nonzero Elements' */

            /* MinMax: '<S290>/Min' incorporates:
             *  Find: '<S290>/Find Nonzero Elements'
             */
            linIx = rtb_FindNonzeroElements[0];
            for (i = 1; i < localDW->FindNonzeroElements_DIMS1; i++) {
              if (linIx > rtb_FindNonzeroElements[i]) {
                linIx = 1;
              }
            }

            /* Sum: '<S290>/Minus' incorporates:
             *  Constant: '<S290>/Index Corrector'
             *  MinMax: '<S290>/Min'
             */
            rtb_DataStoreRead4_dd = (real_T)linIx + 1.0;

            /* DataStoreWrite: '<S289>/Data Store Write13' */
            *rtd_Master_ID = rtb_DataStoreRead4_dd;

            /* Switch: '<S289>/Switch16' incorporates:
             *  Constant: '<S289>/Constant10'
             *  Constant: '<S289>/Constant9'
             *  DataStoreWrite: '<S289>/Data Store Write15'
             *  RelationalOperator: '<S289>/Equal6'
             */
            if (rtb_DataStoreRead4_dd == *rtd_Board_ID) {
              localDW->Role_ID = 1.0;
            } else {
              localDW->Role_ID = 2.0;
            }

            /* End of Switch: '<S289>/Switch16' */

            /* DataStoreWrite: '<S289>/Data Store Write3' incorporates:
             *  Constant: '<S289>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S201>/New Master' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - New Master' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S202>/Enable'
         */
        if ((*rtd_Local_Ticks >= 448.0) && (*rtd_Local_Ticks < localC->Sum17_a))
        {
          /* DataStoreRead: '<S202>/Data Store Read' */
          reset_s = localDW->Reset_Board_n;

          /* Logic: '<S202>/AND' incorporates:
           *  RelationalOperator: '<S202>/Equal2'
           */
          rtb_AND_i2 = ((*rtd_Local_Ticks == 448.0) && reset_s);

          /* Outputs for Enabled SubSystem: '<S202>/RESET Board - Return to initialization' */
          RESETBoardReturntoinitializatio(rtb_AND_i2,
            &localDW->Initialization_flag, rtd_Master_ID, rtd_New_Msg_Ready_CAN1,
            rtd_New_Msg_Ready_CAN2, &localDW->Reset_Board_n, &localDW->Role_ID,
            rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
            rtd_Toggle_Pin_A0, &localC->RESETBoardReturntoinitializat_i);

          /* End of Outputs for SubSystem: '<S202>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S203>/Enable'
         */
        if ((*rtd_Local_Ticks >= 444.0) && (*rtd_Local_Ticks < localC->Sum16)) {
          /* Outputs for Enabled SubSystem: '<S203>/Reset variables' incorporates:
           *  EnablePort: '<S293>/Enable'
           */
          if (*rtd_Local_Ticks == 444.0) {
            /* DataStoreWrite: '<S293>/Data Store Write' */
            localDW->Desync_Positive = localC->Cast_h;

            /* DataStoreWrite: '<S293>/Data Store Write1' */
            localDW->BC0_Sync_processed = localC->Cast_h;

            /* DataStoreWrite: '<S293>/Data Store Write16' incorporates:
             *  Constant: '<S293>/Constant'
             */
            localDW->Votes_count.First_Board = 0.0;
            localDW->Votes_count.Second_Board = 0.0;
            localDW->Votes_count.Third_Board = 0.0;

            /* DataStoreWrite: '<S293>/Data Store Write2' */
            localDW->BC0_Vote1_processed = localC->Cast_h;

            /* DataStoreWrite: '<S293>/Data Store Write3' */
            localDW->BC0_Vote2_processed = localC->Cast_h;

            /* DataStoreWrite: '<S293>/Data Store Write4' */
            localDW->BC0_Vote3_processed = localC->Cast_h;

            /* DataStoreWrite: '<S293>/Data Store Write5' incorporates:
             *  Constant: '<S293>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S203>/Reset variables' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Reset Variables BC0' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S204>/Enable'
         */
        if ((*rtd_Local_Ticks >= 100.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
            (!localDW->BC0_Sync_processed)) {
          localDW->COMPTaskSyncbc0check_MODE = true;

          /* DataStoreRead: '<S204>/Data Store Read1' */
          rtb_DataStoreRead1_oa = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S204>/Data Store Read2' */
          rtb_DataStoreRead2_k = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S204>/Data Store Read' */
          rtb_DataStoreRead_cg = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S204>/Data Store Read3' */
          rtb_DataStoreRead3_n = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S204>/Data Store Read15' */
          rtb_DataStoreRead15_b = *rtd_Master_ID;

          /* RelationalOperator: '<S204>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 100.0);

          /* RelationalOperator: '<S204>/Equal5' incorporates:
           *  Constant: '<S204>/Constant26'
           *  DataStoreRead: '<S204>/Data Store Read6'
           */
          rtb_Equal2_m = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S204>/Process_Messages' incorporates:
           *  EnablePort: '<S294>/Enable'
           */
          if (rtb_Equal1_iw && rtb_Equal2_m) {
            localDW->Process_Messages_MODE_ek = true;

            /* Outputs for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_oa,
              &rtb_DataStoreRead_cg, 0.0, rtb_DataStoreRead15_b,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_g,
              &localDW->DemuxmessageCAN1andcheckcoher_g);

            /* End of Outputs for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_k,
              &rtb_DataStoreRead3_n, 0.0, rtb_DataStoreRead15_b,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->DemuxmessageCAN1andcheckcohe_p3);

            /* End of Outputs for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S294>/Switch' incorporates:
             *  Constant: '<S204>/Constant'
             *  DataStoreWrite: '<S294>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_g.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcohe_p3.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S294>/Switch' */

            /* Logic: '<S294>/OR' incorporates:
             *  DataStoreWrite: '<S294>/Data Store Write2'
             */
            localDW->new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcoher_g.AND
              || localB->DemuxmessageCAN1andcheckcohe_p3.AND);

            /* Outputs for Enabled SubSystem: '<S294>/Desync calculation' incorporates:
             *  EnablePort: '<S298>/Enable'
             */
            if (localDW->new_msg_Rx_l) {
              /* Switch: '<S298>/Switch1' incorporates:
               *  Constant: '<S192>/Constant'
               *  Constant: '<S298>/Constant'
               *  Constant: '<S298>/Constant1'
               *  Constant: '<S298>/delay_estimation_1'
               *  Constant: '<S298>/delay_estimation_2'
               *  Product: '<S298>/Multiply'
               *  Product: '<S298>/Multiply1'
               *  Sum: '<S298>/Minus'
               *  Sum: '<S298>/Minus1'
               *  Sum: '<S298>/Sum'
               *  Sum: '<S298>/Sum1'
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

              /* Saturate: '<S298>/Saturation' incorporates:
               *  Switch: '<S298>/Switch1'
               */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S298>/Saturation' */
                Desync_Sync_bc0_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S298>/Saturation' */
                Desync_Sync_bc0_s = (-15.0);
              } else {
                /* Saturate: '<S298>/Saturation' */
                Desync_Sync_bc0_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S298>/Saturation' */

              /* DataStoreWrite: '<S298>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_s;
            }

            /* End of Outputs for SubSystem: '<S294>/Desync calculation' */

            /* DataStoreWrite: '<S294>/Data Store Write3' incorporates:
             *  Constant: '<S294>/Constant2'
             *  DataStoreWrite: '<S294>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Outputs for SubSystem: '<S204>/Process_Messages' */

          /* Logic: '<S204>/AND1' incorporates:
           *  Constant: '<S204>/Constant'
           *  DataStoreWrite: '<S294>/Data Store Write2'
           *  Logic: '<S204>/AND'
           *  Logic: '<S204>/NOT'
           */
          rtb_AND1_pi = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S204>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_pi, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S204>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S204>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S204>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S205>/Enable'
         */
        if ((*rtd_Local_Ticks >= 104.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
            (!localDW->BC0_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S205>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S323>/Enable'
           */
          if ((*rtd_Local_Ticks == 104.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S323>/Data Store Write1' incorporates:
             *  Constant: '<S323>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S205>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S205>/Local Time Update' incorporates:
           *  EnablePort: '<S324>/Enable'
           */
          if ((*rtd_Local_Ticks == 106.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_l) {
            /* RelationalOperator: '<S324>/GreaterThan' incorporates:
             *  Constant: '<S324>/Constant4'
             *  DataStoreRead: '<S324>/Data Store Read1'
             *  DataStoreWrite: '<S324>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S324>/NOT' incorporates:
             *  DataStoreWrite: '<S324>/Data Store Write'
             */
            rtb_NOT_ek = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S324>/Desync_Negative' */
            Desync_Negative(rtb_NOT_ek, 104.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S324>/Desync_Negative' */

            /* DataStoreWrite: '<S324>/Data Store Write13' incorporates:
             *  Constant: '<S324>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S324>/Data Store Write3' incorporates:
             *  Constant: '<S324>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S205>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Update LT' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote Decision' incorporates:
         *  EnablePort: '<S206>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 108.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_h)) {
          /* Outputs for Enabled SubSystem: '<S206>/Vote Decision' incorporates:
           *  EnablePort: '<S326>/Enable'
           */
          if (*rtd_Local_Ticks == 108.0) {
            /* Switch: '<S327>/Switch' incorporates:
             *  Constant: '<S326>/Constant'
             *  Constant: '<S327>/MAX error count'
             *  DataStoreRead: '<S326>/Data Store Read'
             *  DataStoreRead: '<S326>/Data Store Read1'
             *  Logic: '<S327>/AND'
             *  Logic: '<S327>/NOT'
             *  Logic: '<S327>/OR'
             *  RelationalOperator: '<S327>/Equal1'
             *  RelationalOperator: '<S327>/Equal2'
             */
            if ((11.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 11.0) &&
                 (!localDW->BC0_Sync_processed))) {
              rtb_DataStoreRead14 = 4294967295U;
            } else {
              rtb_DataStoreRead14 = localDW->Board1_error_counter;
            }

            /* End of Switch: '<S327>/Switch' */

            /* Logic: '<S328>/NOT' incorporates:
             *  DataStoreRead: '<S326>/Data Store Read'
             *  Logic: '<S329>/NOT'
             */
            tmp = !localDW->BC0_Sync_processed;

            /* Switch: '<S328>/Switch' incorporates:
             *  Constant: '<S326>/Constant1'
             *  Constant: '<S328>/MAX error count'
             *  DataStoreRead: '<S326>/Data Store Read2'
             *  Logic: '<S328>/AND'
             *  Logic: '<S328>/NOT'
             *  Logic: '<S328>/OR'
             *  RelationalOperator: '<S328>/Equal1'
             *  RelationalOperator: '<S328>/Equal2'
             */
            if ((12.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 12.0) && tmp)) {
              rtb_Plus1_b = 4294967295U;
            } else {
              rtb_Plus1_b = localDW->Board2_error_counter;
            }

            /* End of Switch: '<S328>/Switch' */

            /* Switch: '<S329>/Switch' incorporates:
             *  Constant: '<S326>/Constant2'
             *  Constant: '<S329>/MAX error count'
             *  DataStoreRead: '<S326>/Data Store Read3'
             *  Logic: '<S329>/AND'
             *  Logic: '<S329>/OR'
             *  RelationalOperator: '<S329>/Equal1'
             *  RelationalOperator: '<S329>/Equal2'
             */
            if ((13.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 13.0) && tmp)) {
              rtb_Plus2_p = 4294967295U;
            } else {
              rtb_Plus2_p = localDW->Board3_error_counter;
            }

            /* MinMax: '<S326>/Max' incorporates:
             *  Switch: '<S329>/Switch'
             */
            if (rtb_DataStoreRead14 <= rtb_Plus1_b) {
              rtb_DataStoreRead_nc = rtb_DataStoreRead14;
            } else {
              rtb_DataStoreRead_nc = rtb_Plus1_b;
            }

            if (rtb_DataStoreRead_nc <= rtb_Plus2_p) {
              rtb_Plus2_p = rtb_DataStoreRead_nc;
            }

            /* End of MinMax: '<S326>/Max' */

            /* Switch: '<S326>/Switch5' incorporates:
             *  DataStoreRead: '<S326>/Data Store Read'
             *  RelationalOperator: '<S326>/Equal'
             *  RelationalOperator: '<S326>/Equal5'
             *  Switch: '<S326>/Switch6'
             *  Switch: '<S326>/Switch7'
             */
            if (localDW->BC0_Sync_processed) {
              /* DataTypeConversion: '<S326>/Cast' */
              Vote_s = (uint8_T)*rtd_Master_ID;
            } else if (rtb_DataStoreRead14 == rtb_Plus2_p) {
              /* Switch: '<S326>/Switch6' incorporates:
               *  Constant: '<S326>/Constant4'
               *  DataTypeConversion: '<S326>/Cast'
               */
              Vote_s = (uint8_T)11.0;
            } else if (rtb_Plus2_p == rtb_Plus1_b) {
              /* Switch: '<S326>/Switch7' incorporates:
               *  Constant: '<S326>/Constant5'
               *  DataTypeConversion: '<S326>/Cast'
               */
              Vote_s = (uint8_T)12.0;
            } else {
              /* DataTypeConversion: '<S326>/Cast' incorporates:
               *  Constant: '<S326>/Constant6'
               *  Switch: '<S326>/Switch7'
               */
              Vote_s = (uint8_T)13.0;
            }

            /* End of Switch: '<S326>/Switch5' */

            /* DataStoreWrite: '<S326>/Data Store Write5' */
            localDW->Own_Vote = Vote_s;

            /* DataStoreWrite: '<S326>/Data Store Write3' incorporates:
             *  Constant: '<S326>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S206>/Vote Decision' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote Decision' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote1 Count' incorporates:
         *  EnablePort: '<S207>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 216.0) && (rtb_DataStoreRead8_c <
             localC->Sum7_p)) {
          /* Outputs for Enabled SubSystem: '<S207>/Vote Count 1' incorporates:
           *  EnablePort: '<S330>/Enable'
           */
          if ((*rtd_Local_Ticks == 216.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 11.0)) {
            /* DataStoreWrite: '<S330>/Data Store Write12' incorporates:
             *  Constant: '<S330>/Constant10'
             *  Constant: '<S330>/Constant11'
             *  Constant: '<S330>/Constant12'
             *  DataStoreRead: '<S207>/Data Store Read4'
             *  DataStoreRead: '<S330>/Data Store Read15'
             *  DataStoreRead: '<S330>/Data Store Read16'
             *  DataStoreRead: '<S330>/Data Store Read17'
             *  RelationalOperator: '<S330>/Equal13'
             *  RelationalOperator: '<S330>/Equal15'
             *  RelationalOperator: '<S330>/Equal17'
             *  Sum: '<S330>/Add'
             *  Sum: '<S330>/Add1'
             *  Sum: '<S330>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(11.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(12.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(13.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S330>/Data Store Write3' incorporates:
             *  Constant: '<S330>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S330>/Data Store Write' incorporates:
             *  Constant: '<S330>/HIGH'
             */
            localDW->BC0_Vote1_processed = true;
          }

          /* End of Outputs for SubSystem: '<S207>/Vote Count 1' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote1 Count' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote1 check' incorporates:
         *  EnablePort: '<S208>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 212.0) && (rtb_DataStoreRead8_c <
             localC->Sum6_p)) {
          localDW->COMPTaskVote1check_MODE = true;

          /* DataStoreRead: '<S208>/Data Store Read1' */
          rtb_DataStoreRead1_lu = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S208>/Data Store Read2' */
          rtb_DataStoreRead2_gt = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S208>/Data Store Read' */
          rtb_DataStoreRead_py = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S208>/Data Store Read3' */
          rtb_DataStoreRead3_p = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S208>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 212.0);

          /* RelationalOperator: '<S208>/Equal6' incorporates:
           *  Constant: '<S208>/Constant2'
           */
          rtb_Equal2_m = (*rtd_Board_ID != 11.0);

          /* Logic: '<S208>/AND' */
          rtb_AND_p4 = (rtb_Equal1_iw && rtb_Equal2_m);

          /* Outputs for Enabled SubSystem: '<S208>/Process_Messages1' */
          Process_Messages1(rtb_AND_p4, rtb_DataStoreRead1_lu,
                            rtb_DataStoreRead2_gt, &rtb_DataStoreRead_py,
                            &rtb_DataStoreRead3_p, 11.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages1_c,
                            &localDW->Process_Messages1_c);

          /* End of Outputs for SubSystem: '<S208>/Process_Messages1' */

          /* Logic: '<S208>/AND1' incorporates:
           *  Constant: '<S208>/Constant1'
           *  Logic: '<S208>/NOT'
           */
          rtb_AND1_ps = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S208>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ps, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S208>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S208>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S208>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote1 check' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote2 Count' incorporates:
         *  EnablePort: '<S209>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 324.0) && (rtb_DataStoreRead8_c <
             localC->Sum10_c)) {
          /* Outputs for Enabled SubSystem: '<S209>/Vote Count 2' incorporates:
           *  EnablePort: '<S359>/Enable'
           */
          if ((*rtd_Local_Ticks == 324.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 12.0)) {
            /* DataStoreWrite: '<S359>/Data Store Write12' incorporates:
             *  Constant: '<S359>/Constant10'
             *  Constant: '<S359>/Constant11'
             *  Constant: '<S359>/Constant12'
             *  DataStoreRead: '<S209>/Data Store Read4'
             *  DataStoreRead: '<S359>/Data Store Read15'
             *  DataStoreRead: '<S359>/Data Store Read16'
             *  DataStoreRead: '<S359>/Data Store Read17'
             *  RelationalOperator: '<S359>/Equal13'
             *  RelationalOperator: '<S359>/Equal15'
             *  RelationalOperator: '<S359>/Equal17'
             *  Sum: '<S359>/Add'
             *  Sum: '<S359>/Add1'
             *  Sum: '<S359>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(11.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(12.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(13.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S359>/Data Store Write3' incorporates:
             *  Constant: '<S359>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S359>/Data Store Write' incorporates:
             *  Constant: '<S359>/HIGH'
             */
            localDW->BC0_Vote2_processed = true;
          }

          /* End of Outputs for SubSystem: '<S209>/Vote Count 2' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote2 Count' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote2 check' incorporates:
         *  EnablePort: '<S210>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 320.0) && (rtb_DataStoreRead8_c <
             localC->Sum9_m)) {
          localDW->COMPTaskVote2check_MODE = true;

          /* DataStoreRead: '<S210>/Data Store Read1' */
          rtb_DataStoreRead1_ah = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S210>/Data Store Read2' */
          rtb_DataStoreRead2_i5 = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S210>/Data Store Read' */
          rtb_DataStoreRead_bx = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S210>/Data Store Read3' */
          rtb_DataStoreRead3_o = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S210>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 320.0);

          /* RelationalOperator: '<S210>/Equal6' incorporates:
           *  Constant: '<S210>/Constant2'
           */
          rtb_Equal2_m = (*rtd_Board_ID != 12.0);

          /* Logic: '<S210>/AND' */
          rtb_AND_jk = (rtb_Equal1_iw && rtb_Equal2_m);

          /* Outputs for Enabled SubSystem: '<S210>/Process_Messages' */
          Process_Messages1(rtb_AND_jk, rtb_DataStoreRead1_ah,
                            rtb_DataStoreRead2_i5, &rtb_DataStoreRead_bx,
                            &rtb_DataStoreRead3_o, 12.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages_g,
                            &localDW->Process_Messages_g);

          /* End of Outputs for SubSystem: '<S210>/Process_Messages' */

          /* Logic: '<S210>/AND1' incorporates:
           *  Constant: '<S210>/Constant1'
           *  Logic: '<S210>/NOT'
           */
          rtb_AND1_ny = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S210>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ny, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S210>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S210>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S210>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote2 check' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote3 Count' incorporates:
         *  EnablePort: '<S211>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 432.0) && (rtb_DataStoreRead8_c <
             localC->Sum11_i)) {
          /* Outputs for Enabled SubSystem: '<S211>/Vote Count 3' incorporates:
           *  EnablePort: '<S388>/Enable'
           */
          if ((*rtd_Local_Ticks == 432.0) && localDW->new_msg_Rx_l &&
              (*rtd_Board_ID != 13.0)) {
            /* DataStoreWrite: '<S388>/Data Store Write12' incorporates:
             *  Constant: '<S388>/Constant10'
             *  Constant: '<S388>/Constant11'
             *  Constant: '<S388>/Constant12'
             *  DataStoreRead: '<S211>/Data Store Read4'
             *  DataStoreRead: '<S388>/Data Store Read15'
             *  DataStoreRead: '<S388>/Data Store Read16'
             *  DataStoreRead: '<S388>/Data Store Read17'
             *  RelationalOperator: '<S388>/Equal13'
             *  RelationalOperator: '<S388>/Equal15'
             *  RelationalOperator: '<S388>/Equal17'
             *  Sum: '<S388>/Add'
             *  Sum: '<S388>/Add1'
             *  Sum: '<S388>/Add2'
             */
            localDW->Votes_count.First_Board += (real_T)(11.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Second_Board += (real_T)(12.0 ==
              localDW->Msg_Rx_d.Buffer_2);
            localDW->Votes_count.Third_Board += (real_T)(13.0 ==
              localDW->Msg_Rx_d.Buffer_2);

            /* DataStoreWrite: '<S388>/Data Store Write3' incorporates:
             *  Constant: '<S388>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S388>/Data Store Write' incorporates:
             *  Constant: '<S388>/HIGH'
             */
            localDW->BC0_Vote3_processed = true;
          }

          /* End of Outputs for SubSystem: '<S211>/Vote Count 3' */
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote3 Count' */

        /* Outputs for Enabled SubSystem: '<S192>/COMP Task - Vote3 check' incorporates:
         *  EnablePort: '<S212>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 428.0) && (rtb_DataStoreRead8_c <
             localC->Sum13)) {
          localDW->COMPTaskVote3check_MODE = true;

          /* DataStoreRead: '<S212>/Data Store Read1' */
          rtb_DataStoreRead1_oi = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S212>/Data Store Read2' */
          rtb_DataStoreRead2_pz = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S212>/Data Store Read' */
          rtb_DataStoreRead_n4 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S212>/Data Store Read3' */
          rtb_DataStoreRead3_k1 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S212>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 428.0);

          /* RelationalOperator: '<S212>/Equal6' incorporates:
           *  Constant: '<S212>/Constant2'
           */
          rtb_Equal2_m = (*rtd_Board_ID != 13.0);

          /* Logic: '<S212>/AND' */
          rtb_AND_c = (rtb_Equal1_iw && rtb_Equal2_m);

          /* Outputs for Enabled SubSystem: '<S212>/Process_Messages' */
          Process_Messages1(rtb_AND_c, rtb_DataStoreRead1_oi,
                            rtb_DataStoreRead2_pz, &rtb_DataStoreRead_n4,
                            &rtb_DataStoreRead3_k1, 13.0, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l, &localB->Process_Messages_gc,
                            &localDW->Process_Messages_gc);

          /* End of Outputs for SubSystem: '<S212>/Process_Messages' */

          /* Logic: '<S212>/AND1' incorporates:
           *  Constant: '<S212>/Constant1'
           *  Logic: '<S212>/NOT'
           */
          rtb_AND1_oq = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S212>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_oq, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S212>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S212>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S212>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMP Task - Vote3 check' */

        /* Outputs for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' incorporates:
         *  EnablePort: '<S196>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4_p) && (!localDW->BC0_Sync_processed)) {
          localDW->COMMTaskSyncbc0_MODE = true;

          /* RelationalOperator: '<S196>/Equal1' incorporates:
           *  Constant: '<S196>/Constant2'
           *  DataStoreRead: '<S196>/Data Store Read1'
           */
          rtb_Equal1_ft = (localDW->Role_ID == 1.0);

          /* Logic: '<S196>/NOT' */
          rtb_NOT_jl = !rtb_Equal1_ft;

          /* Outputs for Enabled SubSystem: '<S196>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_jl, 0.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_h,
                             &localC->Receptionsubstasks_h,
                             &localDW->Receptionsubstasks_h);

          /* End of Outputs for SubSystem: '<S196>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S196>/Transmission subtasks' */
          Transmissionsubtasks(rtb_Equal1_ft, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                               rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_TxID_CAN1,
                               rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                               rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count,
                               &localB->Transmissionsubtasks_l,
                               &localC->Transmissionsubtasks_l,
                               &localDW->Transmissionsubtasks_l);

          /* End of Outputs for SubSystem: '<S196>/Transmission subtasks' */
        } else if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S196>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S196>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S196>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S196>/Transmission subtasks' */
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMM Task - Sync bc 0' */

        /* Outputs for Enabled SubSystem: '<S192>/COMM Task - Vote1' incorporates:
         *  EnablePort: '<S197>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 112.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_d)) {
          localDW->COMMTaskVote1_MODE = true;

          /* RelationalOperator: '<S197>/Equal2' incorporates:
           *  Constant: '<S197>/Constant3'
           */
          rtb_Equal2_id = (*rtd_Board_ID == 11.0);

          /* Logic: '<S197>/NOT' */
          rtb_NOT_e5 = !rtb_Equal2_id;

          /* Outputs for Enabled SubSystem: '<S197>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_e5, 112.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_k,
                             &localC->Receptionsubstasks_k,
                             &localDW->Receptionsubstasks_k);

          /* End of Outputs for SubSystem: '<S197>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S197>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_id, 112.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_pw,
            &localC->Transmissionsubtasks_pw, &localDW->Transmissionsubtasks_pw);

          /* End of Outputs for SubSystem: '<S197>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S197>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S197>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S197>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S197>/Transmission subtasks' */
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMM Task - Vote1' */

        /* Outputs for Enabled SubSystem: '<S192>/COMM Task - Vote2' incorporates:
         *  EnablePort: '<S198>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 220.0) && (rtb_DataStoreRead8_c <
             localC->Sum8_a)) {
          localDW->COMMTaskVote2_MODE = true;

          /* RelationalOperator: '<S198>/Equal2' incorporates:
           *  Constant: '<S198>/Constant3'
           */
          rtb_Equal2_fk = (*rtd_Board_ID == 12.0);

          /* Logic: '<S198>/NOT' */
          rtb_NOT_ki = !rtb_Equal2_fk;

          /* Outputs for Enabled SubSystem: '<S198>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ki, 220.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_g,
                             &localC->Receptionsubstasks_g,
                             &localDW->Receptionsubstasks_g);

          /* End of Outputs for SubSystem: '<S198>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S198>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_fk, 220.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_d,
            &localC->Transmissionsubtasks_d, &localDW->Transmissionsubtasks_d);

          /* End of Outputs for SubSystem: '<S198>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S198>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S198>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S198>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S198>/Transmission subtasks' */
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMM Task - Vote2' */

        /* Outputs for Enabled SubSystem: '<S192>/COMM Task - Vote3' incorporates:
         *  EnablePort: '<S199>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 328.0) && (rtb_DataStoreRead8_c <
             localC->Sum12)) {
          localDW->COMMTaskVote3_MODE = true;

          /* RelationalOperator: '<S199>/Equal2' incorporates:
           *  Constant: '<S199>/Constant3'
           */
          rtb_Equal2_fs = (*rtd_Board_ID == 13.0);

          /* Logic: '<S199>/NOT' */
          rtb_NOT_bb = !rtb_Equal2_fs;

          /* Outputs for Enabled SubSystem: '<S199>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_bb, 328.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l,
                             &localB->Receptionsubstasks_e,
                             &localC->Receptionsubstasks_e,
                             &localDW->Receptionsubstasks_e);

          /* End of Outputs for SubSystem: '<S199>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S199>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_fs, 328.0, rtd_Board_ID,
            rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
            &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
            rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count, &localB->Transmissionsubtasks_a,
            &localC->Transmissionsubtasks_a, &localDW->Transmissionsubtasks_a);

          /* End of Outputs for SubSystem: '<S199>/Transmission subtasks' */
        } else if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S199>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S199>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S199>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S199>/Transmission subtasks' */
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S192>/COMM Task - Vote3' */

        /* Logic: '<S192>/OR1' incorporates:
         *  Constant: '<S192>/Constant'
         *  Constant: '<S192>/Constant12'
         *  Constant: '<S192>/Constant14'
         *  Constant: '<S192>/Constant17'
         *  Constant: '<S192>/Constant19'
         *  Constant: '<S192>/Constant2'
         *  Constant: '<S192>/Constant21'
         *  Constant: '<S192>/Constant23'
         *  Constant: '<S192>/Constant25'
         *  Constant: '<S192>/Constant27'
         *  Constant: '<S192>/Constant28'
         *  Constant: '<S192>/Constant3'
         *  Constant: '<S192>/Constant31'
         *  Constant: '<S192>/Constant33'
         *  Constant: '<S192>/Constant34'
         *  Constant: '<S192>/Constant6'
         *  Constant: '<S192>/Constant8'
         *  Constant: '<S192>/Constant9'
         *  Constant: '<S204>/Constant'
         *  Constant: '<S205>/Constant1'
         *  Constant: '<S205>/Constant4'
         *  Constant: '<S207>/Constant4'
         *  Constant: '<S208>/Constant1'
         *  Constant: '<S209>/Constant4'
         *  Constant: '<S210>/Constant1'
         *  Constant: '<S211>/Constant4'
         *  Constant: '<S212>/Constant1'
         *  DataStoreRead: '<S192>/Data Store Read11'
         *  DataStoreRead: '<S192>/Data Store Read6'
         *  DataStoreRead: '<S192>/Data Store Read7'
         *  DataStoreRead: '<S205>/Data Store Read'
         *  DataStoreRead: '<S205>/Data Store Read1'
         *  DataStoreRead: '<S207>/Data Store Read5'
         *  DataStoreRead: '<S209>/Data Store Read5'
         *  DataStoreRead: '<S211>/Data Store Read5'
         *  DataStoreWrite: '<S294>/Data Store Write2'
         *  Logic: '<S192>/AND'
         *  Logic: '<S192>/AND1'
         *  Logic: '<S192>/AND10'
         *  Logic: '<S192>/AND11'
         *  Logic: '<S192>/AND12'
         *  Logic: '<S192>/AND13'
         *  Logic: '<S192>/AND14'
         *  Logic: '<S192>/AND15'
         *  Logic: '<S192>/AND16'
         *  Logic: '<S192>/AND17'
         *  Logic: '<S192>/AND18'
         *  Logic: '<S192>/AND19'
         *  Logic: '<S192>/AND2'
         *  Logic: '<S192>/AND3'
         *  Logic: '<S192>/AND4'
         *  Logic: '<S192>/AND5'
         *  Logic: '<S192>/AND6'
         *  Logic: '<S192>/AND7'
         *  Logic: '<S192>/AND8'
         *  Logic: '<S192>/AND9'
         *  Logic: '<S192>/NOT1'
         *  Logic: '<S192>/NOT2'
         *  Logic: '<S192>/NOT3'
         *  Logic: '<S204>/AND'
         *  Logic: '<S205>/AND'
         *  Logic: '<S205>/AND1'
         *  Logic: '<S207>/AND'
         *  Logic: '<S209>/AND'
         *  Logic: '<S211>/AND'
         *  RelationalOperator: '<S192>/GreaterThan'
         *  RelationalOperator: '<S192>/GreaterThan1'
         *  RelationalOperator: '<S192>/GreaterThan10'
         *  RelationalOperator: '<S192>/GreaterThan11'
         *  RelationalOperator: '<S192>/GreaterThan12'
         *  RelationalOperator: '<S192>/GreaterThan13'
         *  RelationalOperator: '<S192>/GreaterThan14'
         *  RelationalOperator: '<S192>/GreaterThan15'
         *  RelationalOperator: '<S192>/GreaterThan16'
         *  RelationalOperator: '<S192>/GreaterThan17'
         *  RelationalOperator: '<S192>/GreaterThan18'
         *  RelationalOperator: '<S192>/GreaterThan19'
         *  RelationalOperator: '<S192>/GreaterThan2'
         *  RelationalOperator: '<S192>/GreaterThan20'
         *  RelationalOperator: '<S192>/GreaterThan21'
         *  RelationalOperator: '<S192>/GreaterThan22'
         *  RelationalOperator: '<S192>/GreaterThan23'
         *  RelationalOperator: '<S192>/GreaterThan24'
         *  RelationalOperator: '<S192>/GreaterThan25'
         *  RelationalOperator: '<S192>/GreaterThan26'
         *  RelationalOperator: '<S192>/GreaterThan27'
         *  RelationalOperator: '<S192>/GreaterThan28'
         *  RelationalOperator: '<S192>/GreaterThan29'
         *  RelationalOperator: '<S192>/GreaterThan3'
         *  RelationalOperator: '<S192>/GreaterThan30'
         *  RelationalOperator: '<S192>/GreaterThan31'
         *  RelationalOperator: '<S192>/GreaterThan32'
         *  RelationalOperator: '<S192>/GreaterThan33'
         *  RelationalOperator: '<S192>/GreaterThan4'
         *  RelationalOperator: '<S192>/GreaterThan5'
         *  RelationalOperator: '<S192>/GreaterThan6'
         *  RelationalOperator: '<S192>/GreaterThan7'
         *  RelationalOperator: '<S192>/GreaterThan8'
         *  RelationalOperator: '<S192>/GreaterThan9'
         *  RelationalOperator: '<S200>/Equal'
         *  RelationalOperator: '<S201>/Equal'
         *  RelationalOperator: '<S203>/Equal2'
         *  RelationalOperator: '<S205>/Equal'
         *  RelationalOperator: '<S205>/Equal1'
         *  RelationalOperator: '<S205>/Equal2'
         *  RelationalOperator: '<S206>/Equal'
         *  RelationalOperator: '<S207>/Equal'
         *  RelationalOperator: '<S207>/Equal2'
         *  RelationalOperator: '<S209>/Equal'
         *  RelationalOperator: '<S209>/Equal2'
         *  RelationalOperator: '<S211>/Equal'
         *  RelationalOperator: '<S211>/Equal2'
         */
        localB->OR1_o = (localB->Transmissionsubtasks_l.Equal7_a ||
                         localB->Transmissionsubtasks_pw.CheckmsgtransmissionCAN1_l.Equal7
                         ||
                         localB->Transmissionsubtasks_d.CheckmsgtransmissionCAN1_l.Equal7
                         ||
                         localB->Transmissionsubtasks_a.CheckmsgtransmissionCAN1_l.Equal7);

        /* Logic: '<S192>/OR2' */
        localB->OR2_p = (localB->Receptionsubstasks_h.AND ||
                         localB->Receptionsubstasks_k.AND ||
                         localB->Receptionsubstasks_g.AND ||
                         localB->Receptionsubstasks_e.AND);

        /* Logic: '<S192>/OR3' */
        localB->OR3_b = (localB->Receptionsubstasks_h.AND1 ||
                         localB->Receptionsubstasks_k.AND1 ||
                         localB->Receptionsubstasks_g.AND1 ||
                         localB->Receptionsubstasks_e.AND1);

        /* Logic: '<S192>/OR4' */
        localB->OR4 = (localB->Transmissionsubtasks_l.Equal7 ||
                       localB->Transmissionsubtasks_pw.CheckmsgtransmissionCAN2_f.Equal7
                       ||
                       localB->Transmissionsubtasks_d.CheckmsgtransmissionCAN2_f.Equal7
                       ||
                       localB->Transmissionsubtasks_a.CheckmsgtransmissionCAN2_f.Equal7);
      } else if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S204>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S204>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S208>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S208>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S210>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S210>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S212>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S212>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S196>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S196>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S196>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S196>/Transmission subtasks' */
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S197>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S197>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S197>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S197>/Transmission subtasks' */
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S198>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S198>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S198>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S198>/Transmission subtasks' */
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S199>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S199>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S199>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S199>/Transmission subtasks' */
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote3' */

        /* Disable for Logic: '<S192>/OR1' incorporates:
         *  Outport: '<S192>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S192>/OR4' incorporates:
         *  Outport: '<S192>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S192>/OR2' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S192>/OR3' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S190>/controller basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S190>/controller basic cycle 1' incorporates:
       *  EnablePort: '<S193>/Enable'
       */
      if (rtb_DataStoreRead2_f3) {
        localDW->controllerbasiccycle1_MODE = true;

        /* DataStoreRead: '<S193>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Potentiometer Voting' incorporates:
         *  EnablePort: '<S421>/Enable'
         */
        if ((*rtd_Local_Ticks >= 326.0) && (*rtd_Local_Ticks < localC->Sum11)) {
          /* Switch: '<S421>/Switch' incorporates:
           *  Constant: '<S421>/Constant'
           *  Constant: '<S421>/Constant1'
           *  DataStoreRead: '<S421>/Data Store Read'
           *  DataStoreRead: '<S421>/Data Store Read1'
           *  Sum: '<S421>/Minus'
           */
          if ((uint16_T)(localDW->ArtPot1 - localDW->ArtPot2) > ((uint16_T)250U))
          {
            rtb_Equal1_iw = false;
          } else {
            rtb_Equal1_iw = true;
          }

          /* End of Switch: '<S421>/Switch' */

          /* Switch: '<S421>/Switch1' incorporates:
           *  Constant: '<S421>/Constant'
           *  Constant: '<S421>/Constant1'
           *  DataStoreRead: '<S421>/Data Store Read1'
           *  DataStoreRead: '<S421>/Data Store Read2'
           *  Sum: '<S421>/Minus1'
           */
          if ((uint16_T)(localDW->ArtPot2 - localDW->ArtPot3) > ((uint16_T)250U))
          {
            rtb_Equal2_m = false;
          } else {
            rtb_Equal2_m = true;
          }

          /* End of Switch: '<S421>/Switch1' */

          /* Switch: '<S421>/Switch2' incorporates:
           *  Constant: '<S421>/Constant'
           *  Constant: '<S421>/Constant1'
           *  DataStoreRead: '<S421>/Data Store Read'
           *  DataStoreRead: '<S421>/Data Store Read2'
           *  Sum: '<S421>/Minus2'
           */
          if ((uint16_T)(localDW->ArtPot1 - localDW->ArtPot3) > ((uint16_T)250U))
          {
            rtb_Equal3_gf = false;
          } else {
            rtb_Equal3_gf = true;
          }

          /* End of Switch: '<S421>/Switch2' */

          /* MATLAB Function: '<S421>/MATLAB Function' */
          /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Potentiometer Voting/MATLAB Function': '<S513>:1' */
          if (rtb_Equal1_iw && rtb_Equal2_m && rtb_Equal3_gf) {
            /* '<S513>:1:3' */
            /* '<S513>:1:5' */
            rtb_DataStoreRead4_dd = 0.0;
          } else {
            tmp = !rtb_Equal3_gf;
            rtb_Equal4_nu = !rtb_Equal2_m;
            if (rtb_Equal1_iw && rtb_Equal4_nu && tmp) {
              /* '<S513>:1:7' */
              /* '<S513>:1:8' */
              rtb_DataStoreRead4_dd = 3.0;
            } else {
              rtb_Equal1_iw = !rtb_Equal1_iw;
              if (rtb_Equal1_iw && rtb_Equal2_m && tmp) {
                /* '<S513>:1:10' */
                /* '<S513>:1:11' */
                rtb_DataStoreRead4_dd = 1.0;
              } else if (rtb_Equal1_iw && rtb_Equal4_nu && rtb_Equal3_gf) {
                /* '<S513>:1:13' */
                /* '<S513>:1:14' */
                rtb_DataStoreRead4_dd = 2.0;
              } else {
                /* '<S513>:1:17' */
                rtb_DataStoreRead4_dd = 0.0;
              }
            }
          }

          /* End of MATLAB Function: '<S421>/MATLAB Function' */

          /* Outputs for Enabled SubSystem: '<S421>/1 Wrong' incorporates:
           *  EnablePort: '<S508>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 1.0) {
            /* Outputs for Enabled SubSystem: '<S508>/Tractor' incorporates:
             *  EnablePort: '<S514>/Enable'
             */
            if (*rtd_Trailer_ID == 3.0) {
              /* DataStoreWrite: '<S514>/Data Store Write' incorporates:
               *  Constant: '<S514>/Constant'
               */
              localDW->FCU_Master_ID = 12.0;

              /* DataStoreWrite: '<S514>/Data Store Write2' incorporates:
               *  Constant: '<S514>/Constant1'
               */
              localDW->FCU_Faulty_Node = 11.0;

              /* DataStoreWrite: '<S514>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S514>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot2;
            }

            /* End of Outputs for SubSystem: '<S508>/Tractor' */

            /* Outputs for Enabled SubSystem: '<S508>/Trailer 1' incorporates:
             *  EnablePort: '<S515>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S515>/Data Store Write' incorporates:
               *  Constant: '<S515>/Constant'
               */
              localDW->FCU_Master_ID = 3.0;

              /* DataStoreWrite: '<S515>/Data Store Write2' incorporates:
               *  Constant: '<S515>/Constant1'
               */
              localDW->FCU_Faulty_Node = 2.0;

              /* DataStoreWrite: '<S515>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S515>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot2;
            }

            /* End of Outputs for SubSystem: '<S508>/Trailer 1' */

            /* Outputs for Enabled SubSystem: '<S508>/Trailer 2' incorporates:
             *  EnablePort: '<S516>/Enable'
             */
            if (*rtd_Trailer_ID == 2.0) {
              /* DataStoreWrite: '<S516>/Data Store Write' incorporates:
               *  Constant: '<S516>/Constant'
               */
              localDW->FCU_Master_ID = 6.0;

              /* DataStoreWrite: '<S516>/Data Store Write2' incorporates:
               *  Constant: '<S516>/Constant1'
               */
              localDW->FCU_Faulty_Node = 5.0;

              /* DataStoreWrite: '<S516>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S516>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot2;
            }

            /* End of Outputs for SubSystem: '<S508>/Trailer 2' */
          }

          /* End of Outputs for SubSystem: '<S421>/1 Wrong' */

          /* Outputs for Enabled SubSystem: '<S421>/2 Wrong' incorporates:
           *  EnablePort: '<S509>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 2.0) {
            /* Outputs for Enabled SubSystem: '<S509>/Tractor' incorporates:
             *  EnablePort: '<S517>/Enable'
             */
            if (*rtd_Trailer_ID == 3.0) {
              /* DataStoreWrite: '<S517>/Data Store Write' incorporates:
               *  Constant: '<S517>/Constant'
               */
              localDW->FCU_Master_ID = 11.0;

              /* DataStoreWrite: '<S517>/Data Store Write2' incorporates:
               *  Constant: '<S517>/Constant1'
               */
              localDW->FCU_Faulty_Node = 12.0;

              /* DataStoreWrite: '<S517>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S517>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S509>/Tractor' */

            /* Outputs for Enabled SubSystem: '<S509>/Trailer 1' incorporates:
             *  EnablePort: '<S518>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S518>/Data Store Write' incorporates:
               *  Constant: '<S518>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S518>/Data Store Write2' incorporates:
               *  Constant: '<S518>/Constant1'
               */
              localDW->FCU_Faulty_Node = 3.0;

              /* DataStoreWrite: '<S518>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S518>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S509>/Trailer 1' */

            /* Outputs for Enabled SubSystem: '<S509>/Trailer 2' incorporates:
             *  EnablePort: '<S519>/Enable'
             */
            if (*rtd_Trailer_ID == 2.0) {
              /* DataStoreWrite: '<S519>/Data Store Write' incorporates:
               *  Constant: '<S519>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S519>/Data Store Write2' incorporates:
               *  Constant: '<S519>/Constant1'
               */
              localDW->FCU_Faulty_Node = 6.0;

              /* DataStoreWrite: '<S519>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S519>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S509>/Trailer 2' */
          }

          /* End of Outputs for SubSystem: '<S421>/2 Wrong' */

          /* Outputs for Enabled SubSystem: '<S421>/3 Wrong' incorporates:
           *  EnablePort: '<S510>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 3.0) {
            /* Outputs for Enabled SubSystem: '<S510>/Trailer 1' incorporates:
             *  EnablePort: '<S520>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S520>/Data Store Write' incorporates:
               *  Constant: '<S520>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S520>/Data Store Write2' incorporates:
               *  Constant: '<S520>/Constant1'
               */
              localDW->FCU_Faulty_Node = 4.0;

              /* DataStoreWrite: '<S520>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S520>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S510>/Trailer 1' */

            /* Outputs for Enabled SubSystem: '<S510>/Trailer 2' incorporates:
             *  EnablePort: '<S521>/Enable'
             */
            if (*rtd_Trailer_ID == 2.0) {
              /* DataStoreWrite: '<S521>/Data Store Write' incorporates:
               *  Constant: '<S521>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S521>/Data Store Write2' incorporates:
               *  Constant: '<S521>/Constant1'
               */
              localDW->FCU_Faulty_Node = 7.0;

              /* DataStoreWrite: '<S521>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S521>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S510>/Trailer 2' */

            /* Outputs for Enabled SubSystem: '<S510>/Trailer 5' incorporates:
             *  EnablePort: '<S522>/Enable'
             */
            if (*rtd_Trailer_ID == 3.0) {
              /* DataStoreWrite: '<S522>/Data Store Write' incorporates:
               *  Constant: '<S522>/Constant'
               */
              localDW->FCU_Master_ID = 11.0;

              /* DataStoreWrite: '<S522>/Data Store Write2' incorporates:
               *  Constant: '<S522>/Constant1'
               */
              localDW->FCU_Faulty_Node = 13.0;

              /* DataStoreWrite: '<S522>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S522>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S510>/Trailer 5' */
          }

          /* End of Outputs for SubSystem: '<S421>/3 Wrong' */

          /* Outputs for Enabled SubSystem: '<S421>/All Correct' incorporates:
           *  EnablePort: '<S511>/Enable'
           */
          if (rtb_DataStoreRead4_dd == 0.0) {
            /* Outputs for Enabled SubSystem: '<S511>/Tractor' incorporates:
             *  EnablePort: '<S523>/Enable'
             */
            if (*rtd_Trailer_ID == 3.0) {
              /* DataStoreWrite: '<S523>/Data Store Write' incorporates:
               *  Constant: '<S523>/Constant'
               */
              localDW->FCU_Master_ID = 11.0;

              /* DataStoreWrite: '<S523>/Data Store Write2' incorporates:
               *  Constant: '<S523>/Constant1'
               */
              localDW->FCU_Faulty_Node = 0.0;

              /* DataStoreWrite: '<S523>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S523>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S511>/Tractor' */

            /* Outputs for Enabled SubSystem: '<S511>/Trailer 1' incorporates:
             *  EnablePort: '<S524>/Enable'
             */
            if (*rtd_Trailer_ID == 1.0) {
              /* DataStoreWrite: '<S524>/Data Store Write' incorporates:
               *  Constant: '<S524>/Constant'
               */
              localDW->FCU_Master_ID = 2.0;

              /* DataStoreWrite: '<S524>/Data Store Write2' incorporates:
               *  Constant: '<S524>/Constant1'
               */
              localDW->FCU_Faulty_Node = 0.0;

              /* DataStoreWrite: '<S524>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S524>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S511>/Trailer 1' */

            /* Outputs for Enabled SubSystem: '<S511>/Trailer 2' incorporates:
             *  EnablePort: '<S525>/Enable'
             */
            if (*rtd_Trailer_ID == 2.0) {
              /* DataStoreWrite: '<S525>/Data Store Write' incorporates:
               *  Constant: '<S525>/Constant'
               */
              localDW->FCU_Master_ID = 5.0;

              /* DataStoreWrite: '<S525>/Data Store Write2' incorporates:
               *  Constant: '<S525>/Constant1'
               */
              localDW->FCU_Faulty_Node = 0.0;

              /* DataStoreWrite: '<S525>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S525>/Data Store Read'
               */
              localDW->ArtPotFinal = localDW->ArtPot1;
            }

            /* End of Outputs for SubSystem: '<S511>/Trailer 2' */
          }

          /* End of Outputs for SubSystem: '<S421>/All Correct' */

          /* DataStoreRead: '<S421>/Data Store Read3' incorporates:
           *  Constant: '<S421>/Constant2'
           *  Constant: '<S421>/Constant3'
           *  Constant: '<S421>/Constant4'
           *  Constant: '<S508>/Constant1'
           *  Constant: '<S508>/Constant2'
           *  Constant: '<S508>/Constant3'
           *  Constant: '<S509>/Constant1'
           *  Constant: '<S509>/Constant3'
           *  Constant: '<S509>/Constant4'
           *  Constant: '<S510>/Constant1'
           *  Constant: '<S510>/Constant3'
           *  Constant: '<S510>/Constant4'
           *  Constant: '<S511>/Constant1'
           *  Constant: '<S511>/Constant3'
           *  Constant: '<S511>/Constant4'
           *  Constant: '<S512>/Constant'
           *  RelationalOperator: '<S421>/Equal'
           *  RelationalOperator: '<S421>/Equal1'
           *  RelationalOperator: '<S421>/Equal2'
           *  RelationalOperator: '<S508>/Equal'
           *  RelationalOperator: '<S508>/Equal1'
           *  RelationalOperator: '<S508>/Equal2'
           *  RelationalOperator: '<S509>/Equal1'
           *  RelationalOperator: '<S509>/Equal2'
           *  RelationalOperator: '<S509>/Equal3'
           *  RelationalOperator: '<S510>/Equal1'
           *  RelationalOperator: '<S510>/Equal2'
           *  RelationalOperator: '<S510>/Equal3'
           *  RelationalOperator: '<S511>/Equal1'
           *  RelationalOperator: '<S511>/Equal2'
           *  RelationalOperator: '<S511>/Equal3'
           *  RelationalOperator: '<S512>/Compare'
           */
          FCU_Fault_Node = localDW->FCU_Faulty_Node;

          /* DataStoreRead: '<S421>/Data Store Read4' */
          FCU_Master = localDW->FCU_Master_ID;

          /* DataStoreRead: '<S421>/Data Store Read5' */
          Pot_Final = localDW->ArtPotFinal;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Potentiometer Voting' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S422>/Enable'
         */
        if ((*rtd_Local_Ticks >= 336.0) && (*rtd_Local_Ticks < localC->Sum17_j))
        {
          /* DataStoreRead: '<S422>/Data Store Read' */
          reset_bc1_s = localDW->Reset_Board_h;

          /* Logic: '<S422>/AND' incorporates:
           *  RelationalOperator: '<S422>/Equal2'
           */
          rtb_AND_fg = ((*rtd_Local_Ticks == 336.0) && reset_bc1_s);

          /* Outputs for Enabled SubSystem: '<S422>/RESET Board - Return to initialization' */
          RESETBoardReturntoinitializatio(rtb_AND_fg,
            &localDW->Initialization_flag, rtd_Master_ID, rtd_New_Msg_Ready_CAN1,
            rtd_New_Msg_Ready_CAN2, &localDW->Reset_Board_h, &localDW->Role_ID,
            rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
            rtd_Toggle_Pin_A0, &localC->RESETBoardReturntoinitializat_b);

          /* End of Outputs for SubSystem: '<S422>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S423>/Enable'
         */
        if ((*rtd_Local_Ticks >= 330.0) && (*rtd_Local_Ticks < localC->Sum18_e))
        {
          /* Outputs for Enabled SubSystem: '<S423>/Check Timeouts' incorporates:
           *  EnablePort: '<S527>/Enable'
           */
          if (*rtd_Local_Ticks == 330.0) {
            /* Logic: '<S527>/AND9' incorporates:
             *  DataStoreRead: '<S527>/Data Store Read25'
             *  DataStoreWrite: '<S527>/Data Store Write8'
             *  Logic: '<S527>/NOT4'
             *  RelationalOperator: '<S527>/Equal9'
             */
            localDW->Toggle_Pin_A1 = ((!localDW->BC1_Sync_processed) &&
              (*rtd_Master_ID != *rtd_Board_ID));

            /* Switch: '<S527>/Switch7' incorporates:
             *  Constant: '<S527>/Constant16'
             *  DataStoreRead: '<S527>/Data Store Read23'
             *  DataStoreWrite: '<S527>/Data Store Write8'
             *  DataStoreWrite: '<S527>/Data Store Write9'
             *  Sum: '<S527>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter += 1.0;
            }

            /* End of Switch: '<S527>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S423>/Check Timeouts' */

          /* Outputs for Enabled SubSystem: '<S423>/Reset Variables' incorporates:
           *  EnablePort: '<S528>/Enable'
           */
          if (*rtd_Local_Ticks == 332.0) {
            /* DataStoreWrite: '<S528>/Data Store Write' incorporates:
             *  Constant: '<S528>/Constant'
             */
            localDW->Desync_Positive = false;

            /* DataStoreWrite: '<S528>/Data Store Write1' incorporates:
             *  Constant: '<S528>/Constant'
             */
            localDW->BC1_Sync_processed = false;

            /* DataStoreWrite: '<S528>/Data Store Write2' incorporates:
             *  Constant: '<S528>/Constant1'
             */
            localDW->OwnPot = ((uint16_T)0U);

            /* DataStoreWrite: '<S528>/Data Store Write5' incorporates:
             *  Constant: '<S528>/Constant1'
             */
            localDW->ArtPot2 = ((uint16_T)0U);

            /* DataStoreWrite: '<S528>/Data Store Write6' incorporates:
             *  Constant: '<S528>/Constant1'
             */
            localDW->ArtPot1 = ((uint16_T)0U);

            /* DataStoreWrite: '<S528>/Data Store Write7' incorporates:
             *  Constant: '<S528>/Constant1'
             */
            localDW->ArtPot3 = ((uint16_T)0U);

            /* DataStoreWrite: '<S528>/Data Store Write4' incorporates:
             *  Constant: '<S528>/Constant2'
             */
            localDW->Own_Vote = ((uint8_T)0U);

            /* DataStoreWrite: '<S528>/Data Store Write3' incorporates:
             *  Constant: '<S528>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S423>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' incorporates:
         *  EnablePort: '<S424>/Enable'
         */
        if ((*rtd_Local_Ticks >= 214.0) && (*rtd_Local_Ticks < localC->Sum6_b))
        {
          localDW->COMPTaskRx_PotValues1_check_MOD = true;

          /* DataStoreRead: '<S424>/Data Store Read1' */
          rtb_DataStoreRead1_kx = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S424>/Data Store Read2' */
          rtb_DataStoreRead2_ln = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S424>/Data Store Read' */
          rtb_DataStoreRead_ge = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S424>/Data Store Read3' */
          rtb_DataStoreRead3_h = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S424>/OR1' incorporates:
           *  Constant: '<S424>/Constant3'
           *  Constant: '<S424>/Constant4'
           *  Constant: '<S424>/Constant5'
           *  RelationalOperator: '<S424>/Equal2'
           *  RelationalOperator: '<S424>/Equal3'
           *  RelationalOperator: '<S424>/Equal4'
           */
          rtb_OR1_j = ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 5.0) ||
                       (*rtd_Board_ID == 11.0));

          /* Outputs for Enabled SubSystem: '<S424>/Process_Messages' incorporates:
           *  EnablePort: '<S529>/Enable'
           */
          if (!rtb_OR1_j) {
            localDW->Process_Messages_MODE_ie = true;

            /* Outputs for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_kx,
              &rtb_DataStoreRead_ge, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_ei,
              &localDW->DemuxmessageCAN1andcheckcohe_ei);

            /* End of Outputs for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_ln,
              &rtb_DataStoreRead3_h, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_ad,
              &localDW->DemuxmessageCAN1andcheckcohe_ad);

            /* End of Outputs for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S529>/Switch' incorporates:
             *  Constant: '<S424>/Constant1'
             *  DataStoreWrite: '<S529>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_ei.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcohe_ad.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S529>/Switch' */

            /* BitConcat: '<S531>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S529>/Data Store Write'
             */
            PotValue1_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S529>/Data Store Write1' */
            localDW->ArtPot1 = PotValue1_RX_s;

            /* Logic: '<S529>/OR' incorporates:
             *  DataStoreWrite: '<S529>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_ad.Equal1);

            /* Outputs for Enabled SubSystem: '<S529>/Desync calculation' incorporates:
             *  EnablePort: '<S534>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S534>/Switch1' incorporates:
               *  Constant: '<S193>/Constant5'
               *  Constant: '<S534>/Constant'
               *  Constant: '<S534>/Constant1'
               *  Constant: '<S534>/delay_estimation_1'
               *  Constant: '<S534>/delay_estimation_2'
               *  Product: '<S534>/Multiply'
               *  Product: '<S534>/Multiply1'
               *  Sum: '<S534>/Minus'
               *  Sum: '<S534>/Minus1'
               *  Sum: '<S534>/Sum'
               *  Sum: '<S534>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcohe_ei.Equal1) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcohe_ei.BitShift1_mu.y + 114.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcohe_ad.BitShift1_i.y + 114.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* Saturate: '<S534>/Saturation' incorporates:
               *  Switch: '<S534>/Switch1'
               */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S534>/Saturation' */
                Desync_Sync_bc1_vem_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S534>/Saturation' */
                Desync_Sync_bc1_vem_s = (-15.0);
              } else {
                /* Saturate: '<S534>/Saturation' */
                Desync_Sync_bc1_vem_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S534>/Saturation' */

              /* DataStoreWrite: '<S534>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_vem_s;
            }

            /* End of Outputs for SubSystem: '<S529>/Desync calculation' */

            /* DataStoreWrite: '<S529>/Data Store Write3' incorporates:
             *  Constant: '<S529>/Constant2'
             *  DataStoreWrite: '<S529>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Outputs for SubSystem: '<S424>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S424>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR1_j, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S424>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S424>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S424>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' incorporates:
         *  EnablePort: '<S425>/Enable'
         */
        if ((*rtd_Local_Ticks >= 110.0) && (*rtd_Local_Ticks < localC->Sum8_m))
        {
          localDW->COMPTaskRx_PotValues1_check2_MO = true;

          /* M-S-Function: '<S559>/Level-2 M-file S-Function' */
          /* read from analog input for filtered inputs*/
          rtb_Level2MfileSFunction_i = AninGet(ANIN_PORTF_PIN10,0);

          /* MATLABSystem: '<S425>/Moving Average' incorporates:
           *  DataTypeConversion: '<S425>/Cast To Double'
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
          rtb_DataStoreRead_nc = 0.0;
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
            rtb_DataStoreRead_nc = rtb_Plus2_p / 30.0;
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

          /* Gain: '<S425>/Gain' incorporates:
           *  DataStoreWrite: '<S425>/Data Store Write'
           *  MATLABSystem: '<S425>/Moving Average'
           */
          localDW->OwnPot = (uint16_T)(1.0 * rtb_DataStoreRead_nc);
        } else if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' incorporates:
         *  EnablePort: '<S426>/Enable'
         */
        if ((*rtd_Local_Ticks >= 318.0) && (*rtd_Local_Ticks < localC->Sum7_n))
        {
          localDW->COMPTaskRx_PotValues2_check_MOD = true;

          /* DataStoreRead: '<S426>/Data Store Read1' */
          rtb_DataStoreRead1_mv = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S426>/Data Store Read2' */
          rtb_DataStoreRead2_l3 = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S426>/Data Store Read' */
          rtb_DataStoreRead_jaf = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S426>/Data Store Read3' */
          rtb_DataStoreRead3_gy = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S426>/OR1' incorporates:
           *  Constant: '<S426>/Constant3'
           *  Constant: '<S426>/Constant4'
           *  Constant: '<S426>/Constant5'
           *  RelationalOperator: '<S426>/Equal2'
           *  RelationalOperator: '<S426>/Equal3'
           *  RelationalOperator: '<S426>/Equal4'
           */
          rtb_OR1_cf = ((*rtd_Board_ID == 3.0) || (*rtd_Board_ID == 6.0) ||
                        (*rtd_Board_ID == 12.0));

          /* Outputs for Enabled SubSystem: '<S426>/Process_Messages' incorporates:
           *  EnablePort: '<S560>/Enable'
           */
          if (!rtb_OR1_cf) {
            localDW->Process_Messages_MODE_e = true;

            /* Outputs for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_mv,
              &rtb_DataStoreRead_jaf, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_am,
              &localDW->DemuxmessageCAN1andcheckcohe_am);

            /* End of Outputs for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_l3,
              &rtb_DataStoreRead3_gy, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_j,
              &localDW->DemuxmessageCAN1andcheckcoher_j);

            /* End of Outputs for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S560>/Switch' incorporates:
             *  Constant: '<S426>/Constant1'
             *  DataStoreWrite: '<S560>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_am.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_am.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcoher_j.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S560>/Switch' */

            /* BitConcat: '<S562>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S560>/Data Store Write'
             */
            PotValue2_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S560>/Data Store Write1' */
            localDW->ArtPot2 = PotValue2_RX_s;

            /* Logic: '<S560>/OR' incorporates:
             *  DataStoreWrite: '<S560>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_am.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_j.Equal1);

            /* Outputs for Enabled SubSystem: '<S560>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx_g, 218.0,
                              localB->DemuxmessageCAN1andcheckcohe_am.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_am.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcoher_j.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S560>/Desync calculation' */

            /* DataStoreWrite: '<S560>/Data Store Write3' incorporates:
             *  Constant: '<S193>/Constant11'
             *  Constant: '<S560>/Constant2'
             *  DataStoreWrite: '<S560>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Outputs for SubSystem: '<S426>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S426>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR1_cf, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S426>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S426>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S426>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' incorporates:
         *  EnablePort: '<S427>/Enable'
         */
        if ((*rtd_Local_Ticks >= 422.0) && (*rtd_Local_Ticks < localC->Sum10)) {
          localDW->COMPTaskRx_PotValues3_check_MOD = true;

          /* DataStoreRead: '<S427>/Data Store Read1' */
          rtb_DataStoreRead1_ec = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S427>/Data Store Read2' */
          rtb_DataStoreRead2_mu = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S427>/Data Store Read' */
          rtb_DataStoreRead_k = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S427>/Data Store Read3' */
          rtb_DataStoreRead3_d0 = *rtd_Msg_Rx_CAN2;

          /* Logic: '<S427>/OR1' incorporates:
           *  Constant: '<S427>/Constant3'
           *  Constant: '<S427>/Constant4'
           *  Constant: '<S427>/Constant5'
           *  RelationalOperator: '<S427>/Equal2'
           *  RelationalOperator: '<S427>/Equal3'
           *  RelationalOperator: '<S427>/Equal4'
           */
          rtb_OR1_a = ((*rtd_Board_ID == 4.0) || (*rtd_Board_ID == 7.0) ||
                       (*rtd_Board_ID == 13.0));

          /* Outputs for Enabled SubSystem: '<S427>/Process_Messages' incorporates:
           *  EnablePort: '<S590>/Enable'
           */
          if (!rtb_OR1_a) {
            localDW->Process_Messages_MODE_i = true;

            /* Outputs for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_ec,
              &rtb_DataStoreRead_k, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_gx,
              &localDW->DemuxmessageCAN1andcheckcohe_gx);

            /* End of Outputs for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_mu,
              &rtb_DataStoreRead3_d0, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_j1,
              &localDW->DemuxmessageCAN1andcheckcohe_j1);

            /* End of Outputs for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S590>/Switch' incorporates:
             *  Constant: '<S427>/Constant1'
             *  DataStoreWrite: '<S590>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_gx.Equal1) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_gx.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcohe_j1.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S590>/Switch' */

            /* BitConcat: '<S592>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S590>/Data Store Write'
             */
            PotValue3_RX_s = (uint16_T)(localDW->Msg_Rx_f.Buffer_2 << 8 |
              localDW->Msg_Rx_f.Buffer_3);

            /* DataStoreWrite: '<S590>/Data Store Write1' */
            localDW->ArtPot3 = PotValue3_RX_s;

            /* Logic: '<S590>/OR' incorporates:
             *  DataStoreWrite: '<S590>/Data Store Write2'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcohe_gx.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_j1.Equal1);

            /* Outputs for Enabled SubSystem: '<S590>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx_g, 322.0,
                              localB->DemuxmessageCAN1andcheckcohe_gx.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_gx.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcohe_j1.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S590>/Desync calculation' */

            /* DataStoreWrite: '<S590>/Data Store Write3' incorporates:
             *  Constant: '<S193>/Constant19'
             *  Constant: '<S590>/Constant2'
             *  DataStoreWrite: '<S590>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Outputs for SubSystem: '<S427>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S427>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_OR1_a, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S427>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S427>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S427>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S428>/Enable'
         */
        if ((*rtd_Local_Ticks >= 100.0) && (*rtd_Local_Ticks < localC->Sum1_h) &&
            (!localDW->BC1_Sync_processed)) {
          localDW->COMPTaskSyncbc1check_MODE_g = true;

          /* DataStoreRead: '<S428>/Data Store Read1' */
          rtb_DataStoreRead1_an = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S428>/Data Store Read2' */
          rtb_DataStoreRead2_c = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S428>/Data Store Read' */
          rtb_DataStoreRead_ks = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S428>/Data Store Read3' */
          rtb_DataStoreRead3_ha = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S428>/Data Store Read15' */
          rtb_DataStoreRead15_o = *rtd_Master_ID;

          /* RelationalOperator: '<S428>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 100.0);

          /* RelationalOperator: '<S428>/Equal5' incorporates:
           *  Constant: '<S428>/Constant26'
           *  DataStoreRead: '<S428>/Data Store Read6'
           */
          rtb_Equal2_m = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S428>/Process_Messages' incorporates:
           *  EnablePort: '<S620>/Enable'
           */
          if (rtb_Equal1_iw && rtb_Equal2_m) {
            localDW->Process_Messages_MODE_j = true;

            /* Outputs for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_an,
              &rtb_DataStoreRead_ks, 1.0, rtb_DataStoreRead15_o,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoh_adb,
              &localDW->DemuxmessageCAN1andcheckcoh_adb);

            /* End of Outputs for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_c,
              &rtb_DataStoreRead3_ha, 1.0, rtb_DataStoreRead15_o,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_i,
              &localDW->DemuxmessageCAN1andcheckcoher_i);

            /* End of Outputs for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S620>/Switch' incorporates:
             *  Constant: '<S428>/Constant'
             *  DataStoreWrite: '<S620>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoh_adb.AND) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoh_adb.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcoher_i.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S620>/Switch' */

            /* Logic: '<S620>/OR' incorporates:
             *  DataStoreWrite: '<S620>/Data Store Write2'
             */
            localDW->new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoh_adb.AND
              || localB->DemuxmessageCAN1andcheckcoher_i.AND);

            /* Outputs for Enabled SubSystem: '<S620>/Desync calculation' incorporates:
             *  EnablePort: '<S624>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S624>/Switch1' incorporates:
               *  Constant: '<S193>/Constant'
               *  Constant: '<S624>/Constant'
               *  Constant: '<S624>/Constant1'
               *  Constant: '<S624>/delay_estimation_1'
               *  Constant: '<S624>/delay_estimation_2'
               *  Product: '<S624>/Multiply'
               *  Product: '<S624>/Multiply1'
               *  Sum: '<S624>/Minus'
               *  Sum: '<S624>/Minus1'
               *  Sum: '<S624>/Sum'
               *  Sum: '<S624>/Sum1'
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

              /* Saturate: '<S624>/Saturation' incorporates:
               *  Switch: '<S624>/Switch1'
               */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S624>/Saturation' */
                Desync_Sync_bc1_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S624>/Saturation' */
                Desync_Sync_bc1_s = (-15.0);
              } else {
                /* Saturate: '<S624>/Saturation' */
                Desync_Sync_bc1_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S624>/Saturation' */

              /* DataStoreWrite: '<S624>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_s;
            }

            /* End of Outputs for SubSystem: '<S620>/Desync calculation' */

            /* DataStoreWrite: '<S620>/Data Store Write3' incorporates:
             *  Constant: '<S620>/Constant2'
             *  DataStoreWrite: '<S620>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Outputs for SubSystem: '<S428>/Process_Messages' */

          /* Logic: '<S428>/AND1' incorporates:
           *  Constant: '<S428>/Constant'
           *  DataStoreWrite: '<S620>/Data Store Write2'
           *  Logic: '<S428>/AND'
           *  Logic: '<S428>/NOT'
           */
          rtb_AND1_h = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S428>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_h, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S428>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S428>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S428>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S193>/COMP Task - Update LT1' incorporates:
         *  EnablePort: '<S429>/Enable'
         */
        if ((*rtd_Local_Ticks >= 104.0) && (*rtd_Local_Ticks < localC->Sum2_a) &&
            (!localDW->BC1_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S429>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S649>/Enable'
           */
          if ((*rtd_Local_Ticks == 104.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S649>/Data Store Write1' incorporates:
             *  Constant: '<S649>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S429>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S429>/Local Time Update' incorporates:
           *  EnablePort: '<S650>/Enable'
           */
          if ((*rtd_Local_Ticks == 106.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_g) {
            /* RelationalOperator: '<S650>/GreaterThan' incorporates:
             *  Constant: '<S650>/Constant4'
             *  DataStoreRead: '<S650>/Data Store Read1'
             *  DataStoreWrite: '<S650>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S650>/NOT' incorporates:
             *  DataStoreWrite: '<S650>/Data Store Write'
             */
            rtb_NOT_gl = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S650>/Desync_Negative' */
            Desync_Negative(rtb_NOT_gl, 104.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S650>/Desync_Negative' */

            /* DataStoreWrite: '<S650>/Data Store Write13' incorporates:
             *  Constant: '<S650>/Constant3'
             */
            localDW->BC1_Sync_processed = true;

            /* DataStoreWrite: '<S650>/Data Store Write3' incorporates:
             *  Constant: '<S650>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S650>/Data Store Write1' incorporates:
             *  Constant: '<S650>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S429>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S193>/COMP Task - Update LT1' */

        /* Logic: '<S193>/AND17' incorporates:
         *  Constant: '<S193>/Constant'
         *  Constant: '<S193>/Constant11'
         *  Constant: '<S193>/Constant12'
         *  Constant: '<S193>/Constant14'
         *  Constant: '<S193>/Constant16'
         *  Constant: '<S193>/Constant17'
         *  Constant: '<S193>/Constant19'
         *  Constant: '<S193>/Constant20'
         *  Constant: '<S193>/Constant23'
         *  Constant: '<S193>/Constant31'
         *  Constant: '<S193>/Constant4'
         *  Constant: '<S193>/Constant41'
         *  Constant: '<S193>/Constant6'
         *  Constant: '<S193>/Constant8'
         *  Constant: '<S421>/Constant2'
         *  Constant: '<S421>/Constant3'
         *  Constant: '<S421>/Constant4'
         *  Constant: '<S424>/Constant1'
         *  Constant: '<S426>/Constant1'
         *  Constant: '<S427>/Constant1'
         *  Constant: '<S428>/Constant'
         *  Constant: '<S429>/Constant1'
         *  Constant: '<S429>/Constant4'
         *  Constant: '<S508>/Constant1'
         *  Constant: '<S508>/Constant2'
         *  Constant: '<S508>/Constant3'
         *  Constant: '<S509>/Constant1'
         *  Constant: '<S509>/Constant3'
         *  Constant: '<S509>/Constant4'
         *  Constant: '<S510>/Constant1'
         *  Constant: '<S510>/Constant3'
         *  Constant: '<S510>/Constant4'
         *  Constant: '<S511>/Constant1'
         *  Constant: '<S511>/Constant3'
         *  Constant: '<S511>/Constant4'
         *  Constant: '<S512>/Constant'
         *  DataStoreRead: '<S193>/Data Store Read11'
         *  DataStoreRead: '<S193>/Data Store Read6'
         *  DataStoreRead: '<S193>/Data Store Read7'
         *  DataStoreRead: '<S429>/Data Store Read'
         *  DataStoreRead: '<S429>/Data Store Read1'
         *  DataStoreWrite: '<S529>/Data Store Write2'
         *  DataStoreWrite: '<S560>/Data Store Write2'
         *  DataStoreWrite: '<S590>/Data Store Write2'
         *  DataStoreWrite: '<S620>/Data Store Write2'
         *  Logic: '<S193>/AND'
         *  Logic: '<S193>/AND1'
         *  Logic: '<S193>/AND10'
         *  Logic: '<S193>/AND16'
         *  Logic: '<S193>/AND18'
         *  Logic: '<S193>/AND19'
         *  Logic: '<S193>/AND2'
         *  Logic: '<S193>/AND20'
         *  Logic: '<S193>/AND5'
         *  Logic: '<S193>/AND6'
         *  Logic: '<S193>/AND7'
         *  Logic: '<S193>/AND9'
         *  Logic: '<S193>/NOT2'
         *  Logic: '<S193>/NOT4'
         *  Logic: '<S193>/NOT5'
         *  Logic: '<S424>/NOT'
         *  Logic: '<S426>/NOT'
         *  Logic: '<S427>/NOT'
         *  Logic: '<S428>/AND'
         *  Logic: '<S429>/AND'
         *  Logic: '<S429>/AND1'
         *  RelationalOperator: '<S193>/GreaterThan'
         *  RelationalOperator: '<S193>/GreaterThan1'
         *  RelationalOperator: '<S193>/GreaterThan10'
         *  RelationalOperator: '<S193>/GreaterThan11'
         *  RelationalOperator: '<S193>/GreaterThan14'
         *  RelationalOperator: '<S193>/GreaterThan15'
         *  RelationalOperator: '<S193>/GreaterThan18'
         *  RelationalOperator: '<S193>/GreaterThan19'
         *  RelationalOperator: '<S193>/GreaterThan2'
         *  RelationalOperator: '<S193>/GreaterThan20'
         *  RelationalOperator: '<S193>/GreaterThan21'
         *  RelationalOperator: '<S193>/GreaterThan3'
         *  RelationalOperator: '<S193>/GreaterThan32'
         *  RelationalOperator: '<S193>/GreaterThan33'
         *  RelationalOperator: '<S193>/GreaterThan34'
         *  RelationalOperator: '<S193>/GreaterThan35'
         *  RelationalOperator: '<S193>/GreaterThan4'
         *  RelationalOperator: '<S193>/GreaterThan5'
         *  RelationalOperator: '<S193>/GreaterThan8'
         *  RelationalOperator: '<S193>/GreaterThan9'
         *  RelationalOperator: '<S421>/Equal'
         *  RelationalOperator: '<S421>/Equal1'
         *  RelationalOperator: '<S421>/Equal2'
         *  RelationalOperator: '<S423>/Equal1'
         *  RelationalOperator: '<S423>/Equal2'
         *  RelationalOperator: '<S429>/Equal1'
         *  RelationalOperator: '<S429>/Equal2'
         *  RelationalOperator: '<S429>/Equal3'
         *  RelationalOperator: '<S508>/Equal'
         *  RelationalOperator: '<S508>/Equal1'
         *  RelationalOperator: '<S508>/Equal2'
         *  RelationalOperator: '<S509>/Equal1'
         *  RelationalOperator: '<S509>/Equal2'
         *  RelationalOperator: '<S509>/Equal3'
         *  RelationalOperator: '<S510>/Equal1'
         *  RelationalOperator: '<S510>/Equal2'
         *  RelationalOperator: '<S510>/Equal3'
         *  RelationalOperator: '<S511>/Equal1'
         *  RelationalOperator: '<S511>/Equal2'
         *  RelationalOperator: '<S511>/Equal3'
         *  RelationalOperator: '<S512>/Compare'
         */
        rtb_AND17_j = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_k) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 1' incorporates:
         *  EnablePort: '<S417>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 114.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_g)) {
          localDW->COMMTaskPotValuetrailer1_MODE = true;

          /* Logic: '<S417>/OR' incorporates:
           *  Constant: '<S417>/Constant'
           *  Constant: '<S417>/Constant1'
           *  Constant: '<S417>/Constant2'
           *  RelationalOperator: '<S417>/Equal'
           *  RelationalOperator: '<S417>/Equal1'
           *  RelationalOperator: '<S417>/Equal2'
           */
          rtb_Equal1_iw = ((*rtd_Board_ID == 2.0) || (*rtd_Board_ID == 5.0) || (*
            rtd_Board_ID == 11.0));

          /* Logic: '<S417>/NOT' */
          rtb_NOT_cut = !rtb_Equal1_iw;

          /* Product: '<S417>/Product' incorporates:
           *  Constant: '<S417>/Constant59'
           */
          rtb_Product_p = 22.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S417>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_cut, 114.0, rtb_Product_p,
                               rtd_Local_Ticks, &localDW->Msg_Rx_f,
                               rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                               rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_ij,
                               &localC->Receptionsubstasks_ij,
                               &localDW->Receptionsubstasks_ij);

          /* End of Outputs for SubSystem: '<S417>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S417>/Transmission subtasks' incorporates:
           *  EnablePort: '<S431>/Enable'
           */
          if (rtb_Equal1_iw) {
            localDW->Transmissionsubtasks_MODE_d = true;

            /* DataStoreRead: '<S431>/Data Store Read' */
            rtb_DataStoreRead_bu = *rtd_Local_Ticks;

            /* RelationalOperator: '<S431>/Equal2' */
            rtb_Equal1_iw = (rtb_DataStoreRead_bu > 114.0);

            /* Logic: '<S431>/AND' incorporates:
             *  Constant: '<S431>/Constant6'
             *  RelationalOperator: '<S431>/GreaterThan2'
             */
            rtb_AND_ib = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S431>/AND1' incorporates:
             *  Constant: '<S431>/Constant7'
             *  RelationalOperator: '<S431>/GreaterThan3'
             */
            rtb_AND1_in = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S431>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S435>/Enable'
             */
            if (rtb_DataStoreRead_bu == 114.0) {
              /* DataStoreRead: '<S435>/Data Store Read' */
              PotValue1_s = localDW->OwnPot;

              /* DataStoreWrite: '<S435>/Data Store Write' */
              localDW->ArtPot1 = PotValue1_s;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S448>/Extract Desired Bits'
               */
              localB->signal2_fbly = (uint8_T)((uint32_T)PotValue1_s >> 8);

              /* SignalConversion generated from: '<S435>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S449>/Extract Desired Bits'
               */
              localB->signal3_eqbj = (uint8_T)PotValue1_s;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' */
              localB->signal4_cpik = localC->TmpBufferAtConstantOut_dl2l;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' */
              localB->signal5_kolj = localC->TmpBufferAtConstantOut_dl2l;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' */
              localB->signal6_if40 = localC->TmpBufferAtConstantOut_dl2l;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' */
              localB->signal7_khsn = localC->TmpBufferAtConstantOut_dl2l;

              /* SignalConversion generated from: '<S435>/Value_domain_msg' */
              localB->signal8_lklv = localC->TmpBufferAtConstantOut_dl2l;
            }

            /* End of Outputs for SubSystem: '<S431>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1_e(rtb_AND_ib, rtb_DataStoreRead_bu, 114.0,
              rtb_Product_p, localB->signal2_fbly, localB->signal3_eqbj,
              localB->signal4_cpik, localB->signal5_kolj, localB->signal6_if40,
              localB->signal7_khsn, localB->signal8_lklv, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_ez,
              &localDW->CheckmsgtransmissionCAN1_ez);

            /* End of Outputs for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2_c(rtb_AND1_in, rtb_DataStoreRead_bu, 114.0,
              rtb_Product_p, localB->signal2_fbly, localB->signal3_eqbj,
              localB->signal4_cpik, localB->signal5_kolj, localB->signal6_if40,
              localB->signal7_khsn, localB->signal8_lklv, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_ct,
              &localDW->CheckmsgtransmissionCAN2_ct);

            /* End of Outputs for SubSystem: '<S431>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Outputs for SubSystem: '<S417>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S417>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S417>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S417>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S417>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMM Task - PotValue trailer 1' */

        /* Outputs for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 2' incorporates:
         *  EnablePort: '<S418>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 218.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_e)) {
          localDW->COMMTaskPotValuetrailer2_MODE = true;

          /* Logic: '<S418>/OR1' incorporates:
           *  Constant: '<S418>/Constant3'
           *  Constant: '<S418>/Constant4'
           *  Constant: '<S418>/Constant5'
           *  RelationalOperator: '<S418>/Equal2'
           *  RelationalOperator: '<S418>/Equal3'
           *  RelationalOperator: '<S418>/Equal4'
           */
          rtb_Equal1_iw = ((*rtd_Board_ID == 3.0) || (*rtd_Board_ID == 6.0) || (*
            rtd_Board_ID == 12.0));

          /* Logic: '<S418>/NOT' */
          rtb_NOT_c = !rtb_Equal1_iw;

          /* Product: '<S418>/Product' incorporates:
           *  Constant: '<S418>/Constant59'
           */
          rtb_Product_e = 23.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S418>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_c, 218.0, rtb_Product_e, rtd_Local_Ticks,
                               &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                               rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                               rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_g1,
                               &localC->Receptionsubstasks_g1,
                               &localDW->Receptionsubstasks_g1);

          /* End of Outputs for SubSystem: '<S418>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S418>/Transmission subtasks' incorporates:
           *  EnablePort: '<S451>/Enable'
           */
          if (rtb_Equal1_iw) {
            localDW->Transmissionsubtasks_MODE_j = true;

            /* DataStoreRead: '<S451>/Data Store Read' */
            rtb_DataStoreRead_bb = *rtd_Local_Ticks;

            /* RelationalOperator: '<S451>/Equal2' */
            rtb_Equal1_iw = (rtb_DataStoreRead_bb > 218.0);

            /* Logic: '<S451>/AND' incorporates:
             *  Constant: '<S451>/Constant6'
             *  RelationalOperator: '<S451>/GreaterThan2'
             */
            rtb_AND_bp = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S451>/AND1' incorporates:
             *  Constant: '<S451>/Constant7'
             *  RelationalOperator: '<S451>/GreaterThan3'
             */
            rtb_AND1_do = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S451>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S455>/Enable'
             */
            if (rtb_DataStoreRead_bb == 218.0) {
              /* DataStoreRead: '<S455>/Data Store Read' */
              PotValue2_s = localDW->OwnPot;

              /* DataStoreWrite: '<S455>/Data Store Write' */
              localDW->ArtPot2 = PotValue2_s;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S468>/Extract Desired Bits'
               */
              localB->signal2_fbl = (uint8_T)((uint32_T)PotValue2_s >> 8);

              /* SignalConversion generated from: '<S455>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S469>/Extract Desired Bits'
               */
              localB->signal3_eqb = (uint8_T)PotValue2_s;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' */
              localB->signal4_cpi = localC->TmpBufferAtConstantOutp_dl2;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' */
              localB->signal5_kol = localC->TmpBufferAtConstantOutp_dl2;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' */
              localB->signal6_if4 = localC->TmpBufferAtConstantOutp_dl2;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' */
              localB->signal7_khs = localC->TmpBufferAtConstantOutp_dl2;

              /* SignalConversion generated from: '<S455>/Value_domain_msg' */
              localB->signal8_lkl = localC->TmpBufferAtConstantOutp_dl2;
            }

            /* End of Outputs for SubSystem: '<S451>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1_e(rtb_AND_bp, rtb_DataStoreRead_bb, 218.0,
              rtb_Product_e, localB->signal2_fbl, localB->signal3_eqb,
              localB->signal4_cpi, localB->signal5_kol, localB->signal6_if4,
              localB->signal7_khs, localB->signal8_lkl, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_m,
              &localDW->CheckmsgtransmissionCAN1_m);

            /* End of Outputs for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2_c(rtb_AND1_do, rtb_DataStoreRead_bb, 218.0,
              rtb_Product_e, localB->signal2_fbl, localB->signal3_eqb,
              localB->signal4_cpi, localB->signal5_kol, localB->signal6_if4,
              localB->signal7_khs, localB->signal8_lkl, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_m,
              &localDW->CheckmsgtransmissionCAN2_m);

            /* End of Outputs for SubSystem: '<S451>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Outputs for SubSystem: '<S418>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S418>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S418>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S418>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S418>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMM Task - PotValue trailer 2' */

        /* Outputs for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 3' incorporates:
         *  EnablePort: '<S419>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 322.0) && (rtb_DataStoreRead8_c <
             localC->Sum9_b)) {
          localDW->COMMTaskPotValuetrailer3_MODE = true;

          /* Logic: '<S419>/OR1' incorporates:
           *  Constant: '<S419>/Constant3'
           *  Constant: '<S419>/Constant4'
           *  Constant: '<S419>/Constant5'
           *  RelationalOperator: '<S419>/Equal2'
           *  RelationalOperator: '<S419>/Equal3'
           *  RelationalOperator: '<S419>/Equal4'
           */
          rtb_Equal1_iw = ((*rtd_Board_ID == 4.0) || (*rtd_Board_ID == 7.0) || (*
            rtd_Board_ID == 13.0));

          /* Logic: '<S419>/NOT' */
          rtb_NOT_ah = !rtb_Equal1_iw;

          /* Product: '<S419>/Product' incorporates:
           *  Constant: '<S419>/Constant59'
           */
          rtb_Product = 24.0 * *rtd_Trailer_ID;

          /* Outputs for Enabled SubSystem: '<S419>/Reception substasks' */
          Receptionsubstasks_i(rtb_NOT_ah, 322.0, rtb_Product, rtd_Local_Ticks,
                               &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                               rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                               rtd_RxID_CAN2, rtd_Rx_State_CAN1,
                               rtd_Rx_State_CAN2, &localDW->new_msg_Rx_g,
                               &localB->Receptionsubstasks_a,
                               &localC->Receptionsubstasks_a,
                               &localDW->Receptionsubstasks_a);

          /* End of Outputs for SubSystem: '<S419>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S419>/Transmission subtasks' incorporates:
           *  EnablePort: '<S471>/Enable'
           */
          if (rtb_Equal1_iw) {
            localDW->Transmissionsubtasks_MODE_p = true;

            /* DataStoreRead: '<S471>/Data Store Read' */
            rtb_DataStoreRead_mx = *rtd_Local_Ticks;

            /* RelationalOperator: '<S471>/Equal2' */
            rtb_Equal1_iw = (rtb_DataStoreRead_mx > 322.0);

            /* Logic: '<S471>/AND' incorporates:
             *  Constant: '<S471>/Constant6'
             *  RelationalOperator: '<S471>/GreaterThan2'
             */
            rtb_AND_lr = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S471>/AND1' incorporates:
             *  Constant: '<S471>/Constant7'
             *  RelationalOperator: '<S471>/GreaterThan3'
             */
            rtb_AND1_p = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S471>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S475>/Enable'
             */
            if (rtb_DataStoreRead_mx == 322.0) {
              /* DataStoreRead: '<S475>/Data Store Read' */
              PotValue3_s = localDW->OwnPot;

              /* DataStoreWrite: '<S475>/Data Store Write' */
              localDW->ArtPot3 = PotValue3_s;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S488>/Extract Desired Bits'
               */
              localB->signal2_fb = (uint8_T)((uint32_T)PotValue3_s >> 8);

              /* SignalConversion generated from: '<S475>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S489>/Extract Desired Bits'
               */
              localB->signal3_eq = (uint8_T)PotValue3_s;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' */
              localB->signal4_cp = localC->TmpBufferAtConstantOutpo_dl;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' */
              localB->signal5_ko = localC->TmpBufferAtConstantOutpo_dl;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' */
              localB->signal6_if = localC->TmpBufferAtConstantOutpo_dl;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' */
              localB->signal7_kh = localC->TmpBufferAtConstantOutpo_dl;

              /* SignalConversion generated from: '<S475>/Value_domain_msg' */
              localB->signal8_lk = localC->TmpBufferAtConstantOutpo_dl;
            }

            /* End of Outputs for SubSystem: '<S471>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1_e(rtb_AND_lr, rtb_DataStoreRead_mx, 322.0,
              rtb_Product, localB->signal2_fb, localB->signal3_eq,
              localB->signal4_cp, localB->signal5_ko, localB->signal6_if,
              localB->signal7_kh, localB->signal8_lk, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_k,
              &localDW->CheckmsgtransmissionCAN1_k);

            /* End of Outputs for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2_c(rtb_AND1_p, rtb_DataStoreRead_mx, 322.0,
              rtb_Product, localB->signal2_fb, localB->signal3_eq,
              localB->signal4_cp, localB->signal5_ko, localB->signal6_if,
              localB->signal7_kh, localB->signal8_lk, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_n,
              &localDW->CheckmsgtransmissionCAN2_n);

            /* End of Outputs for SubSystem: '<S471>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Outputs for SubSystem: '<S419>/Transmission subtasks' */
        } else if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S419>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S419>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S419>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S419>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S193>/COMM Task - PotValue trailer 3' */

        /* Outputs for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc1(rtb_AND17_j, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                        &localDW->Msg_Rx_f, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                        rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                        &localDW->Role_ID, rtd_RxID_CAN1, rtd_RxID_CAN2,
                        rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_TxID_CAN1,
                        rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_g, &localB->COMMTaskSyncbc1_f,
                        &localC->COMMTaskSyncbc1_f, &localDW->COMMTaskSyncbc1_f);

        /* End of Outputs for SubSystem: '<S193>/COMM Task - Sync bc 1' */

        /* Logic: '<S193>/OR' incorporates:
         *  Constant: '<S193>/Constant'
         *  Constant: '<S193>/Constant11'
         *  Constant: '<S193>/Constant19'
         *  Constant: '<S193>/Constant5'
         *  Logic: '<S193>/AND3'
         *  Logic: '<S193>/AND4'
         *  Logic: '<S193>/AND8'
         *  RelationalOperator: '<S193>/GreaterThan12'
         *  RelationalOperator: '<S193>/GreaterThan13'
         *  RelationalOperator: '<S193>/GreaterThan16'
         *  RelationalOperator: '<S193>/GreaterThan17'
         *  RelationalOperator: '<S193>/GreaterThan6'
         *  RelationalOperator: '<S193>/GreaterThan7'
         *  RelationalOperator: '<S431>/Equal16'
         *  RelationalOperator: '<S451>/Equal16'
         *  RelationalOperator: '<S471>/Equal16'
         */
        localB->OR_f = (localB->COMMTaskSyncbc1_f.Transmissionsubtasks1.Equal7_a
                        || localB->CheckmsgtransmissionCAN1_ez.Equal7 ||
                        localB->CheckmsgtransmissionCAN1_m.Equal7 ||
                        localB->CheckmsgtransmissionCAN1_k.Equal7);

        /* Logic: '<S193>/OR1' */
        localB->OR1_e = (localB->COMMTaskSyncbc1_f.Transmissionsubtasks1.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_ct.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_m.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_n.Equal7);

        /* Logic: '<S193>/OR2' */
        localB->OR2_m = (localB->COMMTaskSyncbc1_f.Receptionsubstasks_j.AND ||
                         localB->Receptionsubstasks_ij.AND ||
                         localB->Receptionsubstasks_g1.AND ||
                         localB->Receptionsubstasks_a.AND);

        /* Logic: '<S193>/OR3' */
        localB->OR3_e = (localB->COMMTaskSyncbc1_f.Receptionsubstasks_j.AND1 ||
                         localB->Receptionsubstasks_ij.AND1 ||
                         localB->Receptionsubstasks_g1.AND1 ||
                         localB->Receptionsubstasks_a.AND1);
      } else if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S424>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S424>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S426>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S426>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S427>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S427>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S428>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S428>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S417>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S417>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S417>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S417>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S418>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S418>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S418>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S418>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S419>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S419>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S419>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S419>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S193>/OR' incorporates:
         *  Outport: '<S193>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S193>/OR1' incorporates:
         *  Outport: '<S193>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S193>/OR2' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S193>/OR3' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S190>/controller basic cycle 1' */

      /* Outputs for Enabled SubSystem: '<S190>/controller basic cycle 2' incorporates:
       *  EnablePort: '<S194>/Enable'
       */
      if (localDW->basic_cycle_count == 2.0) {
        localDW->controllerbasiccycle2_MODE = true;

        /* DataStoreRead: '<S194>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Inverse Kinematics Model' incorporates:
         *  EnablePort: '<S655>/Enable'
         */
        if ((*rtd_Local_Ticks >= 318.0) && (*rtd_Local_Ticks < localC->Sum8)) {
          /* Outputs for Enabled SubSystem: '<S655>/Enabled Subsystem' incorporates:
           *  EnablePort: '<S721>/Enable'
           */
          if ((*rtd_Trailer_ID == 3.0) && (*rtd_Board_ID ==
               localDW->FCU_Master_ID)) {
            /* DataStoreRead: '<S721>/Number of Trailers' */
            Trailer_Amount_s = localDW->Members_Nr;

            /* DataStoreRead: '<S721>/Desired Steering Angle' */
            Steering_Input_s = localDW->ArtPotFinal;

            /* Gain: '<S721>/Analog to Degree2' incorporates:
             *  Gain: '<S721>/Analog to Degree'
             *  Gain: '<S721>/Analog to Degree1'
             */
            rtb_Plus1_b = (real_T)((uint16_T)38409U) * 1.9073486328125E-6;
            rtb_DataStoreRead4_dd = rtb_Plus1_b * (real_T)Steering_Input_s;

            /* DataStoreRead: '<S721>/Data Store Read' */
            ArtAngle1_s = localDW->ArtAngle1;

            /* Gain: '<S721>/Analog to Degree' */
            rtb_DataStoreRead14 = rtb_Plus1_b * (real_T)ArtAngle1_s;

            /* DataStoreRead: '<S721>/Data Store Read1' */
            ArtAngle2_s = localDW->ArtAngle2;

            /* Gain: '<S721>/Analog to Degree1' */
            rtb_DataStoreRead_nc = rtb_Plus1_b * (real_T)ArtAngle2_s;

            /* SwitchCase: '<S721>/Switch Case1' */
            switch ((int32_T)Trailer_Amount_s) {
             case 1:
              /* Outputs for IfAction SubSystem: '<S721>/Single Articulation Subsystem' incorporates:
               *  ActionPort: '<S725>/Action Port'
               */
              /* Product: '<S725>/Divide1' incorporates:
               *  Constant: '<S725>/Wheelbase_Trailing_Units'
               *  Product: '<S725>/Divide'
               *  Trigonometry: '<S725>/Tan'
               */
              rtb_Plus1_b = tan(rtb_DataStoreRead4_dd) / 8.0 * localC->Abs;

              /* Trigonometry: '<S725>/Sin' */
              rtb_Plus2_p = sin(rtb_DataStoreRead14);

              /* Trigonometry: '<S725>/Cos' incorporates:
               *  Trigonometry: '<S725>/Cos1'
               */
              rtb_DataStoreRead14 = cos(rtb_DataStoreRead14);

              /* Gain: '<S727>/Gain' incorporates:
               *  Constant: '<S725>/Velocity of Axel_1st_Unit2'
               *  Constant: '<S725>/Wheelbase_Tractor'
               *  Constant: '<S725>/Wheelbase_Trailing_Units2'
               *  Product: '<S725>/Divide10'
               *  Product: '<S725>/Divide11'
               *  Product: '<S725>/Divide5'
               *  Product: '<S725>/Divide6'
               *  Product: '<S725>/Divide7'
               *  Product: '<S725>/Divide8'
               *  Product: '<S725>/Divide9'
               *  Sum: '<S725>/Sum'
               *  Sum: '<S725>/Sum1'
               *  Trigonometry: '<S725>/Atan'
               *  Trigonometry: '<S725>/Cos'
               */
              localB->Gain_h = atan((rtb_Plus1_b * localC->Divide4 *
                rtb_DataStoreRead14 + localC->Gain1 * rtb_Plus2_p) *
                                    localC->Divide2 / (rtb_Plus2_p * rtb_Plus1_b
                * 8.0 + rtb_DataStoreRead14 * (-1.0)) * 6.0) *
                57.295779513082323;

              /* End of Outputs for SubSystem: '<S721>/Single Articulation Subsystem' */
              break;

             case 2:
              /* Outputs for IfAction SubSystem: '<S721>/Double Articulatuion Subsystem' incorporates:
               *  ActionPort: '<S722>/Action Port'
               */
              /* Product: '<S722>/Divide16' incorporates:
               *  Constant: '<S722>/Wheelbase_Trailing_Units3'
               *  Product: '<S722>/Divide12'
               *  Trigonometry: '<S722>/Tan1'
               */
              rtb_Plus1_b = tan(rtb_DataStoreRead4_dd) / 8.0 * localC->Abs1;

              /* Trigonometry: '<S722>/Cos4' incorporates:
               *  Trigonometry: '<S722>/Cos2'
               */
              rtb_Plus2_p = cos(rtb_DataStoreRead_nc);

              /* Trigonometry: '<S722>/Sin2' incorporates:
               *  Trigonometry: '<S722>/Sin1'
               */
              rtb_Atan1_tmp = sin(rtb_DataStoreRead_nc);

              /* Sum: '<S722>/Add' incorporates:
               *  Constant: '<S722>/Velocity of Axel_2nd'
               *  Constant: '<S722>/Wheelbase_Trailing_Units4'
               *  Product: '<S722>/Divide17'
               *  Product: '<S722>/Divide18'
               *  Trigonometry: '<S722>/Cos4'
               *  Trigonometry: '<S722>/Sin2'
               */
              rtb_DataStoreRead_nc = rtb_Atan1_tmp * rtb_Plus1_b * 8.0 + (-2.0) *
                rtb_Plus2_p;

              /* Product: '<S722>/Divide29' incorporates:
               *  Product: '<S722>/Divide27'
               *  Product: '<S722>/Divide28'
               *  Sum: '<S722>/Sum2'
               */
              rtb_Plus1_b = (rtb_Plus1_b * localC->Divide26 * rtb_Plus2_p +
                             localC->Gain2 * rtb_Atan1_tmp) * localC->Divide24;

              /* Trigonometry: '<S722>/Cos5' incorporates:
               *  Trigonometry: '<S722>/Cos3'
               */
              rtb_Plus2_p = cos(rtb_DataStoreRead14);

              /* Signum: '<S722>/Sign-2' */
              if (rtb_DataStoreRead_nc < 0.0) {
                rtb_Atan1_tmp = -1.0;
              } else {
                rtb_Atan1_tmp = (rtb_DataStoreRead_nc > 0.0);
              }

              /* Trigonometry: '<S722>/Sin4' incorporates:
               *  Trigonometry: '<S722>/Sin3'
               */
              rtb_DataStoreRead14 = sin(rtb_DataStoreRead14);

              /* Gain: '<S726>/Gain' incorporates:
               *  Constant: '<S722>/Distance_RearAxel_&hitch2'
               *  Constant: '<S722>/Wheelbase_Tractor1'
               *  Constant: '<S722>/Wheelbase_Trailing_Units5'
               *  Gain: '<S722>/Gain3'
               *  Product: '<S722>/Divide13'
               *  Product: '<S722>/Divide14'
               *  Product: '<S722>/Divide19'
               *  Product: '<S722>/Divide20'
               *  Product: '<S722>/Divide21'
               *  Product: '<S722>/Divide22'
               *  Product: '<S722>/Divide23'
               *  Product: '<S722>/Divide30'
               *  Product: '<S722>/Divide31'
               *  Signum: '<S722>/Sign-2'
               *  Sum: '<S722>/Add1'
               *  Sum: '<S722>/Sum3'
               *  Trigonometry: '<S722>/Atan1'
               *  Trigonometry: '<S722>/Cos5'
               *  Trigonometry: '<S722>/Sin4'
               */
              localB->Gain = atan((rtb_DataStoreRead_nc / 2.0 * (-1.0) *
                                   rtb_DataStoreRead14 + rtb_Plus1_b *
                                   localC->Divide15 * rtb_Plus2_p) *
                                  (rtb_Atan1_tmp * localC->Sign_2) * 6.0 /
                                  (rtb_DataStoreRead14 * rtb_Plus1_b * 8.0 +
                                   rtb_DataStoreRead_nc * rtb_Plus2_p)) *
                57.295779513082323;

              /* End of Outputs for SubSystem: '<S721>/Double Articulatuion Subsystem' */
              break;

             default:
              /* no actions */
              break;
            }

            /* End of SwitchCase: '<S721>/Switch Case1' */

            /* MultiPortSwitch: '<S721>/Multiport Switch' incorporates:
             *  DataStoreWrite: '<S721>/Data Store Write'
             */
            switch ((int32_T)Trailer_Amount_s) {
             case 1:
              localDW->Delta_I2K = localB->Gain_h;
              break;

             case 2:
              localDW->Delta_I2K = localB->Gain;
              break;

             default:
              localDW->Delta_I2K = rtb_DataStoreRead4_dd;
              break;
            }

            /* End of MultiPortSwitch: '<S721>/Multiport Switch' */

            /* DataStoreRead: '<S721>/Number of Trailers1' */
            Member1_ID_s = localDW->Member1_ID;

            /* Outputs for Enabled SubSystem: '<S721>/Enabled Subsystem' incorporates:
             *  EnablePort: '<S723>/Enable'
             */
            if (Member1_ID_s == 1.0) {
              /* DataStoreWrite: '<S723>/Data Store Write' incorporates:
               *  DataStoreRead: '<S723>/Data Store Read'
               */
              localDW->ArtAngle1 = localDW->Trailer1_Articulation;

              /* DataStoreWrite: '<S723>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S723>/Data Store Read1'
               */
              localDW->ArtAngle2 = localDW->Trailer2_Articulation;
            }

            /* End of Outputs for SubSystem: '<S721>/Enabled Subsystem' */

            /* Outputs for Enabled SubSystem: '<S721>/Enabled Subsystem1' incorporates:
             *  EnablePort: '<S724>/Enable'
             */
            if (Member1_ID_s == 2.0) {
              /* DataStoreWrite: '<S724>/Data Store Write' incorporates:
               *  DataStoreRead: '<S724>/Data Store Read'
               */
              localDW->ArtAngle1 = localDW->Trailer2_Articulation;

              /* DataStoreWrite: '<S724>/Data Store Write1' incorporates:
               *  DataStoreRead: '<S724>/Data Store Read1'
               */
              localDW->ArtAngle2 = localDW->Trailer1_Articulation;
            }

            /* End of Outputs for SubSystem: '<S721>/Enabled Subsystem1' */
          }

          /* End of Outputs for SubSystem: '<S655>/Enabled Subsystem' */
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Inverse Kinematics Model' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S656>/Enable'
         */
        if ((*rtd_Local_Ticks >= 332.0) && (*rtd_Local_Ticks < localC->Sum17)) {
          /* DataStoreRead: '<S656>/Data Store Read' */
          reset_bc2_s = localDW->Reset_Board;

          /* Logic: '<S656>/AND' incorporates:
           *  RelationalOperator: '<S656>/Equal2'
           */
          rtb_AND_iz = ((*rtd_Local_Ticks == 332.0) && reset_bc2_s);

          /* Outputs for Enabled SubSystem: '<S656>/RESET Board - Return to initialization' */
          RESETBoardReturntoinitializatio(rtb_AND_iz,
            &localDW->Initialization_flag, rtd_Master_ID, rtd_New_Msg_Ready_CAN1,
            rtd_New_Msg_Ready_CAN2, &localDW->Reset_Board, &localDW->Role_ID,
            rtd_RxID_CAN1, rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
            rtd_Toggle_Pin_A0, &localC->RESETBoardReturntoinitializat_a);

          /* End of Outputs for SubSystem: '<S656>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Reset Variables BC2' incorporates:
         *  EnablePort: '<S657>/Enable'
         */
        if ((*rtd_Local_Ticks >= 326.0) && (*rtd_Local_Ticks < localC->Sum18)) {
          /* Outputs for Enabled SubSystem: '<S657>/Check Timeouts' incorporates:
           *  EnablePort: '<S729>/Enable'
           */
          if (*rtd_Local_Ticks == 326.0) {
            /* Logic: '<S729>/AND9' incorporates:
             *  DataStoreRead: '<S729>/Data Store Read25'
             *  DataStoreWrite: '<S729>/Data Store Write8'
             *  Logic: '<S729>/NOT4'
             *  RelationalOperator: '<S729>/Equal9'
             */
            localDW->Toggle_Pin_A1 = ((!localDW->BC2_Sync_processed) &&
              (*rtd_Master_ID != *rtd_Board_ID));

            /* Switch: '<S729>/Switch7' incorporates:
             *  Constant: '<S729>/Constant16'
             *  DataStoreRead: '<S729>/Data Store Read23'
             *  DataStoreWrite: '<S729>/Data Store Write8'
             *  DataStoreWrite: '<S729>/Data Store Write9'
             *  Sum: '<S729>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc2_missed_counter += 1.0;
            }

            /* End of Switch: '<S729>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S657>/Check Timeouts' */

          /* Outputs for Enabled SubSystem: '<S657>/Reset Variables' incorporates:
           *  EnablePort: '<S730>/Enable'
           */
          if (*rtd_Local_Ticks == 328.0) {
            /* DataStoreWrite: '<S730>/Data Store Write' incorporates:
             *  Constant: '<S730>/Constant'
             */
            localDW->Desync_Positive = false;

            /* DataStoreWrite: '<S730>/Data Store Write1' incorporates:
             *  Constant: '<S730>/Constant'
             */
            localDW->BC2_Sync_processed = false;

            /* DataStoreWrite: '<S730>/Data Store Write2' incorporates:
             *  Constant: '<S730>/Constant1'
             */
            localDW->Members_Nr = 0.0;

            /* DataStoreWrite: '<S730>/Data Store Write3' incorporates:
             *  Constant: '<S730>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S730>/Data Store Write5' incorporates:
             *  Constant: '<S730>/Constant4'
             */
            localDW->Member1_ID = 0.0;
          }

          /* End of Outputs for SubSystem: '<S657>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Reset Variables BC2' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' incorporates:
         *  EnablePort: '<S658>/Enable'
         */
        if ((*rtd_Local_Ticks >= 210.0) && (*rtd_Local_Ticks < localC->Sum6)) {
          localDW->COMPTaskRx_Trailer1Articulation = true;

          /* DataStoreRead: '<S658>/Data Store Read1' */
          rtb_DataStoreRead1_cu = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S658>/Data Store Read2' */
          rtb_DataStoreRead2_d = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S658>/Data Store Read' */
          rtb_DataStoreRead_mg = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S658>/Data Store Read3' */
          rtb_DataStoreRead3_h0 = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S658>/Data Store Read26' */
          rtb_DataStoreRead4_dd = *rtd_Trailer_ID;

          /* Logic: '<S658>/AND' incorporates:
           *  Constant: '<S658>/Constant2'
           *  DataStoreRead: '<S658>/Data Store Read5'
           *  RelationalOperator: '<S658>/Equal'
           *  RelationalOperator: '<S658>/Equal2'
           */
          rtb_AND_ht = ((*rtd_Trailer_ID == 1.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Outputs for Enabled SubSystem: '<S658>/Process_Messages' incorporates:
           *  EnablePort: '<S731>/Enable'
           */
          if (!rtb_AND_ht) {
            localDW->Process_Messages_MODE_h = true;

            /* Outputs for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_cu,
              &rtb_DataStoreRead_mg, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_f,
              &localDW->DemuxmessageCAN1andcheckcoher_f);

            /* End of Outputs for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_d,
              &rtb_DataStoreRead3_h0, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_n,
              &localDW->DemuxmessageCAN1andcheckcoher_n);

            /* End of Outputs for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S731>/Switch' incorporates:
             *  Constant: '<S658>/Constant1'
             *  DataStoreWrite: '<S731>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_f.Equal1) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_f.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcoher_n.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S731>/Switch' */

            /* BitConcat: '<S733>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S731>/Data Store Write'
             */
            Trailer1Articulation_RX_s = (uint16_T)(localDW->Msg_Rx.Buffer_2 << 8
              | localDW->Msg_Rx.Buffer_3);

            /* DataStoreWrite: '<S731>/Data Store Write1' */
            localDW->Trailer1_Articulation = Trailer1Articulation_RX_s;

            /* Logic: '<S731>/OR' incorporates:
             *  DataStoreWrite: '<S731>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcoher_f.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_n.Equal1);

            /* Outputs for Enabled SubSystem: '<S731>/Desync calculation' incorporates:
             *  EnablePort: '<S736>/Enable'
             */
            if (localDW->new_msg_Rx) {
              /* Switch: '<S736>/Switch1' incorporates:
               *  Constant: '<S194>/Constant5'
               *  Constant: '<S736>/Constant'
               *  Constant: '<S736>/Constant1'
               *  Constant: '<S736>/delay_estimation_1'
               *  Constant: '<S736>/delay_estimation_2'
               *  Product: '<S736>/Multiply'
               *  Product: '<S736>/Multiply1'
               *  Sum: '<S736>/Minus'
               *  Sum: '<S736>/Minus1'
               *  Sum: '<S736>/Sum'
               *  Sum: '<S736>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_f.Equal1) {
                rtb_DataStoreRead4_dd = ((COMM_Phase1 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_f.BitShift1_mu.y + 110.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_DataStoreRead4_dd = ((COMM_Phase2 * (real_T)
                  localB->DemuxmessageCAN1andcheckcoher_n.BitShift1_i.y + 110.0)
                  + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* Saturate: '<S736>/Saturation' incorporates:
               *  Switch: '<S736>/Switch1'
               */
              if (rtb_DataStoreRead4_dd > 15.0) {
                /* Saturate: '<S736>/Saturation' */
                Desync_Sync_bc2_vem_s = 15.0;
              } else if (rtb_DataStoreRead4_dd < (-15.0)) {
                /* Saturate: '<S736>/Saturation' */
                Desync_Sync_bc2_vem_s = (-15.0);
              } else {
                /* Saturate: '<S736>/Saturation' */
                Desync_Sync_bc2_vem_s = rtb_DataStoreRead4_dd;
              }

              /* End of Saturate: '<S736>/Saturation' */

              /* DataStoreWrite: '<S736>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc2_vem_s;
            }

            /* End of Outputs for SubSystem: '<S731>/Desync calculation' */

            /* Outputs for Enabled SubSystem: '<S731>/Member Counter' */
            MemberCounter(localDW->new_msg_Rx, &localDW->Member1_ID,
                          &rtb_DataStoreRead4_dd, &localDW->Members_Nr);

            /* End of Outputs for SubSystem: '<S731>/Member Counter' */

            /* DataStoreWrite: '<S731>/Data Store Write3' incorporates:
             *  Constant: '<S731>/Constant2'
             *  DataStoreWrite: '<S731>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Outputs for SubSystem: '<S658>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S658>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND_ht, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S658>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S658>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S658>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' incorporates:
         *  EnablePort: '<S659>/Enable'
         */
        if ((*rtd_Local_Ticks >= 314.0) && (*rtd_Local_Ticks < localC->Sum7)) {
          localDW->COMPTaskRx_Trailer2Articulation = true;

          /* DataStoreRead: '<S659>/Data Store Read1' */
          rtb_DataStoreRead1_cd = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S659>/Data Store Read2' */
          rtb_DataStoreRead2_cu = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S659>/Data Store Read' */
          rtb_DataStoreRead_ow = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S659>/Data Store Read3' */
          rtb_DataStoreRead3_f = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S659>/Data Store Read26' */
          rtb_DataStoreRead4_dd = *rtd_Trailer_ID;

          /* Logic: '<S659>/AND' incorporates:
           *  Constant: '<S659>/Constant'
           *  DataStoreRead: '<S659>/Data Store Read5'
           *  RelationalOperator: '<S659>/Equal'
           *  RelationalOperator: '<S659>/Equal1'
           */
          rtb_AND_jh = ((*rtd_Trailer_ID == 2.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Outputs for Enabled SubSystem: '<S659>/Process_Messages' incorporates:
           *  EnablePort: '<S764>/Enable'
           */
          if (!rtb_AND_jh) {
            localDW->Process_Messages_MODE_g = true;

            /* Outputs for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_cd,
              &rtb_DataStoreRead_ow, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_gn,
              &localDW->DemuxmessageCAN1andcheckcohe_gn);

            /* End of Outputs for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_a(rtb_DataStoreRead2_cu,
              &rtb_DataStoreRead3_f, 1.0, &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_c,
              &localDW->DemuxmessageCAN1andcheckcoher_c);

            /* End of Outputs for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S764>/Switch' incorporates:
             *  Constant: '<S659>/Constant1'
             *  DataStoreWrite: '<S764>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_gn.Equal1) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_gn.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcoher_c.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S764>/Switch' */

            /* BitConcat: '<S766>/BitConcat2' incorporates:
             *  DataStoreWrite: '<S764>/Data Store Write'
             */
            Trailer2Articulation_RX_s = (uint16_T)(localDW->Msg_Rx.Buffer_2 << 8
              | localDW->Msg_Rx.Buffer_3);

            /* DataStoreWrite: '<S764>/Data Store Write1' */
            localDW->Trailer2_Articulation = Trailer2Articulation_RX_s;

            /* Logic: '<S764>/OR' incorporates:
             *  DataStoreWrite: '<S764>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcohe_gn.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_c.Equal1);

            /* Outputs for Enabled SubSystem: '<S764>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx, 214.0,
                              localB->DemuxmessageCAN1andcheckcohe_gn.Equal1,
                              localB->DemuxmessageCAN1andcheckcohe_gn.BitShift1_mu.y,
                              localB->DemuxmessageCAN1andcheckcoher_c.BitShift1_i.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S764>/Desync calculation' */

            /* Outputs for Enabled SubSystem: '<S764>/Member Counter1' */
            MemberCounter(localDW->new_msg_Rx, &localDW->Member1_ID,
                          &rtb_DataStoreRead4_dd, &localDW->Members_Nr);

            /* End of Outputs for SubSystem: '<S764>/Member Counter1' */

            /* DataStoreWrite: '<S764>/Data Store Write3' incorporates:
             *  Constant: '<S194>/Constant11'
             *  Constant: '<S764>/Constant2'
             *  DataStoreWrite: '<S764>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Outputs for SubSystem: '<S659>/Process_Messages' */

          /* Outputs for Enabled SubSystem: '<S659>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND_jh, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S659>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskRx_Trailer2Articulation) {
          /* Disable for Enabled SubSystem: '<S659>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S659>/Process_Messages' */
          localDW->COMPTaskRx_Trailer2Articulation = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' incorporates:
         *  EnablePort: '<S660>/Enable'
         */
        if ((*rtd_Local_Ticks >= 322.0) && (*rtd_Local_Ticks < localC->Sum9)) {
          localDW->COMPTaskSteeringController_MODE = true;

          /* Outputs for Enabled SubSystem: '<S660>/Enabled Subsystem' incorporates:
           *  EnablePort: '<S797>/Enable'
           */
          if ((*rtd_Trailer_ID == 3.0) && (*rtd_Board_ID ==
               localDW->FCU_Master_ID)) {
            if (!localDW->EnabledSubsystem_MODE) {
              localDW->EnabledSubsystem_RESET_ELAPS_T = true;

              /* Enable for DiscreteIntegrator: '<S839>/Integrator' */
              localDW->Integrator_SYSTEM_ENABLE = 1U;
              localDW->EnabledSubsystem_MODE = true;
            }

            if (localDW->EnabledSubsystem_RESET_ELAPS_T) {
              EnabledSubsystem_ELAPS_T[0] = 0U;
              EnabledSubsystem_ELAPS_T[1] = 0U;
            } else {
              EnabledSubsystem_ELAPS_T_tmp = rtM->Timing.clockTick0;
              EnabledSubsystem_ELAPS_T[0] = EnabledSubsystem_ELAPS_T_tmp -
                localDW->EnabledSubsystem_PREV_T[0];
              elapseT_H = rtM->Timing.clockTickH0 -
                localDW->EnabledSubsystem_PREV_T[1];
              if (localDW->EnabledSubsystem_PREV_T[0] >
                  EnabledSubsystem_ELAPS_T_tmp) {
                elapseT_H--;
              }

              EnabledSubsystem_ELAPS_T[1] = elapseT_H;
            }

            localDW->EnabledSubsystem_PREV_T[0] = rtM->Timing.clockTick0;
            localDW->EnabledSubsystem_PREV_T[1] = rtM->Timing.clockTickH0;
            localDW->EnabledSubsystem_RESET_ELAPS_T = false;

            /* DataStoreRead: '<S797>/Number of Trailers' */
            Motor_Setpoint_s = localDW->Delta_I2K;

            /* M-S-Function: '<S802>/Level-2 M-file S-Function' */
            /* determine if the counter needs a reset  */
            if (localB->DataTypeConversion > 0) {
              QuadEncResetCounter(QUADENC_TIM8_PC6_PC7);
            }

            /* read counter from the quadrature encoder module */
            rtb_Level2MfileSFunction_p = QuadEncGetCounter(QUADENC_TIM8_PC6_PC7);

            /* Sum: '<S801>/Sum' */
            PosError = Motor_Setpoint_s - (real_T)rtb_Level2MfileSFunction_p;

            /* DiscreteIntegrator: '<S839>/Integrator' */
            if (localDW->Integrator_SYSTEM_ENABLE != 0) {
              /* DiscreteIntegrator: '<S839>/Integrator' */
              rtb_DataStoreRead4_dd = localDW->Integrator_DSTATE;
            } else {
              /* DiscreteIntegrator: '<S839>/Integrator' */
              rtb_DataStoreRead4_dd = 0.01 * (real_T)EnabledSubsystem_ELAPS_T[0]
                * localDW->Integrator_PREV_U + localDW->Integrator_DSTATE;
            }

            /* End of DiscreteIntegrator: '<S839>/Integrator' */

            /* SampleTimeMath: '<S834>/Tsamp' incorporates:
             *  Gain: '<S831>/Derivative Gain'
             *
             * About '<S834>/Tsamp':
             *  y = u * K where K = 1 / ( w * Ts )
             */
            rtb_DataStoreRead14 = 3.0 * PosError / (((real_T)
              EnabledSubsystem_ELAPS_T[0] * 0.01 + (real_T)
              EnabledSubsystem_ELAPS_T[1] * 4.294967296E+7) * 1.0);

            /* Sum: '<S848>/Sum' incorporates:
             *  Delay: '<S832>/UD'
             *  Gain: '<S844>/Proportional Gain'
             *  Sum: '<S832>/Diff'
             */
            u0_0 = (int16_T)floor((50.0 * PosError + rtb_DataStoreRead4_dd) +
                                  (rtb_DataStoreRead14 - localDW->UD_DSTATE));

            /* Saturate: '<S846>/Saturation' */
            if (u0_0 > 1023) {
              /* Saturate: '<S846>/Saturation' */
              PosPIDOut = 1023;
            } else if (u0_0 < (-1023)) {
              /* Saturate: '<S846>/Saturation' */
              PosPIDOut = (-1023);
            } else {
              /* Saturate: '<S846>/Saturation' */
              PosPIDOut = u0_0;
            }

            /* End of Saturate: '<S846>/Saturation' */

            /* Switch: '<S801>/Switch' incorporates:
             *  Constant: '<S801>/IN1'
             *  Constant: '<S801>/IN2'
             *  Constant: '<S805>/Constant'
             *  RelationalOperator: '<S805>/Compare'
             */
            if (PosPIDOut > 0) {
              rtb_Equal1_iw = true;
            } else {
              rtb_Equal1_iw = false;
            }

            /* End of Switch: '<S801>/Switch' */

            /* Switch: '<S801>/Switch1' incorporates:
             *  Constant: '<S801>/IN3'
             *  Constant: '<S801>/IN4'
             *  Constant: '<S804>/Constant'
             *  RelationalOperator: '<S804>/Compare'
             */
            if (PosPIDOut < 0) {
              rtb_Equal2_m = true;
            } else {
              rtb_Equal2_m = false;
            }

            /* End of Switch: '<S801>/Switch1' */

            /* Switch: '<S801>/Switch3' incorporates:
             *  RelationalOperator: '<S801>/Equal'
             *  Switch: '<S801>/Switch2'
             */
            if (rtb_Equal1_iw == rtb_Equal2_m) {
              /* DataTypeConversion: '<S797>/Cast To Boolean' incorporates:
               *  Constant: '<S801>/IN5'
               */
              localB->CastToBoolean = false;

              /* DataTypeConversion: '<S797>/Cast To Boolean1' incorporates:
               *  Constant: '<S801>/IN5'
               */
              localB->CastToBoolean1 = false;
            } else {
              /* DataTypeConversion: '<S797>/Cast To Boolean' */
              localB->CastToBoolean = rtb_Equal2_m;

              /* DataTypeConversion: '<S797>/Cast To Boolean1' */
              localB->CastToBoolean1 = rtb_Equal1_iw;
            }

            /* End of Switch: '<S801>/Switch3' */

            /* Abs: '<S801>/Abs' */
            if (PosPIDOut < 0) {
              /* Abs: '<S801>/Abs' */
              localB->Abs = (uint16_T)-PosPIDOut;
            } else {
              /* Abs: '<S801>/Abs' */
              localB->Abs = (uint16_T)PosPIDOut;
            }

            /* End of Abs: '<S801>/Abs' */

            /* DataTypeConversion: '<S802>/Data Type Conversion' incorporates:
             *  RelationalOperator: '<S856>/FixPt Relational Operator'
             *  UnitDelay: '<S856>/Delay Input1'
             *
             * Block description for '<S856>/Delay Input1':
             *
             *  Store in Global RAM
             */
            localB->DataTypeConversion = (localDW->DelayInput1_DSTATE < 0.0);

            /* Update for M-S-Function: '<S798>/Level-2 M-file S-Function' */
            /* update digital output */
            if (localB->CastToBoolean == 0) {
              DigoutSet(DIGOUT_PORTG_PIN7, DIGOUT_LOW);
            } else {
              DigoutSet(DIGOUT_PORTG_PIN7, DIGOUT_HIGH);
            }

            /* Update for M-S-Function: '<S799>/Level-2 M-file S-Function' */
            /* update digital output */
            if (localB->CastToBoolean1 == 0) {
              DigoutSet(DIGOUT_PORTG_PIN8, DIGOUT_LOW);
            } else {
              DigoutSet(DIGOUT_PORTG_PIN8, DIGOUT_HIGH);
            }

            /* Update for M-S-Function: '<S800>/Level-2 M-file S-Function' */
            /* set the new duty cycle */
            PwmoutSet(PWMOUT_TIM2_PIN_PA5, localB->Abs);

            /* Update for DiscreteIntegrator: '<S839>/Integrator' incorporates:
             *  Gain: '<S836>/Integral Gain'
             */
            localDW->Integrator_SYSTEM_ENABLE = 0U;
            localDW->Integrator_DSTATE = rtb_DataStoreRead4_dd;
            localDW->Integrator_PREV_U = 20.0 * PosError;

            /* Update for Delay: '<S832>/UD' */
            localDW->UD_DSTATE = rtb_DataStoreRead14;

            /* Update for UnitDelay: '<S856>/Delay Input1'
             *
             * Block description for '<S856>/Delay Input1':
             *
             *  Store in Global RAM
             */
            localDW->DelayInput1_DSTATE = 0.0;
          } else if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S660>/Enabled Subsystem' */
        } else if (localDW->COMPTaskSteeringController_MODE) {
          /* Disable for Enabled SubSystem: '<S660>/Enabled Subsystem' */
          if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S660>/Enabled Subsystem' */
          localDW->COMPTaskSteeringController_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Steering Controller' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S661>/Enable'
         */
        if ((*rtd_Local_Ticks >= 100.0) && (*rtd_Local_Ticks < localC->Sum1) &&
            (!localDW->BC2_Sync_processed)) {
          localDW->COMPTaskSyncbc1check_MODE = true;

          /* DataStoreRead: '<S661>/Data Store Read1' */
          rtb_DataStoreRead1_m1 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S661>/Data Store Read2' */
          rtb_DataStoreRead2_pc = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S661>/Data Store Read' */
          rtb_DataStoreRead_d1 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S661>/Data Store Read3' */
          rtb_DataStoreRead3 = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S661>/Data Store Read15' */
          rtb_DataStoreRead15 = *rtd_Master_ID;

          /* RelationalOperator: '<S661>/Equal' */
          rtb_Equal1_iw = (*rtd_Local_Ticks == 100.0);

          /* RelationalOperator: '<S661>/Equal5' incorporates:
           *  Constant: '<S661>/Constant26'
           *  DataStoreRead: '<S661>/Data Store Read6'
           */
          rtb_Equal2_m = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S661>/Process_Messages' incorporates:
           *  EnablePort: '<S857>/Enable'
           */
          if (rtb_Equal1_iw && rtb_Equal2_m) {
            localDW->Process_Messages_MODE = true;

            /* Outputs for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_m1,
              &rtb_DataStoreRead_d1, 1.0, rtb_DataStoreRead15,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcoher_m,
              &localDW->DemuxmessageCAN1andcheckcoher_m);

            /* End of Outputs for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_pc,
              &rtb_DataStoreRead3, 1.0, rtb_DataStoreRead15,
              &localDW->msg_count_DEBUG,
              &localB->DemuxmessageCAN1andcheckcohe_fc,
              &localDW->DemuxmessageCAN1andcheckcohe_fc);

            /* End of Outputs for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */

            /* Switch generated from: '<S857>/Switch' incorporates:
             *  Constant: '<S661>/Constant'
             *  DataStoreWrite: '<S857>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_m.AND) {
              localDW->Msg_Rx.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_m.TmpBufferAtConstantOutport1;
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
                localB->DemuxmessageCAN1andcheckcohe_fc.TmpBufferAtConstantOutport1;
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

            /* End of Switch generated from: '<S857>/Switch' */

            /* Logic: '<S857>/OR' incorporates:
             *  DataStoreWrite: '<S857>/Data Store Write2'
             */
            localDW->new_msg_Rx = (localB->DemuxmessageCAN1andcheckcoher_m.AND ||
              localB->DemuxmessageCAN1andcheckcohe_fc.AND);

            /* Outputs for Enabled SubSystem: '<S857>/Desync calculation' */
            Desynccalculation(localDW->new_msg_Rx, 0.0,
                              localB->DemuxmessageCAN1andcheckcoher_m.AND,
                              localB->DemuxmessageCAN1andcheckcoher_m.BitShift1_mg.y,
                              localB->DemuxmessageCAN1andcheckcohe_fc.BitShift1_e.y,
                              &localDW->Desync_Ticks, rtd_Msg_Rx_Ticks_CAN1,
                              rtd_Msg_Rx_Ticks_CAN2);

            /* End of Outputs for SubSystem: '<S857>/Desync calculation' */

            /* DataStoreWrite: '<S857>/Data Store Write3' incorporates:
             *  Constant: '<S194>/Constant'
             *  Constant: '<S857>/Constant2'
             *  DataStoreWrite: '<S857>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S661>/Process_Messages' */

          /* Logic: '<S661>/AND1' incorporates:
           *  Constant: '<S194>/Constant'
           *  Constant: '<S661>/Constant'
           *  DataStoreWrite: '<S857>/Data Store Write2'
           *  Logic: '<S661>/AND'
           *  Logic: '<S661>/NOT'
           */
          rtb_AND1_o = (rtb_Equal1_iw && (!rtb_Equal2_m));

          /* Outputs for Enabled SubSystem: '<S661>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_o, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S661>/Reset Tx msg counter' */
        } else if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S661>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S661>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S194>/COMP Task - Update LT1' incorporates:
         *  EnablePort: '<S662>/Enable'
         */
        if ((*rtd_Local_Ticks >= 104.0) && (*rtd_Local_Ticks < localC->Sum2) &&
            (!localDW->BC2_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S662>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S886>/Enable'
           */
          if ((*rtd_Local_Ticks == 104.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S886>/Data Store Write1' incorporates:
             *  Constant: '<S886>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S662>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S662>/Local Time Update' incorporates:
           *  EnablePort: '<S887>/Enable'
           */
          if ((*rtd_Local_Ticks == 106.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx) {
            /* RelationalOperator: '<S887>/GreaterThan' incorporates:
             *  Constant: '<S887>/Constant4'
             *  DataStoreRead: '<S887>/Data Store Read1'
             *  DataStoreWrite: '<S887>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S887>/NOT' incorporates:
             *  DataStoreWrite: '<S887>/Data Store Write'
             */
            rtb_NOT_b4 = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S887>/Desync_Negative' */
            Desync_Negative(rtb_NOT_b4, 104.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S887>/Desync_Negative' */

            /* DataStoreWrite: '<S887>/Data Store Write13' incorporates:
             *  Constant: '<S887>/Constant3'
             */
            localDW->BC2_Sync_processed = true;

            /* DataStoreWrite: '<S887>/Data Store Write3' incorporates:
             *  Constant: '<S887>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S887>/Data Store Write1' incorporates:
             *  Constant: '<S887>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S662>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S194>/COMP Task - Update LT1' */

        /* Logic: '<S194>/AND17' incorporates:
         *  Constant: '<S194>/Constant'
         *  Constant: '<S194>/Constant11'
         *  Constant: '<S194>/Constant12'
         *  Constant: '<S194>/Constant13'
         *  Constant: '<S194>/Constant16'
         *  Constant: '<S194>/Constant17'
         *  Constant: '<S194>/Constant19'
         *  Constant: '<S194>/Constant31'
         *  Constant: '<S194>/Constant4'
         *  Constant: '<S194>/Constant41'
         *  Constant: '<S194>/Constant6'
         *  Constant: '<S194>/Constant8'
         *  Constant: '<S655>/Constant'
         *  Constant: '<S658>/Constant1'
         *  Constant: '<S659>/Constant1'
         *  Constant: '<S660>/Constant'
         *  Constant: '<S661>/Constant'
         *  Constant: '<S662>/Constant1'
         *  Constant: '<S662>/Constant4'
         *  Constant: '<S721>/Constant1'
         *  Constant: '<S721>/Constant2'
         *  DataStoreRead: '<S194>/Data Store Read11'
         *  DataStoreRead: '<S194>/Data Store Read6'
         *  DataStoreRead: '<S194>/Data Store Read7'
         *  DataStoreRead: '<S655>/Data Store Read5'
         *  DataStoreRead: '<S660>/Data Store Read5'
         *  DataStoreRead: '<S662>/Data Store Read'
         *  DataStoreRead: '<S662>/Data Store Read1'
         *  DataStoreWrite: '<S731>/Data Store Write2'
         *  DataStoreWrite: '<S764>/Data Store Write2'
         *  DataStoreWrite: '<S857>/Data Store Write2'
         *  Logic: '<S194>/AND'
         *  Logic: '<S194>/AND1'
         *  Logic: '<S194>/AND16'
         *  Logic: '<S194>/AND18'
         *  Logic: '<S194>/AND19'
         *  Logic: '<S194>/AND2'
         *  Logic: '<S194>/AND20'
         *  Logic: '<S194>/AND5'
         *  Logic: '<S194>/AND6'
         *  Logic: '<S194>/AND7'
         *  Logic: '<S194>/AND8'
         *  Logic: '<S194>/NOT2'
         *  Logic: '<S194>/NOT4'
         *  Logic: '<S194>/NOT5'
         *  Logic: '<S655>/AND'
         *  Logic: '<S658>/NOT'
         *  Logic: '<S659>/NOT'
         *  Logic: '<S660>/AND'
         *  Logic: '<S661>/AND'
         *  Logic: '<S662>/AND'
         *  Logic: '<S662>/AND1'
         *  RelationalOperator: '<S194>/GreaterThan'
         *  RelationalOperator: '<S194>/GreaterThan1'
         *  RelationalOperator: '<S194>/GreaterThan10'
         *  RelationalOperator: '<S194>/GreaterThan11'
         *  RelationalOperator: '<S194>/GreaterThan14'
         *  RelationalOperator: '<S194>/GreaterThan15'
         *  RelationalOperator: '<S194>/GreaterThan16'
         *  RelationalOperator: '<S194>/GreaterThan17'
         *  RelationalOperator: '<S194>/GreaterThan2'
         *  RelationalOperator: '<S194>/GreaterThan3'
         *  RelationalOperator: '<S194>/GreaterThan32'
         *  RelationalOperator: '<S194>/GreaterThan33'
         *  RelationalOperator: '<S194>/GreaterThan34'
         *  RelationalOperator: '<S194>/GreaterThan35'
         *  RelationalOperator: '<S194>/GreaterThan4'
         *  RelationalOperator: '<S194>/GreaterThan5'
         *  RelationalOperator: '<S194>/GreaterThan8'
         *  RelationalOperator: '<S194>/GreaterThan9'
         *  RelationalOperator: '<S655>/Equal'
         *  RelationalOperator: '<S655>/Equal1'
         *  RelationalOperator: '<S657>/Equal1'
         *  RelationalOperator: '<S657>/Equal2'
         *  RelationalOperator: '<S660>/Equal'
         *  RelationalOperator: '<S660>/Equal1'
         *  RelationalOperator: '<S662>/Equal1'
         *  RelationalOperator: '<S662>/Equal2'
         *  RelationalOperator: '<S662>/Equal3'
         *  RelationalOperator: '<S721>/Equal'
         *  RelationalOperator: '<S721>/Equal1'
         */
        rtb_AND17 = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4) && (!localDW->BC2_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' incorporates:
         *  EnablePort: '<S652>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 110.0) && (rtb_DataStoreRead8_c <
             localC->Sum3)) {
          localDW->COMMTaskArticualtionangletrai_k = true;

          /* Logic: '<S652>/AND' incorporates:
           *  Constant: '<S652>/Constant'
           *  DataStoreRead: '<S652>/Data Store Read2'
           *  RelationalOperator: '<S652>/Equal'
           *  RelationalOperator: '<S652>/Equal1'
           */
          rtb_Equal1_iw = ((*rtd_Trailer_ID == 1.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Logic: '<S652>/NOT' */
          rtb_NOT_ez = !rtb_Equal1_iw;

          /* Outputs for Enabled SubSystem: '<S652>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ez, 110.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx, &localB->Receptionsubstasks_c,
                             &localC->Receptionsubstasks_c,
                             &localDW->Receptionsubstasks_c);

          /* End of Outputs for SubSystem: '<S652>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S652>/Transmission subtasks' incorporates:
           *  EnablePort: '<S664>/Enable'
           */
          if (rtb_Equal1_iw) {
            localDW->Transmissionsubtasks_MODE_c = true;

            /* DataStoreRead: '<S664>/Data Store Read' */
            rtb_DataStoreRead_l5 = *rtd_Local_Ticks;

            /* RelationalOperator: '<S664>/Equal2' */
            rtb_Equal1_iw = (rtb_DataStoreRead_l5 > 110.0);

            /* Logic: '<S664>/AND' incorporates:
             *  Constant: '<S664>/Constant6'
             *  RelationalOperator: '<S664>/GreaterThan2'
             */
            rtb_AND_an = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S664>/AND1' incorporates:
             *  Constant: '<S664>/Constant7'
             *  RelationalOperator: '<S664>/GreaterThan3'
             */
            rtb_AND1_l = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S664>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S668>/Enable'
             */
            if (rtb_DataStoreRead_l5 == 110.0) {
              /* DataStoreRead: '<S668>/Data Store Read' */
              Trailer1_Articulation_s = localDW->ArtPotFinal;

              /* DataStoreWrite: '<S668>/Data Store Write' */
              localDW->Trailer1_Articulation = Trailer1_Articulation_s;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S681>/Extract Desired Bits'
               */
              localB->signal2_f = (uint8_T)((uint32_T)Trailer1_Articulation_s >>
                8);

              /* SignalConversion generated from: '<S668>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S682>/Extract Desired Bits'
               */
              localB->signal3_e = (uint8_T)Trailer1_Articulation_s;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' */
              localB->signal4_c = localC->TmpBufferAtConstantOutpor_d;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' */
              localB->signal5_k = localC->TmpBufferAtConstantOutpor_d;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' */
              localB->signal6_i = localC->TmpBufferAtConstantOutpor_d;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' */
              localB->signal7_k = localC->TmpBufferAtConstantOutpor_d;

              /* SignalConversion generated from: '<S668>/Value_domain_msg' */
              localB->signal8_l = localC->TmpBufferAtConstantOutpor_d;
            }

            /* End of Outputs for SubSystem: '<S664>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_an, rtb_DataStoreRead_l5, 110.0,
              localB->signal2_f, localB->signal3_e, localB->signal4_c,
              localB->signal5_k, localB->signal6_i, localB->signal7_k,
              localB->signal8_l, rtd_Board_ID, rtd_Msg_Tx_CAN1, rtd_TxID_CAN1,
              rtd_Tx_msg_count_CAN1, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN1_g,
              &localC->CheckmsgtransmissionCAN1_g,
              &localDW->CheckmsgtransmissionCAN1_g);

            /* End of Outputs for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_l, rtb_DataStoreRead_l5, 110.0,
              localB->signal2_f, localB->signal3_e, localB->signal4_c,
              localB->signal5_k, localB->signal6_i, localB->signal7_k,
              localB->signal8_l, rtd_Board_ID, rtd_Msg_Tx_CAN2, rtd_TxID_CAN2,
              rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
              &localB->CheckmsgtransmissionCAN2_i,
              &localC->CheckmsgtransmissionCAN2_i,
              &localDW->CheckmsgtransmissionCAN2_i);

            /* End of Outputs for SubSystem: '<S664>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Outputs for SubSystem: '<S652>/Transmission subtasks' */
        } else if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S652>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S652>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S652>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S652>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */

        /* Outputs for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' incorporates:
         *  EnablePort: '<S653>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 214.0) && (rtb_DataStoreRead8_c <
             localC->Sum5)) {
          localDW->COMMTaskArticualtionangletraile = true;

          /* Logic: '<S653>/AND' incorporates:
           *  Constant: '<S653>/Constant'
           *  DataStoreRead: '<S653>/Data Store Read2'
           *  RelationalOperator: '<S653>/Equal'
           *  RelationalOperator: '<S653>/Equal1'
           */
          rtb_Equal1_iw = ((*rtd_Trailer_ID == 2.0) && (*rtd_Board_ID ==
            localDW->FCU_Master_ID));

          /* Logic: '<S653>/NOT' */
          rtb_NOT_ao = !rtb_Equal1_iw;

          /* Outputs for Enabled SubSystem: '<S653>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ao, 214.0, rtd_Local_Ticks,
                             &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx, &localB->Receptionsubstasks_o,
                             &localC->Receptionsubstasks_o,
                             &localDW->Receptionsubstasks_o);

          /* End of Outputs for SubSystem: '<S653>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S653>/Transmission subtasks' incorporates:
           *  EnablePort: '<S684>/Enable'
           */
          if (rtb_Equal1_iw) {
            localDW->Transmissionsubtasks_MODE = true;

            /* DataStoreRead: '<S684>/Data Store Read' */
            rtb_DataStoreRead_iw = *rtd_Local_Ticks;

            /* RelationalOperator: '<S684>/Equal2' */
            rtb_Equal1_iw = (rtb_DataStoreRead_iw > 214.0);

            /* Logic: '<S684>/AND' incorporates:
             *  Constant: '<S684>/Constant6'
             *  RelationalOperator: '<S684>/GreaterThan2'
             */
            rtb_AND_b1 = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S684>/AND1' incorporates:
             *  Constant: '<S684>/Constant7'
             *  RelationalOperator: '<S684>/GreaterThan3'
             */
            rtb_AND1_n = (rtb_Equal1_iw && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S684>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S688>/Enable'
             */
            if (rtb_DataStoreRead_iw == 214.0) {
              /* DataStoreRead: '<S688>/Data Store Read' */
              Trailer2_Articulation_s = localDW->ArtPotFinal;

              /* DataStoreWrite: '<S688>/Data Store Write' */
              localDW->Trailer2_Articulation = Trailer2_Articulation_s;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S701>/Extract Desired Bits'
               */
              localB->signal2 = (uint8_T)((uint32_T)Trailer2_Articulation_s >> 8);

              /* SignalConversion generated from: '<S688>/Value_domain_msg' incorporates:
               *  DataTypeConversion: '<S702>/Extract Desired Bits'
               */
              localB->signal3 = (uint8_T)Trailer2_Articulation_s;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' */
              localB->signal4 = localC->TmpBufferAtConstantOutport1;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' */
              localB->signal5 = localC->TmpBufferAtConstantOutport1;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' */
              localB->signal6 = localC->TmpBufferAtConstantOutport1;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' */
              localB->signal7 = localC->TmpBufferAtConstantOutport1;

              /* SignalConversion generated from: '<S688>/Value_domain_msg' */
              localB->signal8 = localC->TmpBufferAtConstantOutport1;
            }

            /* End of Outputs for SubSystem: '<S684>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_b1, rtb_DataStoreRead_iw, 214.0,
              localB->signal2, localB->signal3, localB->signal4, localB->signal5,
              localB->signal6, localB->signal7, localB->signal8, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN1_h,
              &localC->CheckmsgtransmissionCAN1_h,
              &localDW->CheckmsgtransmissionCAN1_h);

            /* End of Outputs for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_n, rtb_DataStoreRead_iw, 214.0,
              localB->signal2, localB->signal3, localB->signal4, localB->signal5,
              localB->signal6, localB->signal7, localB->signal8, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count, &localB->CheckmsgtransmissionCAN2_k,
              &localC->CheckmsgtransmissionCAN2_k,
              &localDW->CheckmsgtransmissionCAN2_k);

            /* End of Outputs for SubSystem: '<S684>/Check msg transmission CAN2' */
          } else if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Outputs for SubSystem: '<S653>/Transmission subtasks' */
        } else if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S653>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S653>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S653>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S653>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Outputs for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */

        /* Outputs for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc1(rtb_AND17, 0.0, rtd_Board_ID, rtd_Local_Ticks,
                        &localDW->Msg_Rx, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                        rtd_New_Msg_Ready_CAN1, rtd_New_Msg_Ready_CAN2,
                        &localDW->Role_ID, rtd_RxID_CAN1, rtd_RxID_CAN2,
                        rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_TxID_CAN1,
                        rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx, &localB->COMMTaskSyncbc1_d,
                        &localC->COMMTaskSyncbc1_d, &localDW->COMMTaskSyncbc1_d);

        /* End of Outputs for SubSystem: '<S194>/COMM Task - Sync bc 1' */

        /* Logic: '<S194>/OR' incorporates:
         *  Constant: '<S194>/Constant'
         *  Constant: '<S194>/Constant11'
         *  Constant: '<S194>/Constant5'
         *  Logic: '<S194>/AND3'
         *  Logic: '<S194>/AND4'
         *  RelationalOperator: '<S194>/GreaterThan12'
         *  RelationalOperator: '<S194>/GreaterThan13'
         *  RelationalOperator: '<S194>/GreaterThan6'
         *  RelationalOperator: '<S194>/GreaterThan7'
         *  RelationalOperator: '<S664>/Equal16'
         *  RelationalOperator: '<S684>/Equal16'
         */
        localB->OR = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks1.Equal7_a ||
                      localB->CheckmsgtransmissionCAN1_g.Equal7 ||
                      localB->CheckmsgtransmissionCAN1_h.Equal7);

        /* Logic: '<S194>/OR1' */
        localB->OR1 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks1.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_i.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_k.Equal7);

        /* Logic: '<S194>/OR2' */
        localB->OR2 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_j.AND ||
                       localB->Receptionsubstasks_c.AND ||
                       localB->Receptionsubstasks_o.AND);

        /* Logic: '<S194>/OR3' */
        localB->OR3 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_j.AND1 ||
                       localB->Receptionsubstasks_c.AND1 ||
                       localB->Receptionsubstasks_o.AND1);
      } else if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S658>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S658>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */
        if (localDW->COMPTaskRx_Trailer2Articulation) {
          /* Disable for Enabled SubSystem: '<S659>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S659>/Process_Messages' */
          localDW->COMPTaskRx_Trailer2Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' */
        if (localDW->COMPTaskSteeringController_MODE) {
          /* Disable for Enabled SubSystem: '<S660>/Enabled Subsystem' */
          if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S660>/Enabled Subsystem' */
          localDW->COMPTaskSteeringController_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Steering Controller' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S661>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S661>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S652>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S652>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S652>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S652>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S653>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S653>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S653>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S653>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S194>/OR' incorporates:
         *  Outport: '<S194>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S194>/OR1' incorporates:
         *  Outport: '<S194>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S194>/OR2' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S194>/OR3' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Outputs for SubSystem: '<S190>/controller basic cycle 2' */

      /* Switch generated from: '<S190>/Switch' incorporates:
       *  Constant: '<S190>/Constant2'
       *  Constant: '<S192>/Constant'
       *  Constant: '<S192>/Constant12'
       *  Constant: '<S192>/Constant14'
       *  Constant: '<S192>/Constant17'
       *  Constant: '<S192>/Constant19'
       *  Constant: '<S192>/Constant2'
       *  Constant: '<S192>/Constant21'
       *  Constant: '<S192>/Constant23'
       *  Constant: '<S192>/Constant25'
       *  Constant: '<S192>/Constant27'
       *  Constant: '<S192>/Constant28'
       *  Constant: '<S192>/Constant3'
       *  Constant: '<S192>/Constant31'
       *  Constant: '<S192>/Constant33'
       *  Constant: '<S192>/Constant34'
       *  Constant: '<S192>/Constant6'
       *  Constant: '<S192>/Constant8'
       *  Constant: '<S192>/Constant9'
       *  Constant: '<S193>/Constant'
       *  Constant: '<S193>/Constant11'
       *  Constant: '<S193>/Constant12'
       *  Constant: '<S193>/Constant14'
       *  Constant: '<S193>/Constant16'
       *  Constant: '<S193>/Constant17'
       *  Constant: '<S193>/Constant19'
       *  Constant: '<S193>/Constant20'
       *  Constant: '<S193>/Constant23'
       *  Constant: '<S193>/Constant31'
       *  Constant: '<S193>/Constant4'
       *  Constant: '<S193>/Constant41'
       *  Constant: '<S193>/Constant5'
       *  Constant: '<S193>/Constant6'
       *  Constant: '<S193>/Constant8'
       *  Constant: '<S194>/Constant'
       *  Constant: '<S194>/Constant11'
       *  Constant: '<S194>/Constant12'
       *  Constant: '<S194>/Constant13'
       *  Constant: '<S194>/Constant16'
       *  Constant: '<S194>/Constant17'
       *  Constant: '<S194>/Constant19'
       *  Constant: '<S194>/Constant31'
       *  Constant: '<S194>/Constant4'
       *  Constant: '<S194>/Constant41'
       *  Constant: '<S194>/Constant5'
       *  Constant: '<S194>/Constant6'
       *  Constant: '<S194>/Constant8'
       *  Constant: '<S204>/Constant'
       *  Constant: '<S205>/Constant1'
       *  Constant: '<S205>/Constant4'
       *  Constant: '<S207>/Constant4'
       *  Constant: '<S208>/Constant1'
       *  Constant: '<S209>/Constant4'
       *  Constant: '<S210>/Constant1'
       *  Constant: '<S211>/Constant4'
       *  Constant: '<S212>/Constant1'
       *  Constant: '<S421>/Constant2'
       *  Constant: '<S421>/Constant3'
       *  Constant: '<S421>/Constant4'
       *  Constant: '<S424>/Constant1'
       *  Constant: '<S426>/Constant1'
       *  Constant: '<S427>/Constant1'
       *  Constant: '<S428>/Constant'
       *  Constant: '<S429>/Constant1'
       *  Constant: '<S429>/Constant4'
       *  Constant: '<S508>/Constant1'
       *  Constant: '<S508>/Constant2'
       *  Constant: '<S508>/Constant3'
       *  Constant: '<S509>/Constant1'
       *  Constant: '<S509>/Constant3'
       *  Constant: '<S509>/Constant4'
       *  Constant: '<S510>/Constant1'
       *  Constant: '<S510>/Constant3'
       *  Constant: '<S510>/Constant4'
       *  Constant: '<S511>/Constant1'
       *  Constant: '<S511>/Constant3'
       *  Constant: '<S511>/Constant4'
       *  Constant: '<S512>/Constant'
       *  Constant: '<S655>/Constant'
       *  Constant: '<S658>/Constant1'
       *  Constant: '<S659>/Constant1'
       *  Constant: '<S660>/Constant'
       *  Constant: '<S661>/Constant'
       *  Constant: '<S662>/Constant1'
       *  Constant: '<S662>/Constant4'
       *  Constant: '<S721>/Constant1'
       *  Constant: '<S721>/Constant2'
       *  DataStoreRead: '<S160>/Data Store Read10'
       *  DataStoreRead: '<S192>/Data Store Read11'
       *  DataStoreRead: '<S192>/Data Store Read6'
       *  DataStoreRead: '<S192>/Data Store Read7'
       *  DataStoreRead: '<S193>/Data Store Read6'
       *  DataStoreRead: '<S193>/Data Store Read7'
       *  DataStoreRead: '<S194>/Data Store Read6'
       *  DataStoreRead: '<S194>/Data Store Read7'
       *  DataStoreRead: '<S205>/Data Store Read'
       *  DataStoreRead: '<S205>/Data Store Read1'
       *  DataStoreRead: '<S207>/Data Store Read5'
       *  DataStoreRead: '<S209>/Data Store Read5'
       *  DataStoreRead: '<S211>/Data Store Read5'
       *  DataStoreRead: '<S429>/Data Store Read'
       *  DataStoreRead: '<S429>/Data Store Read1'
       *  DataStoreRead: '<S655>/Data Store Read5'
       *  DataStoreRead: '<S660>/Data Store Read5'
       *  DataStoreRead: '<S662>/Data Store Read'
       *  DataStoreRead: '<S662>/Data Store Read1'
       *  DataStoreWrite: '<S294>/Data Store Write2'
       *  DataStoreWrite: '<S529>/Data Store Write2'
       *  DataStoreWrite: '<S560>/Data Store Write2'
       *  DataStoreWrite: '<S590>/Data Store Write2'
       *  DataStoreWrite: '<S620>/Data Store Write2'
       *  DataStoreWrite: '<S731>/Data Store Write2'
       *  DataStoreWrite: '<S764>/Data Store Write2'
       *  DataStoreWrite: '<S857>/Data Store Write2'
       *  Logic: '<S192>/AND'
       *  Logic: '<S192>/AND1'
       *  Logic: '<S192>/AND10'
       *  Logic: '<S192>/AND11'
       *  Logic: '<S192>/AND12'
       *  Logic: '<S192>/AND13'
       *  Logic: '<S192>/AND14'
       *  Logic: '<S192>/AND15'
       *  Logic: '<S192>/AND16'
       *  Logic: '<S192>/AND17'
       *  Logic: '<S192>/AND18'
       *  Logic: '<S192>/AND19'
       *  Logic: '<S192>/AND2'
       *  Logic: '<S192>/AND3'
       *  Logic: '<S192>/AND4'
       *  Logic: '<S192>/AND5'
       *  Logic: '<S192>/AND6'
       *  Logic: '<S192>/AND7'
       *  Logic: '<S192>/AND8'
       *  Logic: '<S192>/AND9'
       *  Logic: '<S192>/NOT1'
       *  Logic: '<S192>/NOT2'
       *  Logic: '<S192>/NOT3'
       *  Logic: '<S193>/AND1'
       *  Logic: '<S193>/AND10'
       *  Logic: '<S193>/AND16'
       *  Logic: '<S193>/AND18'
       *  Logic: '<S193>/AND19'
       *  Logic: '<S193>/AND2'
       *  Logic: '<S193>/AND20'
       *  Logic: '<S193>/AND3'
       *  Logic: '<S193>/AND4'
       *  Logic: '<S193>/AND5'
       *  Logic: '<S193>/AND6'
       *  Logic: '<S193>/AND7'
       *  Logic: '<S193>/AND8'
       *  Logic: '<S193>/AND9'
       *  Logic: '<S193>/NOT2'
       *  Logic: '<S193>/NOT5'
       *  Logic: '<S194>/AND1'
       *  Logic: '<S194>/AND16'
       *  Logic: '<S194>/AND18'
       *  Logic: '<S194>/AND19'
       *  Logic: '<S194>/AND2'
       *  Logic: '<S194>/AND20'
       *  Logic: '<S194>/AND3'
       *  Logic: '<S194>/AND4'
       *  Logic: '<S194>/AND5'
       *  Logic: '<S194>/AND6'
       *  Logic: '<S194>/AND7'
       *  Logic: '<S194>/AND8'
       *  Logic: '<S194>/NOT2'
       *  Logic: '<S194>/NOT5'
       *  Logic: '<S204>/AND'
       *  Logic: '<S205>/AND'
       *  Logic: '<S205>/AND1'
       *  Logic: '<S207>/AND'
       *  Logic: '<S209>/AND'
       *  Logic: '<S211>/AND'
       *  Logic: '<S424>/NOT'
       *  Logic: '<S426>/NOT'
       *  Logic: '<S427>/NOT'
       *  Logic: '<S428>/AND'
       *  Logic: '<S429>/AND'
       *  Logic: '<S429>/AND1'
       *  Logic: '<S655>/AND'
       *  Logic: '<S658>/NOT'
       *  Logic: '<S659>/NOT'
       *  Logic: '<S660>/AND'
       *  Logic: '<S661>/AND'
       *  Logic: '<S662>/AND'
       *  Logic: '<S662>/AND1'
       *  RelationalOperator: '<S190>/Equal2'
       *  RelationalOperator: '<S192>/GreaterThan'
       *  RelationalOperator: '<S192>/GreaterThan1'
       *  RelationalOperator: '<S192>/GreaterThan10'
       *  RelationalOperator: '<S192>/GreaterThan11'
       *  RelationalOperator: '<S192>/GreaterThan12'
       *  RelationalOperator: '<S192>/GreaterThan13'
       *  RelationalOperator: '<S192>/GreaterThan14'
       *  RelationalOperator: '<S192>/GreaterThan15'
       *  RelationalOperator: '<S192>/GreaterThan16'
       *  RelationalOperator: '<S192>/GreaterThan17'
       *  RelationalOperator: '<S192>/GreaterThan18'
       *  RelationalOperator: '<S192>/GreaterThan19'
       *  RelationalOperator: '<S192>/GreaterThan2'
       *  RelationalOperator: '<S192>/GreaterThan20'
       *  RelationalOperator: '<S192>/GreaterThan21'
       *  RelationalOperator: '<S192>/GreaterThan22'
       *  RelationalOperator: '<S192>/GreaterThan23'
       *  RelationalOperator: '<S192>/GreaterThan24'
       *  RelationalOperator: '<S192>/GreaterThan25'
       *  RelationalOperator: '<S192>/GreaterThan26'
       *  RelationalOperator: '<S192>/GreaterThan27'
       *  RelationalOperator: '<S192>/GreaterThan28'
       *  RelationalOperator: '<S192>/GreaterThan29'
       *  RelationalOperator: '<S192>/GreaterThan3'
       *  RelationalOperator: '<S192>/GreaterThan30'
       *  RelationalOperator: '<S192>/GreaterThan31'
       *  RelationalOperator: '<S192>/GreaterThan32'
       *  RelationalOperator: '<S192>/GreaterThan33'
       *  RelationalOperator: '<S192>/GreaterThan4'
       *  RelationalOperator: '<S192>/GreaterThan5'
       *  RelationalOperator: '<S192>/GreaterThan6'
       *  RelationalOperator: '<S192>/GreaterThan7'
       *  RelationalOperator: '<S192>/GreaterThan8'
       *  RelationalOperator: '<S192>/GreaterThan9'
       *  RelationalOperator: '<S193>/GreaterThan10'
       *  RelationalOperator: '<S193>/GreaterThan11'
       *  RelationalOperator: '<S193>/GreaterThan12'
       *  RelationalOperator: '<S193>/GreaterThan13'
       *  RelationalOperator: '<S193>/GreaterThan14'
       *  RelationalOperator: '<S193>/GreaterThan15'
       *  RelationalOperator: '<S193>/GreaterThan16'
       *  RelationalOperator: '<S193>/GreaterThan17'
       *  RelationalOperator: '<S193>/GreaterThan18'
       *  RelationalOperator: '<S193>/GreaterThan19'
       *  RelationalOperator: '<S193>/GreaterThan2'
       *  RelationalOperator: '<S193>/GreaterThan20'
       *  RelationalOperator: '<S193>/GreaterThan21'
       *  RelationalOperator: '<S193>/GreaterThan3'
       *  RelationalOperator: '<S193>/GreaterThan32'
       *  RelationalOperator: '<S193>/GreaterThan33'
       *  RelationalOperator: '<S193>/GreaterThan34'
       *  RelationalOperator: '<S193>/GreaterThan35'
       *  RelationalOperator: '<S193>/GreaterThan4'
       *  RelationalOperator: '<S193>/GreaterThan5'
       *  RelationalOperator: '<S193>/GreaterThan6'
       *  RelationalOperator: '<S193>/GreaterThan7'
       *  RelationalOperator: '<S193>/GreaterThan8'
       *  RelationalOperator: '<S193>/GreaterThan9'
       *  RelationalOperator: '<S194>/GreaterThan10'
       *  RelationalOperator: '<S194>/GreaterThan11'
       *  RelationalOperator: '<S194>/GreaterThan12'
       *  RelationalOperator: '<S194>/GreaterThan13'
       *  RelationalOperator: '<S194>/GreaterThan14'
       *  RelationalOperator: '<S194>/GreaterThan15'
       *  RelationalOperator: '<S194>/GreaterThan16'
       *  RelationalOperator: '<S194>/GreaterThan17'
       *  RelationalOperator: '<S194>/GreaterThan2'
       *  RelationalOperator: '<S194>/GreaterThan3'
       *  RelationalOperator: '<S194>/GreaterThan32'
       *  RelationalOperator: '<S194>/GreaterThan33'
       *  RelationalOperator: '<S194>/GreaterThan34'
       *  RelationalOperator: '<S194>/GreaterThan35'
       *  RelationalOperator: '<S194>/GreaterThan4'
       *  RelationalOperator: '<S194>/GreaterThan5'
       *  RelationalOperator: '<S194>/GreaterThan6'
       *  RelationalOperator: '<S194>/GreaterThan7'
       *  RelationalOperator: '<S194>/GreaterThan8'
       *  RelationalOperator: '<S194>/GreaterThan9'
       *  RelationalOperator: '<S200>/Equal'
       *  RelationalOperator: '<S201>/Equal'
       *  RelationalOperator: '<S203>/Equal2'
       *  RelationalOperator: '<S205>/Equal'
       *  RelationalOperator: '<S205>/Equal1'
       *  RelationalOperator: '<S205>/Equal2'
       *  RelationalOperator: '<S206>/Equal'
       *  RelationalOperator: '<S207>/Equal'
       *  RelationalOperator: '<S207>/Equal2'
       *  RelationalOperator: '<S209>/Equal'
       *  RelationalOperator: '<S209>/Equal2'
       *  RelationalOperator: '<S211>/Equal'
       *  RelationalOperator: '<S211>/Equal2'
       *  RelationalOperator: '<S421>/Equal'
       *  RelationalOperator: '<S421>/Equal1'
       *  RelationalOperator: '<S421>/Equal2'
       *  RelationalOperator: '<S423>/Equal1'
       *  RelationalOperator: '<S423>/Equal2'
       *  RelationalOperator: '<S429>/Equal1'
       *  RelationalOperator: '<S429>/Equal2'
       *  RelationalOperator: '<S429>/Equal3'
       *  RelationalOperator: '<S431>/Equal16'
       *  RelationalOperator: '<S451>/Equal16'
       *  RelationalOperator: '<S471>/Equal16'
       *  RelationalOperator: '<S508>/Equal'
       *  RelationalOperator: '<S508>/Equal1'
       *  RelationalOperator: '<S508>/Equal2'
       *  RelationalOperator: '<S509>/Equal1'
       *  RelationalOperator: '<S509>/Equal2'
       *  RelationalOperator: '<S509>/Equal3'
       *  RelationalOperator: '<S510>/Equal1'
       *  RelationalOperator: '<S510>/Equal2'
       *  RelationalOperator: '<S510>/Equal3'
       *  RelationalOperator: '<S511>/Equal1'
       *  RelationalOperator: '<S511>/Equal2'
       *  RelationalOperator: '<S511>/Equal3'
       *  RelationalOperator: '<S512>/Compare'
       *  RelationalOperator: '<S655>/Equal'
       *  RelationalOperator: '<S655>/Equal1'
       *  RelationalOperator: '<S657>/Equal1'
       *  RelationalOperator: '<S657>/Equal2'
       *  RelationalOperator: '<S660>/Equal'
       *  RelationalOperator: '<S660>/Equal1'
       *  RelationalOperator: '<S662>/Equal1'
       *  RelationalOperator: '<S662>/Equal2'
       *  RelationalOperator: '<S662>/Equal3'
       *  RelationalOperator: '<S664>/Equal16'
       *  RelationalOperator: '<S684>/Equal16'
       *  RelationalOperator: '<S721>/Equal'
       *  RelationalOperator: '<S721>/Equal1'
       *  Switch generated from: '<S190>/Switch1'
       */
      if (rtb_DataStoreRead_h2y) {
        /* Switch generated from: '<S190>/Switch' */
        localB->signal1 = localB->OR1_o;

        /* Switch generated from: '<S190>/Switch' */
        localB->signal2_j = localB->OR4;

        /* Switch generated from: '<S190>/Switch' */
        localB->signal3_k = localB->OR2_p;

        /* Switch generated from: '<S190>/Switch' */
        localB->signal4_e = localB->OR3_b;
      } else if (rtb_DataStoreRead2_f3) {
        /* Switch generated from: '<S190>/Switch1' incorporates:
         *  Switch generated from: '<S190>/Switch'
         */
        localB->signal1 = localB->OR_f;

        /* Switch generated from: '<S190>/Switch1' incorporates:
         *  Switch generated from: '<S190>/Switch'
         */
        localB->signal2_j = localB->OR1_e;

        /* Switch generated from: '<S190>/Switch1' incorporates:
         *  Switch generated from: '<S190>/Switch'
         */
        localB->signal3_k = localB->OR2_m;

        /* Switch generated from: '<S190>/Switch1' incorporates:
         *  Switch generated from: '<S190>/Switch'
         */
        localB->signal4_e = localB->OR3_e;
      } else {
        /* Switch generated from: '<S190>/Switch' incorporates:
         *  Switch generated from: '<S190>/Switch1'
         */
        localB->signal1 = localB->OR;

        /* Switch generated from: '<S190>/Switch' incorporates:
         *  Switch generated from: '<S190>/Switch1'
         */
        localB->signal2_j = localB->OR1;

        /* Switch generated from: '<S190>/Switch' incorporates:
         *  Switch generated from: '<S190>/Switch1'
         */
        localB->signal3_k = localB->OR2;

        /* Switch generated from: '<S190>/Switch' incorporates:
         *  Switch generated from: '<S190>/Switch1'
         */
        localB->signal4_e = localB->OR3;
      }

      /* End of Switch generated from: '<S190>/Switch' */

      /* DataStoreRead: '<S191>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S191>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S191>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S191>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S191>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S191>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S191>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;

      /* DataStoreRead: '<S191>/Data Store Read3' */
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;

      /* DataStoreRead: '<S191>/Data Store Read3' */
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S191>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S191>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S191>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S191>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S191>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S191>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S195>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG;
    } else if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S204>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S204>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S208>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S208>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S210>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S210>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S212>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S212>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S196>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S196>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S196>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S196>/Transmission subtasks' */
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S197>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S197>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S197>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S197>/Transmission subtasks' */
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S198>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S198>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S198>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S198>/Transmission subtasks' */
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S199>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S199>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S199>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S199>/Transmission subtasks' */
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote3' */

        /* Disable for Logic: '<S192>/OR1' incorporates:
         *  Outport: '<S192>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S192>/OR4' incorporates:
         *  Outport: '<S192>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S192>/OR2' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S192>/OR3' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S424>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S424>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S426>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S426>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S427>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S427>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S428>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S428>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S417>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S417>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S417>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S417>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S418>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S418>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S418>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S418>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S419>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S419>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S419>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S419>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S193>/OR' incorporates:
         *  Outport: '<S193>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S193>/OR1' incorporates:
         *  Outport: '<S193>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S193>/OR2' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S193>/OR3' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S658>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S658>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */
        if (localDW->COMPTaskRx_Trailer2Articulation) {
          /* Disable for Enabled SubSystem: '<S659>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S659>/Process_Messages' */
          localDW->COMPTaskRx_Trailer2Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' */
        if (localDW->COMPTaskSteeringController_MODE) {
          /* Disable for Enabled SubSystem: '<S660>/Enabled Subsystem' */
          if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S660>/Enabled Subsystem' */
          localDW->COMPTaskSteeringController_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Steering Controller' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S661>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S661>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S652>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S652>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S652>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S652>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S653>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S653>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S653>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S653>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S194>/OR' incorporates:
         *  Outport: '<S194>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S194>/OR1' incorporates:
         *  Outport: '<S194>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S194>/OR2' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S194>/OR3' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 2' */

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN1'
       */
      localB->signal1 = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN2'
       */
      localB->signal2_j = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN1'
       */
      localB->signal3_k = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN2'
       */
      localB->signal4_e = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S160>/Controller Matrix Cycle' */
  } else if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S160>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S204>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S294>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S204>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S208>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S208>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S210>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S210>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S212>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S212>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S196>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S196>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S196>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S196>/Transmission subtasks' */
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S197>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S197>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S197>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S197>/Transmission subtasks' */
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S198>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S198>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S198>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S198>/Transmission subtasks' */
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S192>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S199>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S199>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S199>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S199>/Transmission subtasks' */
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S192>/COMM Task - Vote3' */

        /* Disable for Logic: '<S192>/OR1' incorporates:
         *  Outport: '<S192>/Send_Message_CAN1'
         */
        localB->OR1_o = false;

        /* Disable for Logic: '<S192>/OR4' incorporates:
         *  Outport: '<S192>/Send_Message_CAN2'
         */
        localB->OR4 = false;

        /* Disable for Logic: '<S192>/OR2' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN1'
         */
        localB->OR2_p = false;

        /* Disable for Logic: '<S192>/OR3' incorporates:
         *  Outport: '<S192>/Receive_Message_CAN2'
         */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */
        if (localDW->COMPTaskRx_PotValues1_check_MOD) {
          /* Disable for Enabled SubSystem: '<S424>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ie) {
            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ei.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ei,
                 &localDW->DemuxmessageCAN1andcheckcohe_ei);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ad.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_ad,
                 &localDW->DemuxmessageCAN1andcheckcohe_ad);
            }

            /* End of Disable for SubSystem: '<S529>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ie = false;
          }

          /* End of Disable for SubSystem: '<S424>/Process_Messages' */
          localDW->COMPTaskRx_PotValues1_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */
        if (localDW->COMPTaskRx_PotValues1_check2_MO) {
          localDW->COMPTaskRx_PotValues1_check2_MO = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues1_check2' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */
        if (localDW->COMPTaskRx_PotValues2_check_MOD) {
          /* Disable for Enabled SubSystem: '<S426>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_am.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_am,
                 &localDW->DemuxmessageCAN1andcheckcohe_am);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_j,
                 &localDW->DemuxmessageCAN1andcheckcoher_j);
            }

            /* End of Disable for SubSystem: '<S560>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S426>/Process_Messages' */
          localDW->COMPTaskRx_PotValues2_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues2_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */
        if (localDW->COMPTaskRx_PotValues3_check_MOD) {
          /* Disable for Enabled SubSystem: '<S427>/Process_Messages' */
          if (localDW->Process_Messages_MODE_i) {
            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gx.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gx,
                 &localDW->DemuxmessageCAN1andcheckcohe_gx);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_j1.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_j1,
                 &localDW->DemuxmessageCAN1andcheckcohe_j1);
            }

            /* End of Disable for SubSystem: '<S590>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S427>/Process_Messages' */
          localDW->COMPTaskRx_PotValues3_check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Rx_PotValues3_check' */

        /* Disable for Enabled SubSystem: '<S193>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S428>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoh_adb.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoh_adb,
                 &localDW->DemuxmessageCAN1andcheckcoh_adb);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S620>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S428>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 1' */
        if (localDW->COMMTaskPotValuetrailer1_MODE) {
          /* Disable for Enabled SubSystem: '<S417>/Reception substasks' */
          if (localDW->Receptionsubstasks_ij.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_ij,
              &localDW->Receptionsubstasks_ij);
          }

          /* End of Disable for SubSystem: '<S417>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S417>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_d) {
            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_ez.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_ez,
                 &localDW->CheckmsgtransmissionCAN1_ez);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S431>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_ct.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_ct,
                 &localDW->CheckmsgtransmissionCAN2_ct);
            }

            /* End of Disable for SubSystem: '<S431>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_d = false;
          }

          /* End of Disable for SubSystem: '<S417>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 1' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 2' */
        if (localDW->COMMTaskPotValuetrailer2_MODE) {
          /* Disable for Enabled SubSystem: '<S418>/Reception substasks' */
          if (localDW->Receptionsubstasks_g1.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_g1,
              &localDW->Receptionsubstasks_g1);
          }

          /* End of Disable for SubSystem: '<S418>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S418>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_j) {
            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S451>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_m.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_m,
                 &localDW->CheckmsgtransmissionCAN2_m);
            }

            /* End of Disable for SubSystem: '<S451>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S418>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 2' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - PotValue trailer 3' */
        if (localDW->COMMTaskPotValuetrailer3_MODE) {
          /* Disable for Enabled SubSystem: '<S419>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_b_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S419>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S419>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_p) {
            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_k.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionC_b_Disable
                (&localB->CheckmsgtransmissionCAN1_k,
                 &localDW->CheckmsgtransmissionCAN1_k);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S471>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_n.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_i_Disable
                (&localB->CheckmsgtransmissionCAN2_n,
                 &localDW->CheckmsgtransmissionCAN2_n);
            }

            /* End of Disable for SubSystem: '<S471>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_p = false;
          }

          /* End of Disable for SubSystem: '<S419>/Transmission subtasks' */
          localDW->COMMTaskPotValuetrailer3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - PotValue trailer 3' */

        /* Disable for Enabled SubSystem: '<S193>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_f.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_f,
            &localDW->COMMTaskSyncbc1_f);
        }

        /* End of Disable for SubSystem: '<S193>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S193>/OR' incorporates:
         *  Outport: '<S193>/Send_Message_CAN1'
         */
        localB->OR_f = false;

        /* Disable for Logic: '<S193>/OR1' incorporates:
         *  Outport: '<S193>/Send_Message_CAN2'
         */
        localB->OR1_e = false;

        /* Disable for Logic: '<S193>/OR2' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN1'
         */
        localB->OR2_m = false;

        /* Disable for Logic: '<S193>/OR3' incorporates:
         *  Outport: '<S193>/Receive_Message_CAN2'
         */
        localB->OR3_e = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 1' */

      /* Disable for Enabled SubSystem: '<S190>/controller basic cycle 2' */
      if (localDW->controllerbasiccycle2_MODE) {
        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */
        if (localDW->COMPTaskRx_Trailer1Articulation) {
          /* Disable for Enabled SubSystem: '<S658>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_n,
                 &localDW->DemuxmessageCAN1andcheckcoher_n);
            }

            /* End of Disable for SubSystem: '<S731>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S658>/Process_Messages' */
          localDW->COMPTaskRx_Trailer1Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer1Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */
        if (localDW->COMPTaskRx_Trailer2Articulation) {
          /* Disable for Enabled SubSystem: '<S659>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_gn.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_j_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_gn,
                 &localDW->DemuxmessageCAN1andcheckcohe_gn);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c.DemuxmessageCAN1andcheckcoher_i)
            {
              DemuxmessageCAN1andch_d_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_c,
                 &localDW->DemuxmessageCAN1andcheckcoher_c);
            }

            /* End of Disable for SubSystem: '<S764>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S659>/Process_Messages' */
          localDW->COMPTaskRx_Trailer2Articulation = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Rx_Trailer2Articulation_check' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Steering Controller' */
        if (localDW->COMPTaskSteeringController_MODE) {
          /* Disable for Enabled SubSystem: '<S660>/Enabled Subsystem' */
          if (localDW->EnabledSubsystem_MODE) {
            localDW->EnabledSubsystem_MODE = false;
          }

          /* End of Disable for SubSystem: '<S660>/Enabled Subsystem' */
          localDW->COMPTaskSteeringController_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Steering Controller' */

        /* Disable for Enabled SubSystem: '<S194>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S661>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_m,
                 &localDW->DemuxmessageCAN1andcheckcoher_m);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_fc.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_fc,
                 &localDW->DemuxmessageCAN1andcheckcohe_fc);
            }

            /* End of Disable for SubSystem: '<S857>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S661>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */
        if (localDW->COMMTaskArticualtionangletrai_k) {
          /* Disable for Enabled SubSystem: '<S652>/Reception substasks' */
          if (localDW->Receptionsubstasks_c.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_c,
              &localDW->Receptionsubstasks_c);
          }

          /* End of Disable for SubSystem: '<S652>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S652>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_g.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_g,
                 &localDW->CheckmsgtransmissionCAN1_g);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S664>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S664>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S652>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletrai_k = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 1' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */
        if (localDW->COMMTaskArticualtionangletraile) {
          /* Disable for Enabled SubSystem: '<S653>/Reception substasks' */
          if (localDW->Receptionsubstasks_o.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_o,
              &localDW->Receptionsubstasks_o);
          }

          /* End of Disable for SubSystem: '<S653>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S653>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_h.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_h,
                 &localDW->CheckmsgtransmissionCAN1_h);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S684>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_k.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_j_Disable
                (&localB->CheckmsgtransmissionCAN2_k,
                 &localDW->CheckmsgtransmissionCAN2_k);
            }

            /* End of Disable for SubSystem: '<S684>/Check msg transmission CAN2' */
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S653>/Transmission subtasks' */
          localDW->COMMTaskArticualtionangletraile = false;
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Articualtion angle trailer 2' */

        /* Disable for Enabled SubSystem: '<S194>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc1_MODE) {
          COMMTaskSyncbc1_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S194>/COMM Task - Sync bc 1' */

        /* Disable for Logic: '<S194>/OR' incorporates:
         *  Outport: '<S194>/Send_Message_CAN1'
         */
        localB->OR = false;

        /* Disable for Logic: '<S194>/OR1' incorporates:
         *  Outport: '<S194>/Send_Message_CAN2'
         */
        localB->OR1 = false;

        /* Disable for Logic: '<S194>/OR2' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN1'
         */
        localB->OR2 = false;

        /* Disable for Logic: '<S194>/OR3' incorporates:
         *  Outport: '<S194>/Receive_Message_CAN2'
         */
        localB->OR3 = false;
        localDW->controllerbasiccycle2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S190>/controller basic cycle 2' */

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN1'
       */
      localB->signal1 = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Send_CAN2'
       */
      localB->signal2_j = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN1'
       */
      localB->signal3_k = false;

      /* Disable for Switch generated from: '<S190>/Switch' incorporates:
       *  Outport: '<S190>/Receive_CAN2'
       */
      localB->signal4_e = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S160>/Controller Matrix Cycle' */
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Logic: '<S28>/NOT1' */
  /* End of Outputs for SubSystem: '<S28>/Matrix Cycle Manager' */

  /* Logic: '<S28>/OR' incorporates:
   *  DataStoreRead: '<S28>/Data Store Read1'
   */
  rtb_DataStoreRead_h2y = (localB->signal3_k || localDW->Initialization_flag);

  /* Chart: '<S28>/Chart' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  if (localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    localDW->bitsForTID0.is_active_c4_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    /* Transition: '<S144>:10' */
    /* Entry 'Send_Trigger': '<S144>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S9>/CAN1 Send' */
      /* Event: '<S144>:3' */
      CAN1Send(rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13,
               rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1, &localB->CAN1Send_o,
               &localDW->CAN1Send_o);

      /* End of Outputs for SubSystem: '<S9>/CAN1 Send' */
    }

    /* During 'Send_Trigger': '<S144>:9' */
  } else if (localB->signal1) {
    /* Outputs for Function Call SubSystem: '<S9>/CAN1 Send' */
    /* Event: '<S144>:3' */
    CAN1Send(rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13,
             rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1, &localB->CAN1Send_o,
             &localDW->CAN1Send_o);

    /* End of Outputs for SubSystem: '<S9>/CAN1 Send' */
  }

  /* End of Chart: '<S28>/Chart' */

  /* Chart: '<S28>/Chart1' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  if (localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    localDW->bitsForTID0.is_active_c5_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    /* Transition: '<S145>:10' */
    /* Entry 'Send_Trigger': '<S145>:9' */
    if (rtb_DataStoreRead_h2y) {
      /* Outputs for Function Call SubSystem: '<S9>/CAN1 Recieve' */
      /* Event: '<S145>:3' */
      CAN1Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12, &localB->CAN1Recieve_h,
                  &localC->CAN1Recieve_h, &localDW->CAN1Recieve_h);

      /* End of Outputs for SubSystem: '<S9>/CAN1 Recieve' */
    }

    /* During 'Send_Trigger': '<S145>:9' */
  } else if (rtb_DataStoreRead_h2y) {
    /* Outputs for Function Call SubSystem: '<S9>/CAN1 Recieve' */
    /* Event: '<S145>:3' */
    CAN1Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12, &localB->CAN1Recieve_h,
                &localC->CAN1Recieve_h, &localDW->CAN1Recieve_h);

    /* End of Outputs for SubSystem: '<S9>/CAN1 Recieve' */
  }

  /* End of Chart: '<S28>/Chart1' */

  /* Logic: '<S28>/OR1' incorporates:
   *  DataStoreRead: '<S28>/Data Store Read1'
   */
  rtb_DataStoreRead_h2y = (localDW->Initialization_flag || localB->signal4_e);

  /* Chart: '<S28>/Chart2' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  if (localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    localDW->bitsForTID0.is_active_c6_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    /* Transition: '<S146>:10' */
    /* Entry 'Send_Trigger': '<S146>:9' */
    if (rtb_DataStoreRead_h2y) {
      /* Outputs for Function Call SubSystem: '<S9>/CAN2 Recieve' */
      /* Event: '<S146>:3' */
      CAN2Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8, &localB->CAN2Recieve_b,
                  &localC->CAN2Recieve_b, &localDW->CAN2Recieve_b);

      /* End of Outputs for SubSystem: '<S9>/CAN2 Recieve' */
    }

    /* During 'Send_Trigger': '<S146>:9' */
  } else if (rtb_DataStoreRead_h2y) {
    /* Outputs for Function Call SubSystem: '<S9>/CAN2 Recieve' */
    /* Event: '<S146>:3' */
    CAN2Recieve(rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8, &localB->CAN2Recieve_b,
                &localC->CAN2Recieve_b, &localDW->CAN2Recieve_b);

    /* End of Outputs for SubSystem: '<S9>/CAN2 Recieve' */
  }

  /* End of Chart: '<S28>/Chart2' */

  /* Chart: '<S28>/Chart3' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  if (localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    localDW->bitsForTID0.is_active_c7_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    /* Transition: '<S147>:10' */
    /* Entry 'Send_Trigger': '<S147>:9' */
    if (localB->signal2_j) {
      /* Outputs for Function Call SubSystem: '<S9>/CAN2 Send' */
      /* Event: '<S147>:3' */
      CAN2Send(rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9,
               rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2, &localB->CAN2Send_h,
               &localDW->CAN2Send_h);

      /* End of Outputs for SubSystem: '<S9>/CAN2 Send' */
    }

    /* During 'Send_Trigger': '<S147>:9' */
  } else if (localB->signal2_j) {
    /* Outputs for Function Call SubSystem: '<S9>/CAN2 Send' */
    /* Event: '<S147>:3' */
    CAN2Send(rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9,
             rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2, &localB->CAN2Send_h,
             &localDW->CAN2Send_h);

    /* End of Outputs for SubSystem: '<S9>/CAN2 Send' */
  }

  /* End of Chart: '<S28>/Chart3' */

  /* Logic: '<S28>/AND' incorporates:
   *  Constant: '<S28>/Constant1'
   *  DataStoreRead: '<S28>/Data Store Read2'
   */
  rtb_DataStoreRead_h2y = ((*rtd_Toggle_Pin_A0) && (1.0 != 0.0));

  /* Outputs for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A0' incorporates:
   *  EnablePort: '<S149>/Enable'
   */
  if (rtb_DataStoreRead_h2y) {
    localDW->DEBUGToggledigitalpinA0_MODE = true;

    /* Switch: '<S149>/Switch' incorporates:
     *  DataStoreRead: '<S149>/Data Store Read'
     */
    if (localDW->A0_Pin_State) {
      /* DataStoreWrite: '<S149>/Data Store Write1' incorporates:
       *  Constant: '<S149>/Constant1'
       */
      localDW->A0_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S149>/Data Store Write1' incorporates:
       *  Constant: '<S149>/Constant'
       */
      localDW->A0_Pin_State = true;
    }

    /* End of Switch: '<S149>/Switch' */

    /* DataStoreWrite: '<S149>/Data Store Write' incorporates:
     *  Constant: '<S149>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = false;

    /* DataStoreRead: '<S149>/Data Store Read1' */
    localB->DataStoreRead1_o1 = localDW->A0_Pin_State;

    /* Update for M-S-Function: '<S161>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o1 == 0) {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S28>/DEBUG - Toggle digital pin A0' */

  /* Outputs for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A1' incorporates:
   *  EnablePort: '<S150>/Enable'
   */
  /* Logic: '<S28>/AND1' incorporates:
   *  Constant: '<S28>/Constant4'
   *  DataStoreRead: '<S28>/Data Store Read3'
   */
  if (localDW->Toggle_Pin_A1 && (1.0 != 0.0)) {
    localDW->DEBUGToggledigitalpinA1_MODE = true;

    /* Switch: '<S150>/Switch' incorporates:
     *  DataStoreRead: '<S150>/Data Store Read'
     */
    if (localDW->A1_Pin_State) {
      /* DataStoreWrite: '<S150>/Data Store Write1' incorporates:
       *  Constant: '<S150>/Constant1'
       */
      localDW->A1_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S150>/Data Store Write1' incorporates:
       *  Constant: '<S150>/Constant'
       */
      localDW->A1_Pin_State = true;
    }

    /* End of Switch: '<S150>/Switch' */

    /* DataStoreWrite: '<S150>/Data Store Write' incorporates:
     *  Constant: '<S150>/Constant2'
     */
    localDW->Toggle_Pin_A1 = false;

    /* DataStoreRead: '<S150>/Data Store Read1' */
    localB->DataStoreRead1_e = localDW->A1_Pin_State;

    /* Update for M-S-Function: '<S162>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_e == 0) {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Logic: '<S28>/AND1' */
  /* End of Outputs for SubSystem: '<S28>/DEBUG - Toggle digital pin A1' */

  /* Outputs for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin D10' incorporates:
   *  EnablePort: '<S153>/Enable'
   */
  /* Logic: '<S28>/AND6' incorporates:
   *  Constant: '<S28>/Constant9'
   *  DataStoreRead: '<S28>/Data Store Read14'
   */
  if (localDW->Toggle_Pin_D10 && (1.0 != 0.0)) {
    localDW->DEBUGToggledigitalpinD10_MODE = true;

    /* Switch: '<S153>/Switch' incorporates:
     *  DataStoreRead: '<S153>/Data Store Read'
     */
    if (localDW->D10_Pin_State) {
      /* DataStoreWrite: '<S153>/Data Store Write1' incorporates:
       *  Constant: '<S153>/Constant1'
       */
      localDW->D10_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S153>/Data Store Write1' incorporates:
       *  Constant: '<S153>/Constant'
       */
      localDW->D10_Pin_State = true;
    }

    /* End of Switch: '<S153>/Switch' */

    /* DataStoreWrite: '<S153>/Data Store Write' incorporates:
     *  Constant: '<S153>/Constant2'
     */
    localDW->Toggle_Pin_D10 = false;

    /* DataStoreRead: '<S153>/Data Store Read1' */
    localB->DataStoreRead1_h = localDW->D10_Pin_State;

    /* Update for M-S-Function: '<S165>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_h == 0) {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Logic: '<S28>/AND6' */
  /* End of Outputs for SubSystem: '<S28>/DEBUG - Toggle digital pin D10' */

  /* Outputs for Enabled SubSystem: '<S28>/DEBUG - Toggle digital pin A4' incorporates:
   *  EnablePort: '<S152>/Enable'
   */
  /* Constant: '<S28>/Constant7' */
  if (1.0 > 0.0) {
    localDW->DEBUGToggledigitalpinA4_MODE = true;

    /* Switch: '<S152>/Switch' incorporates:
     *  DataStoreRead: '<S152>/Data Store Read'
     */
    if (localDW->A4_Pin_State) {
      /* DataStoreWrite: '<S152>/Data Store Write1' incorporates:
       *  Constant: '<S152>/Constant1'
       */
      localDW->A4_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S152>/Data Store Write1' incorporates:
       *  Constant: '<S152>/Constant'
       */
      localDW->A4_Pin_State = true;
    }

    /* End of Switch: '<S152>/Switch' */
    /* DataStoreRead: '<S152>/Data Store Read1' */
    localB->DataStoreRead1_m = localDW->A4_Pin_State;

    /* Update for M-S-Function: '<S164>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_m == 0) {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_HIGH);
    }
  } else if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Constant: '<S28>/Constant7' */
  /* End of Outputs for SubSystem: '<S28>/DEBUG - Toggle digital pin A4' */

  /* Logic: '<S28>/AND3' incorporates:
   *  Constant: '<S28>/Constant8'
   *  DataStoreRead: '<S28>/Data Store Read11'
   */
  rtb_DataStoreRead_h2y = ((1.0 != 0.0) && (*rtd_Toggle_Pin_D12 != 0.0));

  /* Outputs for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' incorporates:
   *  EnablePort: '<S156>/Enable'
   */
  if (rtb_DataStoreRead_h2y) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = true;

    /* Switch: '<S156>/Switch' incorporates:
     *  DataStoreRead: '<S156>/Data Store Read'
     */
    if (localDW->D12_Pin_State) {
      /* DataStoreWrite: '<S156>/Data Store Write1' incorporates:
       *  Constant: '<S156>/Constant1'
       */
      localDW->D12_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S156>/Data Store Write1' incorporates:
       *  Constant: '<S156>/Constant'
       */
      localDW->D12_Pin_State = true;
    }

    /* End of Switch: '<S156>/Switch' */
    /* DataStoreRead: '<S156>/Data Store Read1' */
    localB->DataStoreRead1_c = localDW->D12_Pin_State;

    /* DataStoreWrite: '<S156>/Data Store Write2' incorporates:
     *  Constant: '<S156>/Constant2'
     */
    *rtd_Toggle_Pin_D12 = 0.0;

    /* Update for M-S-Function: '<S186>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_c == 0) {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Outputs for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Logic: '<S28>/AND2' incorporates:
   *  Constant: '<S28>/Constant8'
   *  DataStoreRead: '<S28>/Data Store Read10'
   */
  rtb_DataStoreRead_h2y = ((1.0 != 0.0) && (*rtd_Toggle_Pin_D13 != 0.0));

  /* Outputs for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' incorporates:
   *  EnablePort: '<S157>/Enable'
   */
  if (rtb_DataStoreRead_h2y) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = true;

    /* Switch: '<S157>/Switch' incorporates:
     *  DataStoreRead: '<S157>/Data Store Read'
     */
    if (localDW->D13_Pin_State) {
      /* DataStoreWrite: '<S157>/Data Store Write1' incorporates:
       *  Constant: '<S157>/Constant1'
       */
      localDW->D13_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S157>/Data Store Write1' incorporates:
       *  Constant: '<S157>/Constant'
       */
      localDW->D13_Pin_State = true;
    }

    /* End of Switch: '<S157>/Switch' */
    /* DataStoreRead: '<S157>/Data Store Read1' */
    localB->DataStoreRead1_a = localDW->D13_Pin_State;

    /* DataStoreWrite: '<S157>/Data Store Write2' incorporates:
     *  Constant: '<S157>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 0.0;

    /* Update for M-S-Function: '<S187>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_a == 0) {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Outputs for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Logic: '<S28>/AND5' incorporates:
   *  Constant: '<S28>/Constant8'
   *  DataStoreRead: '<S28>/Data Store Read13'
   */
  rtb_DataStoreRead_h2y = ((1.0 != 0.0) && (*rtd_Toggle_Pin_D8 != 0.0));

  /* Outputs for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' incorporates:
   *  EnablePort: '<S158>/Enable'
   */
  if (rtb_DataStoreRead_h2y) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = true;

    /* Switch: '<S158>/Switch' incorporates:
     *  DataStoreRead: '<S158>/Data Store Read'
     */
    if (localDW->D8_Pin_State) {
      /* DataStoreWrite: '<S158>/Data Store Write1' incorporates:
       *  Constant: '<S158>/Constant1'
       */
      localDW->D8_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S158>/Data Store Write1' incorporates:
       *  Constant: '<S158>/Constant'
       */
      localDW->D8_Pin_State = true;
    }

    /* End of Switch: '<S158>/Switch' */
    /* DataStoreRead: '<S158>/Data Store Read1' */
    localB->DataStoreRead1_d = localDW->D8_Pin_State;

    /* DataStoreWrite: '<S158>/Data Store Write2' incorporates:
     *  Constant: '<S158>/Constant2'
     */
    *rtd_Toggle_Pin_D8 = 0.0;

    /* Update for M-S-Function: '<S188>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_d == 0) {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Outputs for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Logic: '<S28>/AND4' incorporates:
   *  Constant: '<S28>/Constant8'
   *  DataStoreRead: '<S28>/Data Store Read12'
   */
  rtb_DataStoreRead_h2y = ((1.0 != 0.0) && (*rtd_Toggle_Pin_D9 != 0.0));

  /* Outputs for Enabled SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' incorporates:
   *  EnablePort: '<S159>/Enable'
   */
  if (rtb_DataStoreRead_h2y) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = true;

    /* Switch: '<S159>/Switch' incorporates:
     *  DataStoreRead: '<S159>/Data Store Read'
     */
    if (localDW->D9_Pin_State) {
      /* DataStoreWrite: '<S159>/Data Store Write1' incorporates:
       *  Constant: '<S159>/Constant1'
       */
      localDW->D9_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S159>/Data Store Write1' incorporates:
       *  Constant: '<S159>/Constant'
       */
      localDW->D9_Pin_State = true;
    }

    /* End of Switch: '<S159>/Switch' */
    /* DataStoreRead: '<S159>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->D9_Pin_State;

    /* DataStoreWrite: '<S159>/Data Store Write2' incorporates:
     *  Constant: '<S159>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 0.0;

    /* Update for M-S-Function: '<S189>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_HIGH);
    }
  } else if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Outputs for SubSystem: '<S28>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Outputs for Enabled SubSystem: '<S28>/LT_Update Desync_Positive' incorporates:
   *  EnablePort: '<S155>/Enable'
   */
  /* DataStoreRead: '<S28>/Data Store Read6' */
  if (localDW->Desync_Positive) {
    /* RelationalOperator: '<S155>/Equal1' incorporates:
     *  Constant: '<S155>/Constant9'
     *  DataStoreRead: '<S28>/Data Store Read7'
     */
    rtb_DataStoreRead_h2y = (localDW->basic_cycle_count == 1.0);

    /* Switch generated from: '<S155>/Switch' incorporates:
     *  Constant: '<S155>/Constant'
     *  Constant: '<S155>/Constant1'
     *  Constant: '<S155>/Constant8'
     *  DataStoreRead: '<S28>/Data Store Read7'
     *  RelationalOperator: '<S155>/Equal'
     *  Switch generated from: '<S155>/Switch1'
     */
    if (localDW->basic_cycle_count == 0.0) {
      localDW->Switch_1_DIMS1 = 20;
      localDW->Switch_2_DIMS1 = 20;
      memcpy(&rtb_signal1[0], rtConstP.Constant_Value_f, 20U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant1_Value, 20U * sizeof(real_T));
    } else {
      if (rtb_DataStoreRead_h2y) {
        /* Switch generated from: '<S155>/Switch1' incorporates:
         *  Constant: '<S155>/Constant4'
         */
        localDW->Switch1_1_DIMS1 = 15;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant4_Value, 15U * sizeof(real_T));
      } else {
        /* Switch generated from: '<S155>/Switch1' incorporates:
         *  Constant: '<S155>/Constant10'
         */
        localDW->Switch1_1_DIMS1 = 13;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant10_Value, 13U * sizeof
               (real_T));
      }

      localDW->Switch_1_DIMS1 = localDW->Switch1_1_DIMS1;
      for (i = 0; i < localDW->Switch1_1_DIMS1; i++) {
        rtb_signal1[i] = rtb_signal1_h4[i];
      }

      /* Switch generated from: '<S155>/Switch1' incorporates:
       *  Constant: '<S155>/Constant11'
       *  Constant: '<S155>/Constant5'
       *  Switch generated from: '<S155>/Switch'
       */
      if (rtb_DataStoreRead_h2y) {
        localDW->Switch1_2_DIMS1 = 15;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant5_Value, 15U * sizeof(real_T));
      } else {
        localDW->Switch1_2_DIMS1 = 13;
        memcpy(&rtb_signal1_h4[0], rtConstP.Constant11_Value, 13U * sizeof
               (real_T));
      }

      localDW->Switch_2_DIMS1 = localDW->Switch1_2_DIMS1;
      for (i = 0; i < localDW->Switch1_2_DIMS1; i++) {
        rtb_signal2[i] = rtb_signal1_h4[i];
      }
    }

    /* End of Switch generated from: '<S155>/Switch' */

    /* MATLAB Function: '<S155>/MATLAB Function' incorporates:
     *  Constant: '<S155>/Constant2'
     *  Constant: '<S155>/Constant3'
     *  Constant: '<S155>/Constant6'
     *  Constant: '<S155>/Constant7'
     *  DataStoreRead: '<S28>/Data Store Read5'
     *  Switch generated from: '<S155>/Switch'
     */
    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/MATLAB Function': '<S185>:1' */
    /* '<S185>:1:13' */
    rtb_DataStoreRead4_dd = 1.0;
    do {
      exitg1 = 0;
      rtb_Atan1_tmp = rtb_signal1[(int32_T)rtb_DataStoreRead4_dd - 1];
      if (*rtd_Local_Ticks > rtb_Atan1_tmp) {
        /* '<S185>:1:16' */
        /* '<S185>:1:17' */
        rtb_DataStoreRead4_dd++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (rtb_signal2[(int32_T)(rtb_DataStoreRead4_dd - 1.0) - 1] != 0.0) {
      /* '<S185>:1:22' */
      rtb_Atan1_tmp = rt_roundd(rtb_Atan1_tmp - (real_T)*rtd_Local_Ticks);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }

        if (rtb_Atan1_tmp >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_Atan1_tmp;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      EnabledSubsystem_ELAPS_T_tmp = u1 - 1U;
      if (rtb_DataStoreRead8_c - 1U > u1) {
        EnabledSubsystem_ELAPS_T_tmp = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)EnabledSubsystem_ELAPS_T_tmp;
    } else {
      /* '<S185>:1:26' */
      rtb_Atan1_tmp = rt_roundd((real_T)*rtd_Local_Ticks - rtb_signal1[(int32_T)
        (rtb_DataStoreRead4_dd - 1.0) - 1]);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_Atan1_tmp;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      /* '<S185>:1:28' */
      /* '<S185>:1:31' */
      /* '<S185>:1:34' */
      /* '<S185>:1:39' */
      rtb_Atan1_tmp = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init1);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)u1 / COMM_Phase1);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      EnabledSubsystem_ELAPS_T_tmp = u1 + 1U;
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u1 + 1U > 65535U) {
        EnabledSubsystem_ELAPS_T_tmp = 65535U;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)EnabledSubsystem_ELAPS_T_tmp *
        COMM_Phase1);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)u1 + COMM_Phase_init1);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u0 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u0 = 0U;
        }
      } else {
        u0 = MAX_uint16_T;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init2);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)u1 / COMM_Phase2);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      EnabledSubsystem_ELAPS_T_tmp = u1 + 1U;
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u1 + 1U > 65535U) {
        EnabledSubsystem_ELAPS_T_tmp = 65535U;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)EnabledSubsystem_ELAPS_T_tmp *
        COMM_Phase2);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Atan1_tmp = rt_roundd((real_T)u1 + COMM_Phase_init2);
      if (rtb_Atan1_tmp < 65536.0) {
        if (rtb_Atan1_tmp >= 0.0) {
          u1 = (uint16_T)rtb_Atan1_tmp;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u0 <= u1) {
        u1 = u0;
      }

      EnabledSubsystem_ELAPS_T_tmp = (uint32_T)u1 - rtb_DataStoreRead8_c;
      if (EnabledSubsystem_ELAPS_T_tmp > u1) {
        EnabledSubsystem_ELAPS_T_tmp = 0U;
      }

      elapseT_H = EnabledSubsystem_ELAPS_T_tmp - 2U;
      if (EnabledSubsystem_ELAPS_T_tmp - 2U > EnabledSubsystem_ELAPS_T_tmp) {
        elapseT_H = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)elapseT_H;
    }

    /* End of MATLAB Function: '<S155>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S155>/Local Time Update with Positive Desync' */
    /* Switch: '<S184>/Switch' incorporates:
     *  DataStoreRead: '<S184>/Data Store Read2'
     *  RelationalOperator: '<S184>/GreaterThan'
     */
    if (rtb_DataStoreRead8_c <= localDW->Desync_Ticks) {
      rtb_DataStoreRead4_dd = rtb_DataStoreRead8_c;
    } else {
      rtb_DataStoreRead4_dd = localDW->Desync_Ticks;
    }

    /* End of Switch: '<S184>/Switch' */

    /* Sum: '<S184>/Minus' */
    rtb_DataStoreRead14 = (real_T)*rtd_Local_Ticks + rtb_DataStoreRead4_dd;

    /* Sum: '<S184>/Minus1' incorporates:
     *  DataStoreRead: '<S184>/Data Store Read2'
     */
    rtb_DataStoreRead4_dd -= localDW->Desync_Ticks;

    /* Logic: '<S184>/NOT' incorporates:
     *  Constant: '<S184>/Constant'
     *  DataStoreWrite: '<S184>/Data Store Write'
     *  RelationalOperator: '<S184>/Equal'
     */
    localDW->Desync_Positive = (rtb_DataStoreRead4_dd > 0.0);

    /* DataStoreWrite: '<S184>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S184>/Cast'
     */
    *rtd_Local_Ticks = (uint16_T)rtb_DataStoreRead14;

    /* DataStoreWrite: '<S184>/Data Store Write2' */
    localDW->Desync_Ticks = rtb_DataStoreRead4_dd;

    /* End of Outputs for SubSystem: '<S155>/Local Time Update with Positive Desync' */
  }

  /* End of DataStoreRead: '<S28>/Data Store Read6' */
  /* End of Outputs for SubSystem: '<S28>/LT_Update Desync_Positive' */

  /* Chart: '<S28>/Chart4' incorporates:
   *  Constant: '<S28>/Constant3'
   */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  if (localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    localDW->bitsForTID0.is_active_c8_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    /* Transition: '<S148>:10' */
    /* Entry 'Send_Trigger': '<S148>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S9>/Measure EXecution time' */
      /* Event: '<S148>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S9>/Measure EXecution time' */
    }

    /* During 'Send_Trigger': '<S148>:9' */
  } else if (1.0 != 0.0) {
    /* Outputs for Function Call SubSystem: '<S9>/Measure EXecution time' */
    /* Event: '<S148>:3' */
    MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                         &localDW->MeasureEXecutiontime_d);

    /* End of Outputs for SubSystem: '<S9>/Measure EXecution time' */
  }

  /* End of Chart: '<S28>/Chart4' */
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

  /* DigitalClock: '<S9>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* Outputs for Enabled SubSystem: '<S9>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* Logic: '<S9>/NOT' incorporates:
   *  DataStoreRead: '<S9>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S24>/Data Store Write' incorporates:
     *  Constant: '<S24>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S137>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S24>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S9>/NOT' */
  /* End of Outputs for SubSystem: '<S9>/Initialize Clock Schedule' */

  /* If: '<S9>/If' incorporates:
   *  DataStoreRead: '<S9>/Data Store Read1'
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
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* M-S-Function: '<S133>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S23>/Multiply' incorporates:
     *  Constant: '<S23>/Constant'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_l ? 1.0 : 0.0;

    /* M-S-Function: '<S134>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S23>/Multiply1' incorporates:
     *  Constant: '<S23>/Constant1'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_l ? 2.0 : 0.0;

    /* M-S-Function: '<S135>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN5);

    /* Product: '<S23>/Multiply2' incorporates:
     *  Constant: '<S23>/Constant2'
     */
    rtb_Multiply2 = rtb_Level2MfileSFunction_l ? 4.0 : 0.0;

    /* M-S-Function: '<S136>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN6);

    /* Sum: '<S23>/Add' incorporates:
     *  Constant: '<S23>/Constant3'
     *  Product: '<S23>/Multiply3'
     */
    Board_ID_s = ((rtb_Multiply + rtb_Multiply1) + rtb_Multiply2) +
      (rtb_Level2MfileSFunction_l ? 8.0 : 0.0);

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
  }

  /* End of If: '<S9>/If' */

  /* DataStoreWrite: '<S9>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;

  /* M-S-Function: '<S11>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_g = DiginGet(DIGIN_PORTA_PIN0);

  /* Outputs for Triggered SubSystem: '<S13>/J-K Flip-Flop' incorporates:
   *  TriggerPort: '<S14>/Trigger'
   */
  if ((!rtb_Level2MfileSFunction_g) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* CombinatorialLogic: '<S14>/Logic' incorporates:
     *  Memory generated from: '<S13>/J-K Flip-Flop'
     *  Memory: '<S14>/Memory'
     */
    rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                       rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
    rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
    rtB.Logic[1U] = rtConstP.Logic_table[(uint32_T)rowIdx + 8U];

    /* Update for Memory: '<S14>/Memory' */
    rtDWork.Memory_PreviousInput = rtB.Logic[0];
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction_g;

  /* End of Outputs for SubSystem: '<S13>/J-K Flip-Flop' */
  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S22>/S-Function' */

  /* Constant: '<S9>/Constant' */
  script_run_s = script_run;

  /* M-S-Function: '<S15>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S16>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S17>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for Memory generated from: '<S13>/J-K Flip-Flop' incorporates:
   *  Constant: '<S6>/Constant'
   */
  rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

  /* Update for Memory generated from: '<S13>/J-K Flip-Flop' incorporates:
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

    /* Start for DataStoreMemory: '<S9>/Data Store Memory5' */
    rtDWork.Master_ID = 1.0;

    /* Start for If: '<S9>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for DataStoreMemory: '<S9>/Data Store Memory14' */
    rtDWork.RxID_CAN2 = 1U;

    /* Start for DataStoreMemory: '<S9>/Data Store Memory8' */
    rtDWork.RxID_CAN1 = 1U;

    /* Start for S-Function (sfcn_timeout_init): '<S27>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for DataStoreMemory: '<S9>/Data Store Memory' */
    rtDWork.Tx_msg_count_CAN1 = 1.0;

    /* Start for DataStoreMemory: '<S9>/Data Store Memory20' */
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

    /* Start for S-Function (sfcn_pwmout_init): '<S7>/S-Function' */

    /* initialize the PWM module and register the callback handler */
    PwmoutInit(PWMOUT_MODULE_TIM2, 901, PWMOUT_EDGE_ALIGNMENT);
    PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM2,
      PwmoutIRQ_PWMOUT_MODULE_TIM2);

    /* Start for M-S-Function: '<S10>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem' */

  /* Start for M-S-Function: '<S133>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S134>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S135>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S136>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN6, DIGIN_CFG_PULLDOWN);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem' */

  /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S22>/S-Function' incorporates:
   *  SubSystem: '<S9>/Local Time generation'
   */

  /* System initialize for function-call system: '<S9>/Local Time generation' */

  /* SystemInitialize for Chart: '<S25>/Chart' incorporates:
   *  SubSystem: '<S9>/TTA System'
   */
  TTASystem_Init(&rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c);

  /* register the callback handler */
  TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
    TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

  /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S22>/S-Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
