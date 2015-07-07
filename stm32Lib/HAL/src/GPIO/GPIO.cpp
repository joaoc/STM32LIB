
#include "config.h"
#include "GPIO.h"

using namespace STM32LIB;

    bool GPIO::read(){
       return(gpioX->IDR&pin_mask);
    }

    void GPIO::write(bool value){
        if(value)
            gpioX->BSRR=pin_mask;
        else
            gpioX->BRR=pin_mask;
        return;
    }


    void GPIO::toggle(){
        gpioX->ODR^= pin_mask;
    }
