/*
 * C program read a number and caculator sum of n first natural numbers.
 * */

#include <stdio.h>

int main () {
    
    int i = 1, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum += i;
        ++i;
    } while(n >= i);
    
    printf("Sum of %d first natural numbers is: %d\n", n, sum);

    return 0;
}
