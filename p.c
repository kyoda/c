#include <stdio.h>

int main(void)
{
  int *p, i;
  i = '\0';
  p = &i;

  if (!p) {
    printf("no p\n");
  } else {
    printf("%d\n", *p);
    printf("i = %d\n", i);
  }

  char *str = "aiueoaiueo";
  printf("String = %s, Length = %lu\n", str, (sizeof str));


  return 0;
}

