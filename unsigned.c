#include <stdio.h>
int main() 
{
  short unsigned int i;
  
  i = -1;
  
  printf("sizeof = %d\n",(short unsigned int)sizeof(i));
  printf("i = %d\n", i);
  i = i + 10;
  printf("i = %d\n", i);


  unsigned long long max;
  max = -1;
  printf("%llu\n", max);

  return 0;
}

