#ifndef __OPSIX_HPP__
#define __OPSIX_HPP__

#include "base.hpp"

class OpSix : public Base {
    public:
        OpSix() : Base() { }
        virtual double evaluate() { return 10; }
        virtual std::string stringify() { return "10"; }
};

#endif //__OPSIX_HPP__
