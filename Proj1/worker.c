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
    printf("Welcome worker\n\n");
    
    //if no arguments passed .. exit from the program
    
    if(argc !=2){
        printf("Usage: %s \n\n", argv[0]);
    }
    
    //convert the value pass in command line to integer
    int n = atoi(argv[1]);
    
    //print child process ID, parent Process ID, Iteration number before and after sleep
    for(int i=0; i<n; i++){
        printf("Worker PID:%d , PPID:%d ITERATION:%d before sleep\n", getpid(),getppid(),n );
        
        sleep(2);
        
        printf("Worker PID:%d , PPID:%d ITERATION:%d after sleep\n\n", getpid(),getppid(),n );
        
        
    }
    
    return 0;
}
