#include <stdio.h>

int main(int argc, char *argv[]) {

    char c;
    printf("%zu %zu\n", sizeof(char), sizeof c);

    int i;
    printf("%zu %zu\n", sizeof(int), sizeof i);
    
    double d;
    printf("%zu %zu\n", sizeof(double), sizeof d);
    
    printf("%d %p\n", c, (void *)&c);
    printf("%d %p\n", i, (void *)&i);
    printf("%f %p\n", d, (void *)&d);
    return 0;
}
