#include "Config/config.h"
#include "RCC/ClockSource.hpp"
#include "RCC/RCC.hpp"

using namespace STM32LIB;

int main (void){

    RCC<GPIOA>::on();

    ClockSource<USART2>::set<ClockSource<USART2>::HSI>();
    //ClockSource<I2C1>::set<ClockSource<I2C1>::HSI>();

}
