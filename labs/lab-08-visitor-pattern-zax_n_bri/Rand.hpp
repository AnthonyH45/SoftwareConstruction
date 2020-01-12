#ifndef __RAND_HPP__
#define __RAND_HPP__

#include <random>
#include <string>

#include "base.hpp"

class Rand : public Base {
    private:
        double value;
    public:
        Rand(double value) : Base() { this->value = rand() % 100; }
        virtual double evaluate() { return this->value; }
        virtual std::string stringify() { return std::to_string(this->value); }
        Iterator* create_iterator() { return new NullIterator(this); }
         virtual void accept(CountVisitor *v) { v->visit_rand(); }
};

#endif //__RAND_HPP__
