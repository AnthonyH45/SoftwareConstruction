#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include "base.hpp"

#include <iostream>
#include <string>
#include <cmath>

class Paren : public Base {
    private:
        Base* toParen;
    public:
        Paren(Base* b) : toParen(b) {}
        virtual double evaluate() { return this->toParen->evaluate(); }
        virtual std::string stringify() { 
            std::string toReturn = "("; 
            toReturn += this->toParen->stringify(); 
            toReturn += ")"; 
            return toReturn;
        }
        Iterator* create_iterator() { return new UnaryIterator(this); }
        virtual void accept(CountVisitor *v) { v->visit_paren(); }
};

#endif
