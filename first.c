/*
 * comment
 * grep '^.\*' first.c
 * Shigehisa KYODA
 */

#include <stdio.h>
#include "first.h"


int main()
{
  char *p, b;

  if ((p = "abc")) {
    printf("%p\n",p);
  } else if (*p == b) {
    printf("%p\n",&"abc");
  } else {
    printf("%p\n",NULL);
  }

  return 0;
}

