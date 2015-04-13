#include "TIMER.h"
#include "Peripheral.h"

namespace STM32LIB{

void STM32LIB::TIMER::init(TimerNum _timer, DevideClock Devide, CounterMode Mode, uint16_t Period, uint16_t Prescaler, uint16_t RepetitionCounter ){
    this->T=_timer;
    TimerX=(TIM_TypeDef*) _timer;

    uint32_t clock;
    clock=TIM1CLOCK;
    switch(_timer){
#ifdef HAS_TIM1
        case TIMER1:
            clock=TIM1CLOCK;
            break;
#endif
#ifdef HAS_TIM2
        case TIMER2: clock=TIM2CLOCK; break;
#endif
#ifdef HAS_TIM3
        case TIMER3: clock=TIM3CLOCK; break;
#endif
#ifdef HAS_TIM6
        case TIMER6: clock=TIM6CLOCK; break;
#endif
#ifdef HAS_TIM7
        case TIMER7: clock=TIM7CLOCK; break;
#endif
#ifdef HAS_TIM14
        case TIMER14: clock=TIM14CLOCK; break;
#endif
#ifdef HAS_TIM15
        case TIMER15: clock=TIM15ClOCK; break;
#endif
#ifdef HAS_TIM16
        case TIMER16: clock=TIM16CLOCK; break;
#endif
#ifdef HAS_TIM17
        case TIMER17: clock=TIM17CLOCK; break;
#endif
    }

    TIM_TimeBaseInitTypeDef TTB;
    RCC_APB2PeriphClockCmd(clock, ENABLE);

    TTB.TIM_ClockDivision = Devide;
    TTB.TIM_CounterMode = Mode;
    TTB.TIM_Period = Period;
    TTB.TIM_Prescaler = Prescaler-1;
    TTB.TIM_RepetitionCounter = RepetitionCounter;

    TIM_TimeBaseInit(TimerX, &TTB);
}
void TIMER::enable_interrupt(InterruptType interrupt, FunctionalState state,uint16_t PreemptionPriority, uint16_t SubPriority){
    IRQn IRQ_Temp;

    switch(this->T){
#ifdef HAS_TIM1
        case TIMER1:
            if (interrupt == CAPTURE_COMPARE1 || interrupt == CAPTURE_COMPARE2 || interrupt == CAPTURE_COMPARE3 || interrupt == CAPTURE_COMPARE4)
                IRQ_Temp=TIM1_CC_IRQn;
            else
                IRQ_Temp=TIM1_BRK_UP_TRG_COM_IRQn;
            break;
#endif
#ifdef HAS_TIM2
        case TIMER2: IRQ_Temp=TIM2_IRQn; break;
#endif
#ifdef HAS_TIM3
        case TIMER3: IRQ_Temp=TIM3_IRQn; break;
#endif
#ifdef HAS_TIM6
        case TIMER6: IRQ_Temp=TIM6_IRQn; break;
#endif
#ifdef HAS_TIM7
        case TIMER7: IRQ_Temp=TIM7_IRQn; break;
#endif
#ifdef HAS_TIM14
        case TIMER14: IRQ_Temp=TIM14_IRQn; break;
#endif
#ifdef HAS_TIM15
        case TIMER15: IRQ_Temp=TIM15_IRQn; break;
#endif
#ifdef HAS_TIM16
        case TIMER16: IRQ_Temp=TIM16_IRQn; break;
#endif
#ifdef HAS_TIM17
        case TIMER17: IRQ_Temp=TIM17_IRQn; break;
#endif
    }

    NVIC_InitTypeDef nvicStructure;

    TIM_ITConfig(TimerX, interrupt, ENABLE);

    nvicStructure.NVIC_IRQChannel = IRQ_Temp;
#ifdef HAS_ADVANVED_TIM_IRQ
    nvicStructure.NVIC_IRQChannelPreemptionPriority = PreemptionPriority;
    nvicStructure.NVIC_IRQChannelSubPriority = SubPriority;
#endif
    nvicStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&nvicStructure);


}

extern "C" {
  void __attribute__ ((interrupt("IRQ"))) TIM1_BRK_UP_TRG_COM_IRQHandler(void) {
    if(TIM_GetITStatus(TIM1,TIM_IT_Break)!=RESET) {
      TIM_ClearITPendingBit(TIM1,TIM_IT_Break);
    }
    if(TIM_GetITStatus(TIM1,TIM_IT_Update)!=RESET) {
      TIM_ClearITPendingBit(TIM1,TIM_IT_Update);
    }
    if(TIM_GetITStatus(TIM1,TIM_IT_Trigger)!=RESET) {
      TIM_ClearITPendingBit(TIM1,TIM_IT_Trigger);
    }
    if(TIM_GetITStatus(TIM1,TIM_IT_COM)!=RESET) {
      TIM_ClearITPendingBit(TIM1,TIM_IT_COM);
    }
    __DSB();      // prevent erroneous recall of this handler due to delayed memory write
  }

  void __attribute__ ((interrupt("IRQ"))) TIM1_CC_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM2_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM3_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM6_DAC_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM14_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM15_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM16_IRQHandler (void) {

  }

  void __attribute__ ((interrupt("IRQ"))) TIM17_IRQHandler (void) {

  }
}

}
