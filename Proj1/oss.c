//
//  oss.c
//  Proj1
//
//  Created by Erosh Boralugodage on 2/4/23.
//
//
//
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
   
    int n=0, s=0, t=0;
    
    int option=0;
    
    while((option = getopt(argc, argv, "hn:s:t")) != -1){
        switch(option){
            case 'h':
                printf("oss [-h] [-n proc] [-s simul] [-t iter]\n");
                printf("number of total children to launch,\n");
                printf("iter is the number to pass to the worker process \n");
                printf("the simul parameter indicates how many children to allow to run simultaneously.\n");
                exit(0);
                break;
            case 'n':
                n = atoi(optarg);
                
                break;
            case 's':
                s = atoi(optarg);
                
                break;
            case 't':
                t = atoi(optarg);
                
                break;
            case '?':
                printf("exit");
                break;
                //else exit
        }
             
        
        //Implement oss to fork() and then exec() off one worker to do its task and wait() until it is done
        
        
        
        }
    

    return 0;
}
