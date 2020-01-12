#ifndef __ABS_TEST_HPP__
#define __ABS_TEST_HPP__

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
#include "abs.hpp"

TEST(absTest, absTest1) {
    Op* negativeOne = new Op(-1);
    char a = 'a';
    EvalDecorator* toTest = new EvalDecorator(negativeOne, a);
    EXPECT_EQ(toTest->evaluate(), 1);
}

TEST(absTest, absTest2) {
    Op* One = new Op(1);
    char a = 'a';
    EvalDecorator* toTest = new EvalDecorator(One, a);
    EXPECT_EQ(toTest->evaluate(), 1);
}

TEST(absTest, absTest3) {
    Op* negFour = new Op(-4);
    Op* posSeven = new Op(7);
    char a = 'a';
    Mult* negTwentyEight = new Mult(negFour, posSeven);
    EvalDecorator* toTest = new EvalDecorator(negTwentyEight, a);
    EXPECT_EQ(toTest->evaluate(), 28);
}

TEST(absTest, absTest4) {
    Op* negtwo = new Op(-2);
    Op* milli = new Op(1000000);
    char a = 'a';
    Div* fiftytho = new Div(milli, negtwo);
    EvalDecorator* toTest = new EvalDecorator(fiftytho, a);
    EXPECT_EQ(toTest->evaluate(), 500000);
}

TEST(absTest, absTest5) {
    Op* negzero = new Op(-0);
    Op* zero = new Op(0);
    char a = 'a';
    Mult* z = new Mult(negzero, zero);
    EvalDecorator* toTest = new EvalDecorator(z, a);
    EXPECT_EQ(toTest->evaluate(), 0);
}
#endif