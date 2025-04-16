#include "pch.h"
#include "..\helloTestSuite\doubler.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(6, doubler(3));
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
  EXPECT_EQ(10, doubler(5));
  EXPECT_TRUE(true);
}