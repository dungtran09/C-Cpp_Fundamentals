#include <stdio.h>
#include <stdlib.h>

void linearSearch(int*, int , int);

int main(int argc, char *argv[]) {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};    
    int size = sizeof(A) / sizeof(A[0]) - 1;
    linearSearch(A, 14, size);    

    return EXIT_SUCCESS;
}

void linearSearch(int A[], int key, int size) {
    int i = 0;
    int pos = -1;
    while (i <= size) {
        if (key == A[i]) {
            pos = i;
            printf("Value found at index: %d\n", pos);
            break;
        }
        i = i + 1;
    }
    if (pos == -1) {
        printf("The value is not present in Array!\n");
    }
}
