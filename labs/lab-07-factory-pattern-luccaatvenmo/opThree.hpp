#ifndef __OPTHREE_HPP__
#define __OPTHREE_HPP__

#include "base.hpp"

class OpThree : public Base {
    public:
        OpThree() : Base() { }
        virtual double evaluate() { return 12.34; }
        virtual std::string stringify() { return "12.34"; }
};

#endif //__OPTHREE_HPP__
