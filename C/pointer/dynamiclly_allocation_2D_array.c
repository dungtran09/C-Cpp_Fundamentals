#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4


void init2D(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i*cols + j] = 0;
        }
    }
}

int main () {
    
    int *two_d_array;
    two_d_array = (int*)malloc(sizeof(int) * N * M);
    

    if (two_d_array != NULL) {
        init2D(two_d_array, N, M);
    }

    
    // printf
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("arr[%d][%d] = %d\n", i, j, *two_d_array);
        }
    }
    return 0;
}
