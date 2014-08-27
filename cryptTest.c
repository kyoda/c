#include <stdio.h>
#include <string.h>
#include <crypt.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20


int main() 
{

  clock_t start_t;
  start_t = clock();

  char n95[MAX] = {0};
  char* p;
  const char pass[] = "FLxqJbeAd3KI2";
  double now_time;
  int T = 1;
  int i;

  /***

    48-57  > 0-9
    65-90  > A-Z
    97-122
    > a-z

   ***/

  int table[62];
  for(i=0;i<10;i++) {
    table[i] = 48+i;
  }
  for(i=0;i<26;i++) {
    table[10+i] = 65+i;
  }
  for(i=0;i<36;i++) {
    table[36+i] = 97+i;
  }

  int tc[62] = {0};

  for(;;) {
    //const int c = sizeof(n95) / sizeof(n95[0]);

    /*** create string (32 - 126) ***/
    /*
       for(i=0;;) {
       if(n95[i] == 0) {
       n95[i] = 32;
       printf("### %d place ###\n",i+1);
       printf("%f sec\n",(double)(clock() - start_t)/CLOCKS_PER_SEC);
       break;
       }
       else if(n95[i] > 31 && n95[i] < 126) {
       n95[i]++;
       break;
       }
       else if( n95[i] == 126) {
       n95[i++] = 32;
       }
       else exit(1);
       }
       */

    /*** create string (table) ***/
    //table[62]

    for(i=0;;) {

      if(n95[i] == 0) { //new place
        n95[i] = table[tc[i]];
        printf("### %d place ###\n",i+1);
        printf("%f sec\n",(double)(clock() - start_t)/CLOCKS_PER_SEC);
        break;
      }
      else if(tc[i] < 61) {
        n95[i] = table[++tc[i]];
        break;
      }
      else if( n95[i] == table[61]) {
        tc[i] = 0;
        n95[i++] = table[0];
      }
      else {
        exit(1);
      }

    }



    /*** print per 60 sec ***/
    now_time = (double)(clock() - start_t)/CLOCKS_PER_SEC;
    if(now_time > (double)(10*T)) {
      T++;
      printf("%s : %f sec\n",n95,now_time);
    }


    /*** compare ***/

    p = crypt(n95,"FL");
    if(strcmp(pass,p) == 0) {
      printf("Found !!! password: %s\n",p);
      break;
    }
  }
  return 0;

}
