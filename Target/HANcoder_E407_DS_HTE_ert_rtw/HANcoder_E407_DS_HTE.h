/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_DS_HTE.h
 *
 * Code generated for Simulink model 'HANcoder_E407_DS_HTE'.
 *
 * Model version                  : 16.9
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Mar  6 20:24:54 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_DS_HTE_h_
#define RTW_HEADER_HANcoder_E407_DS_HTE_h_
#ifndef HANcoder_E407_DS_HTE_COMMON_INCLUDES_
#define HANcoder_E407_DS_HTE_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "pwmout.h"
#include "anin.h"
#include "quadencoder.h"
#include "digout.h"
#include "can.h"
#include "canio.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                               /* HANcoder_E407_DS_HTE_COMMON_INCLUDES_ */

#include "HANcoder_E407_DS_HTE_types.h"
#include "multiword_types.h"

/* Block signals (default storage) */
typedef struct {
  uint16_T Constant2;                  /* '<S13>/Constant2' */
  uint16_T Constant1;                  /* '<S13>/Constant1' */
  uint16_T Abs;                        /* '<S12>/Abs' */
  uint16_T Switch2;                    /* '<S12>/Switch2' */
  uint16_T Switch3;                    /* '<S12>/Switch3' */
  boolean_T DataTypeConversion;        /* '<S119>/Data Type Conversion' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S118>/UD' */
  int64m_T Integrator_DSTATE;          /* '<S48>/Integrator' */
  int32_T Integrator_DSTATE_h;         /* '<S99>/Integrator' */
  boolean_T DelayInput1_DSTATE;        /* '<S121>/Delay Input1' */
  int8_T Integrator_PrevResetState;    /* '<S99>/Integrator' */
  int8_T Integrator_PrevResetState_a;  /* '<S48>/Integrator' */
} D_Work;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Integrator_IC
   * Referenced by: '<S48>/Integrator'
   */
  int64m_T Integrator_IC;
} ConstParam;

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Constant parameters (default storage) */
extern const ConstParam rtConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T RPM;                     /* '<S6>/Gain' */
extern uint32_T SI_FreeHeap;           /* '<S128>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S129>/Level-2 M-file S-Function' */
extern int32_T EncCount;               /* '<S119>/Level-2 M-file S-Function' */
extern int32_T RotorPos;               /* '<S12>/Counts to rotation [deg]' */
extern int32_T PosError;               /* '<S12>/Sum' */
extern uint16_T PotVal;                /* '<S116>/Level-2 M-file S-Function' */
extern uint16_T MotorPWM;              /* '<S7>/Signal Conversion' */
extern uint16_T RPMSetpoint;           /* '<S13>/Constant' */
extern uint16_T RpmPIDOut;             /* '<S106>/Saturation' */
extern int16_T RPMError;               /* '<S13>/Sum' */
extern int16_T PotDeg;                 /* '<S12>/Analog byte to degree' */
extern int16_T PosPIDOut;              /* '<S55>/Saturation' */
extern uint8_T SI_CPUload;             /* '<S127>/Level-2 M-file S-Function' */
extern uint8_T CANreceive;             /* '<S120>/In1' */
extern boolean_T EncReset;             /* '<S2>/Constant' */
extern boolean_T DIRFault;             /* '<S2>/Equal' */
extern boolean_T IN1;                  /* '<S2>/Switch2' */
extern boolean_T IN2;                  /* '<S2>/Switch3' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern uint16_T HANtuneOverride;       /* Variable: HANtuneOverride
                                        * Referenced by: '<S13>/Constant'
                                        */
extern boolean_T System_select;        /* Variable: System_select
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_DS_HTE_initialize(void);
extern void HANcoder_E407_DS_HTE_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HANcoder_E407_DS_HTE'
 * '<S1>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S5>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S7>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S8>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S9>'   : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/XCP on CAN config'
 * '<S10>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S11>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/IsZero'
 * '<S12>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control'
 * '<S13>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control'
 * '<S14>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller'
 * '<S15>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/IsNegative'
 * '<S16>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/IsPositive'
 * '<S17>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Anti-windup'
 * '<S18>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/D Gain'
 * '<S19>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Filter'
 * '<S20>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Filter ICs'
 * '<S21>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/I Gain'
 * '<S22>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Ideal P Gain'
 * '<S23>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S24>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Integrator'
 * '<S25>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Integrator ICs'
 * '<S26>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/N Copy'
 * '<S27>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/N Gain'
 * '<S28>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/P Copy'
 * '<S29>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Parallel P Gain'
 * '<S30>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Reset Signal'
 * '<S31>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Saturation'
 * '<S32>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Saturation Fdbk'
 * '<S33>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Sum'
 * '<S34>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Sum Fdbk'
 * '<S35>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tracking Mode'
 * '<S36>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tracking Mode Sum'
 * '<S37>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tsamp - Integral'
 * '<S38>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tsamp - Ngain'
 * '<S39>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/postSat Signal'
 * '<S40>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/preSat Signal'
 * '<S41>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S42>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/D Gain/Disabled'
 * '<S43>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Filter/Disabled'
 * '<S44>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Filter ICs/Disabled'
 * '<S45>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S46>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S47>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S48>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Integrator/Discrete'
 * '<S49>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S50>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S51>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/N Gain/Disabled'
 * '<S52>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/P Copy/Disabled'
 * '<S53>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S54>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Reset Signal/External Reset'
 * '<S55>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Saturation/Enabled'
 * '<S56>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S57>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Sum/Sum_PI'
 * '<S58>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S59>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S60>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S61>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S62>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S63>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S64>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Position Control/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S65>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller'
 * '<S66>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Anti-windup'
 * '<S67>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/D Gain'
 * '<S68>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Filter'
 * '<S69>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Filter ICs'
 * '<S70>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/I Gain'
 * '<S71>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Ideal P Gain'
 * '<S72>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S73>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Integrator'
 * '<S74>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Integrator ICs'
 * '<S75>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/N Copy'
 * '<S76>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/N Gain'
 * '<S77>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/P Copy'
 * '<S78>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Parallel P Gain'
 * '<S79>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Reset Signal'
 * '<S80>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Saturation'
 * '<S81>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Saturation Fdbk'
 * '<S82>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Sum'
 * '<S83>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Sum Fdbk'
 * '<S84>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tracking Mode'
 * '<S85>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tracking Mode Sum'
 * '<S86>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tsamp - Integral'
 * '<S87>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tsamp - Ngain'
 * '<S88>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/postSat Signal'
 * '<S89>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/preSat Signal'
 * '<S90>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S91>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S92>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S93>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/D Gain/Disabled'
 * '<S94>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Filter/Disabled'
 * '<S95>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Filter ICs/Disabled'
 * '<S96>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S97>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S98>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S99>'  : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Integrator/Discrete'
 * '<S100>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S101>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S102>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/N Gain/Disabled'
 * '<S103>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/P Copy/Disabled'
 * '<S104>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S105>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Reset Signal/External Reset'
 * '<S106>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Saturation/Enabled'
 * '<S107>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S108>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Sum/Sum_PI'
 * '<S109>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S110>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S111>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S112>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S113>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S114>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S115>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/Speed Control/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S116>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Analog Input'
 * '<S117>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/CAN receive'
 * '<S118>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Discrete Derivative'
 * '<S119>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Quadrature Encoder Get'
 * '<S120>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/CAN receive/Enabled Subsystem'
 * '<S121>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S122>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/CAN send'
 * '<S123>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S124>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output1'
 * '<S125>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/PWM Duty Cycle'
 * '<S126>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/PWM Init'
 * '<S127>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S128>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S129>' : 'HANcoder_E407_DS_HTE/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_DS_HTE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
