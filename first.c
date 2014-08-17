/*
 * comment
 * grep '^.\*' first.c
 * Shigehisa KYODA
 */

#include <stdio.h>
#include "first.h"


int main()
{

/*
 * & is operator that return the operand address
 * % is operator that return the operand content
 */

  int b=0,add(const int aho);
  char *p;
  char moji[4] = {'a', 'b', 'c', '\n'};
  char *mo;
  mo = moji;
  printf("moji address: %p\n",moji);
  printf("content of mo: %p\n",mo);
  printf("mo address: %p\n",&mo);

  char **mm;
  mm = &mo;
  printf("mo address : %p \n",mm);

  char *str;
  str = "aiueo";
  printf("%p\n",str+1);


  if ((p = "abc")) {
    printf("%p\n",p);
  } else if (*p == b) {
    printf("%p\n",&"abc"+1);
  } else {
    printf("%p\n",NULL);
  }

  printf("%p\n", *add);
  (*&**&****&****&*********printf)("%d\n", (**&****add)(2*2/2));


  printf("%p\n","aiueo");
  //why same address?
  printf("%p\n","aiueo");

  return 0;

}

int add(const int aho)
{
  return aho+1;
}


