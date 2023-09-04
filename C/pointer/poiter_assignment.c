/*
 * Pointer in C
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *p, *q;
    p = &x;
    q = p;
    *p = 5;

    printf("%d\n", *q);

    return 0;
}
