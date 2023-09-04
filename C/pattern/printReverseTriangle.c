#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numberOfRow, row, column;
    printf("Enter number of row: ");
    scanf("%d", &numberOfRow);

    for (row = numberOfRow; row >= 1; row--) {
        for (column = 1; column <= row ; column++) {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
