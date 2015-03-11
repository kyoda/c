#include <stdio.h>

int main(void)
{
  int *p, i = 3;
  p = &i;

  if (!p) {
    printf("no\n");
  } else {
    printf("%d\n", *p);
  }

  return 0;
}
