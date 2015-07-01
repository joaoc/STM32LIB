#pragma once

#ifndef RCC_HPP_INCLUDED
#define RCC_HPP_INCLUDED

#include "Config/config.h"

namespace STM32LIB{

    /** \brief Reset and Clock Control acesss.
     *  \details Alllows to enable/disable peripheral clock.<br>
     *  Example usage:
     * \code
        #include "RCC/RCC.hpp"

        using namespace STM32LIB;

        int main (void){

            RCC<GPIOA>::on(); //This enables the GPIOA peripheral clock
        }
        \endcode
     *
     * \tparam Peripheral    The peripheral we want to control. The names are defined in \ref PeripheralName
     * \warning The specific MCU may not have all the peripherals in the \ref PeripheralName group
     */
    template<PeripheralName Peripheral>
    struct RCC{
        static void on(){}     /**< Enables the Peripheral clock*/
        static void off(){}    /**< Disables the Peripheral clock */
        static void reset(){}  /**< Resets the Peripheral */
    };


    /// @cond

    template<>
    struct RCC<ADC1>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::ADCEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::ADCEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::ADCRST::set();
        }
    };

    template<>
    struct RCC<CRC>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::CRCEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::CRCEN::clear();
        }
    };

    template<>
    struct RCC<DEBUG>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::DBGMCUEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::DBGMCUEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::DBGMCURST::set();
        }
    };

    template<>
    struct RCC<DMA1>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::DMAEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::DMAEN::clear();
        }
    };

    template<>
    struct RCC<FLASH>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::FLITFEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::FLITFEN::clear();
        }
    };

    template<>
    struct RCC<GPIOA>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::IOPAEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::IOPAEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::AHBRSTR::IOPARST::set();
        }
    };

    template<>
    struct RCC<GPIOB>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::IOPBEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::IOPBEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::AHBRSTR::IOPBRST::set();
        }
    };

    template<>
    struct RCC<GPIOC>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::IOPCEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::IOPCEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::AHBRSTR::IOPCRST::set();
        }
    };

    template<>
    struct RCC<GPIOD>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::IOPDEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::IOPDEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::AHBRSTR::IOPDRST::set();
        }
    };

    template<>
    struct RCC<GPIOF>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::IOPFEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::IOPFEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::AHBRSTR::IOPFRST::set();
        }
    };

    template<>
    struct RCC<I2C1>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::I2C1EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::I2C1EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::I2C1RST::set();
        }
    };

    template<>
    struct RCC<I2C2>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::I2C2EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::I2C2EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::I2C2RST::set();
        }
    };

    template<>
    struct RCC<POWER>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::PWREN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::PWREN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::PWRRST::set();
        }
    };

    template<>
    struct RCC<SPI1>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::SPI1EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::SPI1EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::SPI1RST::set();
        }
    };

    template<>
    struct RCC<SPI2>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::SPI2EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::SPI2EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::SPI2RST::set();
        }
    };

    template<>
    struct RCC<SRAM>{
        static void on(){
            STM32LIB::REG::RCC::AHBENR::SRAMEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::AHBENR::SRAMEN::clear();
        }
    };

    template<>
    struct RCC<SYSCFG>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::SYSCFGEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::SYSCFGEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::SYSCFGRST::set();
        }
    };

    template<>
    struct RCC<TIMER1>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::TIM1EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::TIM1EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::TIM1RST::set();
        }
    };

    template<>
    struct RCC<TIMER3>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::TIM3EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::TIM3EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::TIM3RST::set();
        }
    };

    template<>
    struct RCC<TIMER6>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::TIM6EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::TIM6EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::TIM6RST::set();
        }
    };

    template<>
    struct RCC<TIMER14>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::TIM14EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::TIM14EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::TIM14RST::set();
        }
    };

    template<>
    struct RCC<TIMER15>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::TIM15EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::TIM15EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::TIM15RST::set();
        }
    };

    template<>
    struct RCC<TIMER16>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::TIM16EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::TIM16EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::TIM16RST::set();
        }
    };

    template<>
    struct RCC<TIMER17>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::TIM17EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::TIM17EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::TIM17RST::set();
        }
    };

    template<>
    struct RCC<USART1>{
        static void on(){
            STM32LIB::REG::RCC::APB2ENR::USART1EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB2ENR::USART1EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB2RSTR::USART1RST::set();
        }
    };

    template<>
    struct RCC<USART2>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::USART2EN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::USART2EN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::USART2RST::set();
        }
    };

    template<>
    struct RCC<WWD>{
        static void on(){
            STM32LIB::REG::RCC::APB1ENR::WWDGEN::set();
        }
        static void off(){
            STM32LIB::REG::RCC::APB1ENR::WWDGEN::clear();
        }
        static void reset(){
            STM32LIB::REG::RCC::APB1RSTR::WWDGRST::set();
        }
    };

    /// @endcond




}


#endif /* RCC_HPP_INCLUDED */
