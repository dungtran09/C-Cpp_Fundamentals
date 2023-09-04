#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ch;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        putchar(ch);
        printf(" ");
    }

    printf("\n");
    return EXIT_SUCCESS;
}
