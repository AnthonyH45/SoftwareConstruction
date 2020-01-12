#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <random>

class Rand : public Base {
    private:
        double value;
    public:
        Rand(double value) : Base() { this->value = rand() % 100; }
        virtual double evaluate() { return this->value; }
        virtual std::string stringify() { return this->value + ""; }
};

#endif //__RAND_HPP__
