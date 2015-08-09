#include <stdio.h>
#include <sys/file.h>

int main()
{

  
  int fd = open("README.md", O_RDONLY);
  close(fd);

  return 0;
}
