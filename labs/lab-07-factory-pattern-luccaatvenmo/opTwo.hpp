#ifndef __OPTWO_HPP__
#define __OPTWO_HPP__

#include "base.hpp"

class OpTwo : public Base {
    public:
        OpTwo() : Base() { }
        virtual double evaluate() { return 0.0/9; }
        virtual std::string stringify() { return "0.0/9"; }
};

#endif //__OPTWO_HPP__
