
#include "Sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>
#include <stdlib.h>

#define PARAMNO 2
#define DEBUGMAX 50
#define NL 10


void initTab( int* pTab, int nSize );
void printTab( int* pTab, int nSize );
int createTab( int**, int );


int main( int argc, char* argv[] )
{ 
  // wymagana ilosc parametrow
  if( argc != PARAMNO )
  {
    printf( "Usage: %s <Size of table>\n", argv[0] );
    return 1;
  }

  // rozmiar tablicy
  int tabsize = atoi( argv[1] );

  //alokacja tablicy wzorcowej i jej zainicjowanie (funkje)
  int* pTab = NULL;
  if( !createTab( &pTab, tabsize ) )  {
    printf( "Memory allocation error! - pTab\n" );
    return 2;
  }

  initTab(pTab, tabsize);
  typedef void (*pFType)(int*, int); // wskaźnik do tablicy przyjmującej int* tablicy oraz int rozmiar

  pFType pSortTab[] = {simpleInsertion, bubbleSort, simpleSelection, mixSort, heapSort, quickSort, halfSort}; //tablica wskaźników
  const char* tabNames[] = {"simpleInsertion", "bubbleSort", "simpleSelection", "mixSort", "heapSort", "quickSort", "halfSort"};

  // alokacja pamieci na tabl do sortow
  int* pCpTab = NULL;
  if( !createTab( &pCpTab, tabsize ) )
  {
    printf( "Memory allocation error! - pCpTable" );
    return 3;
  }

  // obliczyc rozmiar tablicy adresow funkcji
  int iterations = sizeof( pSortTab )/sizeof( pFType ); //wielkość tablicy/wielkość elementów

  // zainicjowanie tablicy dynamicznie i posortowanie jej przez wszystkie sortowania w tablicy
  for (int i = 0; i <iterations; i++) 
  {
    memcpy( pCpTab, pTab, sizeof(int)*tabsize); 

    // -- odczytac czas  clock()
    clock_t start = clock();
    // -- posortowac
    pSortTab[i]( pCpTab, tabsize );
    // -- odczytac czas i wypisac czas sortowania (wzor w helpach), wypisac nazwe srtowania
    clock_t end = clock();
    printf( "\nMetoda: %s, czas: %lf sekund, %0.2lf milisekund\n", 
      tabNames[i], (double)( end - start ) / CLOCKS_PER_SEC, (double)( end - start ) / CLOCKS_PER_SEC * 1000  );
    // lub ((clock_t)1000) i ((clock_t)1000) * 1000)

  }
  // zwolnic pamiec
  free(pTab);
  return 0;
}

int createTab( int** pTab, int nSize )
{
  *pTab = (int*)malloc( nSize*sizeof(int) );
  if( !*pTab ) // if( *pTab = NULL )
    return 0;
  // wyzerowac tablice, do tego nigdy nie uzywac petli (np for)
  memset( *pTab, 0, nSize*sizeof(int) );
  return 1;
}

void printTab( int* pTab, int nSize )
{
  for( int i=0; i<nSize; i++ /*, pTab++*/)
  {
    printf("%d ", *pTab++ ); //co 10 linie nl  // *( pTab + i*sizeof(int) );
    if(((i+1) % NL) == 0) printf("\n");  
  }
}

void initTab( int* pTab, int nSize ) 
{
  srand((unsigned int)time(NULL));
  for( int i=0;i< nSize; i++ )
  {
    pTab[i] = rand() % nSize;
  }
}

