//
//  oss.c
//  Proj1
//
//  Created by Erosh Boralugodage on 2/4/23.
//
//
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    printf("Welcome oss\n");
    int n=0, s=0, t=0;
    int option=0;
    
    while((option = getopt(argc, argv, "hn:s:t") != -1)){
        switch(option){
            case 'h':
                printf("help");
            case 'n':
                //get the value of n
            case 's':
                //get the value of s
            case 't':
                //get the value of t
            case '?':
                //else exit
        }
                
                
        }
    

    return 0;
}
