#include <stdio.h>
#include <time.h>

int main()
{
  

  srand((unsigned)time(NULL));
  clock_t start_t = clock();



  double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;
  printf("%f sec\n",stop_t);

  return 0;

}


void ifcal()
{

  if () {

  } else if () {
    
  }

  printf("ifcal: %d sec\n");
}

