#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define MAX 2150000000
#define MAX 2100000000

int ifcal()
{

  int a = 0, b = 0;

  int i = 0;
  clock_t start_t = clock();

  for (; i < MAX; i++) {
    if (a == 0) {
      b += a;     
    } else if (a == 1) {
      b += a;     
    }
  }

  double stop_t = (double)(clock() - start_t);

  printf("b = %d\n", b);
  printf("ifcal: %f sec\n", stop_t);

  return b;

}

int switchcal()
{

  int a = 0, b = 0;

  int i = 0;

  clock_t start_t = clock();

  for (; i < MAX; i++) {
    switch (a) {
    case 0:
      b += a;
      break;
    case 1:
      b += a;
      break;
    }
  }

  double stop_t = (double)(clock() - start_t);
  //double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;

  printf("b = %d\n", b);
  printf("switchcal: %f sec\n", stop_t);


  return b;

}

int main()
{
  

  srand((unsigned)time(NULL));

  ifcal();
  switchcal();


  return 0;


}

