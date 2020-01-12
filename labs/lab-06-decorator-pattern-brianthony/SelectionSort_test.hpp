#ifndef __SELSORT_TEST_HPP__
#define __SELSORT_TEST_HPP__

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

#include "SelectionSort.cpp"

TEST(SortTestSet, SelectionSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four); // 28

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two); // 5

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six); // 4

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA); // 28
    container->add_element(TreeB); // 5
    container->add_element(TreeC); // 4

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28); // 4
    EXPECT_EQ(container->at(1)->evaluate(), 5); // 5
    EXPECT_EQ(container->at(2)->evaluate(), 4); // 28

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4); // 4
    EXPECT_EQ(container->at(1)->evaluate(), 5); // 5
    EXPECT_EQ(container->at(2)->evaluate(), 28); // 28
}

#endif
