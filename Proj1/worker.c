//
//  worker.c
//  Proj1
//
//  Created by Erosh Boralugodage on 2/4/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[]){
   
    printf("Now at worker\n");
    int count = atoi(argv[1]);
    
    //print child process ID, parent Process ID, Iteration number before and after sleep
    for(int i=0; i<count; i++){

        printf("Worker PID:%d , PPID:%d ITERATION:%d before sleep\n", getpid(),getppid(),i+1);

        sleep(2);

        printf("Worker PID:%d , PPID:%d ITERATION:%d after sleep\n\n", getpid(),getppid(),i+1);

    
    }
  
    printf("Now leaving worker\n");
    
    return EXIT_SUCCESS;
}
