#ifndef CONFIG__STM32LIB_H_INCLUDED
#define CONFIG__STM32LIB_H_INCLUDED

#include <stdint.h>
#include "Peripheral.h"

//For the STM32F0
#ifdef STM32F0XX

#include "RegisterAccess/MCU/HPP/STM32F030.hpp"

#include "stm32f0xx_conf.h"
#include <system_stm32f0xx.h>
//#include <stm32f0xx_gpio.h>
//#include <stm32f0xx_rcc.h>


#endif /* STM32F0XX */

enum PeripheralName {
    ADC1,                //!< PERIPHERAL_ADC1
    ADC2,                //!< PERIPHERAL_ADC2
    ADC3,                //!< PERIPHERAL_ADC3
    BACKUP,              //!< PERIPHERAL_BACKUP
    CRC,                 //!< PERIPHERAL_CRC
    DAC1,                //!< PERIPHERAL_DAC1
    DAC2,                //!< PERIPHERAL_DAC2
    DEBUG,               //!< PERIPHERAL_MCU_DEBUG
    DMA1,                //!< PERIPHERAL_DMA1
    DMA2,                //!< PERIPHERAL_DMA2
    FLASH,               //!< FLASH Interface
    FSMC,                //!< PERIPHERAL_FSMC
    FMC,                 //!< PERIPHERAL_FMC
    GPIOA,               //!< PERIPHERAL_GPIOA
    GPIOB,               //!< PERIPHERAL_GPIOB
    GPIOC,               //!< PERIPHERAL_GPIOC
    GPIOD,               //!< PERIPHERAL_GPIOD
    GPIOE,               //!< PERIPHERAL_GPIOE
    GPIOF,               //!< PERIPHERAL_GPIOF
    HASH,                //!< PERIPHERAL_HASH
    I2C1,                //!< PERIPHERAL_I2C1
    I2C2,                //!< PERIPHERAL_I2C2
    I2C3,                //!< PERIPHERAL_I2C3
    I2S2,                //!< PERIPHERAL_I2S2
    I2S3,                //!< PERIPHERAL_I2S3
    MAC,                 //!< PERIPHERAL_MAC
    MAC_REMAP,           //!< PERIPHERAL_MAC_REMAP
    OTG_FS,              //!< internal OTG FS PHY
    OTG_HS,              //!< internal OTG HS PHY
    POWER,               //!< PERIPHERAL_POWER
    RNG,                 //!< PERIPHERAL_RNG
    SDIO,                //!< PERIPHERAL_SDIO
    SPI1,                //!< PERIPHERAL_SPI1
    SPI1_REMAP,          //!< PERIPHERAL_SPI1_REMAP
    SPI2,                //!< PERIPHERAL_SPI2
    SPI3,                //!< PERIPHERAL_SPI3
    SPI3_REMAP,          //!< PERIPHERAL_SPI3_REMAP
    SRAM,                //!< SRAM INTERFACE
    SYSCFG,              //!< PERIPHERAL_SYSCFG
    TIMER1,              //!< PERIPHERAL_TIMER1
    TIMER2,              //!< PERIPHERAL_TIMER2
    TIMER3,              //!< PERIPHERAL_TIMER3
    TIMER4,              //!< PERIPHERAL_TIMER4
    TIMER5,              //!< PERIPHERAL_TIMER5
    TIMER6,              //!< PERIPHERAL_TIMER6
    TIMER7,              //!< PERIPHERAL_TIMER7
    TIMER8,              //!< PERIPHERAL_TIMER8
    TIMER9,              //!< PERIPHERAL_TIMER9
    TIMER10,             //!< PERIPHERAL_TIMER10
    TIMER11,             //!< PERIPHERAL_TIMER11
    TIMER12,             //!< PERIPHERAL_TIMER12
    TIMER13,             //!< PERIPHERAL_TIMER13
    TIMER14,             //!< PERIPHERAL_TIMER14
    TIMER15,             //!< PERIPHERAL_TIMER15
    TIMER16,             //!< PERIPHERAL_TIMER16
    TIMER17,             //!< PERIPHERAL_TIMER17
    USART1,              //!< PERIPHERAL_USART1
    USART1_REMAP,        //!< PERIPHERAL_USART1_REMAP
    USART2,              //!< PERIPHERAL_USART2
    USART2_REMAP,        //!< PERIPHERAL_USART2_REMAP
    USART3,              //!< PERIPHERAL_USART3
    USART3_PARTIAL_REMAP,  //!< PERIPHERAL_USART3_PARTIAL_REMAP
    USART3_FULL_REMAP,   //!< PERIPHERAL_USART3_FULL_REMAP
    UART4,               //!< PERIPHERAL_UART4
    UART5,               //!< PERIPHERAL_UART5
    USART6,               //!< PERIPHERAL_USART6
    WWD                     //!< Windows WatchDog
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
