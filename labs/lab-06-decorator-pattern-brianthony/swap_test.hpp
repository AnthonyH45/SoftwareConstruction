#ifndef __SWAP_TEST_HPP__
#define __SWAP_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "sort.hpp"
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

#include "ListContainer.cpp"
#include "VectorContainer.cpp"

TEST(SwapListVectorTestSet, SwapVectorListTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* treeA = new Mult(seven, four);
    // 28

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* treeB = new Add(three, two);
    // 6

    ListContainer* list_testing = new ListContainer();
    VectorContainer* vector_testing = new VectorContainer();
    list_testing->add_element(treeA); // 28
    list_testing->add_element(treeB); // 5
    vector_testing->add_element(treeA);
    vector_testing->add_element(treeB);

    list_testing->swap(0,1);
    vector_testing->swap(0,1);
    EXPECT_EQ(list_testing->size(), 2);
    EXPECT_EQ(vector_testing->size(), 2);

    ASSERT_EQ(list_testing->size(), 2);
    EXPECT_EQ(list_testing->at(0)->evaluate(), 5);
    EXPECT_EQ(list_testing->at(1)->evaluate(), 28);
}


//TEST(SwapVectorSet, SwapVectorTest) {}

#endif
