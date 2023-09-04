#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    
    for (int i = 2; i < sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

/*
 * C program check whether a number is a prime number or not. using loop for.
 * */


int main () {
    int num;
    printf("Enter a number to check: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    for (int i = 2; i <= 100 ; i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        } else {
            printf("%d is not a prime number.\n", i);
        }
    }

    return 0;
}
