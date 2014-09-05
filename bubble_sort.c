#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>


int main()
{

  void bubbleSort(int p[], const int list[], const int listNum);

  int i;

  srand((unsigned)time(NULL));
  const int listNum = 100 * 1000;
  int list[listNum];
  int p[listNum];


  for (i = 0; i<listNum; i++) {
    list[i] = rand() % listNum;
  }


  // print array
  /*
  printf("array: \n");
  for (i = 0; i<listNum; i++) {
    printf("%d ",list[i]);
  }
  printf("\n");
  */
  printf("finish create array \n");
  

  // sort
  clock_t start_t = clock();
  bubbleSort(p, list, listNum);
  double stop_t = (double)(clock() - start_t) / CLOCKS_PER_SEC;

  // print result
  /*
  printf("sorting array: \n");
  for (i = 0; i<listNum; i++) {
    printf("%d ",p[i]);
  }
  printf("\n");
  */


  printf("%f sec\n",stop_t);

  return 0;

}

void bubbleSort(int p[], const int list[], const int listNum)
{

  int limit, i, tmp = 0;
  memcpy(p, list, listNum * sizeof(int));
  
  for (limit = -1; limit < listNum - 2; limit++) {
    for (i = listNum - 2; i > limit; i--) {
      if (p[i] > p[i+1]) {
        tmp = p[i];  
        p[i] = p[i+1];
        p[i+1] = tmp;
        tmp = 0;
      }

    }
  }

}

