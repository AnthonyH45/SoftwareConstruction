#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "evaldecorator.hpp"
#include "base.hpp"
#include <iostream>
#include <string>
#include <cmath>

class ABS : public Base {
    private:
        Base *toABS;
    public: 
        ABS(Base *b) : toABS(b) {}
        virtual double evaluate() { return abs(this->toABS->evaluate()); }
        virtual std::string stringify() { return this->toABS->stringify(); }
};

#endif
