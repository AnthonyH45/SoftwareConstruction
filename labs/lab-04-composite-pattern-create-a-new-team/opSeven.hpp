#ifndef __OPSEVEN_HPP__
#define __OPSEVEN_HPP__

#include "base.hpp"
#include <cfloat>

class OpSeven : public Base {
    public:
        OpSeven() : Base() { }
        virtual double evaluate() { return DBL_MAX; }
        virtual std::string stringify() { return "DBL_MAX"; }
};

#endif //__OPSEVEN_HPP__
