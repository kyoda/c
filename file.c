#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{

  int fd = open("README.md", O_APPEND);
  printf("%d\n", fd);
  //int r = flock(fd, LOCK_SH);

  return 0;
}

