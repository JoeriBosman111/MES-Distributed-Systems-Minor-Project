/* 
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * 
 * File: HANcoder_E407_TTA_Template_DS_data.c
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



    
#include "HANcoder_E407_TTA_Template_DS.h"



    


    


    


    


    


    


    


    


    


    


            /* Invariant block signals (default storage) */
                                         const  ConstBlockIO rtConstB = {
                        

            /* Start of '<S8>/TTA System' */ { 

            
                            84.0 ,/* '<S175>/Sum1' */



            
                            372.0 ,/* '<S175>/Sum17' */



            
                            270.0 ,/* '<S175>/Sum18' */



            
                            88.0 ,/* '<S175>/Sum2' */



            
                            170.0 ,/* '<S175>/Sum3' */



            
                            80.0 ,/* '<S175>/Sum4' */



            
                            254.0 ,/* '<S175>/Sum5' */



            
                            174.0 ,/* '<S175>/Sum6' */



            
                            258.0 ,/* '<S175>/Sum7' */



            
                            262.0 ,/* '<S175>/Sum8' */



            
                            266.0 ,/* '<S175>/Sum9' */



            
                            84.0 ,/* '<S174>/Sum1' */



            
                            346.0 ,/* '<S174>/Sum10' */



            
                            270.0 ,/* '<S174>/Sum11' */



            
                            372.0 ,/* '<S174>/Sum17' */



            
                            274.0 ,/* '<S174>/Sum18' */



            
                            88.0 ,/* '<S174>/Sum2' */



            
                            174.0 ,/* '<S174>/Sum3' */



            
                            80.0 ,/* '<S174>/Sum4' */



            
                            258.0 ,/* '<S174>/Sum5' */



            
                            178.0 ,/* '<S174>/Sum6' */



            
                            262.0 ,/* '<S174>/Sum7' */



            
                            94.0 ,/* '<S174>/Sum8' */



            
                            342.0 ,/* '<S174>/Sum9' */



            
                            84.0 ,/* '<S173>/Sum1' */



            
                            268.0 ,/* '<S173>/Sum10' */



            
                            356.0 ,/* '<S173>/Sum11' */



            
                            348.0 ,/* '<S173>/Sum12' */



            
                            352.0 ,/* '<S173>/Sum13' */



            
                            360.0 ,/* '<S173>/Sum14' */



            
                            364.0 ,/* '<S173>/Sum15' */



            
                            368.0 ,/* '<S173>/Sum16' */



            
                            372.0 ,/* '<S173>/Sum17' */



            
                            88.0 ,/* '<S173>/Sum2' */



            
                            92.0 ,/* '<S173>/Sum3' */



            
                            80.0 ,/* '<S173>/Sum4' */



            
                            172.0 ,/* '<S173>/Sum5' */



            
                            176.0 ,/* '<S173>/Sum6' */



            
                            180.0 ,/* '<S173>/Sum7' */



            
                            260.0 ,/* '<S173>/Sum8' */



            
                            264.0 ,/* '<S173>/Sum9' */



            
                            2.0 ,/* '<S124>/Add1' */



            
                            0U ,/* '<S152>/Cast' */



            
                            0U ,/* '<S152>/Cast1' */



            
                            0U ,/* '<S124>/Cast' */



            
                            0 ,/* '<S274>/Cast' */



            /* Start of '<S634>/RESET Board - Return to initialization' */ { 

            
                            0U ,/* '<S702>/Cast6' */



            
                            0 ,/* '<S702>/Cast' */



            
                            1 /* '<S702>/NOT' */



 }
,
/* End of '<S634>/RESET Board - Return to initialization' */


            /* Start of '<S175>/COMM Task - Sync bc 1' */ { 

            /* Start of '<S401>/Transmission subtasks1' */ { 

            
                            1U ,/* '<S693>/Cast8' */



            
                            1U /* '<S687>/Cast' */



 }
,
/* End of '<S401>/Transmission subtasks1' */


            /* Start of '<S401>/Reception substasks' */ { 

            
                            1U ,/* '<S683>/Cast13' */



            
                            1U ,/* '<S683>/Cast3' */



            
                            0U ,/* '<S683>/Cast15' */



            
                            0U ,/* '<S683>/Cast6' */



            
                            0 ,/* '<S683>/Cast14' */



            
                            0 /* '<S683>/Cast5' */



 }
/* End of '<S401>/Reception substasks' */


 }
,
/* End of '<S175>/COMM Task - Sync bc 1' */


            /* Start of '<S662>/Check msg transmission CAN2' */ { 

            
                            32U /* '<S673>/Cast8' */



 }
,
/* End of '<S662>/Check msg transmission CAN2' */


            /* Start of '<S662>/Check msg transmission CAN1' */ { 

            
                            32U /* '<S667>/Cast' */



 }
,
/* End of '<S662>/Check msg transmission CAN1' */


            /* Start of '<S631>/Reception substasks' */ { 

            
                            32U ,/* '<S663>/Cast13' */



            
                            32U ,/* '<S663>/Cast3' */



            
                            0U ,/* '<S663>/Cast15' */



            
                            0U ,/* '<S663>/Cast6' */



            
                            0 ,/* '<S663>/Cast14' */



            
                            0 /* '<S663>/Cast5' */



 }
,
/* End of '<S631>/Reception substasks' */


            /* Start of '<S642>/Check msg transmission CAN2' */ { 

            
                            31U /* '<S653>/Cast8' */



 }
,
/* End of '<S642>/Check msg transmission CAN2' */


            /* Start of '<S642>/Check msg transmission CAN1' */ { 

            
                            31U /* '<S647>/Cast' */



 }
,
/* End of '<S642>/Check msg transmission CAN1' */


            /* Start of '<S630>/Reception substasks' */ { 

            
                            31U ,/* '<S643>/Cast13' */



            
                            31U ,/* '<S643>/Cast3' */



            
                            0U ,/* '<S643>/Cast15' */



            
                            0U ,/* '<S643>/Cast6' */



            
                            0 ,/* '<S643>/Cast14' */



            
                            0 /* '<S643>/Cast5' */



 }
,
/* End of '<S630>/Reception substasks' */


            /* Start of '<S403>/RESET Board - Return to initialization' */ { 

            
                            0U ,/* '<S503>/Cast6' */



            
                            0 ,/* '<S503>/Cast' */



            
                            1 /* '<S503>/NOT' */



 }
,
/* End of '<S403>/RESET Board - Return to initialization' */


            /* Start of '<S174>/COMM Task - Sync bc 1' */ { 

            /* Start of '<S401>/Transmission subtasks1' */ { 

            
                            1U ,/* '<S483>/Cast8' */



            
                            1U /* '<S477>/Cast' */



 }
,
/* End of '<S401>/Transmission subtasks1' */


            /* Start of '<S401>/Reception substasks' */ { 

            
                            1U ,/* '<S473>/Cast13' */



            
                            1U ,/* '<S473>/Cast3' */



            
                            0U ,/* '<S473>/Cast15' */



            
                            0U ,/* '<S473>/Cast6' */



            
                            0 ,/* '<S473>/Cast14' */



            
                            0 /* '<S473>/Cast5' */



 }
/* End of '<S401>/Reception substasks' */


 }
,
/* End of '<S174>/COMM Task - Sync bc 1' */


            /* Start of '<S400>/Reception substasks' */ { 

            
                            0U ,/* '<S453>/Cast15' */



            
                            0U ,/* '<S453>/Cast6' */



            
                            0 ,/* '<S453>/Cast14' */



            
                            0 /* '<S453>/Cast5' */



 }
,
/* End of '<S400>/Reception substasks' */


            /* Start of '<S399>/Reception substasks' */ { 

            
                            0U ,/* '<S433>/Cast15' */



            
                            0U ,/* '<S433>/Cast6' */



            
                            0 ,/* '<S433>/Cast14' */



            
                            0 /* '<S433>/Cast5' */



 }
,
/* End of '<S399>/Reception substasks' */


            /* Start of '<S398>/Reception substasks' */ { 

            
                            0U ,/* '<S413>/Cast15' */



            
                            0U ,/* '<S413>/Cast6' */



            
                            0 ,/* '<S413>/Cast14' */



            
                            0 /* '<S413>/Cast5' */



 }
,
/* End of '<S398>/Reception substasks' */


            /* Start of '<S183>/RESET Board - Return to initialization' */ { 

            
                            0U ,/* '<S273>/Cast6' */



            
                            0 ,/* '<S273>/Cast' */



            
                            1 /* '<S273>/NOT' */



 }
,
/* End of '<S183>/RESET Board - Return to initialization' */


            /* Start of '<S180>/Transmission subtasks' */ { 

            
                            13U ,/* '<S260>/Cast8' */



            
                            13U /* '<S254>/Cast' */



 }
,
/* End of '<S180>/Transmission subtasks' */


            /* Start of '<S180>/Reception substasks' */ { 

            
                            13U ,/* '<S250>/Cast13' */



            
                            13U ,/* '<S250>/Cast3' */



            
                            0U ,/* '<S250>/Cast15' */



            
                            0U ,/* '<S250>/Cast6' */



            
                            0 ,/* '<S250>/Cast14' */



            
                            0 /* '<S250>/Cast5' */



 }
,
/* End of '<S180>/Reception substasks' */


            /* Start of '<S179>/Transmission subtasks' */ { 

            
                            12U ,/* '<S242>/Cast8' */



            
                            12U /* '<S236>/Cast' */



 }
,
/* End of '<S179>/Transmission subtasks' */


            /* Start of '<S179>/Reception substasks' */ { 

            
                            12U ,/* '<S232>/Cast13' */



            
                            12U ,/* '<S232>/Cast3' */



            
                            0U ,/* '<S232>/Cast15' */



            
                            0U ,/* '<S232>/Cast6' */



            
                            0 ,/* '<S232>/Cast14' */



            
                            0 /* '<S232>/Cast5' */



 }
,
/* End of '<S179>/Reception substasks' */


            /* Start of '<S178>/Transmission subtasks' */ { 

            
                            11U ,/* '<S224>/Cast8' */



            
                            11U /* '<S218>/Cast' */



 }
,
/* End of '<S178>/Transmission subtasks' */


            /* Start of '<S178>/Reception substasks' */ { 

            
                            11U ,/* '<S214>/Cast13' */



            
                            11U ,/* '<S214>/Cast3' */



            
                            0U ,/* '<S214>/Cast15' */



            
                            0U ,/* '<S214>/Cast6' */



            
                            0 ,/* '<S214>/Cast14' */



            
                            0 /* '<S214>/Cast5' */



 }
,
/* End of '<S178>/Reception substasks' */


            /* Start of '<S177>/Transmission subtasks' */ { 

            
                            1U ,/* '<S206>/Cast8' */



            
                            1U /* '<S200>/Cast' */



 }
,
/* End of '<S177>/Transmission subtasks' */


            /* Start of '<S177>/Reception substasks' */ { 

            
                            1U ,/* '<S196>/Cast13' */



            
                            1U ,/* '<S196>/Cast3' */



            
                            0U ,/* '<S196>/Cast15' */



            
                            0U ,/* '<S196>/Cast6' */



            
                            0 ,/* '<S196>/Cast14' */



            
                            0 /* '<S196>/Cast5' */



 }
,
/* End of '<S177>/Reception substasks' */


            /* Start of '<S8>/CAN2 Recieve' */ { 

            
                            22.0 ,/* '<S73>/Product' */



            
                            44.0 ,/* '<S73>/Product1' */



            
                            23.0 ,/* '<S73>/Product2' */



            
                            46.0 ,/* '<S73>/Product3' */



            
                            24.0 ,/* '<S73>/Product4' */



            
                            48.0 /* '<S73>/Product5' */



 }
,
/* End of '<S8>/CAN2 Recieve' */


            /* Start of '<S8>/CAN1 Recieve' */ { 

            
                            22.0 ,/* '<S30>/Product' */



            
                            44.0 ,/* '<S30>/Product1' */



            
                            23.0 ,/* '<S30>/Product2' */



            
                            46.0 ,/* '<S30>/Product3' */



            
                            24.0 ,/* '<S30>/Product4' */



            
                            48.0 /* '<S30>/Product5' */



 }
/* End of '<S8>/CAN1 Recieve' */


 }
/* End of '<S8>/TTA System' */


    
            };

        
        /* Constant parameters (default storage) */
                                                const  ConstParam rtConstP = {
                                        
                            /* Expression: TM_Data_bc0
  * Referenced by: '<S136>/Constant'
   */
            {   0.0, 80.0, 84.0, 86.0, 88.0, 90.0, 92.0, 172.0, 176.0, 180.0, 260.0, 262.0, 264.0, 268.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0 }                 ,
                        
                            /* Expression: TM_Type_bc0
  * Referenced by: '<S136>/Constant1'
   */
            {   0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }                 ,
                        
                            /* Expression: TM_Data_bc2
  * Referenced by: '<S136>/Constant10'
   */
            {   0.0, 80.0, 84.0, 86.0, 90.0, 170.0, 174.0, 254.0, 258.0, 262.0, 266.0, 268.0, 272.0 }                 ,
                        
                            /* Expression: TM_Type_bc2
  * Referenced by: '<S136>/Constant11'
   */
            {   0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }                 ,
                        
                            /* Expression: TM_Data_bc1
  * Referenced by: '<S136>/Constant4'
   */
            {   0.0, 80.0, 84.0, 86.0, 90.0, 94.0, 174.0, 178.0, 258.0, 262.0, 342.0, 266.0, 270.0, 272.0, 276.0 }                 ,
                        
                            /* Expression: TM_Type_bc1
  * Referenced by: '<S136>/Constant5'
   */
            {   0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 }                 ,
                        
                            /* Computed Parameter: Logic_table
  * Referenced by: '<S13>/Logic'
   */
            {   false, false, true, true, true, false, true, false, true, true, false, false, false, true, false, true } 
            

            };

        

    




    


    


    


    


    


    


    


    


    


/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

