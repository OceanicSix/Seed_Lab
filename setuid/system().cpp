//
// Created by Ocean on 17/04/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    char *cat="/bin/cat";

    if (argc<2){
        printf("please type a file name. \n");
        return 1
    }

    char *command=malloc(strlen(cat)+strlen(argv[1])+2);
    sprintf(command,"%s %s",cat,argv[1]);
    system(command);
    return 0;
}