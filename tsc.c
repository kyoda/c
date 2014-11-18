#include <stdio.h>

int main()
{


  unsigned long lo, hi;
  unsigned long long tsc;

  asm volatile("rdtsc": "=a" (lo), "=d" (hi));
  tsc = ((unsigned long long)lo | ((unsigned long long)hi << 32));
  printf("%llu\n", tsc);

  unsigned long long day;
  day = tsc / 2333338000 / (60 * 60 * 24);
  printf("%llu\n", day);

  return 0;

}
