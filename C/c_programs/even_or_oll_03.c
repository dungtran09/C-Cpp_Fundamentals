#include <stdio.h>

/*
 * C program to check whether a number is even or not using bitwise operator
 *
 * */

int main () {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n & 1) == 1) {
        printf("%d is Oll number.\n", n);
    } else {
        printf("%d is Even number.\n", n);
    }

    return 0;

}
