#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main()
{

  int *sort(const int list[], const int listNum);
  int list[] = {2, 7, 5, 1, 9, 6};
  //const int listNum = sizeof list;
  int listNum = 6;
  int *p;

  p = sort(list, listNum);

  return 0;

}

int *sort(const int list[], const int listNum)
{

  int p[listNum];
  int i;

  memcpy(p, list, listNum);

  int index = 0, tmp = 0;

  
  for (i = 0; i<listNum - 1; i++) {
    if (p[i] > p[i+1]) {
       tmp = p[i];  
       p[i] = p[i+1];
       p[i+1] = tmp;
       tmp = 0;
    }
    
    if (i == listNum - 1) {
      index++;
      i = index; 
    }

  }

  for (i = 0; i<listNum; i++) {
    printf("%d ",p[i]);
  }
  printf("\n");

  return 0;

}

