#ifndef __LISTCONT_TEST_HPP__
#define __LISTCONT_TEST_HPP__

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

#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

TEST(ListContainerTestSet, AddTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* hundred = new Op(100); 
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(hundred);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
    EXPECT_EQ(test_container->at(1)->evaluate(), 100);
}

TEST(ListContainerTestSet2, AddAndBubSortTest) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Op* three = new Op(3);
    Op* negThreePointFive = new Op(-3.5);
    Op* hundredPointOne = new Op(100.1);

    ListContainer* ltest = new ListContainer();

    ltest->add_element(one); 
    ltest->add_element(two);
    ltest->add_element(three); 
    ltest->add_element(negThreePointFive);
    ltest->add_element(hundredPointOne);

    ASSERT_EQ(ltest->size(), 5);
    EXPECT_EQ(ltest->at(0)->evaluate(), 1);
    EXPECT_EQ(ltest->at(1)->evaluate(), 2);
    EXPECT_EQ(ltest->at(2)->evaluate(), 3);
    EXPECT_EQ(ltest->at(3)->evaluate(), -3.5);
    EXPECT_EQ(ltest->at(4)->evaluate(), 100.1);

    ltest->set_sort_function(new BubbleSort());
    ltest->sort();

    ASSERT_EQ(ltest->size(), 5);
    EXPECT_EQ(ltest->at(0)->evaluate(), -3.5);
    EXPECT_EQ(ltest->at(1)->evaluate(), 1);
    EXPECT_EQ(ltest->at(2)->evaluate(), 2);
    EXPECT_EQ(ltest->at(3)->evaluate(), 3);
    EXPECT_EQ(ltest->at(4)->evaluate(), 100.1);
}

TEST(ListContainerTestSet3, AddAndSelSortTest) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Op* three = new Op(3);
    Op* negThreePointFive = new Op(-3.5);
    Op* hundredPointOne = new Op(100.1);

    ListContainer* ltest = new ListContainer();

    ltest->add_element(one); 
    ltest->add_element(two);
    ltest->add_element(three); 
    ltest->add_element(negThreePointFive);
    ltest->add_element(hundredPointOne);

    ASSERT_EQ(ltest->size(), 5);
    EXPECT_EQ(ltest->at(0)->evaluate(), 1);
    EXPECT_EQ(ltest->at(1)->evaluate(), 2);
    EXPECT_EQ(ltest->at(2)->evaluate(), 3);
    EXPECT_EQ(ltest->at(3)->evaluate(), -3.5);
    EXPECT_EQ(ltest->at(4)->evaluate(), 100.1);

    ltest->set_sort_function(new SelectionSort());
    ltest->sort();

    ASSERT_EQ(ltest->size(), 5);
    EXPECT_EQ(ltest->at(0)->evaluate(), -3.5);
    EXPECT_EQ(ltest->at(1)->evaluate(), 1);
    EXPECT_EQ(ltest->at(2)->evaluate(), 2);
    EXPECT_EQ(ltest->at(3)->evaluate(), 3);
    EXPECT_EQ(ltest->at(4)->evaluate(), 100.1);
}
#endif
