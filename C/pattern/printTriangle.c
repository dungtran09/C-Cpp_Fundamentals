#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int noOfRow;
    int row;
    int column;

    printf("Enter number of row: ");
    scanf("%d", &noOfRow);
     
    for (row = 1; row <= noOfRow; row++) {
        for (column = 1; column <= row; column++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}

