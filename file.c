#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{

  int fd = open("README.md", O_RDONLY);
  int fd2 = open("README.md", O_RDONLY);
  printf("%d\n", fd);
  printf("%d\n", fd2);
  //int r = flock(fd, LOCK_SH);

  return 0;
}

