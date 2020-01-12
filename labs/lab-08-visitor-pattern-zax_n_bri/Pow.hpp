#ifndef __POW_HPP__
#define __POW_HPP__

#include <string>

#include "base.hpp"

class Pow : public Base {
    private:
        double x = 0, y = 0, z = 1;
        Base *l;
        Base *r;
    public:
        Pow(double x, double y) : Base() {
            if (y == 0) this->z = 0;
            else {
                this->x = x; this->y = y;  
                for (int i = 0; i < y; ++i) {
                    this->z *= this->x;
                }
            }
        }

        Pow(Base* x, Base* y) : Base() {
            if (y->evaluate() == 0) this->z = 0;
            else {
                this->l = x; this->r = y;  
                for (int i = 0; i < this->y; ++i) {
                    this->z *= this->x;
                }
            }
        }

        virtual double evaluate() { return this->z; }
        virtual std::string stringify() { return std::to_string(this->x) + " ** " + std::to_string( this->y); }
        Iterator* create_iterator() { return new BinaryIterator(this); }
        virtual Base* get_left() {return this->l;}
        virtual Base* get_right() {return this->r;}
        virtual void accept(CountVisitor *v) { v->visit_pow(); }
};

#endif //__MULT_HPP__
