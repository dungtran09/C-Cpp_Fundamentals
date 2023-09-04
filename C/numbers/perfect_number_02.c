#include <stdio.h>

/*
 * C program read a number to check whether a number is perfect number or not using while loop
 * */

int main() {
    
    int i, n, sum_of_divisor = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    i = 1;
    while (i < n) {
        if (n % i == 0) {
            sum_of_divisor += i;
        }
        i++;
    }

    if (sum_of_divisor == n) {
        printf("%d is a perfect number.\n",n);
    } else {
        printf("%d is NOT a perfect number.\n", n);
    }

    return 0;
}
