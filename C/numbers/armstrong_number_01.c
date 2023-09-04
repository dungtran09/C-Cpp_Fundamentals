#include <stdio.h>
#include <math.h>
/*
 * C program read input and check whether the number is a armstrong number or not
 * */

void armstrong_number(int n) {
    int i,rem, n_digits = 0, sum_digits = 0;
    int temp = n; 
    rem = n;
    while (rem != 0) {
        n_digits++;
        rem /= 10;
    }

    while (n != 0) {
        rem = n % 10;
        sum_digits += pow(rem, n_digits);
        n /= 10;
    }

    if (sum_digits == temp) {
        printf("%d number is a armstrong number.\n", temp);
    } else {
        printf("%d number is NOT a armstrong number.\n", temp);
    }
}

int main() {
    
    int n;

    printf("Enter an number: ");
    scanf("%d", &n);

    armstrong_number(n);
    
    // Armstrong number 1: 0
    // Armstrong number 2: 1
    // Armstrong number 3: 153
    // Armstrong number 4: 370
    // Armstrong number 5: 371
    // Armstrong number 6: 407
    
    return 0;
}
