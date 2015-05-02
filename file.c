#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/file.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{

  int fd = open("README.md", O_RDONLY);
  int fd2 = open("READMEEE.md", O_RDONLY);
  printf("%d\n", fd);
  printf("%d\n", fd2);
  //int r = flock(fd, LOCK_SH);


  // /usr/include/lib/stdlib.h
  /* We define these the same for all machines.
   *    Changes from this to the outside world should be done in `_exit'.  */
  //#define EXIT_FAILURE  1 /* Failing exit status.  */
  //#define EXIT_SUCCESS  0 /* Successful exit status.  */


  FILE *fp = fopen("READMEEE.md", "r");
  if (fp == NULL) {
    printf("%d", EXIT_FAILURE);
    exit(EXIT_FAILURE);
  }

  printf("%d\n", fileno(fp));
  int r = flock(fileno(fp), LOCK_SH);
  
  printf("%d\n", r);

  sleep(30);

  return 0;

}





