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
  } else {
    printf("%p\n",&"abc");
  }

  return 0;
}

