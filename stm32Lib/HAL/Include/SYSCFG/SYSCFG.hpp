#pragma once
#ifndef SYSCFG_HPP_INCLUDED
#define SYSCFG_HPP_INCLUDED

#include "Config/config.h"
#include "MCU/F0/stm32f0xx_syscfg.h"

namespace STM32LIB{


class SYSCONFIG{
public:
    enum _MEM_MODE{
        main_flash = SYSCFG_MemoryRemap_Flash,
        system_memory = SYSCFG_MemoryRemap_SystemMemory,
        SRAM = SYSCFG_MemoryRemap_SRAM
    };

    static inline void SYSCFG_MEM_MODE(_MEM_MODE mode){
        BF_SET(SYSCFG->CFGR1,mode,0,2);
    }


};





}


#endif /* SYSCFG_HPP_INCLUDED */