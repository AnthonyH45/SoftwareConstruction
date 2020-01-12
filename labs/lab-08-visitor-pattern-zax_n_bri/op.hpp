#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "visitor.hpp"

class Op : public Base {
    private:
        double value;
    public:
        Op(double value) : Base() { this->value = value; }
        virtual double evaluate() { return this->value; }
        virtual std::string stringify() { return std::to_string(this->value); }
        Iterator* create_iterator() { return new NullIterator(this); }
        virtual void accept(CountVisitor *v) { v->visit_op(); }
};

#endif //__OP_HPP__
