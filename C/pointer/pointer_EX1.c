#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int i = 1;
    int *pi = &i;
    int **ppi = &pi;

    printf("i = %d, &i = %p\n", i, &i);
    printf("pi = %p, &pi = %p\n", pi, &pi);
    printf("ppi = %p, &ppi = %p\n", ppi, &ppi);

    printf("----------------------\n");
    *pi = 2;
    printf("i = %d, pi = %p, ppi = %p\n", i, pi, ppi);
    **ppi = 3;
    printf("i = %d, pi = %p, ppi = %p\n", i, pi, ppi);

    printf("----------------------\n");
    int i2 = 42;
    pi = &i2;

    printf("i2 = %d, &i2 = %p\n", i2, &i2);
    printf("pi = %p, &pi = %p\n", pi, &pi);
    printf("ppi = %p, &ppi = %p\n", ppi, &ppi);
    printf("i2 = %d, &pi = %p\n", **ppi, *ppi);
    return 0;
} 
