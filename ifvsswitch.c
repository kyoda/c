#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000000

int ifcal()
{

  int a = 0;
  double b = 0;

  int i = 0;
  clock_t start_t = clock();

  for (; i < MAX; i++) {
    a = rand();
    if (a == 0) {
      b += (double)a;     
    } else if (a == 1) {
      b += (double)a;     
    } else if (a == 2) {
      b += (double)a;     
    } else if (a == 3) {
      b += (double)a;     
    } else if (a == 4) {
      b += (double)a;     
    } else if (a == 5) {
      b += (double)a;     
    } else if (a == 6) {
      b += (double)a;     
    } else if (a == 7) {
      b += (double)a;     
    } else if (a == 8) {
      b += (double)a;     
    } else if (a == 9) {
      b += (double)a;     
    }
  }

  double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;

  printf("a = %d, b = %f\n", a, b);
  printf("ifcal: %f sec\n", stop_t);

  return (int)b;

}

int switchcal()
{

  int a = 0;
  double b = 0;

  int i = 0;

  clock_t start_t = clock();

  for (; i < MAX; i++) {
    a = rand();
    switch (a) {
    case 0:
      b += (double)a;
      break;
    case 1:
      b += (double)a;
      break;
    case 2:
      b += (double)a;
      break;
    case 3:
      b += (double)a;
      break;
    case 4:
      b += (double)a;
      break;
    case 5:
      b += (double)a;
      break;
    case 6:
      b += (double)a;
      break;
    case 7:
      b += (double)a;
      break;
    case 8:
      b += (double)a;
      break;
    case 9:
      b += (double)a;
      break;
    }
  }

  double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;

  printf("a = %d, b = %f\n", a, b);
  printf("switchcal: %f sec\n", stop_t);


  return b;

}

int main()
{
  

  srand((unsigned)time(NULL));

  ifcal();
  switchcal();

  printf("%d\n", rand());

  return 0;

}

