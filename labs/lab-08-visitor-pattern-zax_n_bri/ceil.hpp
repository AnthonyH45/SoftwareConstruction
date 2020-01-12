#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "base.hpp"
#include <iostream>
#include <string>
#include <cmath>

class Ceil: public Base {
    private:
        Base* toCeil;
    public:
        Ceil(Base* b) : toCeil(b) {}
        virtual double evaluate() { return ceil(this->toCeil->evaluate()); }
        virtual std::string stringify() { return this->toCeil->stringify(); }
        Iterator* create_iterator() { return new UnaryIterator(this); }
        virtual void accept(CountVisitor *v) { v->visit_ceil(); }
};

#endif
