#ifndef __OPFOUR_HPP__
#define __OPFOUR_HPP__

#include "base.hpp"

class OpFour : public Base {
    public:
        OpFour() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0"; }
};

#endif //__OPSEVEN_HPP__
