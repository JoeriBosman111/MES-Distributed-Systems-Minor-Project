/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS_data.c
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

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S8>/TTA System' */
  {
    84.0,                              /* '<S174>/Sum1' */
    274.0,                             /* '<S174>/Sum18' */
    88.0,                              /* '<S174>/Sum2' */
    170.0,                             /* '<S174>/Sum3' */
    80.0,                              /* '<S174>/Sum4' */
    254.0,                             /* '<S174>/Sum5' */
    174.0,                             /* '<S174>/Sum6' */
    258.0,                             /* '<S174>/Sum7' */
    84.0,                              /* '<S173>/Sum1' */
    346.0,                             /* '<S173>/Sum10' */
    270.0,                             /* '<S173>/Sum11' */
    274.0,                             /* '<S173>/Sum18' */
    88.0,                              /* '<S173>/Sum2' */
    174.0,                             /* '<S173>/Sum3' */
    80.0,                              /* '<S173>/Sum4' */
    258.0,                             /* '<S173>/Sum5' */
    178.0,                             /* '<S173>/Sum6' */
    262.0,                             /* '<S173>/Sum7' */
    94.0,                              /* '<S173>/Sum8' */
    342.0,                             /* '<S173>/Sum9' */
    84.0,                              /* '<S172>/Sum1' */
    268.0,                             /* '<S172>/Sum10' */
    356.0,                             /* '<S172>/Sum11' */
    348.0,                             /* '<S172>/Sum12' */
    352.0,                             /* '<S172>/Sum13' */
    360.0,                             /* '<S172>/Sum14' */
    364.0,                             /* '<S172>/Sum15' */
    368.0,                             /* '<S172>/Sum16' */
    372.0,                             /* '<S172>/Sum17' */
    88.0,                              /* '<S172>/Sum2' */
    92.0,                              /* '<S172>/Sum3' */
    80.0,                              /* '<S172>/Sum4' */
    172.0,                             /* '<S172>/Sum5' */
    176.0,                             /* '<S172>/Sum6' */
    180.0,                             /* '<S172>/Sum7' */
    260.0,                             /* '<S172>/Sum8' */
    264.0,                             /* '<S172>/Sum9' */
    2.0,                               /* '<S124>/Add1' */
    0U,                                /* '<S151>/Cast' */
    0U,                                /* '<S272>/Cast6' */
    0U,                                /* '<S151>/Cast1' */
    0U,                                /* '<S124>/Cast' */
    0,                                 /* '<S273>/Cast' */
    0,                                 /* '<S272>/Cast' */
    1,                                 /* '<S272>/NOT' */

    /* Start of '<S174>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S400>/Transmission subtasks1' */
      {
        1U,                            /* '<S687>/Cast8' */
        1U                             /* '<S681>/Cast' */
      }
      ,

      /* End of '<S400>/Transmission subtasks1' */

      /* Start of '<S400>/Reception substasks' */
      {
        1U,                            /* '<S677>/Cast13' */
        1U,                            /* '<S677>/Cast3' */
        0U,                            /* '<S677>/Cast15' */
        0U,                            /* '<S677>/Cast6' */
        0,                             /* '<S677>/Cast14' */
        0                              /* '<S677>/Cast5' */
      }
      /* End of '<S400>/Reception substasks' */
    }
    ,

    /* End of '<S174>/COMM Task - Sync bc 1' */

    /* Start of '<S656>/Check msg transmission CAN2' */
    {
      32U                              /* '<S667>/Cast8' */
    }
    ,

    /* End of '<S656>/Check msg transmission CAN2' */

    /* Start of '<S656>/Check msg transmission CAN1' */
    {
      32U                              /* '<S661>/Cast' */
    }
    ,

    /* End of '<S656>/Check msg transmission CAN1' */

    /* Start of '<S628>/Reception substasks' */
    {
      32U,                             /* '<S657>/Cast13' */
      32U,                             /* '<S657>/Cast3' */
      0U,                              /* '<S657>/Cast15' */
      0U,                              /* '<S657>/Cast6' */
      0,                               /* '<S657>/Cast14' */
      0                                /* '<S657>/Cast5' */
    }
    ,

    /* End of '<S628>/Reception substasks' */

    /* Start of '<S636>/Check msg transmission CAN2' */
    {
      31U                              /* '<S647>/Cast8' */
    }
    ,

    /* End of '<S636>/Check msg transmission CAN2' */

    /* Start of '<S636>/Check msg transmission CAN1' */
    {
      31U                              /* '<S641>/Cast' */
    }
    ,

    /* End of '<S636>/Check msg transmission CAN1' */

    /* Start of '<S627>/Reception substasks' */
    {
      31U,                             /* '<S637>/Cast13' */
      31U,                             /* '<S637>/Cast3' */
      0U,                              /* '<S637>/Cast15' */
      0U,                              /* '<S637>/Cast6' */
      0,                               /* '<S637>/Cast14' */
      0                                /* '<S637>/Cast5' */
    }
    ,

    /* End of '<S627>/Reception substasks' */

    /* Start of '<S173>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S400>/Transmission subtasks1' */
      {
        1U,                            /* '<S481>/Cast8' */
        1U                             /* '<S475>/Cast' */
      }
      ,

      /* End of '<S400>/Transmission subtasks1' */

      /* Start of '<S400>/Reception substasks' */
      {
        1U,                            /* '<S471>/Cast13' */
        1U,                            /* '<S471>/Cast3' */
        0U,                            /* '<S471>/Cast15' */
        0U,                            /* '<S471>/Cast6' */
        0,                             /* '<S471>/Cast14' */
        0                              /* '<S471>/Cast5' */
      }
      /* End of '<S400>/Reception substasks' */
    }
    ,

    /* End of '<S173>/COMM Task - Sync bc 1' */

    /* Start of '<S399>/Reception substasks' */
    {
      0U,                              /* '<S451>/Cast15' */
      0U,                              /* '<S451>/Cast6' */
      0,                               /* '<S451>/Cast14' */
      0                                /* '<S451>/Cast5' */
    }
    ,

    /* End of '<S399>/Reception substasks' */

    /* Start of '<S398>/Reception substasks' */
    {
      0U,                              /* '<S431>/Cast15' */
      0U,                              /* '<S431>/Cast6' */
      0,                               /* '<S431>/Cast14' */
      0                                /* '<S431>/Cast5' */
    }
    ,

    /* End of '<S398>/Reception substasks' */

    /* Start of '<S397>/Reception substasks' */
    {
      0U,                              /* '<S411>/Cast15' */
      0U,                              /* '<S411>/Cast6' */
      0,                               /* '<S411>/Cast14' */
      0                                /* '<S411>/Cast5' */
    }
    ,

    /* End of '<S397>/Reception substasks' */

    /* Start of '<S179>/Transmission subtasks' */
    {
      13U,                             /* '<S259>/Cast8' */
      13U                              /* '<S253>/Cast' */
    }
    ,

    /* End of '<S179>/Transmission subtasks' */

    /* Start of '<S179>/Reception substasks' */
    {
      13U,                             /* '<S249>/Cast13' */
      13U,                             /* '<S249>/Cast3' */
      0U,                              /* '<S249>/Cast15' */
      0U,                              /* '<S249>/Cast6' */
      0,                               /* '<S249>/Cast14' */
      0                                /* '<S249>/Cast5' */
    }
    ,

    /* End of '<S179>/Reception substasks' */

    /* Start of '<S178>/Transmission subtasks' */
    {
      12U,                             /* '<S241>/Cast8' */
      12U                              /* '<S235>/Cast' */
    }
    ,

    /* End of '<S178>/Transmission subtasks' */

    /* Start of '<S178>/Reception substasks' */
    {
      12U,                             /* '<S231>/Cast13' */
      12U,                             /* '<S231>/Cast3' */
      0U,                              /* '<S231>/Cast15' */
      0U,                              /* '<S231>/Cast6' */
      0,                               /* '<S231>/Cast14' */
      0                                /* '<S231>/Cast5' */
    }
    ,

    /* End of '<S178>/Reception substasks' */

    /* Start of '<S177>/Transmission subtasks' */
    {
      11U,                             /* '<S223>/Cast8' */
      11U                              /* '<S217>/Cast' */
    }
    ,

    /* End of '<S177>/Transmission subtasks' */

    /* Start of '<S177>/Reception substasks' */
    {
      11U,                             /* '<S213>/Cast13' */
      11U,                             /* '<S213>/Cast3' */
      0U,                              /* '<S213>/Cast15' */
      0U,                              /* '<S213>/Cast6' */
      0,                               /* '<S213>/Cast14' */
      0                                /* '<S213>/Cast5' */
    }
    ,

    /* End of '<S177>/Reception substasks' */

    /* Start of '<S176>/Transmission subtasks' */
    {
      1U,                              /* '<S205>/Cast8' */
      1U                               /* '<S199>/Cast' */
    }
    ,

    /* End of '<S176>/Transmission subtasks' */

    /* Start of '<S176>/Reception substasks' */
    {
      1U,                              /* '<S195>/Cast13' */
      1U,                              /* '<S195>/Cast3' */
      0U,                              /* '<S195>/Cast15' */
      0U,                              /* '<S195>/Cast6' */
      0,                               /* '<S195>/Cast14' */
      0                                /* '<S195>/Cast5' */
    }
    ,

    /* End of '<S176>/Reception substasks' */

    /* Start of '<S8>/CAN2 Recieve' */
    {
      22.0,                            /* '<S73>/Product' */
      44.0,                            /* '<S73>/Product1' */
      23.0,                            /* '<S73>/Product2' */
      46.0,                            /* '<S73>/Product3' */
      24.0,                            /* '<S73>/Product4' */
      48.0                             /* '<S73>/Product5' */
    }
    ,

    /* End of '<S8>/CAN2 Recieve' */

    /* Start of '<S8>/CAN1 Recieve' */
    {
      22.0,                            /* '<S30>/Product' */
      44.0,                            /* '<S30>/Product1' */
      23.0,                            /* '<S30>/Product2' */
      46.0,                            /* '<S30>/Product3' */
      24.0,                            /* '<S30>/Product4' */
      48.0                             /* '<S30>/Product5' */
    }
    /* End of '<S8>/CAN1 Recieve' */
  }
  /* End of '<S8>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S136>/Constant'
   */
  { 0.0, 80.0, 84.0, 86.0, 88.0, 90.0, 92.0, 172.0, 176.0, 180.0, 260.0, 262.0,
    264.0, 268.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S136>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Data_bc2
   * Referenced by: '<S136>/Constant10'
   */
  { 0.0, 80.0, 84.0, 86.0, 90.0, 170.0, 174.0, 254.0, 258.0, 338.0 },

  /* Expression: TM_Type_bc2
   * Referenced by: '<S136>/Constant11'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S136>/Constant4'
   */
  { 0.0, 80.0, 84.0, 86.0, 90.0, 94.0, 174.0, 178.0, 258.0, 262.0, 342.0, 266.0,
    270.0, 272.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S136>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S13>/Logic'
   */
  { false, false, true, true, true, false, true, false, true, true, false, false,
    false, true, false, true }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
