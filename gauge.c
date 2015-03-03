#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{

  setbuf(stdout, NULL);

  char str[101];
  int l = sizeof str;
  for (int i = 0; i < l; i++) {
    str[i] = ' ';
  } 

  for (int i = 0; i < 100; i++) {
    str[i] = '#';
    printf("[%s]: %3d %%\r", str, i);
    sleep(1);
  }

  return 0;
}

