#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 2150000000

int ifcal()
{

  int a = 0, b = 0;

  int i = 0;
  for (; i < MAX; i++) {
    if (a == 0) {
      b += a;     
    } else if (a == 1) {
      b += a;     
    }
  }

  printf("b = %d\n", b);
  return b;

}

int switchcal()
{

  int a = 0, b = 0;

  int i = 0;
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

  printf("b = %d\n", b);
  return b;

}

int main()
{
  

  srand((unsigned)time(NULL));
  clock_t start_t = clock();
  ifcal();
  //double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;
  double stop_t = (double)(clock() - start_t);
  printf("ifcal: %f sec\n", stop_t);

  start_t = clock();
  switchcal();
  stop_t = (double)(clock() - start_t);
  printf("switchcal: %f sec\n", stop_t);

  return 0;


}

