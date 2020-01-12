#ifndef __STRING_DECORATOR_HPP__
#define __STRING_DECORATOR_HPP__

#include <iostream>
#include <cmath>
#include <string>

#include "paren.hpp"
#include "truncate.hpp"
#include "base.hpp"

class StringDecorator: public Base {
    private:
        Base* root;
        Trunc* trunc_eval;
        Paren* paren_eval;
        char type;
    public:
        StringDecorator() : 
            root(nullptr), 
            trunc_eval(nullptr), 
            paren_eval(nullptr),
            type(' ') 
            {}
        StringDecorator(Base* b, char c) : 
            root(b), 
            type(c) 
            {
                if (type == 't') {
                    this->trunc_eval = new Trunc(b);
                } else if (type == 'p') {
                    this->paren_eval = new Paren(b);
                }
            }
        virtual double evaluate() { 
            if (type == 't') {
                return this->trunc_eval->evaluate();
            } else if (type == 'p') {
                return this->paren_eval->evaluate();
            } else {
                return 0.0;
            }
        }
        virtual std::string stringify() {     
            if (type == 't') {
                return this->trunc_eval->stringify();
            } else if (type == 'p') {
                return this->paren_eval->stringify();
            } else {
                return "";
            }
        }
};

#endif