#include "Config/config.h"
#include "GPIO/GPIO.hpp"
#include "Timer/WAIT.hpp"
#include "Config/debug.hpp"


using namespace STM32LIB;

int main (void){
    //ClockControl<PERIPHERAL_GPIOA>::on();
    //ClockSource<PERIPHERAL_I2C1>::set<ClockSource<PERIPHERAL_I2C1>::HSI>();

    GPIO LED;
    WAIT::init();
    shost<<"Vai Iniciar\n";

    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);
    LED.write(1);
    shost<<"Liguei\n";
    double i=0.0;
    for(;;){
        WAIT::wait_ms(1000);
        LED.toggle();
        shost<<"Mudei\n";
        i+=0.1;
        shost<<"teste"<<i<<"\n";
    }

}
