#pragma once

#ifndef CLOCKSOURCE_HPP_INCLUDED
#define CLOCKSOURCE_HPP_INCLUDED

#include "Config/config.h"

namespace STM32LIB{

/**
     *  \brief Peripheral Clock Source Control.
     *  \details Alllows to select the peripheral clock.<br>
     *  Example usage:
     * \code
        #include "RCC/ClockSource.hpp"

        using namespace STM32LIB;

        ClockSource<I2C1>::set<ClockSource<I2C1>::SYSCLK>(); //Sets the I2C 1 clock to the SYSCLK

        \endcode
     *
     * \tparam Peripheral    The peripheral we want to control. The names are defined in \ref PeripheralName
     * \warning Not all peripherals have a clock source control
     */
    template<PeripheralName Peripheral>
    struct ClockSource{
        enum _Source{};
        /// \tparam SOURCE The clock source for the Peripheral
        template<_Source SOURCE>
        static void set(){};
    };

    template<>
    struct ClockSource<I2C1>{
        /// \brief Clock source
        enum _Source{
            HSI, /**<  HSI clock selected as I2C1 clock source (default) */
            SYSCLK /**< System clock (SYSCLK) selected as I2C1 clock */
        };
        template<_Source SOURCE>
        static void set(){
            STM32LIB::REG::RCC::CFGR3::I2C1SW::write(SOURCE);
        }
    };

    template<>
    struct ClockSource<USART1>{
         /// \brief Clock source
        enum _Source{
            PCLK,   /**<  PCLK selected as USART1 clock source (default) */
            SYSCLK, /**< System clock (SYSCLK) selected as USART1 clock */
            LSE,    /**<  LSE clock selected as USART1 clock */
            HSI     /**<  HSI clock selected as USART1 clock */
        };
        template<_Source SOURCE>
        static void set(){
            STM32LIB::REG::RCC::CFGR3::USART1SW::write(SOURCE);
        }
    };
    /// \warning May not be valid. It has no documentation, but the svd file describes this...
    template<>
    struct ClockSource<USART2>{
         /// \brief Clock source
        enum _Source{
            PCLK,   /**<  PCLK selected as USART2 clock source (default) */
            SYSCLK, /**< System clock (SYSCLK) selected as USART2 clock */
            LSE,    /**<  LSE clock selected as USART2 clock */
            HSI     /**<  HSI clock selected as USART2 clock */
        };
        template<_Source SOURCE>
        static void set(){
            STM32LIB::REG::RCC::CFGR3::USART2SW::write(SOURCE);
        }
    };

    /** \brief
     *
     * \param
     * \param
     * \return
     *
     */
    template<ClockName Clock>
    struct SystemClock{
        static void enable();
    };

    template<>
    struct SystemClock<HSI>{
        static void enable(){
            STM32LIB::REG::RCC::CR::HSION::set(); //Enable the HSI Clcok
            //disable all the other clocks
            STM32LIB::REG::RCC::CR::HSEON::clear();
            STM32LIB::REG::RCC::CR::CSSON::clear();
            STM32LIB::REG::RCC::CR::PLLON::clear();
        }
        static void calibrate(){}
    };


}


#endif /* CLOCKSOURCE_HPP_INCLUDED */
