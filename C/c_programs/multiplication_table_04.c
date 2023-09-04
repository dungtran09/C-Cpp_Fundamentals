#include <stdio.h>

/*
 * C program print multiplication table using function
 * */

void multiplicationTable(int n) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i , n*i);
    }
}

int main() {
    
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    multiplicationTable(n);

    return 0;
}
