import application;
#include "gtest/gtest.h"
#include <iostream>
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  std::cout << version();
}