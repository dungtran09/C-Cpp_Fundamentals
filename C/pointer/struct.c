#include <stdio.h>

struct data {
    char c;
    int i;
    double d;
};

int main(void) {
    struct data d;
    printf("sizeof data == %zu\n", sizeof d);
    printf("size of components == %zu\n", sizeof d.c + sizeof d.i + sizeof d.d);
    printf("Data at d     %p\n", (void *)&d);
    printf("Data at d.c   %p\n", (void *)&d.c);
    printf("data at d.i   %p\n", (void *)&d.i);
    printf("data at d.d   %p\n", (void *)&d.d);
    return 0;
}
