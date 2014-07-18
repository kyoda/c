/*
 * comment
 * grep '^.\*' first.c
 * Shigehisa KYODA
 */

#include <stdio.h>

char *p, b;

int main()
{
  if ((p = "abc")) {
    printf("%p\n",p);
  } else if (*p == b) {
    printf("%p\n",&"abc");
  } else {
    printf("%p\n",NULL);
  }

  return 0;
}

