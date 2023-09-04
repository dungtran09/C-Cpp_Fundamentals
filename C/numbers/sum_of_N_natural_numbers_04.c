/*
 * C program caculator sum of N first natural numbers using fomula
 *
 * */

#include <stdio.h>

int main() {
    
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    printf("Sum of %d first natural number is: %d\n", n, sum);

    return 0;
}
