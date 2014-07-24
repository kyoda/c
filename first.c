/*
 * comment
 * grep '^.\*' first.c
 * Shigehisa KYODA
 */

#include <stdio.h>
#include "first.h"


int main()
{

  int b=0,add(const int aho);
  char *p;
  char moji[4] = {'a', 'b', 'c', '\n'};

  if ((p = "abc")) {
    printf("%p\n",p);
  } else if (*p == b) {
    printf("%p\n",&"abc"+1);
  } else {
    printf("%p\n",NULL);
  }

  printf("%d\n",b = add(1));
  printf("%s\n", moji+1);

  return 0;

}

int add(const int aho)
{
  return aho+1;
}
