#include "../stm32Lib/config.h"
#include "../stm32Lib/GPIO.h"
#include "../stm32Lib/WAIT.h"
#include "../stm32Lib/TIMER.h"

using namespace STM32LIB;

int main (void){
    GPIO LED;
    GPIO BUTTON;

//    WAIT::init();
    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);
//    BUTTON.init(PC_13,GPIO::PIN_INPUT,GPIO::PullDefault,GPIO::Slow);
    TIMER T;
    T.init(TIMER::TIMER1,TIMER::DevideClock_1,TIMER::UP, 4000, 8000, 0);
    T.start();
    uint16_t counter=0;
    while(1){
        counter=T.get_value();
        if(counter>1000)
            LED.write(1);
        else
            LED.write(0);
    }


/*    while(1){
        LED.toggle();
        if(BUTTON.read()==1)
            WAIT::wait_s(1);
        else
            WAIT::wait_ms(100);
    }
*/
}
