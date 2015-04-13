#include "WAIT.h"

//using namespace STM32LIB;
namespace STM32LIB{
volatile uint32_t WAIT::_Milliseconds=0;
volatile uint32_t WAIT::_Seconds=0;

void WAIT::init(void){
    _Seconds=0;
    _Milliseconds=0;
    SystemCoreClockUpdate(); //Update SystemCoreClock variable to current clock speed
    SysTick_Config(SystemCoreClock*1e-3); //Set up a systick interrupt every millisecond
}

void WAIT::wait_ms(uint32_t ms){
    volatile uint32_t MSStart = _Milliseconds;
    while((_Milliseconds - MSStart)<ms){
        asm volatile("nop");
     }
}

 void WAIT::wait_s(uint32_t s){
    volatile uint32_t Ss = _Seconds;
    while((_Seconds - Ss)<s) {
        asm volatile("nop");
     }
}

/** \memberof WAIT
 *  \brief The SysTick interrupt function
 *  \details Note the extern "C" and the weak attribute (this allows to be used for other libs)
 */
extern "C" {
  void __attribute__ ((weak,interrupt("IRQ"))) SysTick_Handler(void) {
     STM32LIB::WAIT::_Milliseconds++;
     if(STM32LIB::WAIT::_Milliseconds%1000 == 999){
         STM32LIB::WAIT::_Seconds++;
     }
  }
}
}
