#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * C program read a number anh check whether the number is a prime number or not.
 * */

void is_prime(int n) {
    int i, flag = 0;

    if (n <= 1) {
        flag = 1;
        exit(0);
    }

    for (i = 2; i <= sqrt(n) ; i++) {
        flag = 0;
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime numner.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

}

int main() {

    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);

    is_prime(n);

    return 0;
}
