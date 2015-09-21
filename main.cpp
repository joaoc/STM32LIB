#include "Config/config.h"
#include "GPIO/GPIO.hpp"
#include "Timer/WAIT.hpp"
#include "Config/debug.hpp"
#include "EXTI/EXTI_IRQ.hpp"
#include "NVIC/NVIC.hpp"


using namespace STM32LIB;

GPIO LED;

void test(uint16_t a){
    LED.toggle();
}

int main (void){

    NVIC_CONTROLER::remapIrq();

//    GPIO LED;
    GPIO Button;

    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);
    Button.init(PC_13,GPIO::PIN_INPUT,GPIO::PullNone,GPIO::Slow);
    Button.bind(&test);
    Button.enableInterrupt(EXTI_CONTROLER::_Mode::Interrupt,EXTI_CONTROLER::_Trigger::Rising);

    while(1){
        asm("nop");
        //LED.write(Button.read());
    }
//        LED.toggle();
}
