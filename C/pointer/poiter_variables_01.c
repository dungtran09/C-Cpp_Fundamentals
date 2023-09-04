/*
 * Poiter variables 
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n = 65;
    char a = 'A';

    int *ptr = NULL;
    char *cptr = NULL;

    
    ptr = &n;
    cptr = &a; 

    return 0;
}
