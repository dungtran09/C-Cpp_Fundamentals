#include <stdio.h>

/*
 *  C program print program name and arguments its.
 * */

void main(int argc, char *argv[]) {
    
    int i;

    for (i = 0; i < argc; i++) {
        printf("%s ", argv[i]);
    }

    printf("\n");

}
