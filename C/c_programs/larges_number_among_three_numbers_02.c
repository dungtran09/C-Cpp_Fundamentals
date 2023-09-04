#include <stdio.h>

/*
 * C program to find the Biggest of three numbers using if else statment
 * */

int main() {

    int a, b ,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
        
    if (a > b) {
        if (a > c) {
            printf("%d is largest number.\n", a);
        } else {
            printf("%d is largest number.\n", c);
        }
    } else if (b > c) {
        printf("%d is largest number.\n", b);
    } else {
        printf("%d is largest number.\n", c);
    }

    return 0;

}
