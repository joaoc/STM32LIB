#include "Config/config.h"
#include "RCC/ClockSource.hpp"
#include "RCC/ClockControl.hpp"
#include "GPIO/GPIO.hpp"

using namespace STM32LIB;

int main (void){
    //ClockControl<PERIPHERAL_GPIOA>::on();
    //ClockSource<PERIPHERAL_I2C1>::set<ClockSource<PERIPHERAL_I2C1>::HSI>();

    GPIO LED;

    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);

}
