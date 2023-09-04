#include <stdio.h>
#include <stdlib.h>

#define COLS 100

void init_matrix(int m[][COLS], int rows) {
    
    int i, j;

    for (i = 0; i < rows; i++) {
        for (i = 0; j < rows; j++) {
            m[i][i] = i * j;
        }
    }

}

int main () {
    
    int matrix[50][COLS];
    int bigger[90][COLS];

    init_matrix(matrix, 50);
    init_matrix(bigger,90);

    return 0;
}
