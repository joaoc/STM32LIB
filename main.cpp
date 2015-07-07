#include "Config/config.h"
#include "RCC/ClockSource.hpp"
#include "RCC/RCC.hpp"
#include "GPIO/GPIO.hpp"

using namespace STM32LIB;
//#include "RegisterAccess/MCU/HPP/STM32F030.hpp"
//
//struct a{
//        //using I2C1SW = reg_t<rw_t, 0X40021030, 4, 1>;
//        static reg_t<rw_t, 0X40021030, 4, 1> I2C1SW ;
//    };

int main (void){

    RCC<GPIOA>::on();

    //ClockSource<USART2>::set<ClockSource<USART2>::HSI>();
    //ClockSource<I2C1>::set<ClockSource<I2C1>::HSI>();

    //GPIO LED;
    //LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);


//    a::I2C1SW.set();
    //a::I2C1SW::set();
}
