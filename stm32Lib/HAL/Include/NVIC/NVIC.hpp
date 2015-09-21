#pragma once
#ifndef NVIC_HPP_INCLUDED
#define NVIC_HPP_INCLUDED

#include "Config/config.h"
#include "RCC/ClockControl.hpp"
#include "SYSCFG/SYSCFG.hpp"

namespace STM32LIB{

/** \brief NVIC interface class.
 */
class NVIC_CONTROLER{
    public:

    /** \brief Allow changing the IRQ funtions
     *  \details Changes the memory mapping at 0x0000 0000 to the SRAM and copies the interrupt vector
     * \return
     *
     */
    static void remapIrq(void){
        __IO uint32_t* stdvector = (__IO uint32_t *)0x0000000;  //The normal space memory for the vector
        __IO uint32_t* newvector = (__IO uint32_t *)SRAM_BASE; //Beginning of SRAM

        //Lets copy the vector to the SRAM
        for(uint16_t i=0; i<48; i++)
          *newvector++=*stdvector++;

        //Now lets remap the memory
         /* Enable the SYSCFG peripheral clock*/
        ClockControl<PERIPHERAL_SYSCFG>::on();
        /* Remap SRAM at 0x00000000 */
        SYSCONFIG::SYSCFG_MEM_MODE(SYSCONFIG::_MEM_MODE::SRAM);
    }

    /** \brief Change the IRQ funtion
     *  \details Changes the funtion that is called when a interrupt occurs.
     * \param IRQ The IRQ Number.
     * \param newHandler A pointer to the new function.
     * \return
     * \note Must firts call the remapIrq() function!
     */
    static void newIrqHandler(IRQn_Type IRQ, __IO uint32_t newHandler){
        uint32_t addr=SRAM_BASE+0x40+ (0x4*IRQ); //the new handler is located at the beginning of the SRAM and the ADDR for IRQ=0 is 0x40
        __IO uint32_t* handler= (__IO uint32_t *)addr;

        //Atomic operation
        disableAllInterrupts();
        *handler=newHandler;
        enableAllInterrupts(); //if you are using this you will want the interrupts enable so its ok to do this...
    }

    /** \brief Configure the interrupt
     *  \details Set the state of the interrupt and its priority.
     * \param interrupt The IRQ Number.
     * \param state ENABLE or DISABLE
     * \param preemptionPriority The interrupt priority
     * \param subPriority The interrupt subpriority (if available)
     * \return
     */
    static void configureIrq(uint8_t interrupt,FunctionalState state=ENABLE,uint8_t preemptionPriority=0,uint8_t subPriority=0){
        uint32_t tmppriority = 0x00;
        if (state != DISABLE){
            /* Compute the Corresponding IRQ Priority --------------------------------*/
            tmppriority = NVIC->IP[interrupt>> 0x02];
            tmppriority &= (uint32_t)(~(((uint32_t)0xFF) << ((interrupt & 0x03) * 8)));
            tmppriority |= (uint32_t)((((uint32_t)preemptionPriority << 6) & 0xFF) << ((interrupt & 0x03) * 8));

            NVIC->IP[interrupt >> 0x02] = tmppriority;

            /* Enable the Selected IRQ Channels --------------------------------------*/
            NVIC->ISER[0] = (uint32_t)0x01 << (interrupt & (uint8_t)0x1F);
        }else{
            /* Disable the Selected IRQ Channels -------------------------------------*/
            NVIC->ICER[0] = (uint32_t)0x01 << (interrupt & (uint8_t)0x1F);
        }

    }

    /** \brief Disable the interrupts
     * \return
     */
    static inline void disableAllInterrupts(){
        __disable_irq();
    }

    /** \brief Enable the interrupts
     * \return
     */
    static inline void enableAllInterrupts(){
        __enable_irq();
    }


};
}


#endif /* NVIC_HPP_INCLUDED */
