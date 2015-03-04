#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{

  setbuf(stdout, NULL);

  char str[100];
  int l = sizeof str;
  for (int i = 0; i < l; i++) {
    str[i] = ' ';
  } 

  for (int i = 0; i < l + 1; i++) {
    printf("[%s]: %3d %% ", str, i);
    sleep(1);
    if (i == 100) {
      printf("\n");
      break;
    }

    str[i] = '#';
    printf("\r");

  }

  return 0;
}

