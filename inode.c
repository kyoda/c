#include <stdio.h>
#include <time.h>
#include <sys/stat.h>


int main(int argc, char **argv)
{

  struct stat stat_buf;


  if (stat(*(argv + 0), &stat_buf) == 0) {
    printf("st_ino = %d\n", (int)stat_buf.st_ino);
    printf("st_dev = %d\n", (int)stat_buf.st_dev);
    printf("st_mode = %o\n", (int)stat_buf.st_mode);
    printf("%d\n", (int)stat_buf.st_nlink);
    printf("%d\n", (int)stat_buf.st_uid);
    printf("%d\n", (int)stat_buf.st_gid);
    printf("%d\n", (int)stat_buf.st_rdev);
    printf("%d\n", (int)stat_buf.st_size);
    printf("%d\n", (int)stat_buf.st_atime);
    printf("%d\n", (int)stat_buf.st_mtime);
    printf("%d\n", (int)stat_buf.st_ctime);

    const time_t t = stat_buf.st_atime;
    printf("%s\n", ctime(&t));

    printf("%d\n", (int)stat_buf.st_blksize);
  }

  return 0;
}


