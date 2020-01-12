#ifndef __SUB_HPP__
#define __SUB_HPP__

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;

class Sub: public Base {
    private:
        double x, y;
        Base* l;
        Base* r;
     public:
        Sub(double x, double y) : Base() { this->x = x; this->y = y; }
        Sub(Base* x, Base* y) : Base() { this->l = x; this->r = y; }
        virtual double evaluate() { 
            if (this->l != nullptr && this->r != nullptr) {
                return (this->l->evaluate() - this->r->evaluate()); 
            } else {
                return this->x - this->y;
            }
        }
        virtual string stringify() { 
            if (this->l != nullptr && this->r != nullptr) {
                return this->l->stringify() + " - " + this->r->stringify();
            } else {
                return to_string(this->x) + " - " + to_string(this->y); 
            }
        }
};

#endif
