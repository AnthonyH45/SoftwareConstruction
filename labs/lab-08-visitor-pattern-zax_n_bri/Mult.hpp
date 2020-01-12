#ifndef __MULT_HPP__
#define __MULT_HPP__

#include <string>

#include "base.hpp"
#include "iterator.hpp"

class Mult : public Base {
    private:
        double x, y;
        Base *l;
        Base *r;
    public:
        Mult(double x, double y) : Base() { this->x = x; this->y = y; }
        Mult(Base* x, Base* y) : Base() { this->l = x; this->r = y; }
        virtual double evaluate() { return (this->x * this->y); }
        virtual std::string stringify() { return std::to_string(this->x) + " * " + std::to_string(this->y); }
        Iterator* create_iterator() { return new BinaryIterator(this); }
        virtual Base* get_left() {return this->l;}
        virtual Base* get_right() {return this->r;}
        virtual void accept(CountVisitor *v) { v->visit_mult(); }
};

#endif //__MULT_HPP__
