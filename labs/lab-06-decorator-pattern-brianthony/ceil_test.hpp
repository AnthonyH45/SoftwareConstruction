#ifndef __CEIL_TEST_HPP__
#define __CEIL_TEST_HPP__

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

#include "evaldecorator.hpp"
#include "ceil.hpp"

TEST(ceilTest, ceilTest1) {
    Op* negativeOne = new Op(-1);
    char a = 'c';
    EvalDecorator* toTest = new EvalDecorator(negativeOne, a);
    EXPECT_EQ(toTest->evaluate(), -1);
}

TEST(ceilTest, ceilTest2) {
    Op* One = new Op(1);
    char a = 'c';
    EvalDecorator* toTest = new EvalDecorator(One, a);
    EXPECT_EQ(toTest->evaluate(), 1);
}

TEST(ceilTest, ceilTest3) {
    Op* negFour = new Op(-4.5);
    Op* posSeven = new Op(7.3);
    char a = 'c';
    Mult* negTwentyEight = new Mult(negFour, posSeven);
    EvalDecorator* toTest = new EvalDecorator(negTwentyEight, a);
    EXPECT_EQ(toTest->evaluate(), -32);
}

TEST(ceilTest, ceilTest4) {
    Op* negtwo = new Op(-2);
    Op* milli = new Op(1729);
    char a = 'c';
    Div* fiftytho = new Div(milli, negtwo);
    EvalDecorator* toTest = new EvalDecorator(fiftytho, a);
    EXPECT_EQ(toTest->evaluate(), -864);
}

TEST(ceilTest, ceilTest5) {
    Op* negzero = new Op(-0);
    Op* zero = new Op(0);
    char a = 'c';
    Mult* z = new Mult(negzero, zero);
    EvalDecorator* toTest = new EvalDecorator(z, a);
    EXPECT_EQ(toTest->evaluate(), 0);
}

#endif

