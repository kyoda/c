#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main()
{

  int *bubbleSort(const int list[], const int listNum);
  int list[] = {2, 7, 5, 1, 9, 6};
  //const int listNum = sizeof list;
  int listNum = 6;
  int *p;

  p = bubbleSort(list, listNum);

  return 0;

}

int *bubbleSort(const int list[], const int listNum)
{

  int p[listNum];
  int limit, i, tmp = 0;

  memcpy(p, list, listNum * sizeof(int));

  for (i = 0; i<listNum; i++) {
    printf("%d ",p[i]);
  }
  printf("\n");
  
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

  for (i = 0; i<listNum; i++) {
    printf("%d ",p[i]);
  }
  printf("\n");

  return 0;

}

