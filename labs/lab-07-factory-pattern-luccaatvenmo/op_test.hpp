#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest1, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest2, OpZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest3, OpEvaluateMultAddSub) {
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);
    EXPECT_EQ(minus->evaluate(), 29)
}

TEST(OpTest, OpEvaluateMultAddSub) {
    Base* thre = new Op(39.00);
    Base* sevn = new Op(78);
    Base* fur = new Op(4);
    Base* to = new Op(-90);
    Base* mlt = new Mult(sevn, fur);
    Base* ad = new Add(thre, mlt);
    Base* mius = new Sub(ad, to);
    EXPECT_EQ(mius->evaluate(), 441);
}

    
TEST(OpTest, OpEvaluateNonZero) {
    Base* thee = new OpSix();
    Base* sven = new OpFive();
    Base* fou = new OpFour();
    Base* tw = new OpThree();
    Base* mut = new Mult(sven, fou);
    Base* dd = new Add(thee, mut);
    Base* mnus = new Sub(dd, tw);
    Base* pows = new Pow(mnus, thee);
    EXPECT_EQ(pows->evaluate(), 4922.19);
}

#endif //__OP_TEST_HPP__
