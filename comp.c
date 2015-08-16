#include <stdio.h>
#include <unistd.h>
#include <sys/file.h>

int main()
{

  
  int fd = open("README.md", O_RDONLY);
  int r = 0;
  char buf[32];
  r = read(fd, buf, 32);
  printf("%s", buf);

  printf("\n#####################\n");

  r = read(fd, buf, 32);
  printf("%s", buf);


  close(fd);

  return 0;
}
