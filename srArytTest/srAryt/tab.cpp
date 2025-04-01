
#include "tab.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>

#define MAXLINE 10
#define MAX 10

void initTab(int t[], int nSize)
{
  srand((unsigned int)time(NULL));
  for(int i = 0; i < 50; i++)
    t[i] = rand() % nSize;
}

void printTab(int t[], int nSize)
{
  printf("[");
  for(int i = 0; i < nSize; i++)
  {
    printf("%d ", t[i]);
    if((i+1) % MAXLINE == 0) 
      printf("\n");
  }
  printf("]\n");
}

int sumOdd(int sum, int k, int* p)
{
  for(int i = 0; i < MAX; i++) 
  {
    if(*p % 2 != 0) 
    {
      sum += *p; 
      k++;       
    }
    p++; 
  }

  if(k == 0) 
    return 0;

  sum = sum / k; 
  return sum;    
}
