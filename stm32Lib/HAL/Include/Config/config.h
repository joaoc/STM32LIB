#pragma once
#ifndef CONFIG__STM32LIB_H_INCLUDED
#define CONFIG__STM32LIB_H_INCLUDED

#include <stdint.h>
#include "Peripheral.h"

//For the STM32F0
#ifdef STM32F0XX

//#include "RegisterAccess/MCU/HPP/STM32F030.hpp"

#include "stm32f0xx_conf.h"
#include <system_stm32f0xx.h>
#include "stm32f0xx.h"


#endif /* STM32F0XX */


#define BIT_GET(p,m) ((p) & (m))
#define BIT_SET(p,m) ((p) |= (m))
#define BIT_CLEAR(p,m) ((p) &= ~(m))
#define BIT_TOGGLE(p,m) ((p) ^= (m))
//#define BIT_WRITE(c,p,m) (c ? bit_set(p,m) : bit_clear(p,m))
#define BIT_WRITE(p,m,v) ((p) = ((v << GET_OFFSET(m)) & m))

//! Create a bitmask of length len.
#define BIT_MASK(len)           ( BIT(len)-1 )
//! Create a bitfield mask of length starting at bit start.
#define BF_MASK(start, len)     ( BIT_MASK(len)<<(start) )
//! Prepare a bitmask for insertion or combining.
#define BF_PREP(x, start, len)  ( ((x)&BIT_MASK(len)) << (start) )
//! Extract a bitfield of length len starting at bit start from y.
#define BF_GET(y, start, len)   ( ((y)>>(start)) & BIT_MASK(len) )
//! Insert a new bitfield value x into y.
#define BF_SET(y, x, start, len)    ( y= ((y) &~ BF_MASK(start, len)) | BF_PREP(x, start, len) )

constexpr static const int Mod37BitPosition[] = // map a bit value mod 37 to its position
{
  32, 0, 1, 26, 2, 23, 27, 0, 3, 16, 24, 30, 28, 11, 0, 13, 4,
  7, 17, 0, 25, 22, 31, 15, 29, 10, 12, 6, 0, 21, 14, 9, 5,
  20, 8, 19, 18
};

constexpr unsigned long BIT(uint8_t bit){
    return (unsigned long)0x00000001 << (bit);
}

constexpr unsigned long GET_OFFSET(uint32_t mask){
    return (Mod37BitPosition[(-mask & mask) % 37]+1);
}

enum PeripheralName {
    PERIPHERAL_ADC1,                //!< PERIPHERAL_ADC1
    PERIPHERAL_ADC2,                //!< PERIPHERAL_ADC2
    PERIPHERAL_ADC3,                //!< PERIPHERAL_ADC3
    PERIPHERAL_BACKUP,              //!< PERIPHERAL_BACKUP
    PERIPHERAL_CRC,                 //!< PERIPHERAL_CRC
    PERIPHERAL_DAC1,                //!< PERIPHERAL_DAC1
    PERIPHERAL_DAC2,                //!< PERIPHERAL_DAC2
    PERIPHERAL_DEBUG,               //!< PERIPHERAL_MCU_DEBUG
    PERIPHERAL_DMA1,                //!< PERIPHERAL_DMA1
    PERIPHERAL_DMA2,                //!< PERIPHERAL_DMA2
    PERIPHERAL_FLASH,               //!< FLASH Interface
    PERIPHERAL_FSMC,                //!< PERIPHERAL_FSMC
    PERIPHERAL_FMC,                 //!< PERIPHERAL_FMC
    PERIPHERAL_GPIOA,               //!< PERIPHERAL_GPIOA
    PERIPHERAL_GPIOB,               //!< PERIPHERAL_GPIOB
    PERIPHERAL_GPIOC,               //!< PERIPHERAL_GPIOC
    PERIPHERAL_GPIOD,               //!< PERIPHERAL_GPIOD
    PERIPHERAL_GPIOE,               //!< PERIPHERAL_GPIOE
    PERIPHERAL_GPIOF,               //!< PERIPHERAL_GPIOF
    PERIPHERAL_HASH,                //!< PERIPHERAL_HASH
    PERIPHERAL_I2C1,                //!< PERIPHERAL_I2C1
    PERIPHERAL_I2C2,                //!< PERIPHERAL_I2C2
    PERIPHERAL_I2C3,                //!< PERIPHERAL_I2C3
    PERIPHERAL_I2S2,                //!< PERIPHERAL_I2S2
    PERIPHERAL_I2S3,                //!< PERIPHERAL_I2S3
    PERIPHERAL_MAC,                 //!< PERIPHERAL_MAC
    PERIPHERAL_MAC_REMAP,           //!< PERIPHERAL_MAC_REMAP
    PERIPHERAL_OTG_FS,              //!< internal OTG FS PHY
    PERIPHERAL_OTG_HS,              //!< internal OTG HS PHY
    PERIPHERAL_POWER,               //!< PERIPHERAL_POWER
    PERIPHERAL_RNG,                 //!< PERIPHERAL_RNG
    PERIPHERAL_SDIO,                //!< PERIPHERAL_SDIO
    PERIPHERAL_SPI1,                //!< PERIPHERAL_SPI1
    PERIPHERAL_SPI1_REMAP,          //!< PERIPHERAL_SPI1_REMAP
    PERIPHERAL_SPI2,                //!< PERIPHERAL_SPI2
    PERIPHERAL_SPI3,                //!< PERIPHERAL_SPI3
    PERIPHERAL_SPI3_REMAP,          //!< PERIPHERAL_SPI3_REMAP
    PERIPHERAL_SRAM,                //!< SRAM INTERFACE
    PERIPHERAL_SYSCFG,              //!< PERIPHERAL_SYSCFG
    PERIPHERAL_TIMER1,              //!< PERIPHERAL_TIMER1
    PERIPHERAL_TIMER2,              //!< PERIPHERAL_TIMER2
    PERIPHERAL_TIMER3,              //!< PERIPHERAL_TIMER3
    PERIPHERAL_TIMER4,              //!< PERIPHERAL_TIMER4
    PERIPHERAL_TIMER5,              //!< PERIPHERAL_TIMER5
    PERIPHERAL_TIMER6,              //!< PERIPHERAL_TIMER6
    PERIPHERAL_TIMER7,              //!< PERIPHERAL_TIMER7
    PERIPHERAL_TIMER8,              //!< PERIPHERAL_TIMER8
    PERIPHERAL_TIMER9,              //!< PERIPHERAL_TIMER9
    PERIPHERAL_TIMER10,             //!< PERIPHERAL_TIMER10
    PERIPHERAL_TIMER11,             //!< PERIPHERAL_TIMER11
    PERIPHERAL_TIMER12,             //!< PERIPHERAL_TIMER12
    PERIPHERAL_TIMER13,             //!< PERIPHERAL_TIMER13
    PERIPHERAL_TIMER14,             //!< PERIPHERAL_TIMER14
    PERIPHERAL_TIMER15,             //!< PERIPHERAL_TIMER15
    PERIPHERAL_TIMER16,             //!< PERIPHERAL_TIMER16
    PERIPHERAL_TIMER17,             //!< PERIPHERAL_TIMER17
    PERIPHERAL_USART1,              //!< PERIPHERAL_USART1
    PERIPHERAL_USART1_REMAP,        //!< PERIPHERAL_USART1_REMAP
    PERIPHERAL_USART2,              //!< PERIPHERAL_USART2
    PERIPHERAL_USART2_REMAP,        //!< PERIPHERAL_USART2_REMAP
    PERIPHERAL_USART3,              //!< PERIPHERAL_USART3
    PERIPHERAL_USART3_PARTIAL_REMAP,  //!< PERIPHERAL_USART3_PARTIAL_REMAP
    PERIPHERAL_USART3_FULL_REMAP,   //!< PERIPHERAL_USART3_FULL_REMAP
    PERIPHERAL_UART4,               //!< PERIPHERAL_UART4
    PERIPHERAL_UART5,               //!< PERIPHERAL_UART5
    PERIPHERAL_USART6,               //!< PERIPHERAL_USART6
    PERIPHERAL_WWD                     //!< Windows WatchDog
  };

enum ClockName {
    HSI,                /**< HSI 8 MHz RC oscillator clock  */
    HSE,                /**< HSE oscillator clock */
    HSE_EXT,            /**< External HSE oscillator clock (HSE Bypass) */
    PLL,                /**< PLL CLOCK */
    LSI,                /**< 40 kHz low speed internal RC (LSI RC) which drives the independent watchdog and optionally the RTC used for Auto-wakeup from Stop/Standby mode. */
    LSE,                /**< 32.768 kHz low speed external crystal (LSE crystal) which optionally drives the realtime clock (RTCCLK) */
    HSI14               /**< 14 MHz high speed internal RC (HSI14) dedicated for ADC. */
};


#endif /* CONFIG__STM32LIB_H_INCLUDED */

/** \namespace STM32LIB
 * \brief A STM32F0xx library to ease the programming
 * \details For now it only supports the STM32F030R8
 * \author Joao Cabral
 */
