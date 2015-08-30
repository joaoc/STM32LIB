#pragma once
#ifndef BASICTIMER_HPP_INCLUDED
#define BASICTIMER_HPP_INCLUDED

#include "Config/Periferal.h"
#include "MCU/F0/stm32f0xx_tim.h"

namespace STM32LIB{

class BaseTimer{
public:

    typedef enum{
            UPDATE = TIM_IT_Update,
            CAPTURE_COMPARE1=TIM_IT_CC1,
            CAPTURE_COMPARE2=TIM_IT_CC2,
            CAPTURE_COMPARE3=TIM_IT_CC3,
            CAPTURE_COMPARE4=TIM_IT_CC4,
            COMUTATE=TIM_IT_COM,
            TRIGGER=TIM_IT_Trigger,
            BREAK=TIM_IT_Break
    }InterruptType;

private:
    TIM_TypeDef* TIMx;
    uint32_t counter;

public:
    void init(TIMERS TIM, uint32_t Period, uint32_t Prescaler, uint32_t RepetitionCounter){}
    void start(){}
    void stop(){}
    uint32_t getCounter(){}
    void setCounter(uint32_t NewCounter){}
    void setPrescaler(uint32_t Prescaler){}
    void setAutoReload(uint32_t autoReload){}
    void onePulseMode(bool mode){}
    void autoReload(bool mode){}
    void setUpdadeRequestSource(   ){}
    void setUpdate(bool mode){}
    void setInterrupt(bool mode){}








};
}
#endif /* BASICTIMER_HPP_INCLUDED */
