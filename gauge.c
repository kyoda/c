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
  str[100] = '\0';

  for (int i = 0; i < 101; i++) {
    printf("[%s]: %3d %% ", str, i);
    str[i] = '#';
    sleep(1);
    printf("%c", i == 100?'\n':'\r');
  }

  return 0;
}

