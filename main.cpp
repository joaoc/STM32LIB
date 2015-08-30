#include "Config/config.h"
#include "GPIO/GPIO.hpp"
#include "Timer/WAIT.hpp"
#include "Config/debug.hpp"


using namespace STM32LIB;

int main (void){

    GPIO LED;

    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);
    while(1)
        LED.toggle();
}
