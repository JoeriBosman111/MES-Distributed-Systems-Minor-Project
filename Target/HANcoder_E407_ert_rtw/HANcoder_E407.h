/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407.h
 *
 * Code generated for Simulink model 'HANcoder_E407'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Tue Feb  7 19:23:42 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_h_
#define RTW_HEADER_HANcoder_E407_h_
#ifndef HANcoder_E407_COMMON_INCLUDES_
#define HANcoder_E407_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "digout.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                                 /* HANcoder_E407_COMMON_INCLUDES_ */

#include "HANcoder_E407_types.h"
#define HANcoder_E407_M                (rtM)

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S10>/Output' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T Output_DSTATE;               /* '<S9>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S10>/Output' */
} D_Work;

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

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint32_T SI_FreeHeap;           /* '<S18>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S19>/Level-2 M-file S-Function' */
extern uint8_T SI_CPUload;             /* '<S17>/Level-2 M-file S-Function' */
extern boolean_T button_press;         /* '<S15>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_initialize(void);
extern void HANcoder_E407_step(void);

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
 * '<Root>' : 'HANcoder_E407'
 * '<S1>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S5>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S6>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S7>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S8>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S9>'   : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S10>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S11>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S12>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S13>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S14>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S15>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S16>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S17>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S18>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S19>'  : 'HANcoder_E407/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
