#ifndef WAIT_STM32LIB_H_INCLUDED
#define WAIT_STM32LIB_H_INCLUDED

#include "config.h"
#include "core_cm0.h"

//CHECK IT WITH
// https://github.com/andysworkshop/stm32plus/blob/master/lib/src/timing/MillisecondTimer.cpp
// https://github.com/andysworkshop/stm32plus/blob/master/lib/include/timing/MillisecondTimer.h
// https://github.com/andysworkshop/stm32plus/blob/master/examples/button/button.cpp


namespace STM32LIB{
/**
 * \brief The class that implements the active waiting pause
 * \details It uses the SysTick that fires an interrupt each 1ms.
 * All the elements are static so it doesn't need to be initialized.
 * \code
    int main (void){
        WAIT::init();   //sets the SysTick timer to fire each ms, activate the interrupts
                        //note that the class isn't instantiated
        WAIT::wait_ms(100); //wait 100ms
    }
    \endcode
    \see STM32LIB::SysTick_Handler(void)
 */
class WAIT{
    public:
        /**
         *  \brief Initiate the SysTick timer and sets the interrupts
         */
        static void init(void);

        /**
         *  \brief Wait for ms milliseconds
         *  \param ms the number of milliseconds to wait
         */
        static void wait_ms(uint32_t ms);

        /**
         *  \brief Wait for ms seconds
         *  \param s the number of seconds to wait
         */
        static void wait_s(uint32_t s);
        //friend void __attribute__ ((weak,interrupt("IRQ"))) SysTick_Handler(void);
    public:
        /** \brief Internal milliseconds counter */
        volatile static uint32_t _Milliseconds;

        /** \brief Internal seconds counter */
        volatile static uint32_t _Seconds;
};
}

#endif /* WAIT_STM32LIB_H_INCLUDED */
