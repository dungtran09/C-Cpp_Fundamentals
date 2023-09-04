/*
 * C program find sum of N natural number in a given ranger
 * */

#include <stdio.h>

int main() {
        
    int l, r, i, sum = 0;

    printf("Enter two numbers (first number have to less than second number): ");

    scanf("%d %d", &l, &r);
    
    for (i = l; i <= r; i++) {
        sum += i;
    }

    printf("Sum of natural number from %d to %d is %d\n", l, r, sum);


    return 0;
}
