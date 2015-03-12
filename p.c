#include <stdio.h>

int main(void)
{
  int *p, i;
  p = &i;

  if (!p) {
    printf("no p\n");
  } else {
    printf("%d\n", *p);
    printf("i = %d\n", i);
  }


  return 0;
}

