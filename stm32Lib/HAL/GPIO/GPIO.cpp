
#include "config.h"
#include "GPIO.h"

using namespace STM32LIB;

void GPIO::init(PinName pin_name, PinDirection dir, PinMode mode, PinSpeed speed){
        uint16_t port,pin;

        this->pin=pin_name;

        port=STM32_PORT(pin_name);
        pin=1<<STM32_PIN(pin_name);
        this->pin_mask=pin;

        switch((PortName)port){
            case PortA:
                gpioX=GPIOA; break;
            case PortB:
                gpioX=GPIOB; break;
            case PortC:
                gpioX=GPIOC; break;
            case PortD:
                gpioX=GPIOD; break;
            case PortF:
                gpioX=GPIOF; break;
        }

        //Start the peripheral clock
        RCC->AHBENR |= (1<<(17+port)); //Sets the correct reg to enable the port clock

        //configure the GPIO
        GPIO_InitTypeDef GPIO_Conf;

        GPIO_Conf.GPIO_Pin   = pin;
        GPIO_Conf.GPIO_Mode  = (GPIOMode_TypeDef) dir;
        GPIO_Conf.GPIO_Speed = (GPIOSpeed_TypeDef) speed;
        GPIO_Conf.GPIO_OType = (GPIOOType_TypeDef) (mode==OpenDrain?1:0); //1 if OpenDrain 0 Otherwise
        GPIO_Conf.GPIO_PuPd  =(GPIOPuPd_TypeDef) (mode==OpenDrain?0:mode);


        GPIO_Init(gpioX, &GPIO_Conf);

        return;
    }

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
