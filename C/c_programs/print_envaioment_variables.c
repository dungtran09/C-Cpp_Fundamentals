#include <stdio.h>

/*
 * C program print envaioment variables
 * */

int main (int argc, char *argv[], char *evnp[]) {

    int i;

    for (i = 0; evnp[i] != NULL; i++) {
        printf("\n%s\n", evnp[i]);
    }

    return 0;
}
