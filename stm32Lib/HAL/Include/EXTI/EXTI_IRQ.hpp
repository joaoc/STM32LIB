#pragma once
#ifndef EXTI_IRQ_HPP_INCLUDED
#define EXTI_IRQ_HPP_INCLUDED

#include "Config/config.h"
#include "EXTI/EXTI.hpp"
#include "event/signal.h"
#include "event/slot.h"

namespace STM32LIB{

enum EXTIn_IRQ {
    EXTI0_1,
    EXTI2_3,
    EXTI4_15
};

//Singleton class
template<EXTIn_IRQ EXTIx>
class EXTI_IRQ{
public:

    wink::signal<wink::slot<void (uint16_t)> > signal;

    static EXTI_IRQ& GetInstance(){}

    static void __attribute__ ((interrupt("IRQ"))) IRQ(void){};

private:
    //Empty and private constructor
    EXTI_IRQ(){}
    //Don't implement this
    EXTI_IRQ(EXTI_IRQ const&)                     =delete;
    void operator=(EXTI_IRQ  const&)              =delete;
};


template<>
class EXTI_IRQ<EXTI0_1>{
public:

    wink::signal<wink::slot<void (uint16_t)> > signal;

    static EXTI_IRQ& __attribute__ ((used)) GetInstance(){
        static EXTI_IRQ<EXTI0_1> instance;
        return instance;
    }

    static void __attribute__ ((used,interrupt("IRQ"))) IRQ(void){
        uint32_t line=0;
        if(EXTI_CONTROLER::getStatus(0)==SET){
            line=0;
            EXTI_CONTROLER::clearStatus(0);
        }
        if(EXTI_CONTROLER::getStatus(1)==SET){
            line=1;
            EXTI_CONTROLER::clearStatus(1);
        }
        EXTI_IRQ<EXTI0_1>::GetInstance().signal.raiseEvent(line);
    };

private:
    //Empty and private constructor
    EXTI_IRQ(){}
    //Don't implement this
    EXTI_IRQ(EXTI_IRQ const&)                     =delete;
    void operator=(EXTI_IRQ  const&)              =delete;
};

template<>
class EXTI_IRQ<EXTI2_3>{
public:

    wink::signal<wink::slot<void (uint16_t)> > signal;

    static EXTI_IRQ& __attribute__ ((used)) GetInstance(){
        static EXTI_IRQ<EXTI2_3> instance;
        return instance;
    }

    static void __attribute__ ((used,interrupt("IRQ"))) IRQ(void){
        uint32_t line=0;
        if(EXTI_CONTROLER::getStatus(2)==SET){
            line=2;
            EXTI_CONTROLER::clearStatus(2);
        }
        if(EXTI_CONTROLER::getStatus(3)==SET){
            line=3;
            EXTI_CONTROLER::clearStatus(3);
        }
        EXTI_IRQ<EXTI2_3>::GetInstance().signal.raiseEvent(line);
    };

private:
    //Empty and private constructor
    EXTI_IRQ(){}
    //Don't implement this
    EXTI_IRQ(EXTI_IRQ const&)                     =delete;
    void operator=(EXTI_IRQ  const&)              =delete;
};

template<>
class EXTI_IRQ<EXTI4_15>{
public:

    wink::signal<wink::slot<void (uint16_t)> > signal;

    static EXTI_IRQ<EXTI4_15>& __attribute__ ((used)) GetInstance(){
        static EXTI_IRQ<EXTI4_15> instance;
        return instance;
    }

    static void __attribute__ ((used,interrupt("IRQ"))) IRQ(void){
        uint32_t line=0;
        if(EXTI_CONTROLER::getStatus(4)==SET){
            line=4;
            EXTI_CONTROLER::clearStatus(4);
        }
        if(EXTI_CONTROLER::getStatus(5)==SET){
            line=5;
            EXTI_CONTROLER::clearStatus(5);
        }
        if(EXTI_CONTROLER::getStatus(6)==SET){
            line=6;
            EXTI_CONTROLER::clearStatus(6);
        }
        if(EXTI_CONTROLER::getStatus(7)==SET){
            line=7;
            EXTI_CONTROLER::clearStatus(7);
        }
        if(EXTI_CONTROLER::getStatus(8)==SET){
            line=8;
            EXTI_CONTROLER::clearStatus(8);
        }
        if(EXTI_CONTROLER::getStatus(9)==SET){
            line=9;
            EXTI_CONTROLER::clearStatus(9);
        }
        if(EXTI_CONTROLER::getStatus(10)==SET){
            line=10;
            EXTI_CONTROLER::clearStatus(10);
        }
        if(EXTI_CONTROLER::getStatus(11)==SET){
            line=11;
            EXTI_CONTROLER::clearStatus(11);
        }
        if(EXTI_CONTROLER::getStatus(12)==SET){
            line=12;
            EXTI_CONTROLER::clearStatus(12);
        }
        if(EXTI_CONTROLER::getStatus(13)==SET){
            EXTI_CONTROLER::clearStatus(13);
            line=13;
        }
        if(EXTI_CONTROLER::getStatus(14)==SET){
            line=14;
            EXTI_CONTROLER::clearStatus(14);
        }
        if(EXTI_CONTROLER::getStatus(15)==SET){
            line=15;
            EXTI_CONTROLER::clearStatus(15);
        }
        EXTI_IRQ<EXTI4_15>::GetInstance().signal.raiseEvent(line);
    };

private:
    //Empty and private constructor
    EXTI_IRQ(){}
    //Don't implement this
    EXTI_IRQ(EXTI_IRQ const&)                     =delete;
    void operator=(EXTI_IRQ  const&)              =delete;
};

}
#endif /* EXTI_IRQ_HPP_INCLUDED */
