#ifndef __DIV_HPP__
#define __DIV_HPP__

#include <iostream>
#include <string>

using namespace std;

class Div: public Base {
    private:
        double x, y;
     public:
        Div(double x, double y) : Base() { this->x = x; this->y = y; }
        Div(Base* x, Base* y) : Base() { this->x = x->evaluate(); this->y = y->evaluate(); }
        virtual double evaluate() { return this->x / this->y; }
        virtual string stringify() { return  to_string(this->x) + " / " + to_string(this->y); }
};

#endif
