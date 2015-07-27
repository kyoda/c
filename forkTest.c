#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <string.h>

#define rep(i, n) for(int i = 0; i < n; i++) //init in loop ---> c99

void sigchld_handler()
{

  int chld;

  chld = waitpid(-1, NULL, WNOHANG);

  if(chld == -1) {
    perror("wait");
    exit(1);
  }

}

void child_main(int sec)
{
  int t = 0;
  while(1) {
  //while(t > 100) {
    sleep(1);
    if (sec < ++t) break; 
    printf("%d sec\n", t);
  }

}

int main() {
  int sec;
  signal(SIGCHLD, sigchld_handler);
  
  char *a = "aiueo";
  rep(i, strlen(a)) {
    printf("%d: %c\r", i, a[i]);
    fflush(stdout);
    sleep(1);
  }
  printf("\n");

  for(;;) {

    int pid;
    printf("Please set time [sec] (child process alive time...)\n");
    scanf("%d", &sec);
    pid = fork();

    if(pid < 0) { //error
      perror("fork");
      exit(1);
    }
    else if(pid == 0) { //child
      fprintf(stderr, "hello\n");
      child_main(sec);
      fprintf(stderr, "bye\n");
      exit(0);
    } else { //parent
      printf("create process...\n");
      sigchld_handler();
      printf("again.\n");
    }

  }

  return 0;

}


