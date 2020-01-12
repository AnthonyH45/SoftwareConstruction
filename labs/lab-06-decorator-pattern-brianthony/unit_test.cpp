#include "gtest/gtest.h"

/*
#include "swap_test.hpp"
#include "VectorContainer_test.hpp"
#include "ListContainer_test.hpp"
#include "SelectionSort_test.hpp"
#include "BubbleSort_test.hpp"
*/


#include "Paren_test.hpp"
#include "Truncate_test.hpp"
#include "ceil_test.hpp"
#include "floor_test.hpp"
#include "abs_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
