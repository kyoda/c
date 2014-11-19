#include <stdio.h>

int main()
{


  unsigned long lo, hi;
  unsigned long long tsc;

  asm volatile("rdtsc": "=a" (lo), "=d" (hi));
  tsc = ((unsigned long long)lo | ((unsigned long long)hi << 32));
  printf("%llu\n", tsc);

  unsigned long long hz, day, sec, hour;
  hz = 2333338000;
  day = tsc / hz / (60 * 60 * 24);
  sec = (tsc / hz) - (60 * 60 * 24);
  printf("%llu\n", day);
  printf("%llu\n", hour);

  return 0;

}
