#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include <string>

class Mult : public Base {
    private:
        double x, y;
    public:
        Mult(double x, double y) : Base() { this->x = x; this->y = y; }
        Mult(Base* x, Base* y) : Base() { this->x = x->evaluate(); this->y = y->evaluate(); }
        virtual double evaluate() { return (this->x * this->y); }
        virtual std::string stringify() { return std::to_string(this->x) + " * " + std::to_string(this->y); }
};

#endif //__MULT_HPP__
