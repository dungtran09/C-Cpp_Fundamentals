#include <stdio.h>

/*
 * C program to check whether a number is a prime number or not using recursion
 * */

int is_prime(int n) {

    if (n == 1) return 1;
    
        int i = 2;
    if (n % i == 0) {
        return 0;
    } else {
        return is_prime(i - 1);
    }
}

int main () {

    int number;
    printf("Enter a nmber to check: ");
    scanf("%d", &number);
    
    if (is_prime(number) == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
