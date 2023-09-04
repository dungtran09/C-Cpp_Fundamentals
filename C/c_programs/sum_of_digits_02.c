#include <stdio.h>


/*
 * C program to find sum of digits using recursion 
 * */

long sumOfDigits(long n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }

}

int main() {
    
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Sum of digits of %ld is: %ld\n", n ,sumOfDigits(n));
    

    return 0;
}
