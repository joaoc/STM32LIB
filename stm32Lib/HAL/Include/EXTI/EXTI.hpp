#pragma once
#ifndef EXTI_HPP_INCLUDED
#define EXTI_HPP_INCLUDED

#include "Config/config.h"
#include "SYSCFG/SYSCFG.hpp"

namespace STM32LIB{
class EXTI_CONTROLER{
public:
    typedef enum{
      Interrupt = EXTI_Mode_Interrupt,
      Event = EXTI_Mode_Event
    }_Mode;

    typedef enum{
      Rising = EXTI_Trigger_Rising,
      Falling = EXTI_Trigger_Falling,
      Rising_Falling = EXTI_Trigger_Rising_Falling
    }_Trigger;

    static void init(uint16_t line, uint16_t port, _Mode mode, _Trigger trigger, FunctionalState status = ENABLE ){
        uint32_t bit=1<<line;

        ClockControl<PERIPHERAL_SYSCFG>::on();
        SYSCONFIG::ExtiLineSel(line,port);

        if(status == ENABLE){
            if (trigger == Rising)
                BIT_SET(EXTI->RTSR,bit);
            else if (trigger == Falling)
                BIT_SET(EXTI->FTSR,bit);
            else if (trigger == Rising_Falling){
                BIT_SET(EXTI->RTSR,bit);
                BIT_SET(EXTI->FTSR,bit);
            }

            if (mode==Interrupt)
                BIT_SET(EXTI->IMR,bit);
            else
                BIT_SET(EXTI->EMR,bit);

        }else{
            BIT_CLEAR(EXTI->IMR,bit); //the interrupt
            BIT_CLEAR(EXTI->EMR,bit); //the event
            BIT_CLEAR(EXTI->RTSR,bit); //the rising edge trigger
            BIT_CLEAR(EXTI->FTSR,bit); //the falling edge trigger
        }
    }

    static void generateSWInterrupt(uint32_t line){
        BIT_SET(EXTI->SWIER,1<<line);
    }

    static FlagStatus getStatus(uint32_t line){
        uint32_t bit=1<<line;
        if(BIT_GET(EXTI->PR,bit))
            return SET;
        else
            return RESET;
    }

    static void clearStatus(uint32_t line){
        BIT_SET(EXTI->PR,1<<line);
    }
};
}

#endif /* EXTI_HPP_INCLUDED */
