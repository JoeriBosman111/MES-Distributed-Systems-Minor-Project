/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_Olimexino.c
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

#include "HANcoder_Olimexino.h"
#include "rtwtypes.h"
#include "HANcoder_Olimexino_private.h"
#include <math.h>
#include "multiword_types.h"

void PwmoutIRQ_PWMOUT_MODULE_TIM2(void);

/* Exported block signals */
uint64m_T Speed_demand_rpm;            /* '<S12>/Gain1' */
real_T motor_rpm;                      /* '<S7>/Abs' */
real_T Error;                          /* '<S1>/Sum' */
uint32_T SI_FreeStack;                 /* '<S76>/Level-2 M-file S-Function' */
uint32_T SI_FreeHeap;                  /* '<S77>/Level-2 M-file S-Function' */
uint32_T speed_demand_per;             /* '<S12>/Gain' */
int32_T pulse_per_second;              /* '<S69>/Diff' */
int32_T encoder_output;                /* '<S70>/Level-2 M-file S-Function' */
uint16_T PWM;                          /* '<S1>/Abs' */
uint8_T SI_CPUload;                    /* '<S75>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
boolean_T direction;                   /* '<S1>/Cast To Boolean' */

/* Exported block parameters */
real_T Direction = 0.0;                /* Variable: Direction
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T actioni = 0.0;                  /* Variable: actioni
                                        * Referenced by: '<S49>/Integral Gain'
                                        */
real_T actionp = 0.0;                  /* Variable: actionp
                                        * Referenced by: '<S57>/Proportional Gain'
                                        */
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
void PwmoutIRQ_PWMOUT_MODULE_TIM2(void)
{
}

void uMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ni;
  uint32_T a0;
  uint32_T a1;
  uint32_T b1;
  uint32_T cb;
  uint32_T u1i;
  uint32_T w01;
  uint32_T w10;
  uint32_T yk;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    cb = 0U;
    u1i = u1[i];
    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      u1i = u2[j];
      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }
}

real_T sMultiWord2Double(const uint32_T u1[], int32_T n1, int32_T e1)
{
  real_T y;
  int32_T exp_0;
  int32_T i;
  uint32_T cb;
  uint32_T u1i;
  y = 0.0;
  exp_0 = e1;
  if ((u1[n1 - 1] & 2147483648U) != 0U) {
    cb = 1U;
    for (i = 0; i < n1; i++) {
      u1i = ~u1[i];
      cb += u1i;
      y -= ldexp(cb, exp_0);
      cb = (uint32_T)(cb < u1i);
      exp_0 += 32;
    }
  } else {
    for (i = 0; i < n1; i++) {
      y += ldexp(u1[i], exp_0);
      exp_0 += 32;
    }
  }

  return y;
}

void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ni;
  uint32_T a0;
  uint32_T a1;
  uint32_T b1;
  uint32_T cb;
  uint32_T cb1;
  uint32_T cb2;
  uint32_T u1i;
  uint32_T w01;
  uint32_T w10;
  uint32_T yk;
  boolean_T isNegative1;
  boolean_T isNegative2;
  isNegative1 = ((u1[n1 - 1] & 2147483648U) != 0U);
  isNegative2 = ((u2[n2 - 1] & 2147483648U) != 0U);
  cb1 = 1U;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    cb = 0U;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint32_T)(u1i < cb1);
    }

    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    cb2 = 1U;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint32_T)(u1i < cb2);
      }

      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1U;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint32_T)(yk < cb);
    }
  }
}

real_T uMultiWord2Double(const uint32_T u1[], int32_T n1, int32_T e1)
{
  real_T y;
  int32_T exp_1;
  int32_T i;
  y = 0.0;
  exp_1 = e1;
  for (i = 0; i < n1; i++) {
    y += ldexp(u1[i], exp_1);
    exp_1 += 32;
  }

  return y;
}

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

/* Model step function */
void HANcoder_Olimexino_step(void)
{
  /* local block i/o variables */
  uint16_T rtb_Level2MfileSFunction;
  boolean_T rtb_Level2MfileSFunction_n;
  int64m_T tmp_1;
  real_T rtb_Uk1;
  int32_T rtb_TSamp;
  uint32_T tmp;
  uint32_T tmp_0;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_e;
  uint8_T rtb_Output;

  /* M-S-Function: '<S74>/Level-2 M-file S-Function' */
  /* read from analog input for filtered inputs*/
  rtb_Level2MfileSFunction = AninGet(ANIN_PORTC_PIN2,0);

  /* Gain: '<S12>/Gain' */
  speed_demand_per = (uint32_T)((uint16_T)52116U) * rtb_Level2MfileSFunction;

  /* Gain: '<S12>/Gain1' incorporates:
   *  Gain: '<S12>/Gain'
   */
  uMultiWordMul(&rtConstP.Gain1_Gain, 1, &speed_demand_per, 1,
                &Speed_demand_rpm.chunks[0U], 2);

  /* M-S-Function: '<S70>/Level-2 M-file S-Function' */
  /* determine if the counter needs a reset  */
  if (rtB.DataTypeConversion > 0) {
    QuadEncResetCounter(QUADENC_TIM1_PA8_PA9);
  }

  /* read counter from the quadrature encoder module */
  encoder_output = QuadEncGetCounter(QUADENC_TIM1_PA8_PA9);

  /* SampleTimeMath: '<S69>/TSamp'
   *
   * About '<S69>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  rtb_TSamp = encoder_output;

  /* Sum: '<S69>/Diff' incorporates:
   *  SampleTimeMath: '<S69>/TSamp'
   *  UnitDelay: '<S69>/UD'
   *
   * About '<S69>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   *
   * Block description for '<S69>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S69>/UD':
   *
   *  Store in Global RAM
   */
  pulse_per_second = encoder_output - rtDWork.UD_DSTATE;

  /* Gain: '<S7>/Gain' incorporates:
   *  Sum: '<S69>/Diff'
   *
   * Block description for '<S69>/Diff':
   *
   *  Add in CPU
   */
  tmp = (uint32_T)2060451840;
  tmp_0 = (uint32_T)pulse_per_second;
  sMultiWordMul(&tmp, 1, &tmp_0, 1, &tmp_1.chunks[0U], 2);

  /* Abs: '<S7>/Abs' incorporates:
   *  DataTypeConversion: '<S7>/Cast To Double'
   *  Rounding: '<S7>/Round'
   */
  motor_rpm = fabs(rt_roundd(sMultiWord2Double(&tmp_1.chunks[0U], 2, 0) *
    0.006103515625));

  /* Sum: '<S1>/Sum' incorporates:
   *  Gain: '<S12>/Gain1'
   */
  Error = uMultiWord2Double(&Speed_demand_rpm.chunks[0U], 2, 0) *
    4.4408920985006262E-16 - motor_rpm;

  /* Sum: '<S61>/Sum' incorporates:
   *  DiscreteIntegrator: '<S52>/Integrator'
   *  Gain: '<S57>/Proportional Gain'
   */
  rtb_Uk1 = actionp * Error + rtDWork.Integrator_DSTATE;

  /* Saturate: '<S59>/Saturation' */
  if (rtb_Uk1 > 1023.0) {
    rtb_Uk1 = 1023.0;
  } else if (rtb_Uk1 < 0.0) {
    rtb_Uk1 = 0.0;
  }

  /* End of Saturate: '<S59>/Saturation' */

  /* Abs: '<S1>/Abs' */
  if (rtb_Uk1 < 0.0) {
    /* Abs: '<S1>/Abs' */
    PWM = (uint16_T)-rtb_Uk1;
  } else {
    /* Abs: '<S1>/Abs' */
    PWM = (uint16_T)rtb_Uk1;
  }

  /* End of Abs: '<S1>/Abs' */

  /* Gain: '<S49>/Integral Gain' */
  rtb_Uk1 = actioni * Error;

  /* DataTypeConversion: '<S70>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S71>/FixPt Relational Operator'
   *  UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S15>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     *  UnitDelay: '<S15>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S18>/FixPt Switch' incorporates:
     *  Constant: '<S18>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S18>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S16>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_l;

    /* Sum: '<S19>/FixPt Sum1' incorporates:
     *  Constant: '<S19>/FixPt Constant'
     */
    rtb_FixPtSum1_e = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S20>/FixPt Switch' incorporates:
     *  Constant: '<S20>/Constant'
     */
    if (rtb_FixPtSum1_e > ((uint8_T)1U)) {
      rtb_FixPtSum1_e = ((uint8_T)0U);
    }

    /* End of Switch: '<S20>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S72>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_n = DiginGet(DIGIN_PORTC_PIN9);

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction_n) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* DataTypeConversion: '<S1>/Cast To Boolean' incorporates:
   *  Constant: '<S1>/Constant'
   */
  direction = (Direction != 0.0);

  /* M-S-Function: '<S75>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S76>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeStack = OsGetFreeHeapSize();

  /* M-S-Function: '<S77>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeHeap = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for M-S-Function: '<S10>/Level-2 M-file S-Function' */
  /* set the new duty cycle */
  PwmoutSet(PWMOUT_TIM2_PIN_PA1, PWM);

  /* Update for UnitDelay: '<S69>/UD' incorporates:
   *  SampleTimeMath: '<S69>/TSamp'
   *
   * About '<S69>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   *
   * Block description for '<S69>/UD':
   *
   *  Store in Global RAM
   */
  rtDWork.UD_DSTATE = rtb_TSamp;

  /* Update for DiscreteIntegrator: '<S52>/Integrator' */
  rtDWork.Integrator_DSTATE += 0.01 * rtb_Uk1;

  /* Update for UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtDWork.DelayInput1_DSTATE = 0.0;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for M-S-Function: '<S73>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S15>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S16>/Output' */
    rtDWork.Output_DSTATE_l = rtb_FixPtSum1_e;
  }

  /* Update for M-S-Function: '<S5>/Level-2 M-file S-Function' */
  /* update digital output */
  if (direction == 0) {
    DigoutSet(DIGOUT_PORTA_PIN0, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTA_PIN0, DIGOUT_HIGH);
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_Olimexino_initialize(void)
{
  /* Start for M-S-Function: '<S74>/Level-2 M-file S-Function' */

  /* configure the analog input for filtered inputs */
  AninConfigure(ANIN_PORTC_PIN2,0);

  /* Start for M-S-Function: '<S70>/Level-2 M-file S-Function' */

  /* configure the quadrature encoder module */
  QuadEncConfigure(QUADENC_TIM1_PA8_PA9, QUADENC_CFG_PULLUP);

  /* Start for M-S-Function: '<S73>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S72>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTC_PIN9, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S5>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN0, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

  /* configure the stack size for the task that executes the model */
  AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) + 0);

  /* configure the sample time of the model in microseconds */
  AppCtrlTaskSetPeriod(10000);

  /* Run the ADC conversions ten times faster than the Simulink model */
  ADCconversionTaskSetPeriod(10000/10);

  /* Start for S-Function (sfcn_pwmout_init): '<S11>/S-Function' */

  /* initialize the PWM module and register the callback handler */
  PwmoutInit(PWMOUT_MODULE_TIM2, 5022, PWMOUT_EDGE_ALIGNMENT);
  PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM2,
    PwmoutIRQ_PWMOUT_MODULE_TIM2);

  /* configures channel 2 */
  PwmoutConfigure(PWMOUT_TIM2_PIN_PA1, PWMOUT_ACTIVE_HIGH,
                  PWMOUT_INVERTED_OUTPUT_OFF);

  /* Start for M-S-Function: '<S14>/Level-2 M-file S-Function' */

  /* initialize the measurement and calibration interface */
  MacUsbComInit();
  MacInit();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
