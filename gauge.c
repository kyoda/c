#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef unsigned int useconds_t;

int main(void)
{
  int i;

  setbuf(stdout, NULL);

  char str[101];
  int l = sizeof str;
  for (i = 0; i < l - 1; i++) {
    str[i] = ' ';
  } 
  str[l - 1] = '\0';

  useconds_t wait_time_usec = 1000;
  unsigned int s = 1;
  for (i = 0; i < l; i++) {
    printf("[%s]: %3d %% ", str, i);
    s = rand() % 1000;
    usleep(wait_time_usec * s);
    if (i == 100) {
      printf("\n");
      break;
    }

    str[i] = '#';
    printf("\r");

  }

  return 0;
}

