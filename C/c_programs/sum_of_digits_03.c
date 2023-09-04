#include <stdio.h>

/*
 * C program find sum of digits of a number using Function
 * */

long sum_of_digits(long n) {
    
    int sum = 0;

    while (n > 0) {
        sum += (n % 10);
        n  = n / 10;
    }
    return sum;
}

int main() {
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Sum of digits of %ld is: %ld\n", n, sum_of_digits(n));
    return 0;
}
