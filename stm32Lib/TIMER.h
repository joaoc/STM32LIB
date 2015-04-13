#ifndef TIMER_STM32LIB_H_INCLUDED
#define TIMER_STM32LIB_H_INCLUDED

#include "Peripheral.h"

#include "stm32f0xx_tim.h"
#include "stm32f0xx_rcc.h"

#include "event/signal.h"
#include "event/slot.h"


#ifdef STM32F0XX

#define TIM1CLOCK RCC_APB2Periph_TIM1
#define TIM2CLOCK RCC_APB1Periph_TIM2
#define TIM3CLOCK RCC_APB1Periph_TIM3
#define TIM6CLOCK RCC_APB1Periph_TIM6
#define TIM7CLOCK RCC_APB1Periph_TIM7
#define TIM14CLOCK RCC_APB1Periph_TIM14
#define TIM15ClOCK RCC_APB2Periph_TIM15
#define TIM16CLOCK RCC_APB2Periph_TIM16
#define TIM17CLOCK RCC_APB2Periph_TIM17


#endif /* STM32F0XX */

typedef wink::signal<wink::slot<void (InterruptType)> > signal;

namespace STM32LIB{

    /** \brief TIMER class.
    *  \details Simple timer usage. It just count time.\n
    Code example:
    *  \code
    TIMER T;
    T.init(TIMER::TIMER1,- //the timer
           TIMER::DevideClock_1,- //devide the clock by 1
           TIMER::UP,- //count up
           4000,- // period
           8000,- //prescaller
           0); //the reload counter
    T.start(); //start the timer
    uint16_t counter=T.get_value();
    \endcode
    \image HTML Timer_simple.png
    The timer run with a frequency equals to \f$ \frac{Clock\_frequency}{Prescaller} \f$. Its possible to divide even more the clock using the \ref DevideClock option. \n
    The timer counts between the reload counter and the period value, creating a update interrupt each time it overflows.
    */
class TIMER{
    public:
        typedef enum{
            DevideClock_1 = 0x0000,
            DevideClock_2 = 0x0100,
            DevideClock_4 = 0x0200
        } DevideClock;

        typedef enum{
            UP = TIM_CounterMode_Up,
            DOWN = TIM_CounterMode_Down ,
            CenterAligned1 = TIM_CounterMode_CenterAligned1 ,
            CenterAligned2 = TIM_CounterMode_CenterAligned2 ,
            CenterAligned3 = TIM_CounterMode_CenterAligned3
        } CounterMode;

        typedef enum{
#ifdef HAS_TIM1
            TIMER1 = TIM1_BASE,
#endif
#ifdef HAS_TIM2
            TIMER2 = TIM2_BASE,
#endif
#ifdef HAS_TIM3
            TIMER3 = TIM3_BASE,
#endif
#ifdef HAS_TIM6
            TIMER6 = TIM6_BASE,
#endif
#ifdef HAS_TIM7
            TIMER7 = TIM7_BASE,
#endif
#ifdef HAS_TIM14
            TIMER14 = TIM14_BASE,
#endif
#ifdef HAS_TIM15
            TIMER15 = TIM15_BASE,
#endif
#ifdef HAS_TIM16
            TIMER16 = TIM16_BASE,
#endif
#ifdef HAS_TIM17
            TIMER17 = TIM17_BASE
#endif
        } TimerNum;

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


        void init(TimerNum _timer, DevideClock Devide, CounterMode Mode, uint16_t Period, uint16_t Prescaler, uint16_t RepetitionCounter );
        inline uint16_t get_value(void){return(TIM_GetCounter(TimerX));}
        inline void start(void){TIM_Cmd(TimerX, ENABLE);}
        inline void stop (void){TIM_Cmd(TimerX, DISABLE);}
        void enable_interrupt(InterruptType interrupt, FunctionalState state, uint16_t PreemptionPriority = 0, uint16_t SubPriority = 1);

        signal sig;

    private:
        TIM_TypeDef* TimerX;
        TimerNum T;


};
}


#endif /* TIMER_STM32LIB_H_INCLUDED */
