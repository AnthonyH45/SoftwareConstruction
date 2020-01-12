#ifndef __VISITOR_TEST_HPP__
#define __VISITOR_TEST_HPP__

#include "gtest/gtest.h"

#include "visitor.hpp"
#include "iterator.hpp"
#include "base.hpp"
#include "Add.hpp"
#include "op.hpp"
#include "Div.hpp"
#include "Mult.hpp"

TEST(VisitorTest, VisitorTest1) {
    CountVisitor *v = new CountVisitor();
    Base *op1 = new Op(8);
    Base *op2 = new Op(6);

    op1->accept(v);
    op2->accept(v);

    Base *b1 = new Div(op1, op2);
    b1->accept(v);

    EXPECT_EQ(v->op_count(), 2);
    EXPECT_EQ(v->div_count(), 1);
}

TEST(VisitorTest, VisitorTest3) {
    CountVisitor *v = new CountVisitor();
    Base *op1 = new Op(8);
    Base *op2 = new Op(6);

    op1->accept(v);
    op2->accept(v);

    Base *b1 = new Div(op1, op2);
    b1->accept(v);

    Base *op3 = new Op(3.5);
    Base *op4 = new Op(1.57);

    op3->accept(v);
    op4->accept(v);

    Base *b2 = new Add(op3, op4);
    b2->accept(v);

    EXPECT_EQ(v->op_count(), 4);
    EXPECT_EQ(v->div_count(), 1);
    EXPECT_EQ(v->add_count(), 1);     
}    

TEST(VisitorTest, VisitorTest2) {
    CountVisitor *v = new CountVisitor();
    Base *op1 = new Op(8);
    Base *op2 = new Op(6);

    op1->accept(v);
    op2->accept(v);

    Base *b1 = new Div(op1, op2);
    b1->accept(v);

    Base *op3 = new Op(3.5);
    Base *op4 = new Op(1.57);

    op3->accept(v);
    op4->accept(v);

    Base *b2 = new Add(op3, op4);
    b2->accept(v);

    Base *b3 = new Add(b1, b2);
    b3->accept(v);

    Base *b4 = new Mult(op1, b3);
    b4->accept(v);

    EXPECT_EQ(v->op_count(), 4);
    EXPECT_EQ(v->div_count(), 1);
    EXPECT_EQ(v->add_count(), 2);
    EXPECT_EQ(v->mult_count(), 1);    
}


#endif