#include <stdio.h>

/*
 * C program to check whether a number is a perfect number or not using for loop
 * */

int is_perfect_number(int n) {
    int i, sum_of_divisor;
        
    if (n < 6) {
        return 0;
    }

    for (i = 1; i < n; i++) {
        
        if (n % i == 0) {
            sum_of_divisor += i;
        }
    }

    return sum_of_divisor;

}

int main () {
    
    int i, n, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = is_perfect_number(n);
    
    if (result == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is NOT perfect number.\n", n);
    }

    printf("\n");
    return 0;
}
