#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

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
#include "floor.hpp"

TEST(floorTest, floorTest1) {
    Op* x = new Op(0.99);
    char f = 'f';
    EvalDecorator* toTest = new EvalDecorator(x, f);
    EXPECT_EQ(toTest->evaluate(), 0);
}

TEST(floorTest, floorTest2) {
    Op* b = new Op(-1.54);
    char f = 'f';
    EvalDecorator* toTest = new EvalDecorator(b, f);
    EXPECT_EQ(toTest->evaluate(), -2);
}

TEST(floorTest, floorTest3) {
    Op* c = new Op(-100000.69);
    char f = 'f';
    EvalDecorator* toTest = new EvalDecorator(c, f);
    EXPECT_EQ(toTest->evaluate(), -100001);
}

TEST(floorTest, floorTest4) {
    Op* d = new Op(135352.252525);
    char f = 'f';
    EvalDecorator* toTest = new EvalDecorator(d, f);
    EXPECT_EQ(toTest->evaluate(), 135352);
}

TEST(floorTest, floorTest5) {
    Op* e = new Op(69.696969);
    char f = 'f';
    EvalDecorator* toTest = new EvalDecorator(e, f);
    EXPECT_EQ(toTest->evaluate(), 69);
}
#endif
