//#include "Config/config.h"
//#include "RCC/ClockSource.hpp"
//#include "RCC/RCC.hpp"
//#include "GPIO/GPIO.hpp"
//
//using namespace STM32LIB;
//#include "RegisterAccess/MCU/HPP/STM32F030.hpp"
#include "reg_t.hpp"
#include "rw_t.hpp"
#include "ro_t.hpp"
#include "wo_t.hpp"



struct a{
        //using I2C1SW = reg_t<rw_t, 0X40021030, 4, 1>;
        static reg_t<rw_t, 0X40021030, 4, 1> I2C1SW ;
    };

struct b{
    static reg_t<rw_t,0x0000010,1,1> MODER;
    static reg_t<rw_t,0x0000010,1,1> OTYPER;
    static reg_t<rw_t,0x0000010,1,1> OSPEEDR;
    static reg_t<rw_t,0x0000010,1,1> PUDPDR;
    static reg_t<rw_t,0x0000010,1,1> IDR;
    static reg_t<rw_t,0x0000010,1,1> ODR;
    static reg_t<rw_t,0x0000010,1,1> BSRR;
    static reg_t<rw_t,0x0000010,1,1> LCKR;
    static reg_t<rw_t,0x0000010,1,1> AFRL;
    static reg_t<rw_t,0x0000010,1,1> BRR;
};

struct c:b{
    static reg_t<rw_t,0x1000000,1,1> MODER;
    static reg_t<rw_t,0x1000000,1,1> OTYPER;
    static reg_t<rw_t,0x1000000,1,1> OSPEEDR;
    static reg_t<rw_t,0x1000000,1,1> PUDPDR;
    static reg_t<rw_t,0x1000000,1,1> IDR;
    static reg_t<rw_t,0x1000000,1,1> ODR;
    static reg_t<rw_t,0x1000000,1,1> BSRR;
    static reg_t<rw_t,0x1000000,1,1> LCKR;
    static reg_t<rw_t,0x1000000,1,1> AFRL;
    static reg_t<rw_t,0x1000000,1,1> BRR;
};



int main (void){

//    RCC<GPIOA>::on();

    //ClockSource<USART2>::set<ClockSource<USART2>::HSI>();
    //ClockSource<I2C1>::set<ClockSource<I2C1>::HSI>();

    //GPIO LED;
    //LED.init(PA_5,GPIO::PIN_OUTPUT,GPIO::PullDefault,GPIO::Slow);

    struct b* pointer_b2c;
    struct c real_c;
    //pointer_b2c=(struct b*)(&real_c);
    //pointer_b2c->BRR.lset();
    real_c.BRR.lset();
    pointer_b2c = &real_c;
    pointer_b2c->BRR.lset();

//    struct c* pointer_c2b;
//
//    pointer_c2b = reinterpret_cast<struct c*>(pointer_b2c);
//
//    pointer_c2b->BRR.lset();


//    a::I2C1SW.set();
    //a::I2C1SW::set();
}
