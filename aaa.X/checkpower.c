#include "mcc_generated_files/adc.h"
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr0.h"
//#include "checkonebit.h"

//sadece power class? a�?p onebit i?lemi de ayn? class da yap?labilir ?imdilik b�yle yapt?m

void checkpower(void)
{
   0021H = 8;
   0022H = 0;
   
   for(0021H=8 ; 0021H>0; 0021H--)
   {        
    
    checkonebit(void);
    
    if (0012H == 1)
    {
        //her seferinde say? eskisinin �st�ne eklenecek 
        //e?er bu y�ntemle yapacaksak o ?ekilde kodu yaz?cam
        //0022H = 
    }
    else 
    {
        0022H = 0022H;
    }
   }     
  
}