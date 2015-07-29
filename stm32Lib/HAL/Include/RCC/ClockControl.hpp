#pragma once

#ifndef RCC_HPP_INCLUDED
#define RCC_HPP_INCLUDED

#include "Config/config.h"

namespace STM32LIB{

    /** \brief Reset and Clock Control acesss.
     *  \details Alllows to enable/disable peripheral clock.<br>
     *  Example usage:
     * \code
        #include "RCC/ClockControl.hpp"

        using namespace STM32LIB;

        int main (void){

            ClockControl<GPIOA>::on(); //This enables the GPIOA peripheral clock
        }
        \endcode
     *
     * \tparam Peripheral    The peripheral we want to control. The names are defined in \ref PeripheralName
     * \warning The specific MCU may not have all the peripherals in the \ref PeripheralName group
     */
    template<PeripheralName Peripheral>
    struct ClockControl{
        static void on(){}     /**< Enables the Peripheral clock*/
        static void off(){}    /**< Disables the Peripheral clock */
        static void reset(){}  /**< Resets the Peripheral */
    };


    /// @cond

    template<>
    struct ClockControl<PERIPHERAL_ADC1>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_ADCEN);

        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_ADCEN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_ADCRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_CRC>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_CRCEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_CRCEN);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_DEBUG>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_DBGMCUEN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_DBGMCUEN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_DBGMCURST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_DMA1>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_DMAEN);
        }
        static void off(){
             BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_DMAEN);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_FLASH>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_FLITFEN);
        }
        static void off(){
             BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_FLITFEN);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_GPIOA>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_GPIOAEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_GPIOAEN);
        }
        static void reset(){
            BIT_SET(RCC->AHBRSTR, RCC_AHBRSTR_GPIOARST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_GPIOB>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_GPIOBEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_GPIOBEN);
        }
        static void reset(){
            BIT_SET(RCC->AHBRSTR, RCC_AHBRSTR_GPIOBRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_GPIOC>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_GPIOCEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_GPIOCEN);
        }
        static void reset(){
            BIT_SET(RCC->AHBRSTR, RCC_AHBRSTR_GPIOCRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_GPIOD>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_GPIODEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_GPIODEN);
        }
        static void reset(){
            BIT_SET(RCC->AHBRSTR, RCC_AHBRSTR_GPIODRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_GPIOF>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_GPIOFEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_GPIOFEN);
        }
        static void reset(){
            BIT_SET(RCC->AHBRSTR, RCC_AHBRSTR_GPIOFRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_I2C1>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_I2C1EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_I2C1EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_I2C1RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_I2C2>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_I2C2EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_I2C2EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_I2C2RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_POWER>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_PWREN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_PWREN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_PWRRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_SPI1>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_SPI1EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_SPI1EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_SPI1RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_SPI2>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_SPI2EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_SPI2EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_SPI2RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_SRAM>{
        static void on(){
            BIT_SET(RCC->AHBENR, RCC_AHBENR_SRAMEN);
        }
        static void off(){
            BIT_CLEAR(RCC->AHBENR, RCC_AHBENR_SRAMEN);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_SYSCFG>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_SYSCFGRST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER1>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_TIM1EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_TIM1EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_TIM1RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER3>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_TIM3EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_TIM3EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_TIM3RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER6>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_TIM6EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_TIM6EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_TIM6RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER14>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_TIM14EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_TIM14EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_TIM14RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER15>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_TIM15EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_TIM15EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_TIM15RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER16>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_TIM16EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_TIM16EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_TIM16RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_TIMER17>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_TIM17EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_TIM17EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_TIM17RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_USART1>{
        static void on(){
            BIT_SET(RCC->APB2ENR, RCC_APB2ENR_USART1EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB2ENR, RCC_APB2ENR_USART1EN);
        }
        static void reset(){
            BIT_SET(RCC->APB2RSTR, RCC_APB2RSTR_USART1RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_USART2>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_USART2EN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_USART2EN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_USART2RST);
        }
    };

    template<>
    struct ClockControl<PERIPHERAL_WWD>{
        static void on(){
            BIT_SET(RCC->APB1ENR, RCC_APB1ENR_WWDGEN);
        }
        static void off(){
            BIT_CLEAR(RCC->APB1ENR, RCC_APB1ENR_WWDGEN);
        }
        static void reset(){
            BIT_SET(RCC->APB1RSTR, RCC_APB1RSTR_WWDGRST);
        }
    };

    /// @endcond




}


#endif /* RCC_HPP_INCLUDED */
