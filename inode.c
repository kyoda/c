#include <stdio.h>
#include <sys/stat.h>


int main(int argc, char **argv)
{

  struct stat stat_buf;


  if (stat(*(argv + 0), &stat_buf) == 0) {
    printf("%d\n", (int)stat_buf.st_ino);
    printf("%d\n", (int)stat_buf.st_dev);
    printf("%o\n", (int)stat_buf.st_mode);
    printf("%d\n", (int)stat_buf.st_nlink);
    printf("%d\n", (int)stat_buf.st_uid);
    printf("%d\n", (int)stat_buf.st_gid);
    printf("%d\n", (int)stat_buf.st_rdev);
    printf("%d\n", (int)stat_buf.st_size);
  }

  return 0;
}


