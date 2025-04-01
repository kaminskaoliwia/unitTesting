#include <iostream>
#include "tab.h"

#define MAXLINE 10
#define MAX 10
// srednia arytmetyczna nieparzystych elementów

int t[MAX] = { 0 };

int main()
{
  int sum = 0;
  int k = 0;
  initTab(t, MAX);
  printTab(t, MAX);
  printf(" ");
  sumOdd(sum, k, t);
  int result = sumOdd(sum, k, t);
  printf("%d", result);

  return 0;
}
