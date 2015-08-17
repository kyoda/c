#include <stdio.h>
#include <unistd.h>
#include <sys/file.h>

int main()
{

  
  int fd = open("README.md", O_RDONLY);
  int r = 0;
  char buf[1];
  r = read(fd, buf, 1);
  printf("%s", buf);

  printf("\n#####################\n");

  r = read(fd, buf, 1);
  printf("%s", buf);


  close(fd);

  return 0;
}
