#include "gtest/gtest.h"

#include "swap_test.hpp"
#include "VectorContainer_test.hpp"
#include "ListContainer_test.hpp"
#include "SelectionSort_test.hpp"
#include "BubbleSort_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
