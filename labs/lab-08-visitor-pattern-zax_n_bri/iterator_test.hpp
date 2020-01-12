#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__

#include "gtest/gtest.h"

#include "visitor.hpp"
#include "iterator.hpp"
#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "ceil.hpp"
#include "floor.hpp"

TEST(IteratorTest, BinaryTest) {
    Base *b = new Add(new Op(4), new Op(6));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}
TEST(IteratorTest, BinaryTest1) {
    Base *b = new Pow(new Op(4), new Op(6));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}
TEST(IteratorTest, BinaryTest2) {
    Base *b = new Div(new Op(4), new Op(6));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}
TEST(IteratorTest, BinaryTest3) {
    Base *b = new Mult(new Op(4), new Op(6));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}
TEST(IteratorTest, BinaryTest4) {
    Base *b = new Sub(new Op(4), new Op(6));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}
TEST(IteratorTest, NullTest) {
    Base *b = new Op(3);
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current(), nullptr);
}
TEST(IteratorTest, UnaryTestCeil) {
    Base *b = new Ceil(new Op(4.99));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 5);
}
TEST(IteratorTest, UnaryTestFloor) {
    Base *b = new Floor(new Op(4.34));
    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
}

#endif