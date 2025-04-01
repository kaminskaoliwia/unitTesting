#include "pch.h"
#include "C:\Users\kamin\Desktop\w³asne_repo\unitTesting\srArytTest\srAryt\tab.cpp"

#define MAX 10

TEST(TestCaseName, TestName) {
  int tabA[] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
  int* tA = tabA;
  int kA = 0;
  int sumA = 0;

  EXPECT_EQ(5, sumOdd(sumA, kA, tA));
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
  int tabA[] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
  int* tA = tabA;
  int kA = 0;
  int sumA = 0;

  EXPECT_EQ(7, sumOdd(sumA, kA, tA));
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName3) {
  int tabA[] = {2,4,6,8,10,12,14,16,18,20};
  int* tA = tabA;
  int kA = 0;
  int sumA = 0;

  EXPECT_EQ(0, sumOdd(sumA, kA, tA));
  EXPECT_TRUE(true);
}