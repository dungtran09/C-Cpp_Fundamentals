/*
 * C program given a matrix two 2D matric.
 * Wria program rotate by 90 degrees in the antilockwise direction.
 * */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int arr[3][3] = {{1, 2, 3}, {4, 5 ,6}, {7, 8, 9}};

int rows = 3;
int cols = 3;
void rotateMatrix(int arr[][cols], int rows, int cols) {
    int i, j;
    
    int tempArr[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            tempArr[rows-j-1][i] = arr[i][j];
        }
    }


    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", tempArr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
}

int main() {
    
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    rotateMatrix(arr, rows, cols);
    return 0;
}
