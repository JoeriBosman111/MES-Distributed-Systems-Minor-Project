/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407.c
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

#include "HANcoder_E407.h"
#include "rtwtypes.h"

/* Exported block signals */
uint32_T SI_FreeHeap;                  /* '<S18>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S19>/Level-2 M-file S-Function' */
uint8_T SI_CPUload;                    /* '<S17>/Level-2 M-file S-Function' */
boolean_T button_press;                /* '<S15>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */

/* Exported block parameters */
boolean_T HANtuneOverride = false;     /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.2s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function */
void HANcoder_E407_step(void)
{
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  uint8_T rtb_Output;
  boolean_T rtb_SampleTimeCrowBar;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S9>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S11>/FixPt Sum1' incorporates:
     *  Constant: '<S11>/FixPt Constant'
     *  UnitDelay: '<S9>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S12>/FixPt Switch' incorporates:
     *  Constant: '<S12>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S12>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S10>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S13>/FixPt Sum1' incorporates:
     *  Constant: '<S13>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S14>/FixPt Switch' incorporates:
     *  Constant: '<S14>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S14>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S15>/Level-2 M-file S-Function' */
    /* read from digital input */
    button_press = DiginGet(DIGIN_PORTA_PIN0);

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || button_press) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S17>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S19>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for M-S-Function: '<S16>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S9>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S10>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_initialize(void)
{
  /* Start for M-S-Function: '<S16>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S15>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

  /* configure the stack size for the task that executes the model */
  AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) + 100);

  /* configure the sample time of the model in microseconds */
  AppCtrlTaskSetPeriod(10000);

  /* Run the ADC conversions ten times faster than the Simulink model */
  ADCconversionTaskSetPeriod(10000/10);

  /* Start for M-S-Function: '<S8>/Level-2 M-file S-Function' */

  /* initialize the measurement and calibration interface */
  MacUsbComInit();
  MacInit();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
