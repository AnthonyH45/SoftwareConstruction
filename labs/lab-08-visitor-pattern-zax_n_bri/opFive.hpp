#ifndef __OPFIVE_HPP__
#define __OPFIVE_HPP__

#include "base.hpp"

class OpFive : public Base {
    public:
        OpFive() : Base() { }
        virtual double evaluate() { return 3.141592653589793238462643383279; }
        virtual std::string stringify() { return "3.141592653589793238462643383279"; }
};

#endif //__OPFIVE_HPP__
