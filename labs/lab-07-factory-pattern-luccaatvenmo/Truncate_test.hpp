#ifndef __TRUNCATE_TEST_HPP__
#define __TRUNCATE_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "sort.hpp"
#include "container.hpp"
#include "VectorContainer.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "opOne.hpp"
#include "opTwo.hpp"
#include "opThree.hpp"
#include "opFour.hpp"
#include "opFive.hpp"
#include "opSix.hpp"
#include "opSeven.hpp"

#include "truncate.hpp"

TEST(TruncateTest, TruncTest1) {
    Op* five = new Op(5);
    Op* six = new Op(6);
    Mult* fiveTimesSix = new Mult(five, six);
    char t = 't';
    StringDecorator* toTest = new StringDecorator(fiveTimesSix, t);
    EXPECT_EQ(toTest->stringify(), "30.000000");
}

TEST(TruncateTest, TruncTest2) {
    Op* nine = new Op(9);
    Op* three = new Op(3);
    Div* ninedivthree = new Div(nine, three);
    char t = 't';
    StringDecorator* toTest = new StringDecorator(ninedivthree, t);
    EXPECT_EQ(toTest->stringify(), "3.000000");
}

TEST(TruncateTest, TruncTest3) {
    Op* five = new Op(5);
    Op* six = new Op(6);
    Add* fiveAddSix = new Add(five, six);
    char t = 't';
    StringDecorator* toTest = new StringDecorator(fiveAddSix, t);
    EXPECT_EQ(toTest->stringify(), "11.000000");
}

TEST(TruncateTest, TruncTest4) {
    Op* x = new Op(10.5);
    Op* o = new Op(0.5);
    Sub* xminuso = new Sub(x, o);
    char t = 't';
    StringDecorator* toTest = new StringDecorator(xminuso, t);
    EXPECT_EQ(toTest->stringify(), "10.000000");
}

TEST(TruncateTest, TruncTest5) {
    Op* twelve = new Op(12);
    Op* zero = new Op(0);
    Mult* zeromult = new Mult(twelve, zero);
    char t = 't';
    StringDecorator* toTest = new StringDecorator(zeromult, t);
    EXPECT_EQ(toTest->stringify(), "0.000000");
}
#endif
