#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int list[10];
    
    for (unsigned long i = 0; i < 10; i++) {
        printf("%zu \n", &list[i]);
    }
    return EXIT_SUCCESS;
}
