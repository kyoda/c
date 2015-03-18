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
  printf("String = %s, Length = %lu\n", str, sizeof(str));

  char str2[11];
  printf("String = %s, Length = %lu\n", str2, sizeof(str2) / sizeof(char));


  return 0;
}

