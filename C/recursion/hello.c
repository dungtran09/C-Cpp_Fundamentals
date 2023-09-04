#include <stdio.h>
#include <stdlib.h>


void message(int n) {
    if (n == 0) return;
    printf("Hello Word\n");
    message(n -1);
}

int main(int argc, char *argv[]) {
    
    message(5);

    return EXIT_SUCCESS;
}
