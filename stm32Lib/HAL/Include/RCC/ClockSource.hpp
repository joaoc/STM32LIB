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
    struct ClockSource<PERIPHERAL_I2C1>{
        /// \brief Clock source
        enum _Source{
            HSI = 0, /**<  HSI clock selected as I2C1 clock source (default) */
            SYSCLK = 1 /**< System clock (SYSCLK) selected as I2C1 clock */
        };
        template<_Source SOURCE>
        static void set(){
            BIT_WRITE(RCC->CFGR3,RCC_CFGR3_I2C1SW,SOURCE);
        }
    };

    template<>
    struct ClockSource<PERIPHERAL_USART1>{
         /// \brief Clock source
        enum _Source{
            PCLK = 0,   /**<  PCLK selected as USART1 clock source (default) */
            SYSCLK = 1, /**< System clock (SYSCLK) selected as USART1 clock */
            LSE = 2,    /**<  LSE clock selected as USART1 clock */
            HSI = 3     /**<  HSI clock selected as USART1 clock */
        };
        template<_Source SOURCE>
        static void set(){
            BIT_WRITE(RCC->CFGR3,RCC_CFGR3_USART1SW,SOURCE);
        }
    };
    /// \warning May not be valid. It has no documentation, but the svd file describes this...
    template<>
    struct ClockSource<PERIPHERAL_USART2>{
         /// \brief Clock source
        enum _Source{
            PCLK,   /**<  PCLK selected as USART2 clock source (default) */
            SYSCLK, /**< System clock (SYSCLK) selected as USART2 clock */
            LSE,    /**<  LSE clock selected as USART2 clock */
            HSI     /**<  HSI clock selected as USART2 clock */
        };
        template<_Source SOURCE>
        static void set(){
            BIT_WRITE(RCC->CFGR3,RCC_CFGR3_USART2SW,SOURCE);
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
            //Enable the HSI Clcok
            BIT_SET(RCC->CR, RCC_CR_HSION);
            //disable all the other clocks
            BIT_CLEAR(RCC->CR, RCC_CR_HSEON);
            BIT_CLEAR(RCC->CR, RCC_CR_CSSON);
            BIT_CLEAR(RCC->CR, RCC_CR_PLLON);
        }
        static void calibrate(){}
    };


}


#endif /* CLOCKSOURCE_HPP_INCLUDED */
