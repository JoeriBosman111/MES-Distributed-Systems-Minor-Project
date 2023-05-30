/* 
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * 
 * File: HANcoder_E407_TTA_Template_DS_types.h
 *  
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template_DS'.
 * 
 * Model version                  : 10.4
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue May 30 15:09:07 2023
 * 
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */



  #ifndef RTW_HEADER_HANcoder_E407_TTA_Template_DS_types_h_
  #define RTW_HEADER_HANcoder_E407_TTA_Template_DS_types_h_

    
#include "rtwtypes.h"



    


    


    


    


    


    


    


    


    #ifndef DEFINED_TYPEDEF_FOR_msg_buffer_type_
#define DEFINED_TYPEDEF_FOR_msg_buffer_type_

typedef struct
{
    uint8_T Buffer_1;
    uint8_T Buffer_2;
    uint8_T Buffer_3;
    uint8_T Buffer_4;
    uint8_T Buffer_5;
    uint8_T Buffer_6;
    uint8_T Buffer_7;
    uint8_T Buffer_8;
} msg_buffer_type;

#endif
#ifndef DEFINED_TYPEDEF_FOR_vote_array_
#define DEFINED_TYPEDEF_FOR_vote_array_

typedef struct
{
    real_T First_Board;
    real_T Second_Board;
    real_T Third_Board;
} vote_array;

#endif

    
#ifndef struct_tag_FMckxY1SPTHC2bmcwLc3uF
#define struct_tag_FMckxY1SPTHC2bmcwLc3uF
struct tag_FMckxY1SPTHC2bmcwLc3uF
{
    int32_T isInitialized;
    boolean_T isSetupComplete;
    real_T pCumSum;
    real_T pCumSumRev[29];
    real_T pCumRevIndex;
    real_T pModValueRev;
};
#endif /* struct_tag_FMckxY1SPTHC2bmcwLc3uF */
#ifndef typedef_g_dsp_internal_SlidingWindowAve
#define typedef_g_dsp_internal_SlidingWindowAve
typedef struct tag_FMckxY1SPTHC2bmcwLc3uF g_dsp_internal_SlidingWindowAve;
#endif /* typedef_g_dsp_internal_SlidingWindowAve */
#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE
struct tag_BlgwLpgj2bjudmbmVKWwDE
{
    uint32_T f1[8];
};
#endif /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */
#ifndef typedef_cell_wrap
#define typedef_cell_wrap
typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;
#endif /* typedef_cell_wrap */
#ifndef struct_tag_AMgwJ3V2WmObcILejmFidE
#define struct_tag_AMgwJ3V2WmObcILejmFidE
struct tag_AMgwJ3V2WmObcILejmFidE
{
    boolean_T matlabCodegenIsDeleted;
    int32_T isInitialized;
    boolean_T isSetupComplete;
    boolean_T TunablePropsChanged;
    cell_wrap inputVarSize;
    g_dsp_internal_SlidingWindowAve *pStatistic;
    int32_T NumChannels;
    int32_T FrameLength;
    g_dsp_internal_SlidingWindowAve _pobj0;
};
#endif /* struct_tag_AMgwJ3V2WmObcILejmFidE */
#ifndef typedef_dsp_simulink_MovingAverage
#define typedef_dsp_simulink_MovingAverage
typedef struct tag_AMgwJ3V2WmObcILejmFidE dsp_simulink_MovingAverage;
#endif /* typedef_dsp_simulink_MovingAverage */

                /* Forward declaration for rtModel */
            typedef struct tag_RTM RT_MODEL;



    


    


    


    


    


    


    


    


    


    


    


  #endif /* RTW_HEADER_HANcoder_E407_TTA_Template_DS_types_h_ */

/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

