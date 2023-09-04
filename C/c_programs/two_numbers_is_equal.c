#include <stdio.h>

/*
 * C program to check whether two numbers is equal or not.
 * */

int main() {
    
    int n1, n2;
    printf("Enter two numbers to check: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 == n2) {
        printf("%d and %d is equal.\n",n1, n2);
    } else {
        printf("%d and %d is not equal.\n", n1, n2);
    }

    return 0;
}
