#pragma once
#include <iostream>
class Money
{
private:
    long r;
    unsigned char c;
public:
    Money() {
        r = 0;
        c = 0;
    }       
    Money(long rub, unsigned char cop) {  
        r = rub;
        c = cop;
    }
    void getNum(float n) {
        double i, f;
    }
    void add(Money m);
    void sub(Money m);
    void div(Money m);
    void mul(Money m);
    void div(float m);
    bool comp(Money m);

};