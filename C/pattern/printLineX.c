#include <stdio.h>
#include <stdlib.h>

void paint(int);
void paint_02(int);

int main(int argc, char *argv[]) {
    int numOfRow = 5;
    // printf("Enter number of row: ");
    // scanf("%d", &numOfRow);

    // paint(numOfRow);
    paint_02(numOfRow);

    return EXIT_SUCCESS;
}

void paint(int numOfRow) {
    int row, col;
    for (row = 0; row < numOfRow; row++) {
    for (col = 0; col < numOfRow; col++) {
        if ((row == col) || ((row + col) == (numOfRow - 1))) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
    }
}

void paint_02(int numOfRow) {
    int row, col;
    for (row = 1; row <= numOfRow; row++) {
        for (col = 1; col <= row; col++) {
            if ((row == col) || (row == 2) || (row == numOfRow )|| (col == 1)) {
                printf(".");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
