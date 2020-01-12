#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

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

#include "stringdecorator.hpp"
#include "paren.hpp"

TEST(ParenTest, ParenTest1) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Mult* oneTimesTwo = new Mult(one, two);
    char p = 'p';
    StringDecorator* toTest = new StringDecorator(oneTimesTwo, p);
    //Op* five = new Op(5);
    //Sub* fiveMinusOneTimesTwo = new Sub(five, toTest);
    EXPECT_EQ(toTest->stringify(), "(1.000000 * 2.000000)");
}

TEST(ParenTest, ParenTest2) {
    Op* five = new Op(5);
    Op* three = new Op(3);
    Mult* threeTimesFive = new Mult(three, five);
    char p = 'p';
    StringDecorator* toTest = new StringDecorator(threeTimesFive, p);
    Op* ten = new Op(10);
    Sub* tenMinusMult = new Sub(ten, toTest);
    //EXPECT_EQ(tenMinusThreeTimesFive->stringify(), "5-3*5");
    EXPECT_EQ(toTest->stringify(), "(3.000000 * 5.000000)");
    EXPECT_EQ(tenMinusMult->stringify(), "10.000000 - (3.000000 * 5.000000)");
}

#endif
