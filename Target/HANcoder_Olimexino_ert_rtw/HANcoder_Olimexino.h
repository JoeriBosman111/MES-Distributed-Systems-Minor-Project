/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_Olimexino.h
 *
 * Code generated for Simulink model 'HANcoder_Olimexino'.
 *
 * Model version                  : 16.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Oct 19 20:24:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_Olimexino_h_
#define RTW_HEADER_HANcoder_Olimexino_h_
#ifndef HANcoder_Olimexino_COMMON_INCLUDES_
#define HANcoder_Olimexino_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "pwmout.h"
#include "anin.h"
#include "quadencoder.h"
#include "digout.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                                 /* HANcoder_Olimexino_COMMON_INCLUDES_ */

#include "HANcoder_Olimexino_types.h"
#include "multiword_types.h"
#include <math.h>
#define HANcoder_Olimexino_M           (rtM)

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S16>/Output' */
  boolean_T DataTypeConversion;        /* '<S70>/Data Type Conversion' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S52>/Integrator' */
  real_T DelayInput1_DSTATE;           /* '<S71>/Delay Input1' */
  int32_T UD_DSTATE;                   /* '<S69>/UD' */
  uint8_T Output_DSTATE;               /* '<S15>/Output' */
  uint8_T Output_DSTATE_l;             /* '<S16>/Output' */
} D_Work;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S12>/Gain1'
   */
  uint32_T Gain1_Gain;
} ConstParam;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

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
extern uint64m_T Speed_demand_rpm;     /* '<S12>/Gain1' */
extern real_T motor_rpm;               /* '<S7>/Abs' */
extern real_T Error;                   /* '<S1>/Sum' */
extern uint32_T SI_FreeStack;          /* '<S76>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeHeap;           /* '<S77>/Level-2 M-file S-Function' */
extern uint32_T speed_demand_per;      /* '<S12>/Gain' */
extern int32_T pulse_per_second;       /* '<S69>/Diff' */
extern int32_T encoder_output;         /* '<S70>/Level-2 M-file S-Function' */
extern uint16_T PWM;                   /* '<S1>/Abs' */
extern uint8_T SI_CPUload;             /* '<S75>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */
extern boolean_T direction;            /* '<S1>/Cast To Boolean' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T Direction;               /* Variable: Direction
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T actioni;                 /* Variable: actioni
                                        * Referenced by: '<S49>/Integral Gain'
                                        */
extern real_T actionp;                 /* Variable: actionp
                                        * Referenced by: '<S57>/Proportional Gain'
                                        */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_Olimexino_initialize(void);
extern void HANcoder_Olimexino_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'HANcoder_Olimexino'
 * '<S1>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm'
 * '<S2>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Custom ID config'
 * '<S5>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Digital Output'
 * '<S6>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller'
 * '<S7>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Feedback signal'
 * '<S8>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Inputs'
 * '<S9>'   : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Outputs'
 * '<S10>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/PWM Duty Cycle'
 * '<S11>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/PWM Init'
 * '<S12>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Reference signal'
 * '<S13>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Sytem information'
 * '<S14>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/XCP on USB config'
 * '<S15>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 10Hz'
 * '<S16>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 5Hz'
 * '<S17>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 10Hz/Increment Real World'
 * '<S18>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 10Hz/Wrap To Zero'
 * '<S19>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 5Hz/Increment Real World'
 * '<S20>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Algorithm/Counter Limited 5Hz/Wrap To Zero'
 * '<S21>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Anti-windup'
 * '<S22>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/D Gain'
 * '<S23>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Filter'
 * '<S24>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Filter ICs'
 * '<S25>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/I Gain'
 * '<S26>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Ideal P Gain'
 * '<S27>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S28>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Integrator'
 * '<S29>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Integrator ICs'
 * '<S30>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/N Copy'
 * '<S31>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/N Gain'
 * '<S32>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/P Copy'
 * '<S33>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Parallel P Gain'
 * '<S34>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Reset Signal'
 * '<S35>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Saturation'
 * '<S36>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Saturation Fdbk'
 * '<S37>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Sum'
 * '<S38>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Sum Fdbk'
 * '<S39>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tracking Mode'
 * '<S40>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tracking Mode Sum'
 * '<S41>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tsamp - Integral'
 * '<S42>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tsamp - Ngain'
 * '<S43>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/postSat Signal'
 * '<S44>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/preSat Signal'
 * '<S45>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S46>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/D Gain/Disabled'
 * '<S47>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Filter/Disabled'
 * '<S48>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Filter ICs/Disabled'
 * '<S49>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S50>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S51>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S52>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Integrator/Discrete'
 * '<S53>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S54>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S55>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/N Gain/Disabled'
 * '<S56>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/P Copy/Disabled'
 * '<S57>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S58>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Reset Signal/Disabled'
 * '<S59>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Saturation/Enabled'
 * '<S60>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S61>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Sum/Sum_PI'
 * '<S62>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S63>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S64>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S65>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S66>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S67>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S68>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S69>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Feedback signal/Discrete Derivative'
 * '<S70>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Feedback signal/Quadrature Encoder Get'
 * '<S71>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Feedback signal/Quadrature Encoder Get/Detect Increase'
 * '<S72>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Inputs/Digital Input'
 * '<S73>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Outputs/Digital Output'
 * '<S74>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Reference signal/Analog Input'
 * '<S75>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Sytem information/Get CPU load'
 * '<S76>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Sytem information/Get free Heap'
 * '<S77>'  : 'HANcoder_Olimexino/HANcoder STM32 Target - Olimexino-STM32 algorithm/Sytem information/Get free Stack'
 */
#endif                                 /* RTW_HEADER_HANcoder_Olimexino_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
