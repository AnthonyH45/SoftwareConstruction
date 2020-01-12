#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "evaldecorator.hpp"
#include "base.hpp"
#include <iostream>
#include <string>
#include <cmath>

class Floor : public Base {
    private:
        Base *toFloor;
    public: 
    Floor(Base *b) : toFloor(b) {}
    virtual double evaluate() { return floor(this->toFloor->evaluate()); }
    virtual std::string stringify() { return this->toFloor->stringify(); }
};

#endif