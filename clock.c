#include <time.h>
#include <stdio.h>
#include <unistd.h>


int main ()
{

  /*
  int rc;
  struct timespec res;

  rc = clock_getres(CLOCK_MONOTONIC, &res);
  if (!rc) {
    printf("CLOCK_MONOTONIC: %ldns\n", res.tv_nsec);
  }

  rc = clock_getres(CLOCK_REALTIME, &res);
  if (!rc) {
    printf("CLOCK_REALTIME: %ldns\n", res.tv_nsec);
  }
  */


  unsigned long lo, hi;
  unsigned long long tsc_begin, tsc_end;
  double clock;

  asm volatile("rdtsc": "=a" (lo), "=d" (hi));
  tsc_begin = ((unsigned long long)lo | ((unsigned long long)hi << 32));

  sleep(1);

  asm volatile("rdtsc": "=a" (lo), "=d" (hi));
  tsc_end = ((unsigned long long)lo | ((unsigned long long)hi << 32));

  clock = (double)((tsc_end - tsc_begin) / 1000000);

  printf("%.2f MHz\n", clock);

  return 0;

}
