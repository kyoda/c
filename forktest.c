#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void sigchld_handler(int);
int *sort(const int *list);

int main()
{

    int sec;
    signal(SIGCHLD, sigchld_handler);

    for (;;) {

        int pid;
        printf("Input number...");
        scanf("%d", &sec);
        pid = fork();

        if (pid < 0) {

            perror("fork");
            exit(1);

        } else if (pid == 0) {

            int list[] = {2, 7, 5, 1, 9, 6};
            int *p;
            p = sort(list);

            fprintf(stderr, "hello\n");
            sleep(sec);
            fprintf(stderr, "bye\n");
            exit(0);

        }

    }

}


int *sort(const int *list)
{

  const int *p;
  p = list;
  int i;

  for (i = 0; i<6; i++) {
    printf("%d\n",p[i]);
  }

  return p;

}


void sigchld_handler(int x)
{

    int chld;

    chld = waitpid(-1, NULL, WNOHANG);

    if(chld == -1) {
        perror("wait");
        exit(1);
    }

}

