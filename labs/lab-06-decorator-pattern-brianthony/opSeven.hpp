#ifndef __OPSEVEN_HPP__
#define __OPSEVEN_HPP__

#include <cfloat>

#include "base.hpp"


class OpSeven : public Base {
    public:
        OpSeven() : Base() { }
        virtual double evaluate() { return DBL_MAX; }
        virtual std::string stringify() { return "DBL_MAX"; }
};

#endif //__OPSEVEN_HPP__
