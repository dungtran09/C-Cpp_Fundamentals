#include <stdio.h>
#include <stdlib.h>

union data {
    char c;
    int i;
    double d;
};

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MAX3(a, b, c) MAX((a), MAX((b), (c)))

int main(int argc, char *argv[]) {
    union data d;

    printf("Size d: %zu\n", sizeof(d));
    printf("Max size of components: %zu\n", MAX3(sizeof d.c, sizeof d.i, sizeof d.d));
    printf("Data at d     %p\n", (void *)&d);
    printf("Data at d.c   %p\n", (void *)&d.c);
    printf("data at d.i   %p\n", (void *)&d.i);
    printf("data at d.d   %p\n", (void *)&d.d);

    return EXIT_SUCCESS;
}
