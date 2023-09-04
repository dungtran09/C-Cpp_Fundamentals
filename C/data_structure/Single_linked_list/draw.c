/*
 * 
 * */

#include <stdio.h>

void draw(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (j = 0; j < 2*(n - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}


int main () {
    
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    draw(n);

    return 0;


}
