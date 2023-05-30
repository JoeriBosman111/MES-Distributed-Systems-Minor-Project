/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_DS_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template_DS'.
 *
 * Model version                  : 10.9
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue May 30 20:20:17 2023
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
    104.0,                             /* '<S193>/Sum1' */
    336.0,                             /* '<S193>/Sum17' */
    330.0,                             /* '<S193>/Sum18' */
    108.0,                             /* '<S193>/Sum2' */
    210.0,                             /* '<S193>/Sum3' */
    100.0,                             /* '<S193>/Sum4' */
    314.0,                             /* '<S193>/Sum5' */
    214.0,                             /* '<S193>/Sum6' */
    318.0,                             /* '<S193>/Sum7' */
    322.0,                             /* '<S193>/Sum8' */
    326.0,                             /* '<S193>/Sum9' */
    104.0,                             /* '<S192>/Sum1' */
    426.0,                             /* '<S192>/Sum10' */
    330.0,                             /* '<S192>/Sum11' */
    340.0,                             /* '<S192>/Sum17' */
    334.0,                             /* '<S192>/Sum18' */
    108.0,                             /* '<S192>/Sum2' */
    214.0,                             /* '<S192>/Sum3' */
    100.0,                             /* '<S192>/Sum4' */
    318.0,                             /* '<S192>/Sum5' */
    218.0,                             /* '<S192>/Sum6' */
    322.0,                             /* '<S192>/Sum7' */
    114.0,                             /* '<S192>/Sum8' */
    422.0,                             /* '<S192>/Sum9' */
    104.0,                             /* '<S191>/Sum1' */
    328.0,                             /* '<S191>/Sum10' */
    436.0,                             /* '<S191>/Sum11' */
    428.0,                             /* '<S191>/Sum12' */
    432.0,                             /* '<S191>/Sum13' */
    440.0,                             /* '<S191>/Sum14' */
    444.0,                             /* '<S191>/Sum15' */
    448.0,                             /* '<S191>/Sum16' */
    452.0,                             /* '<S191>/Sum17' */
    108.0,                             /* '<S191>/Sum2' */
    112.0,                             /* '<S191>/Sum3' */
    100.0,                             /* '<S191>/Sum4' */
    212.0,                             /* '<S191>/Sum5' */
    216.0,                             /* '<S191>/Sum6' */
    220.0,                             /* '<S191>/Sum7' */
    320.0,                             /* '<S191>/Sum8' */
    324.0,                             /* '<S191>/Sum9' */
    2.0,                               /* '<S142>/Add1' */
    0U,                                /* '<S170>/Cast' */
    0U,                                /* '<S687>/Constant' */
    0U,                                /* '<S667>/Constant' */
    0U,                                /* '<S474>/Constant' */
    0U,                                /* '<S454>/Constant' */
    0U,                                /* '<S434>/Constant' */
    0U,                                /* '<S170>/Cast1' */
    0U,                                /* '<S142>/Cast' */
    0,                                 /* '<S292>/Cast' */

    /* Start of '<S655>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S723>/Cast6' */
      0,                               /* '<S723>/Cast' */
      1                                /* '<S723>/NOT' */
    }
    ,

    /* End of '<S655>/RESET Board - Return to initialization' */

    /* Start of '<S193>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S419>/Transmission subtasks1' */
      {
        1U,                            /* '<S714>/Cast8' */
        1U,                            /* '<S708>/Cast' */
        0U                             /* '<S707>/Constant' */
      }
      ,

      /* End of '<S419>/Transmission subtasks1' */

      /* Start of '<S419>/Reception substasks' */
      {
        1U,                            /* '<S704>/Cast13' */
        1U,                            /* '<S704>/Cast3' */
        0U,                            /* '<S704>/Cast15' */
        0U,                            /* '<S704>/Cast6' */
        0,                             /* '<S704>/Cast14' */
        0                              /* '<S704>/Cast5' */
      }
      /* End of '<S419>/Reception substasks' */
    }
    ,

    /* End of '<S193>/COMM Task - Sync bc 1' */

    /* Start of '<S683>/Check msg transmission CAN2' */
    {
      32U                              /* '<S694>/Cast8' */
    }
    ,

    /* End of '<S683>/Check msg transmission CAN2' */

    /* Start of '<S683>/Check msg transmission CAN1' */
    {
      32U                              /* '<S688>/Cast' */
    }
    ,

    /* End of '<S683>/Check msg transmission CAN1' */

    /* Start of '<S652>/Reception substasks' */
    {
      32U,                             /* '<S684>/Cast13' */
      32U,                             /* '<S684>/Cast3' */
      0U,                              /* '<S684>/Cast15' */
      0U,                              /* '<S684>/Cast6' */
      0,                               /* '<S684>/Cast14' */
      0                                /* '<S684>/Cast5' */
    }
    ,

    /* End of '<S652>/Reception substasks' */

    /* Start of '<S663>/Check msg transmission CAN2' */
    {
      31U                              /* '<S674>/Cast8' */
    }
    ,

    /* End of '<S663>/Check msg transmission CAN2' */

    /* Start of '<S663>/Check msg transmission CAN1' */
    {
      31U                              /* '<S668>/Cast' */
    }
    ,

    /* End of '<S663>/Check msg transmission CAN1' */

    /* Start of '<S651>/Reception substasks' */
    {
      31U,                             /* '<S664>/Cast13' */
      31U,                             /* '<S664>/Cast3' */
      0U,                              /* '<S664>/Cast15' */
      0U,                              /* '<S664>/Cast6' */
      0,                               /* '<S664>/Cast14' */
      0                                /* '<S664>/Cast5' */
    }
    ,

    /* End of '<S651>/Reception substasks' */

    /* Start of '<S421>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S525>/Cast6' */
      0,                               /* '<S525>/Cast' */
      1                                /* '<S525>/NOT' */
    }
    ,

    /* End of '<S421>/RESET Board - Return to initialization' */

    /* Start of '<S192>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S419>/Transmission subtasks1' */
      {
        1U,                            /* '<S501>/Cast8' */
        1U,                            /* '<S495>/Cast' */
        0U                             /* '<S494>/Constant' */
      }
      ,

      /* End of '<S419>/Transmission subtasks1' */

      /* Start of '<S419>/Reception substasks' */
      {
        1U,                            /* '<S491>/Cast13' */
        1U,                            /* '<S491>/Cast3' */
        0U,                            /* '<S491>/Cast15' */
        0U,                            /* '<S491>/Cast6' */
        0,                             /* '<S491>/Cast14' */
        0                              /* '<S491>/Cast5' */
      }
      /* End of '<S419>/Reception substasks' */
    }
    ,

    /* End of '<S192>/COMM Task - Sync bc 1' */

    /* Start of '<S418>/Reception substasks' */
    {
      0U,                              /* '<S471>/Cast15' */
      0U,                              /* '<S471>/Cast6' */
      0,                               /* '<S471>/Cast14' */
      0                                /* '<S471>/Cast5' */
    }
    ,

    /* End of '<S418>/Reception substasks' */

    /* Start of '<S417>/Reception substasks' */
    {
      0U,                              /* '<S451>/Cast15' */
      0U,                              /* '<S451>/Cast6' */
      0,                               /* '<S451>/Cast14' */
      0                                /* '<S451>/Cast5' */
    }
    ,

    /* End of '<S417>/Reception substasks' */

    /* Start of '<S416>/Reception substasks' */
    {
      0U,                              /* '<S431>/Cast15' */
      0U,                              /* '<S431>/Cast6' */
      0,                               /* '<S431>/Cast14' */
      0                                /* '<S431>/Cast5' */
    }
    ,

    /* End of '<S416>/Reception substasks' */

    /* Start of '<S201>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S291>/Cast6' */
      0,                               /* '<S291>/Cast' */
      1                                /* '<S291>/NOT' */
    }
    ,

    /* End of '<S201>/RESET Board - Return to initialization' */

    /* Start of '<S198>/Transmission subtasks' */
    {
      0U,                              /* '<S271>/Constant' */

      /* Start of '<S231>/Check msg transmission CAN2' */
      {
        13U                            /* '<S278>/Cast8' */
      }
      ,

      /* End of '<S231>/Check msg transmission CAN2' */

      /* Start of '<S231>/Check msg transmission CAN1' */
      {
        13U                            /* '<S272>/Cast' */
      }
      /* End of '<S231>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S198>/Transmission subtasks' */

    /* Start of '<S198>/Reception substasks' */
    {
      13U,                             /* '<S268>/Cast13' */
      13U,                             /* '<S268>/Cast3' */
      0U,                              /* '<S268>/Cast15' */
      0U,                              /* '<S268>/Cast6' */
      0,                               /* '<S268>/Cast14' */
      0                                /* '<S268>/Cast5' */
    }
    ,

    /* End of '<S198>/Reception substasks' */

    /* Start of '<S197>/Transmission subtasks' */
    {
      0U,                              /* '<S253>/Constant' */

      /* Start of '<S231>/Check msg transmission CAN2' */
      {
        12U                            /* '<S260>/Cast8' */
      }
      ,

      /* End of '<S231>/Check msg transmission CAN2' */

      /* Start of '<S231>/Check msg transmission CAN1' */
      {
        12U                            /* '<S254>/Cast' */
      }
      /* End of '<S231>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S197>/Transmission subtasks' */

    /* Start of '<S197>/Reception substasks' */
    {
      12U,                             /* '<S250>/Cast13' */
      12U,                             /* '<S250>/Cast3' */
      0U,                              /* '<S250>/Cast15' */
      0U,                              /* '<S250>/Cast6' */
      0,                               /* '<S250>/Cast14' */
      0                                /* '<S250>/Cast5' */
    }
    ,

    /* End of '<S197>/Reception substasks' */

    /* Start of '<S196>/Transmission subtasks' */
    {
      0U,                              /* '<S235>/Constant' */

      /* Start of '<S231>/Check msg transmission CAN2' */
      {
        11U                            /* '<S242>/Cast8' */
      }
      ,

      /* End of '<S231>/Check msg transmission CAN2' */

      /* Start of '<S231>/Check msg transmission CAN1' */
      {
        11U                            /* '<S236>/Cast' */
      }
      /* End of '<S231>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S196>/Transmission subtasks' */

    /* Start of '<S196>/Reception substasks' */
    {
      11U,                             /* '<S232>/Cast13' */
      11U,                             /* '<S232>/Cast3' */
      0U,                              /* '<S232>/Cast15' */
      0U,                              /* '<S232>/Cast6' */
      0,                               /* '<S232>/Cast14' */
      0                                /* '<S232>/Cast5' */
    }
    ,

    /* End of '<S196>/Reception substasks' */

    /* Start of '<S195>/Transmission subtasks' */
    {
      1U,                              /* '<S224>/Cast8' */
      1U,                              /* '<S218>/Cast' */
      0U                               /* '<S217>/Constant' */
    }
    ,

    /* End of '<S195>/Transmission subtasks' */

    /* Start of '<S195>/Reception substasks' */
    {
      1U,                              /* '<S214>/Cast13' */
      1U,                              /* '<S214>/Cast3' */
      0U,                              /* '<S214>/Cast15' */
      0U,                              /* '<S214>/Cast6' */
      0,                               /* '<S214>/Cast14' */
      0                                /* '<S214>/Cast5' */
    }
    ,

    /* End of '<S195>/Reception substasks' */

    /* Start of '<S8>/CAN2 Recieve' */
    {
      22.0,                            /* '<S82>/Product' */
      44.0,                            /* '<S82>/Product1' */
      23.0,                            /* '<S82>/Product2' */
      46.0,                            /* '<S82>/Product3' */
      24.0,                            /* '<S82>/Product4' */
      48.0,                            /* '<S82>/Product5' */
      66.0,                            /* '<S82>/Product6' */
      69.0,                            /* '<S82>/Product7' */
      72.0                             /* '<S82>/Product8' */
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
      48.0,                            /* '<S30>/Product5' */
      66.0,                            /* '<S30>/Product6' */
      69.0,                            /* '<S30>/Product7' */
      72.0                             /* '<S30>/Product8' */
    }
    /* End of '<S8>/CAN1 Recieve' */
  }
  /* End of '<S8>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S154>/Constant'
   */
  { 0.0, 100.0, 104.0, 106.0, 108.0, 110.0, 112.0, 212.0, 216.0, 220.0, 320.0,
    322.0, 324.0, 328.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S154>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Data_bc2
   * Referenced by: '<S154>/Constant10'
   */
  { 0.0, 100.0, 104.0, 106.0, 110.0, 210.0, 214.0, 314.0, 318.0, 322.0, 326.0,
    328.0, 332.0 },

  /* Expression: TM_Type_bc2
   * Referenced by: '<S154>/Constant11'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S154>/Constant4'
   */
  { 0.0, 100.0, 104.0, 106.0, 110.0, 114.0, 214.0, 218.0, 318.0, 322.0, 422.0,
    326.0, 330.0, 332.0, 336.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S154>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

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
