#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>

class Pow : public Base {
    private:
        double x = 0, y = 0, z = 1;
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
                this->x = x->evaluate(); this->y = y->evaluate();  
                for (int i = 0; i < this->y; ++i) {
                    this->z *= this->x;
                }
            }
        }

        virtual double evaluate() { return this->z; }
        virtual std::string stringify() { return std::to_string(this->x) + " ** " + std::to_string( this->y); }
};

#endif //__MULT_HPP__
