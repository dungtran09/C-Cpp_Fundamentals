#include <stdio.h>

/*
 * C program to check whether a number is even of oll using ternary operator.
 * 
 * */

int main () {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is even number.\n", n) : printf("%d is oll number.\n", n);
    
    return 0;
}
