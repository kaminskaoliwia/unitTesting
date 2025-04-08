#include "pch.h"
#include "C:\Users\kamin\Desktop\w³asne_repo\unitTesting\SortTestUnitTests\SortTestUnitTests\Sort.cpp"

TEST(simpleInsertionTest, test1) {
  int t[] = {5, 6, 3, 2};
  int* t1 = t;
  int size = 4;
  int expected[] = {2, 3, 5, 6};

  simpleInsertion(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}

TEST(simpleInsertionTest, test2) {
  int t[] = {9, 8, 7, 6, 0, -5, -3333333, 0, 0, 0};
  int* t1 = t;
  int size = 10;
  int expected[] = {-3333333, -5, 0, 0, 0, 0, 6, 7, 8, 9};

  simpleInsertion(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}

TEST(simpleSelectiontest, test1) {
  int t[] = {5, 6, 3, 2};
  int* t1 = t;
  int size = 4;
  int expected[] = {2, 3, 5, 6};

  simpleSelection(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}

TEST(simpleSelectiontest, test2) {
  int t[] = {9, 8, 7, 6, 0, -5, -3333333, 0, 0, 0};
  int* t1 = t;
  int size = 10;
  int expected[] = {-3333333, -5, 0, 0, 0, 0, 6, 7, 8, 9};

  simpleSelection(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}

TEST(bubbleSortTest, test1) {
  int t[] = {5, 6, 3, 2};
  int* t1 = t;
  int size = 4;
  int expected[] = {2, 3, 5, 6};

  bubbleSort(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}

TEST(bubbleSortTest, test2) {
  int t[] = {9, 8, 7, 6, 0, -5, -3333333, 0, 0, 0};
  int* t1 = t;
  int size = 10;
  int expected[] = {-3333333, -5, 0, 0, 0, 0, 6, 7, 8, 9};

  bubbleSort(t1, size);
  for (int i = 1; i < size; i++) {
    EXPECT_EQ(expected[i], t1[i]);
  }
  EXPECT_TRUE(true);
}