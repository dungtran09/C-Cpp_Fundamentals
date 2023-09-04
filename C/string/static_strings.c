/*
 * C program string
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    char str1[10];
    char str2[10];

    str1[0] = 'H';
    str1[1] = 'e';
    str1[2] = 'l';
    str1[3] = 'l';
    
    strcpy(str2, str1);
    str2[4] = 'o';

    printf("%s\n%s\n",str1, str2);
    return 0;
}
