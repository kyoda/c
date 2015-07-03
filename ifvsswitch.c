#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000000000

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



  return 0;

}

