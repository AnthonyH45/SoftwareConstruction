#ifndef __ADD_HPP__
#define __ADD_HPP__

#include <iostream>
#include <string>
#include "base.hpp"
#include "iterator.hpp"

using namespace std;

class Add: public Base {
    private:
        double x, y;
        Base* l;
        Base* r;
     public:
        Add(double x, double y) : Base() { this->x = x; this->y = y; }
        Add(Base* x, Base* y) : Base() { this->l = x; this->r = y; }
        virtual double evaluate() { return this->x + this->y; }
        virtual string stringify() { return  to_string(this->x) + " + " + to_string(this->y); }
        Iterator* create_iterator() { return new BinaryIterator(this); }
        virtual Base* get_left() {return this->l;}
        virtual Base* get_right() {return this->r;}
         virtual void accept(CountVisitor *v) { v->visit_add(); }
};

#endif
