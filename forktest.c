#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void sigchld_handler(int);
int *sort(const int list[], const int listNum);

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
            const int listNum = sizeof list;
            int *p;
            p = sort(list, listNum);

            fprintf(stderr, "hello\n");
            sleep(sec);
            fprintf(stderr, "bye\n");
            exit(0);

        }

    }

}


int *sort(const int list[], const int listNum)
{

  int p[listNum];
  int i;

  memcpy(p, list, listNum);

  int index = 0, tmp = 0;

  
  for (i = 0; i<listNum - 1; i++) {
    if (p[i] > p[i+1]) {
       tmp = p[i];  
       p[i] = p[i+1];
       p[i+1] = tmp;
       tmp = 0;
    }
    
    if (i == listNum - 1) {
      index++;
      i = index; 
    }

  }

  for (i = 0; i<listNum; i++) {
    printf("%d ",p[i]);
  }
  printf("\n");

  return 0;

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

