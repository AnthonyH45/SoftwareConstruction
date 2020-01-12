#ifndef __EVAL_DECORATOR_HPP__
#define __EVAL_DECORATOR_HPP__

#include <iostream>
#include <cmath>
#include "ceil.hpp"
#include "floor.hpp"
#include "abs.hpp"
#include "base.hpp"


class EvalDecorator: public Base {
    private:
        Base* root;
        Ceil *ceil_eval;
        Floor *floor_eval;
        ABS *abs_eval;
        char type;
    public:
        EvalDecorator() : 
            root(nullptr), 
            ceil_eval(nullptr), 
            floor_eval(nullptr), 
            abs_eval(nullptr), 
            type(' ') 
            {}
        EvalDecorator(Base* b, char c) : 
            root(b), 
            type(c) 
            {
                if (type == 'c') {
                    this->ceil_eval = new Ceil(b);
                } else if (type == 'f') {
                    this->floor_eval = new Floor(b);
                } else if (type == 'a') {
                    this->abs_eval = new ABS(b);
                }
            }
        virtual double evaluate() { 
            if (type == 'c') {
                return this->ceil_eval->evaluate();
            } else if (type == 'f') {
                return this->floor_eval->evaluate();
            } else if (type == 'a') {
                return this->abs_eval->evaluate();
            }
            else {
                return 0.0;
            }
        }
        virtual std::string stringify() {     
            if (type == 'c') {
                return this->ceil_eval->stringify();
            } else if (type == 'f') {
                return this->floor_eval->stringify();
            } else if (type == 'a') {
                return this->abs_eval->stringify();
            }
            else {
                return "";
            }
        }
};

#endif
