#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

pid_t pid = fork();


if(pid < 0){

  fprintf(stderr, "Fork failed :( \n");

  exit(1);

} else if (pid == 0){

    printf("Shnabel I992 \n");

  } else {

     printf("Marina\n");

    }

return 0;

}


