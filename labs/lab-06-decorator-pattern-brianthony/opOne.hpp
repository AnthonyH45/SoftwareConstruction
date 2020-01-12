#ifndef __OPONE_HPP__
#define __OPONE_HPP__

#include "base.hpp"

class OpOne : public Base {
    public:
        OpOne() : Base() { }
        virtual double evaluate() { return -100.98; }
        virtual std::string stringify() { return "-100.98"; }
};

#endif //__OPONE_HPP__
