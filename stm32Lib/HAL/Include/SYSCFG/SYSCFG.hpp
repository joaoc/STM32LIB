#pragma once
#ifndef SYSCFG_HPP_INCLUDED
#define SYSCFG_HPP_INCLUDED

#include "Config/config.h"

namespace STM32LIB{


class SYSCONFIG{
public:
    enum _MEM_MODE{
        main_flash = SYSCFG_MemoryRemap_Flash,
        system_memory = SYSCFG_MemoryRemap_SystemMemory,
        SRAM = SYSCFG_MemoryRemap_SRAM
    };
    /** \brief Set the mapping of the memory at 0x0000 0000
     * \param mode The memory to be remapped.
     * \return
     */
    static inline void SYSCFG_MEM_MODE(_MEM_MODE mode){
        BF_SET(SYSCFG->CFGR1,mode,0,2);
    }

    static inline void ExtiLineSel(uint16_t line, uint16_t port){
        uint32_t reg;
        uint16_t temp;

        if(line<=3)
            BF_SET(SYSCFG->EXTICR[0],port,4*(line%4),4);
        else if(line <=7)
            BF_SET(SYSCFG->EXTICR[1],port,4*(line%4),4);
        else if(line <=11)
           BF_SET(SYSCFG->EXTICR[2],port,4*(line%4),4);
        else if(line <=15)
            BF_SET(SYSCFG->EXTICR[3],port,4*(line%4),4);
    }


};





}


#endif /* SYSCFG_HPP_INCLUDED */
