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
   
    int n=3, s=2, t=2;
    
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
    }
        
        //Implement oss to fork() and then exec() off one worker to do its task and wait() until it is done

//    pid_t child_p = fork();
//
//    if (child_p == 0){
//        printf("I am a child but a copy of parent!\n");
//        printf("My parent's PID is %d,and my PID is %d\n",getppid(), getpid());
//
//
//    }else{
//        printf("Im the paretn and PID:%d\n",getppid());
//    }

    
        int children = 0;
        pid_t pid;
    
        while (children < n) {
            if (children >= s) {
                
            }
            pid = fork();
            if (pid == 0) {
                printf("Im the child\n");
                printf("My parent's PID is %d,and my PID is %d\n",getppid(), getpid());
                char t_str[10];
                sprintf(t_str, "%d", t);
                execl("./worker", "worker", t_str, NULL);
                printf("now at oss\n");
                perror("exec failed");
                exit(1);
            }else{
                wait(NULL);
                printf("Im the parent and PID:%d\n",getppid());
            }
            children++;
        }
        while (children > 0) {
            wait(NULL);
            children--;
        }
    
    
    
    return EXIT_SUCCESS;
}
