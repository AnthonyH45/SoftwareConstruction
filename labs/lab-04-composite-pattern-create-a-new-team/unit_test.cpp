#include "gtest/gtest.h"

#include "base.hpp"
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
    EXPECT_EQ(minus->evaluate(), 29);
}

TEST(OpTest4, OpEvaluateMultAddSub) {
    Base* thre = new Op(39.00);
    Base* sevn = new Op(78);
    Base* fur = new Op(4);
    Base* to = new Op(-90);
    Base* mlt = new Mult(sevn, fur);
    Base* ad = new Add(thre, mlt);
    Base* mius = new Sub(ad, to);
    EXPECT_EQ(mius->evaluate(), 441);
}
    
TEST(OpTest5, OpEvaluateNonZero) {
    Base* thee = new OpSix(); //10
    Base* sven = new OpFive(); //3.14...
    Base* fou = new OpFour(); // 0.0 
    Base* tw = new OpThree(); // 12.34
    Base* mut = new Mult(sven, fou);
    Base* dd = new Add(thee, mut);
    Base* mnus = new Sub(dd, tw);
    Base* pows = new Pow(mnus, thee);
    EXPECT_EQ(pows->evaluate(), 4922.19);
}

TEST(OpTest6, TenToTheTen) {
    Base* ten = new OpSix();
    Base* ten2 = new OpSix();
    Base* pows = new Pow(ten, ten2);
    EXPECT_EQ(pows->evaluate(), 10000000000);
}

TEST(OpTest7, TenToTheZeroPlusTenMultZeroSubTenDivTen) {
    Base* ten = new OpSix();
    Base* zero = new OpFour();
    Base* pi = new OpFive();
    Base* pows = new Pow(ten, zero);
    Base* add = new Add(pows, ten);
    Base* mult = new Mult(ten, zero);
    Base* sub = new Sub(mult, ten);
    Base* div = new Div(sub, ten);
    EXPECT_EQ(div->evaluate(), -1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
