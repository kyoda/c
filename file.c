#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/file.h>


int main()
{

  int fd = open("README.md", O_RDONLY);
  int fd2 = open("READMEEE.md", O_RDONLY);
  printf("%d\n", fd);
  printf("%d\n", fd2);
  //int r = flock(fd, LOCK_SH);

  FILE *fp = fopen("README.md", "r");
  printf("%d\n", fileno(fp));
  int r = flock(fileno(fp), LOCK_SH);
  
  printf("%d\n", r);

  return 0;
}

