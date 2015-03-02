#include <stdio.h>
#include <unistd.h>

int main(void)
{

  for (int i = 0; i < 100; i++) {
    printf("count: %3d %%\r", i);
    fflush(stdout);
    sleep(1);
  }

  return 0;
}

