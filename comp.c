#include <stdio.h>
#include <unistd.h>
#include <sys/file.h>

int main()
{

  
  int fd = open("README.md", O_RDONLY);
  int a = 0;
  a = read(fd, 0, 32);
  printf("%d\n", a);
  close(fd);

  return 0;
}
