#include <stdio.h>

int main(void)
{
  int *p, i;
  i = 0;
  p = &i;

  if (!p) {
    printf("no p\n");
  } else {
    printf("%d\n", *p);
    printf("i = %d\n", i);
  }


  char *str = "aiueoaiueo";
  printf("String = %s, Length = %lu\n", str, sizeof(str) / sizeof(char));

  char str2[11];
  printf("String = %s, Length = %lu\n", str2, sizeof(str2) / sizeof(char));

  char *q;
  q = str2;
  printf("String = %s, Length = %lu\n", q, sizeof(q) / sizeof(char));


  return 0;
}

