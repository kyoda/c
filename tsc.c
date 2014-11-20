#include <stdio.h>

int main()
{


  unsigned long lo, hi;
  unsigned long long tsc;

  asm volatile("rdtsc": "=a" (lo), "=d" (hi));
  tsc = ((unsigned long long)lo | ((unsigned long long)hi << 32));
  printf("tsc = %llu\n", tsc);

  unsigned long long hz, day, tmp;
  int hour, min, sec;
  hz = 2333338000;
  day = tsc / hz / (60 * 60 * 24);
  tmp = (tsc / hz) % (60 * 60 * 24);
  hour = (int)tmp / (60 * 60);
  tmp = tmp % (60 * 60);
  min = (int)tmp / 60;
  tmp = tmp % 60;
  sec = (int)tmp;

  printf("%llu, %d:%d:%d\n", day, hour, min, sec);

  return 0;

}
