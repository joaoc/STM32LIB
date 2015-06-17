#ifndef CONFIG__STM32LIB_H_INCLUDED
#define CONFIG__STM32LIB_H_INCLUDED

#include <stdint.h>
#include "Peripheral.h"

//For the STM32F0
#ifdef STM32F0XX

#include "stm32f0xx_conf.h"
#include <system_stm32f0xx.h>
#include <stm32f0xx_gpio.h>
#include <stm32f0xx_rcc.h>


#endif /* STM32F0XX */

#endif /* CONFIG__STM32LIB_H_INCLUDED */

/** \namespace STM32LIB
 * \brief A STM32F0xx library to ease the programming
 * \details For now it only supports the STM32F030R8
 * \author Joao Cabral
 */
