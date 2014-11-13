#include <time.h>
#include <stdio.h>


int main ()
{

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

  return 0;
}
