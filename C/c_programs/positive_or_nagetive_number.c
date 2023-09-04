#include <stdio.h>

/*
 * C program to check whether a number is positive or nagetive
 *
 * */


int main () {
    
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n >= 0) {
        printf("%d is a positive number.\n", n);
    } else {
        printf("%d is a nagetive number.\n", n);
    }

    return 0;
}
