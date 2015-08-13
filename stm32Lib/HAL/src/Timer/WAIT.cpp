#include "TIMER/WAIT.hpp"

//using namespace STM32LIB;
namespace STM32LIB{

volatile uint32_t WAIT::_Milliseconds=0;
volatile uint32_t WAIT::_Seconds=0;


/** \memberof WAIT
 *  \brief The SysTick interrupt function
 *  \details Note the extern "C" and the weak attribute (this allows to be used for other libs)
 */
extern "C" {
  void __attribute__ ((interrupt("IRQ"))) SysTick_Handler(void) {
     STM32LIB::WAIT::_Milliseconds++;
     if(STM32LIB::WAIT::_Milliseconds%1000 == 999){
         STM32LIB::WAIT::_Seconds++;
     }
  }
}
}
