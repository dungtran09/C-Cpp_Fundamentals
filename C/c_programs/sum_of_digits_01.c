#include <stdio.h>

/*
 * C program take the number from use and find sum of its digits
 * */

int main () {

    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    // keeping driving until the number is not zero
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of digits of the number is: %d\n", sum );


    return 0;
}
