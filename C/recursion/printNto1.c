#include <stdio.h>
#include <stdlib.h>

void print(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    print(n - 1);
    printf("%d ", n);
}

int main(int argc, char *argv[]) {
    
    print(5);
    printf("\n");
    return EXIT_SUCCESS;
}
