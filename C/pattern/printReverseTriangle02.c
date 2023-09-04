#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numOfRow;
    int row;
    int col;
    int ch = 64;
    printf("Enter number of row: ");
    scanf("%d", &numOfRow);

    for (row = 1; row <= numOfRow; row++) {
        for (col = 1; col <= row; col++) {
            printf("%c ", ch + col);
        }
        printf("\n");
    }
    for (row = numOfRow - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%c ", ch + col);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
