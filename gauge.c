#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef unsigned int useconds_t;

int main(void)
{
  int i;

  setbuf(stdout, NULL);

  char str[100];
  int l = sizeof str;
  for (i = 0; i < l; i++) {
    str[i] = ' ';
  } 

  useconds_t wait_time = 100000;
  for (i = 0; i < l + 1; i++) {
    printf("[%s]: %3d %% ", str, i);
    usleep(wait_time);
    if (i == 100) {
      printf("\n");
      break;
    }

    str[i] = '#';
    printf("\r");

  }

  return 0;
}

