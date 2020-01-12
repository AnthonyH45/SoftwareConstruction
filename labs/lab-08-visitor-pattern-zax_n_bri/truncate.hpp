#ifndef __TRUNCATE_HPP__
#define __TRUNCATE_HPP__

#include "base.hpp"

#include <iostream>
#include <string>
#include <cmath>

/*Truncate (Trunc class): shortens the expression tree so that whatever compsite it encloses will 
report its evaluation() value as its stringify() return rather than the full expression. Ex: The 
tree 5+Trunc(7-4) would stringify() to 5+3 if called on the root node.*/

class Trunc : public Base {
    private:
        Base *toTrunc;
    public:
        Trunc(Base* b) : toTrunc(b) {}
        virtual double evaluate() {
            return this->toTrunc->evaluate(); 
        }
        virtual std::string stringify() {
            auto toReturn = std::to_string(this->toTrunc->evaluate()); 
            return toReturn;
        }
        Iterator* create_iterator() { return new UnaryIterator(this); }
        virtual void accept(CountVisitor *v) { v->visit_trunc(); }
};

#endif
