#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int noOfRow, row, space, symbol;

    printf("Enter number of row: ");
    scanf("%d", &noOfRow);

    for (row = 1; row <= noOfRow; row++) {
        
        int spacePerEachRow = noOfRow - row;
        int symbolPerEachRow = (2 * row) - 1;
        
        for (space = 1; space <= spacePerEachRow; space++) {
            printf(" ");
        }
        
        for (symbol = 1; symbol <= symbolPerEachRow; symbol++) {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}

