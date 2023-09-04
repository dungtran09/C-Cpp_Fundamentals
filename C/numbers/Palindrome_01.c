/*
 * C program check whether a number is a palidrome or not using while loop.
 * */

#include <stdio.h>

int main() {
    
    int n, rem, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n/= 10;
    }

    if (temp == reverse) {
        printf("%d is a palidrome number.\n", temp);
    } else {
        printf("%d is not a palidrome number.\n", temp);
    }
        

    return 0;
}
