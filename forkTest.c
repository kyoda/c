#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void sigchld_handler(int);

int main() {
  int sec;
  signal(SIGCHLD, sigchld_handler);

  for(;;) {

    int pid;
    scanf("%d", &sec);
    pid = fork();

    if(pid < 0) {
      perror("fork");
      exit(1);
    }
    else if(pid == 0) {
      fprintf(stderr, "hello\n");
      sleep(sec);
      fprintf(stderr, "bye\n");
      exit(0);
    } else {
      printf("create process...\n");
    }

  }

}


void sigchld_handler(int x) {

  int chld;

  chld = waitpid(-1, NULL, WNOHANG);

  if(chld == -1) {
    perror("wait");
    exit(1);
  }

}
