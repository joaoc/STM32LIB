#pragma once
#ifndef GPIO_STM32LIB_H_INCLUDED
#define GPIO_STM32LIB_H_INCLUDED

#include "Config/config.h"
#include "RCC/ClockControl.hpp"


namespace STM32LIB{
/**
 *  Pin Names
 */
    typedef enum {
        PA_0  = 0x00,
        PA_1  = 0x01,
        PA_2  = 0x02,
        PA_3  = 0x03,
        PA_4  = 0x04,
        PA_5  = 0x05,
        PA_6  = 0x06,
        PA_7  = 0x07,
        PA_8  = 0x08,
        PA_9  = 0x09,
        PA_10 = 0x0A,
        PA_11 = 0x0B,
        PA_12 = 0x0C,
        PA_13 = 0x0D,
        PA_14 = 0x0E,
        PA_15 = 0x0F,

        PB_0  = 0x10,
        PB_1  = 0x11,
        PB_2  = 0x12,
        PB_3  = 0x13,
        PB_4  = 0x14,
        PB_5  = 0x15,
        PB_6  = 0x16,
        PB_7  = 0x17,
        PB_8  = 0x18,
        PB_9  = 0x19,
        PB_10 = 0x1A,
        PB_11 = 0x1B,
        PB_12 = 0x1C,
        PB_13 = 0x1D,
        PB_14 = 0x1E,
        PB_15 = 0x1F,

        PC_0  = 0x20,
        PC_1  = 0x21,
        PC_2  = 0x22,
        PC_3  = 0x23,
        PC_4  = 0x24,
        PC_5  = 0x25,
        PC_6  = 0x26,
        PC_7  = 0x27,
        PC_8  = 0x28,
        PC_9  = 0x29,
        PC_10 = 0x2A,
        PC_11 = 0x2B,
        PC_12 = 0x2C,
        PC_13 = 0x2D,
        PC_14 = 0x2E,
        PC_15 = 0x2F,

        PD_2  = 0x32,

        PF_0  = 0x50,
        PF_1  = 0x51,
        PF_4  = 0x54,
        PF_5  = 0x55,
        PF_6  = 0x56,
        PF_7  = 0x57
    } PinName;

    constexpr uint32_t STM32_PORT(PinName Pin){
        return(((uint32_t)(Pin) >> 4) & 0xF);
    }

    constexpr uint32_t STM32_PIN(PinName Pin){
        return(((uint32_t)(Pin) & 0xF));
    }


/** \brief GPIO Access class.
 *
 *  usage:
 	\code
 	GPIO LED;
    LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);
    LED.toggle();
 	\endcode
 */
class GPIO{
public:
    /**
    *   Pin Function
    */
    typedef enum{
        PIN_INPUT = 0x00,
        PIN_OUTPUT = 0x01,
        PIN_ALTERNATE = 0x02,
        PIN_ANALOG = 0x03
    } PinFunction;

    /**
    *   Pin Mode
    */
    typedef enum {
        PullNone  = 0,
        PullUp    = 1,
        PullDown  = 2,
        OpenDrain = 3,
        PullDefault = PullNone
    } PinMode;

    /**
    *   Port Name
    */
    typedef enum {
        PortA = 0,
        PortB = 1,
        PortC = 2,
        PortD = 3,
        PortF = 5
    } PortName;

    /**
    *   Pin Speed
    */
    typedef enum {
        Slow = 0x00,
        Medium = 0x01,
        Fast = 0x03
    } PinSpeed;

private:
    GPIO_TypeDef* gpioX;
    PinName pin;
    uint16_t pin_mask; //pin mask

public:

    /** \brief GPIO initiation function
     *  \details Initiates a specific pin, enabling the peripheral clock and setting it's properties
     * \param pin_name The chip pin name
     * \param func The function of the pin (one of the PinFunction)
     * \param mode The Pullup/Pulldown/OpenDrain of  the pin
     * \param speed The pin speed (more speed = more energy)
     * \return
     *
     */
    void init(PinName pin_name, PinFunction func, PinMode mode, PinSpeed speed){
        uint32_t port,pin;

        this->pin=pin_name;

        port=STM32_PORT(pin_name);
        pin=STM32_PIN(pin_name);
        this->pin_mask=1<<pin;

        switch((PortName)port){
            case PortA:
                gpioX=GPIOA;
                ClockControl<PERIPHERAL_GPIOA>::on();
                break;
            case PortB:
                gpioX=GPIOB;
                ClockControl<PERIPHERAL_GPIOB>::on();
                break;
            case PortC:
                gpioX=GPIOC;
                ClockControl<PERIPHERAL_GPIOC>::on();
                break;
            case PortD:
                gpioX=GPIOD;
                ClockControl<PERIPHERAL_GPIOD>::on();
                break;
            case PortF:
                gpioX=GPIOF;
                ClockControl<PERIPHERAL_GPIOF>::on();
                break;
        }


        BF_SET(gpioX->MODER, func, 2*pin, 2);//Pin Function
        BF_SET(gpioX->OSPEEDR, speed, 2*pin, 2);//Pin Speed
        BF_SET(gpioX->OTYPER, mode==OpenDrain?1:0, pin, 1);//Pin Output type
        BF_SET(gpioX->PUPDR, mode==OpenDrain?0:mode, 2*pin, 2);//Pin PullUp/PullDown

        return;
    }

    /** \brief Read the pin status
     *
     * \return True if pin voltage = vcc, false otherwise
     */
    bool read(){
        return(gpioX->IDR&pin_mask);
    }

    /** \brief Write to the pin
     * \details Use atomic write
     * \param value The value to write to the pin
     */
    void write(bool value){
        if(value)
            gpioX->BSRR=pin_mask;
        else
            gpioX->BRR=pin_mask;
        return;
    }

    /** \brief Toggle the pin status
     *  \details It uses a more slowly method than the read() function
    */
    void toggle(){
        gpioX->ODR^= pin_mask;
    }
};
}




#endif /* GPIO_STM32LIB_H_INCLUDED */
