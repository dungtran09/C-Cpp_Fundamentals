#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int *p = (int*)malloc(sizeof(int));

    if (p != NULL) {
        printf("Allocated the memory sussesfuly\n");
        *p = 10;
    } else {
        printf("Error the memory is not allocation.\n");
    }

    printf("%d\n", *p);

    free(p);
    p = NULL;

    return 0;
}
