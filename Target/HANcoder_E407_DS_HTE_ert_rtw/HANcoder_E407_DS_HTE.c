/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_DS_HTE.c
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

#include "HANcoder_E407_DS_HTE.h"
#include <math.h>
#include "rtwtypes.h"
#include "multiword_types.h"
#include "HANcoder_E407_DS_HTE_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void PwmoutIRQ_PWMOUT_MODULE_TIM2(void);

/* Exported block signals */
real_T RPM;                            /* '<S6>/Gain' */
uint32_T SI_FreeHeap;                  /* '<S128>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S129>/Level-2 M-file S-Function' */
int32_T EncCount;                      /* '<S119>/Level-2 M-file S-Function' */
int32_T RotorPos;                      /* '<S12>/Counts to rotation [deg]' */
int32_T PosError;                      /* '<S12>/Sum' */
uint16_T PotVal;                       /* '<S116>/Level-2 M-file S-Function' */
uint16_T MotorPWM;                     /* '<S7>/Signal Conversion' */
uint16_T RPMSetpoint;                  /* '<S13>/Constant' */
uint16_T RpmPIDOut;                    /* '<S106>/Saturation' */
int16_T RPMError;                      /* '<S13>/Sum' */
int16_T PotDeg;                        /* '<S12>/Analog byte to degree' */
int16_T PosPIDOut;                     /* '<S55>/Saturation' */
uint8_T SI_CPUload;                    /* '<S127>/Level-2 M-file S-Function' */
uint8_T CANreceive;                    /* '<S120>/In1' */
boolean_T EncReset;                    /* '<S2>/Constant' */
boolean_T DIRFault;                    /* '<S2>/Equal' */
boolean_T IN1;                         /* '<S2>/Switch2' */
boolean_T IN2;                         /* '<S2>/Switch3' */

/* Exported block parameters */
uint16_T HANtuneOverride = 0U;         /* Variable: HANtuneOverride
                                        * Referenced by: '<S13>/Constant'
                                        */
boolean_T System_select = false;       /* Variable: System_select
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_1094U;

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

void PwmoutIRQ_PWMOUT_MODULE_TIM2(void)
{
}

int32_T MultiWord2sLong(const uint32_T u[])
{
  return (int32_T)u[0];
}

void sMultiWordShr(const uint32_T u1[], int32_T n1, uint32_T n2, uint32_T y[],
                   int32_T n)
{
  int32_T i;
  int32_T i1;
  int32_T nb;
  int32_T nc;
  uint32_T nr;
  uint32_T u1i;
  uint32_T yi;
  uint32_T ys;
  nb = (int32_T)(n2 >> 5);
  i = 0;
  ys = (u1[n1 - 1] & 2147483648U) != 0U ? MAX_uint32_T : 0U;
  if (nb < n1) {
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - ((uint32_T)nb << 5);
    if (nr > 0U) {
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = u1i << (32U - nr) | yi;
        i++;
      }

      y[i] = (nc < n1 ? u1[nc] : ys) << (32U - nr) | u1i >> nr;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
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

void MultiWordAdd(const uint32_T u1[], const uint32_T u2[], uint32_T y[],
                  int32_T n)
{
  int32_T i;
  uint32_T carry = 0U;
  uint32_T u1i;
  uint32_T yi;
  for (i = 0; i < n; i++) {
    u1i = u1[i];
    yi = (u1i + u2[i]) + carry;
    y[i] = yi;
    carry = carry != 0U ? (uint32_T)(yi <= u1i) : (uint32_T)(yi < u1i);
  }
}

void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T absIn0;
  uint32_T absIn1;
  uint32_T in0Hi;
  uint32_T in0Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  absIn0 = in0 < 0 ? ~(uint32_T)in0 + 1U : (uint32_T)in0;
  absIn1 = in1 < 0 ? ~(uint32_T)in1 + 1U : (uint32_T)in1;
  in0Hi = absIn0 >> 16U;
  in0Lo = absIn0 & 65535U;
  in1Hi = absIn1 >> 16U;
  absIn0 = absIn1 & 65535U;
  productHiLo = in0Hi * absIn0;
  productLoHi = in0Lo * in1Hi;
  absIn0 *= in0Lo;
  absIn1 = 0U;
  in0Lo = (productLoHi << 16U) + absIn0;
  if (in0Lo < absIn0) {
    absIn1 = 1U;
  }

  absIn0 = in0Lo;
  in0Lo += productHiLo << 16U;
  if (in0Lo < absIn0) {
    absIn1++;
  }

  absIn0 = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi) +
    absIn1;
  if ((in0 != 0) && ((in1 != 0) && ((in0 > 0) != (in1 > 0)))) {
    absIn0 = ~absIn0;
    in0Lo = ~in0Lo;
    in0Lo++;
    if (in0Lo == 0U) {
      absIn0++;
    }
  }

  *ptrOutBitsHi = absIn0;
  *ptrOutBitsLo = in0Lo;
}

int32_T mul_s32_hiSR(int32_T a, int32_T b, uint32_T aShift)
{
  uint32_T u32_chi;
  uint32_T u32_clo;
  mul_wide_s32(a, b, &u32_chi, &u32_clo);
  return (int32_T)u32_chi >> aShift;
}

/* Model step function */
void HANcoder_E407_DS_HTE_step(void)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  int8_T rtb_SFunction_o1;
  int128m_T tmp_1;
  int128m_T tmp_2;
  int64m_T tmp;
  int64m_T tmp_0;
  int64m_T tmp_3;
  real_T rtb_TSamp;
  int32_T rtb_IntegralGain_d;
  int32_T tmp_4;
  uint32_T tmp_5;
  uint32_T tmp_6;
  int16_T u0;
  uint16_T rtb_DeadZone;
  uint16_T rtb_Sum;
  int8_T rtb_DeadZone_0;
  int8_T rtb_IntegralGain_e;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_fixforDTpropagationissue;
  static const int64m_T tmp_7 = { { 1202590843U, 1342177U }/* chunks */
  };

  /* M-S-Function: '<S116>/Level-2 M-file S-Function' */
  /* read from analog input for filtered inputs*/
  PotVal = AninGet(ANIN_PORTC_PIN0,0);

  /* M-S-Function: '<S119>/Level-2 M-file S-Function' */
  /* determine if the counter needs a reset  */
  if (rtB.DataTypeConversion > 0) {
    QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
  }

  /* read counter from the quadrature encoder module */
  EncCount = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

  /* Constant: '<S2>/Constant' */
  EncReset = System_select;

  /* Outputs for Enabled SubSystem: '<S2>/Position Control' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (EncReset) {
    /* Gain: '<S12>/Analog byte to degree' */
    PotDeg = (int16_T)(((uint32_T)((uint16_T)46091U) * PotVal) >> 19);

    /* Gain: '<S12>/Counts to rotation [deg]' */
    RotorPos = mul_s32_hiSR(1105604738, EncCount, 1U);

    /* Sum: '<S12>/Sum' */
    PosError = PotDeg - RotorPos;

    /* DiscreteIntegrator: '<S48>/Integrator' */
    if ((EncReset && (rtDWork.Integrator_PrevResetState_a <= 0)) || ((!EncReset)
         && (rtDWork.Integrator_PrevResetState_a == 1))) {
      rtDWork.Integrator_DSTATE = rtConstP.Integrator_IC;
    }

    /* Gain: '<S53>/Proportional Gain' incorporates:
     *  Gain: '<S45>/Integral Gain'
     */
    tmp_5 = (uint32_T)1342177280;
    tmp_6 = (uint32_T)PosError;
    sMultiWordMul(&tmp_5, 1, &tmp_6, 1, &tmp_0.chunks[0U], 2);

    /* Sum: '<S57>/Sum' incorporates:
     *  DiscreteIntegrator: '<S48>/Integrator'
     */
    sMultiWordShr(&tmp_0.chunks[0U], 2, 27U, &tmp.chunks[0U], 2);
    tmp_0 = tmp_7;
    sMultiWordMul(&rtDWork.Integrator_DSTATE.chunks[0U], 2, &tmp_7.chunks[0U], 2,
                  &tmp_2.chunks[0U], 4);
    sMultiWordShr(&tmp_2.chunks[0U], 4, 87U, &tmp_1.chunks[0U], 4);
    u0 = (int16_T)((int16_T)MultiWord2sLong(&tmp.chunks[0U]) + (int16_T)
                   MultiWord2sLong(&tmp_1.chunks[0U]));

    /* Saturate: '<S55>/Saturation' */
    if (u0 > 1023) {
      /* Saturate: '<S55>/Saturation' */
      PosPIDOut = 1023;
    } else if (u0 < (-1023)) {
      /* Saturate: '<S55>/Saturation' */
      PosPIDOut = (-1023);
    } else {
      /* Saturate: '<S55>/Saturation' */
      PosPIDOut = u0;
    }

    /* End of Saturate: '<S55>/Saturation' */

    /* Abs: '<S12>/Abs' */
    if (PosPIDOut < 0) {
      /* Abs: '<S12>/Abs' */
      rtB.Abs = (uint16_T)-PosPIDOut;
    } else {
      /* Abs: '<S12>/Abs' */
      rtB.Abs = (uint16_T)PosPIDOut;
    }

    /* End of Abs: '<S12>/Abs' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/IN1'
     *  Constant: '<S12>/IN2'
     *  Constant: '<S16>/Constant'
     *  RelationalOperator: '<S16>/Compare'
     */
    if (PosPIDOut > 0) {
      rtb_fixforDTpropagationissue = true;
    } else {
      rtb_fixforDTpropagationissue = false;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S12>/IN3'
     *  Constant: '<S12>/IN4'
     *  Constant: '<S15>/Constant'
     *  RelationalOperator: '<S15>/Compare'
     */
    if (PosPIDOut < 0) {
      rtb_RelationalOperator = true;
    } else {
      rtb_RelationalOperator = false;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* Switch: '<S12>/Switch2' incorporates:
     *  Constant: '<S12>/IN5'
     *  RelationalOperator: '<S12>/Equal'
     *  Switch: '<S12>/Switch3'
     */
    if (rtb_fixforDTpropagationissue == rtb_RelationalOperator) {
      rtb_Sum = false;

      /* Switch: '<S12>/Switch2' incorporates:
       *  Constant: '<S12>/IN5'
       */
      rtB.Switch2 = rtb_Sum;

      /* Switch: '<S12>/Switch3' */
      rtB.Switch3 = rtb_Sum;
    } else {
      /* Switch: '<S12>/Switch2' */
      rtB.Switch2 = rtb_fixforDTpropagationissue;

      /* Switch: '<S12>/Switch3' */
      rtB.Switch3 = rtb_RelationalOperator;
    }

    /* End of Switch: '<S12>/Switch2' */

    /* Gain: '<S45>/Integral Gain' */
    sMultiWordMul(&tmp_5, 1, &tmp_6, 1, &tmp_0.chunks[0U], 2);

    /* Update for DiscreteIntegrator: '<S48>/Integrator' */
    MultiWordAdd(&rtDWork.Integrator_DSTATE.chunks[0U], &tmp_0.chunks[0U],
                 &tmp_3.chunks[0U], 2);
    rtDWork.Integrator_DSTATE = tmp_3;
    rtDWork.Integrator_PrevResetState_a = (int8_T)EncReset;
  }

  /* End of Outputs for SubSystem: '<S2>/Position Control' */

  /* Abs: '<S6>/Abs' */
  if (EncCount < 0) {
    tmp_4 = -EncCount;
  } else {
    tmp_4 = EncCount;
  }

  /* End of Abs: '<S6>/Abs' */

  /* SampleTimeMath: '<S118>/TSamp'
   *
   * About '<S118>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = (real_T)25 * 4.0 * (real_T)tmp_4;

  /* Gain: '<S6>/Gain' incorporates:
   *  Sum: '<S118>/Diff'
   *  UnitDelay: '<S118>/UD'
   *
   * Block description for '<S118>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S118>/UD':
   *
   *  Store in Global RAM
   */
  RPM = (rtb_TSamp - rtDWork.UD_DSTATE) * 0.021451555237754737;

  /* Outputs for Enabled SubSystem: '<S2>/Speed Control' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/Constant2'
   */
  if (EncReset == false) {
    RPMSetpoint = HANtuneOverride;

    /* Sum: '<S13>/Sum' incorporates:
     *  Constant: '<S13>/Constant'
     */
    RPMError = (int16_T)floor((real_T)RPMSetpoint - RPM);

    /* DiscreteIntegrator: '<S99>/Integrator' */
    if ((EncReset && (rtDWork.Integrator_PrevResetState <= 0)) || ((!EncReset) &&
         (rtDWork.Integrator_PrevResetState == 1))) {
      rtDWork.Integrator_DSTATE_h = 0;
    }

    /* Sum: '<S108>/Sum' incorporates:
     *  DiscreteIntegrator: '<S99>/Integrator'
     *  Gain: '<S104>/Proportional Gain'
     */
    rtb_Sum = (uint16_T)((((20480 * RPMError) >> 1) + mul_s32_hiSR
                          (rtDWork.Integrator_DSTATE_h, 1374389535, 8U)) >> 10);

    /* DeadZone: '<S92>/DeadZone' */
    if (rtb_Sum > ((uint16_T)1023U)) {
      rtb_DeadZone = (uint16_T)((uint32_T)rtb_Sum - ((uint16_T)1023U));
    } else if (rtb_Sum >= ((uint16_T)0U)) {
      rtb_DeadZone = 0U;
    } else {
      rtb_DeadZone = (uint16_T)((uint32_T)rtb_Sum - ((uint16_T)0U));
    }

    /* End of DeadZone: '<S92>/DeadZone' */

    /* Gain: '<S96>/Integral Gain' */
    rtb_IntegralGain_d = 24576 * RPMError;

    /* Saturate: '<S106>/Saturation' */
    if (rtb_Sum <= ((uint16_T)1023U)) {
      /* Saturate: '<S106>/Saturation' */
      RpmPIDOut = rtb_Sum;
    } else {
      /* Saturate: '<S106>/Saturation' */
      RpmPIDOut = ((uint16_T)1023U);
    }

    /* End of Saturate: '<S106>/Saturation' */
    rtB.Constant2 = ((uint16_T)0U);
    rtB.Constant1 = ((uint16_T)1U);

    /* RelationalOperator: '<S90>/fix for DT propagation issue' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Constant: '<S13>/Constant2'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    tmp_4 = rtb_DeadZone << 13;

    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S90>/Constant'
     *  Constant: '<S90>/Constant2'
     *  Constant: '<S90>/Constant5'
     *  RelationalOperator: '<S90>/fix for DT propagation issue'
     */
    if (tmp_4 > 0) {
      rtb_DeadZone_0 = 1;
    } else {
      rtb_DeadZone_0 = (-1);
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch2' incorporates:
     *  Constant: '<S90>/Constant3'
     *  Constant: '<S90>/Constant4'
     *  Constant: '<S90>/Constant5'
     *  Gain: '<S96>/Integral Gain'
     *  RelationalOperator: '<S90>/fix for DT propagation issue1'
     */
    if (rtb_IntegralGain_d > 0) {
      rtb_IntegralGain_e = 1;
    } else {
      rtb_IntegralGain_e = (-1);
    }

    /* End of Switch: '<S90>/Switch2' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S90>/Constant1'
     *  Constant: '<S90>/Constant5'
     *  Logic: '<S90>/AND3'
     *  RelationalOperator: '<S90>/Equal1'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    if ((tmp_4 != 0) && (rtb_DeadZone_0 == rtb_IntegralGain_e)) {
      rtb_IntegralGain_d = 0;
    }

    /* End of Switch: '<S90>/Switch' */

    /* Update for DiscreteIntegrator: '<S99>/Integrator' */
    rtDWork.Integrator_DSTATE_h += rtb_IntegralGain_d;
    rtDWork.Integrator_PrevResetState = (int8_T)EncReset;
  }

  /* End of RelationalOperator: '<S11>/Compare' */
  /* End of Outputs for SubSystem: '<S2>/Speed Control' */

  /* Switch: '<S2>/Switch' */
  if (EncReset) {
    /* SignalConversion: '<S7>/Signal Conversion' */
    MotorPWM = rtB.Abs;
    rtb_Sum = rtB.Switch3;
    rtb_DeadZone = rtB.Switch2;
  } else {
    /* SignalConversion: '<S7>/Signal Conversion' */
    MotorPWM = RpmPIDOut;
    rtb_Sum = rtB.Constant2;
    rtb_DeadZone = rtB.Constant1;
  }

  /* End of Switch: '<S2>/Switch' */
  /* RelationalOperator: '<S2>/Equal' */
  DIRFault = (rtb_Sum == rtb_DeadZone);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Switch: '<S2>/Switch3'
   */
  if (DIRFault) {
    /* Switch: '<S2>/Switch2' incorporates:
     *  Constant: '<S2>/DIRFault'
     */
    IN1 = false;

    /* Switch: '<S2>/Switch3' incorporates:
     *  Constant: '<S2>/DIRFault'
     */
    IN2 = false;
  } else {
    /* Switch: '<S2>/Switch2' */
    IN1 = (rtb_Sum != 0);

    /* Switch: '<S2>/Switch3' */
    IN2 = (rtb_DeadZone != 0);
  }

  /* End of Switch: '<S2>/Switch2' */

  /* DataTypeConversion: '<S119>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S121>/FixPt Relational Operator'
   *  UnitDelay: '<S121>/Delay Input1'
   *
   * Block description for '<S121>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtB.DataTypeConversion = ((int32_T)EncReset > (int32_T)
    rtDWork.DelayInput1_DSTATE);

  /* M-S-Function: '<S117>/S-Function' incorporates:
   *  Constant: '<S6>/Constant'
   */

  /* read the message data and store the new parameter */
  rtb_SFunction_o1 = CanIoGetMessage(0, 1094U, NULL,
    &canRxData_0_1094U.uint8_T_info[0], NULL);

  /* process the message data */
  if (rtb_SFunction_o1 > 0) {
    /* read the data */
    rtb_SFunction_o2 = canRxData_0_1094U.uint8_T_info[0];
  }

  /* Outputs for Enabled SubSystem: '<S117>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  if (rtb_SFunction_o1 > 0) {
    /* SignalConversion generated from: '<S120>/In1' */
    CANreceive = rtb_SFunction_o2;
  }

  /* End of Outputs for SubSystem: '<S117>/Enabled Subsystem' */
  /* M-S-Function: '<S127>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S128>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S129>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for M-S-Function: '<S125>/Level-2 M-file S-Function' */
  /* set the new duty cycle */
  PwmoutSet(PWMOUT_TIM2_PIN_PA5, MotorPWM);

  /* Update for UnitDelay: '<S118>/UD'
   *
   * Block description for '<S118>/UD':
   *
   *  Store in Global RAM
   */
  rtDWork.UD_DSTATE = rtb_TSamp;

  /* Update for M-S-Function: '<S123>/Level-2 M-file S-Function' */
  /* update digital output */
  if (IN1 == 0) {
    DigoutSet(DIGOUT_PORTE_PIN2, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN2, DIGOUT_HIGH);
  }

  /* Update for M-S-Function: '<S124>/Level-2 M-file S-Function' */
  /* update digital output */
  if (IN2 == 0) {
    DigoutSet(DIGOUT_PORTE_PIN4, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN4, DIGOUT_HIGH);
  }

  /* Update for M-S-Function: '<S122>/S-Function' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = ((uint8_T)55U);

    /* send the data */
    CanTransmit(0, 259U, 1, &canTxData.uint8_T_info[0]);
  }

  /* Update for UnitDelay: '<S121>/Delay Input1'
   *
   * Block description for '<S121>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtDWork.DelayInput1_DSTATE = EncReset;
}

/* Model initialize function */
void HANcoder_E407_DS_HTE_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult1;
    tCanFilter canFilter1;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 1 */
    CanIoInit(0);

    /* Start for M-S-Function: '<S116>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTC_PIN0,0);

    /* Start for M-S-Function: '<S119>/Level-2 M-file S-Function' */

    /* configure the quadrature encoder module */
    QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_PULLUP);

    /* Start for M-S-Function: '<S123>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN2, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S124>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN4, DIGOUT_CFG_PUSHPULL);

    /* Start for S-Function (sfcn_pwmout_init): '<S126>/S-Function' */

    /* initialize the PWM module and register the callback handler */
    PwmoutInit(PWMOUT_MODULE_TIM2, 10253, PWMOUT_EDGE_ALIGNMENT);
    PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM2,
      PwmoutIRQ_PWMOUT_MODULE_TIM2);

    /* configures channel 1 */
    PwmoutConfigure(PWMOUT_TIM2_PIN_PA5, PWMOUT_ACTIVE_HIGH,
                    PWMOUT_INVERTED_OUTPUT_OFF);

    /* Start for M-S-Function: '<S117>/S-Function' incorporates:
     *  Constant: '<S6>/Constant'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, 1094U);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S4>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* Start for M-S-Function: '<S9>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacCanInit(0, 1637, 1638);
    MacInit();

    /* Start for M-S-Function: '<S10>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  /* SystemInitialize for Enabled SubSystem: '<S2>/Position Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S48>/Integrator' */
  rtDWork.Integrator_PrevResetState_a = 2;

  /* End of SystemInitialize for SubSystem: '<S2>/Position Control' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/Speed Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S99>/Integrator' */
  rtDWork.Integrator_PrevResetState = 2;

  /* End of SystemInitialize for SubSystem: '<S2>/Speed Control' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
