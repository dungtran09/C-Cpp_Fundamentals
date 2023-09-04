#include <stdio.h>

/*
*  C program to find largest of a number in three numbers
*  using if else statement
* */

int main() {

    int a, b ,c;

    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("Biggest number is: %d\n", a);
    } else if (b > a && b > c) {
        printf("Biggest number is: %d\n", b);
    } else {
        printf("Biggest number is: %d\n",c);
    }

    return 0;
}
