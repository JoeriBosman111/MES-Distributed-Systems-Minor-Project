/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS_data.c
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

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S9>/TTA System' */
  {
    104.0,                             /* '<S194>/Sum1' */
    336.0,                             /* '<S194>/Sum17' */
    330.0,                             /* '<S194>/Sum18' */
    108.0,                             /* '<S194>/Sum2' */
    210.0,                             /* '<S194>/Sum3' */
    100.0,                             /* '<S194>/Sum4' */
    314.0,                             /* '<S194>/Sum5' */
    214.0,                             /* '<S194>/Sum6' */
    318.0,                             /* '<S194>/Sum7' */
    322.0,                             /* '<S194>/Sum8' */
    326.0,                             /* '<S194>/Sum9' */
    2.0,                               /* '<S722>/Abs1' */
    4.0,                               /* '<S722>/Divide15' */
    -1.0,                              /* '<S722>/Divide24' */
    4.0,                               /* '<S722>/Divide26' */
    1.0,                               /* '<S722>/Gain2' */
    1.0,                               /* '<S722>/Sign_2' */
    1.0,                               /* '<S725>/Abs' */
    -1.0,                              /* '<S725>/Divide2' */
    4.0,                               /* '<S725>/Divide4' */
    0.5,                               /* '<S725>/Gain1' */
    104.0,                             /* '<S193>/Sum1' */
    426.0,                             /* '<S193>/Sum10' */
    330.0,                             /* '<S193>/Sum11' */
    340.0,                             /* '<S193>/Sum17' */
    334.0,                             /* '<S193>/Sum18' */
    108.0,                             /* '<S193>/Sum2' */
    214.0,                             /* '<S193>/Sum3' */
    100.0,                             /* '<S193>/Sum4' */
    318.0,                             /* '<S193>/Sum5' */
    218.0,                             /* '<S193>/Sum6' */
    322.0,                             /* '<S193>/Sum7' */
    114.0,                             /* '<S193>/Sum8' */
    422.0,                             /* '<S193>/Sum9' */
    104.0,                             /* '<S192>/Sum1' */
    328.0,                             /* '<S192>/Sum10' */
    436.0,                             /* '<S192>/Sum11' */
    428.0,                             /* '<S192>/Sum12' */
    432.0,                             /* '<S192>/Sum13' */
    440.0,                             /* '<S192>/Sum14' */
    444.0,                             /* '<S192>/Sum15' */
    448.0,                             /* '<S192>/Sum16' */
    452.0,                             /* '<S192>/Sum17' */
    108.0,                             /* '<S192>/Sum2' */
    112.0,                             /* '<S192>/Sum3' */
    100.0,                             /* '<S192>/Sum4' */
    212.0,                             /* '<S192>/Sum5' */
    216.0,                             /* '<S192>/Sum6' */
    220.0,                             /* '<S192>/Sum7' */
    320.0,                             /* '<S192>/Sum8' */
    324.0,                             /* '<S192>/Sum9' */
    2.0,                               /* '<S143>/Add1' */
    0U,                                /* '<S171>/Cast' */
    0U,                                /* '<S688>/Constant' */
    0U,                                /* '<S668>/Constant' */
    0U,                                /* '<S475>/Constant' */
    0U,                                /* '<S455>/Constant' */
    0U,                                /* '<S435>/Constant' */
    0U,                                /* '<S171>/Cast1' */
    0U,                                /* '<S143>/Cast' */
    0,                                 /* '<S293>/Cast' */

    /* Start of '<S656>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S728>/Cast6' */
      0,                               /* '<S728>/Cast' */
      1                                /* '<S728>/NOT' */
    }
    ,

    /* End of '<S656>/RESET Board - Return to initialization' */

    /* Start of '<S194>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S420>/Transmission subtasks1' */
      {
        1U,                            /* '<S715>/Cast8' */
        1U,                            /* '<S709>/Cast' */
        0U                             /* '<S708>/Constant' */
      }
      ,

      /* End of '<S420>/Transmission subtasks1' */

      /* Start of '<S420>/Reception substasks' */
      {
        1U,                            /* '<S705>/Cast13' */
        1U,                            /* '<S705>/Cast3' */
        0U,                            /* '<S705>/Cast15' */
        0U,                            /* '<S705>/Cast6' */
        0,                             /* '<S705>/Cast14' */
        0                              /* '<S705>/Cast5' */
      }
      /* End of '<S420>/Reception substasks' */
    }
    ,

    /* End of '<S194>/COMM Task - Sync bc 1' */

    /* Start of '<S684>/Check msg transmission CAN2' */
    {
      32U                              /* '<S695>/Cast8' */
    }
    ,

    /* End of '<S684>/Check msg transmission CAN2' */

    /* Start of '<S684>/Check msg transmission CAN1' */
    {
      32U                              /* '<S689>/Cast' */
    }
    ,

    /* End of '<S684>/Check msg transmission CAN1' */

    /* Start of '<S653>/Reception substasks' */
    {
      32U,                             /* '<S685>/Cast13' */
      32U,                             /* '<S685>/Cast3' */
      0U,                              /* '<S685>/Cast15' */
      0U,                              /* '<S685>/Cast6' */
      0,                               /* '<S685>/Cast14' */
      0                                /* '<S685>/Cast5' */
    }
    ,

    /* End of '<S653>/Reception substasks' */

    /* Start of '<S664>/Check msg transmission CAN2' */
    {
      31U                              /* '<S675>/Cast8' */
    }
    ,

    /* End of '<S664>/Check msg transmission CAN2' */

    /* Start of '<S664>/Check msg transmission CAN1' */
    {
      31U                              /* '<S669>/Cast' */
    }
    ,

    /* End of '<S664>/Check msg transmission CAN1' */

    /* Start of '<S652>/Reception substasks' */
    {
      31U,                             /* '<S665>/Cast13' */
      31U,                             /* '<S665>/Cast3' */
      0U,                              /* '<S665>/Cast15' */
      0U,                              /* '<S665>/Cast6' */
      0,                               /* '<S665>/Cast14' */
      0                                /* '<S665>/Cast5' */
    }
    ,

    /* End of '<S652>/Reception substasks' */

    /* Start of '<S422>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S526>/Cast6' */
      0,                               /* '<S526>/Cast' */
      1                                /* '<S526>/NOT' */
    }
    ,

    /* End of '<S422>/RESET Board - Return to initialization' */

    /* Start of '<S193>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S420>/Transmission subtasks1' */
      {
        1U,                            /* '<S502>/Cast8' */
        1U,                            /* '<S496>/Cast' */
        0U                             /* '<S495>/Constant' */
      }
      ,

      /* End of '<S420>/Transmission subtasks1' */

      /* Start of '<S420>/Reception substasks' */
      {
        1U,                            /* '<S492>/Cast13' */
        1U,                            /* '<S492>/Cast3' */
        0U,                            /* '<S492>/Cast15' */
        0U,                            /* '<S492>/Cast6' */
        0,                             /* '<S492>/Cast14' */
        0                              /* '<S492>/Cast5' */
      }
      /* End of '<S420>/Reception substasks' */
    }
    ,

    /* End of '<S193>/COMM Task - Sync bc 1' */

    /* Start of '<S419>/Reception substasks' */
    {
      0U,                              /* '<S472>/Cast15' */
      0U,                              /* '<S472>/Cast6' */
      0,                               /* '<S472>/Cast14' */
      0                                /* '<S472>/Cast5' */
    }
    ,

    /* End of '<S419>/Reception substasks' */

    /* Start of '<S418>/Reception substasks' */
    {
      0U,                              /* '<S452>/Cast15' */
      0U,                              /* '<S452>/Cast6' */
      0,                               /* '<S452>/Cast14' */
      0                                /* '<S452>/Cast5' */
    }
    ,

    /* End of '<S418>/Reception substasks' */

    /* Start of '<S417>/Reception substasks' */
    {
      0U,                              /* '<S432>/Cast15' */
      0U,                              /* '<S432>/Cast6' */
      0,                               /* '<S432>/Cast14' */
      0                                /* '<S432>/Cast5' */
    }
    ,

    /* End of '<S417>/Reception substasks' */

    /* Start of '<S202>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S292>/Cast6' */
      0,                               /* '<S292>/Cast' */
      1                                /* '<S292>/NOT' */
    }
    ,

    /* End of '<S202>/RESET Board - Return to initialization' */

    /* Start of '<S199>/Transmission subtasks' */
    {
      0U,                              /* '<S272>/Constant' */

      /* Start of '<S232>/Check msg transmission CAN2' */
      {
        13U                            /* '<S279>/Cast8' */
      }
      ,

      /* End of '<S232>/Check msg transmission CAN2' */

      /* Start of '<S232>/Check msg transmission CAN1' */
      {
        13U                            /* '<S273>/Cast' */
      }
      /* End of '<S232>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S199>/Transmission subtasks' */

    /* Start of '<S199>/Reception substasks' */
    {
      13U,                             /* '<S269>/Cast13' */
      13U,                             /* '<S269>/Cast3' */
      0U,                              /* '<S269>/Cast15' */
      0U,                              /* '<S269>/Cast6' */
      0,                               /* '<S269>/Cast14' */
      0                                /* '<S269>/Cast5' */
    }
    ,

    /* End of '<S199>/Reception substasks' */

    /* Start of '<S198>/Transmission subtasks' */
    {
      0U,                              /* '<S254>/Constant' */

      /* Start of '<S232>/Check msg transmission CAN2' */
      {
        12U                            /* '<S261>/Cast8' */
      }
      ,

      /* End of '<S232>/Check msg transmission CAN2' */

      /* Start of '<S232>/Check msg transmission CAN1' */
      {
        12U                            /* '<S255>/Cast' */
      }
      /* End of '<S232>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S198>/Transmission subtasks' */

    /* Start of '<S198>/Reception substasks' */
    {
      12U,                             /* '<S251>/Cast13' */
      12U,                             /* '<S251>/Cast3' */
      0U,                              /* '<S251>/Cast15' */
      0U,                              /* '<S251>/Cast6' */
      0,                               /* '<S251>/Cast14' */
      0                                /* '<S251>/Cast5' */
    }
    ,

    /* End of '<S198>/Reception substasks' */

    /* Start of '<S197>/Transmission subtasks' */
    {
      0U,                              /* '<S236>/Constant' */

      /* Start of '<S232>/Check msg transmission CAN2' */
      {
        11U                            /* '<S243>/Cast8' */
      }
      ,

      /* End of '<S232>/Check msg transmission CAN2' */

      /* Start of '<S232>/Check msg transmission CAN1' */
      {
        11U                            /* '<S237>/Cast' */
      }
      /* End of '<S232>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S197>/Transmission subtasks' */

    /* Start of '<S197>/Reception substasks' */
    {
      11U,                             /* '<S233>/Cast13' */
      11U,                             /* '<S233>/Cast3' */
      0U,                              /* '<S233>/Cast15' */
      0U,                              /* '<S233>/Cast6' */
      0,                               /* '<S233>/Cast14' */
      0                                /* '<S233>/Cast5' */
    }
    ,

    /* End of '<S197>/Reception substasks' */

    /* Start of '<S196>/Transmission subtasks' */
    {
      1U,                              /* '<S225>/Cast8' */
      1U,                              /* '<S219>/Cast' */
      0U                               /* '<S218>/Constant' */
    }
    ,

    /* End of '<S196>/Transmission subtasks' */

    /* Start of '<S196>/Reception substasks' */
    {
      1U,                              /* '<S215>/Cast13' */
      1U,                              /* '<S215>/Cast3' */
      0U,                              /* '<S215>/Cast15' */
      0U,                              /* '<S215>/Cast6' */
      0,                               /* '<S215>/Cast14' */
      0                                /* '<S215>/Cast5' */
    }
    ,

    /* End of '<S196>/Reception substasks' */

    /* Start of '<S9>/CAN2 Recieve' */
    {
      22.0,                            /* '<S83>/Product' */
      44.0,                            /* '<S83>/Product1' */
      23.0,                            /* '<S83>/Product2' */
      46.0,                            /* '<S83>/Product3' */
      24.0,                            /* '<S83>/Product4' */
      48.0,                            /* '<S83>/Product5' */
      66.0,                            /* '<S83>/Product6' */
      69.0,                            /* '<S83>/Product7' */
      72.0                             /* '<S83>/Product8' */
    }
    ,

    /* End of '<S9>/CAN2 Recieve' */

    /* Start of '<S9>/CAN1 Recieve' */
    {
      22.0,                            /* '<S31>/Product' */
      44.0,                            /* '<S31>/Product1' */
      23.0,                            /* '<S31>/Product2' */
      46.0,                            /* '<S31>/Product3' */
      24.0,                            /* '<S31>/Product4' */
      48.0,                            /* '<S31>/Product5' */
      66.0,                            /* '<S31>/Product6' */
      69.0,                            /* '<S31>/Product7' */
      72.0                             /* '<S31>/Product8' */
    }
    /* End of '<S9>/CAN1 Recieve' */
  }
  /* End of '<S9>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S155>/Constant'
   */
  { 0.0, 100.0, 104.0, 106.0, 108.0, 110.0, 112.0, 212.0, 216.0, 220.0, 320.0,
    322.0, 324.0, 328.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S155>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Data_bc2
   * Referenced by: '<S155>/Constant10'
   */
  { 0.0, 100.0, 104.0, 106.0, 110.0, 210.0, 214.0, 314.0, 318.0, 322.0, 326.0,
    328.0, 332.0 },

  /* Expression: TM_Type_bc2
   * Referenced by: '<S155>/Constant11'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S155>/Constant4'
   */
  { 0.0, 100.0, 104.0, 106.0, 110.0, 114.0, 214.0, 218.0, 318.0, 322.0, 422.0,
    326.0, 330.0, 332.0, 336.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S155>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S14>/Logic'
   */
  { false, false, true, true, true, false, true, false, true, true, false, false,
    false, true, false, true }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
