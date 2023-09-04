#include <stdio.h>

/*
 * C program find largest numbers of three numbers using if else statement
 * */

int main() {
    
    int n1, n2, n3;

    printf("Enter three numbers: ");

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        if (n1 > n3) {
            printf("%d is largest number.\n", n1);
        } else {
            printf("%d is largest number.\n", n2);
        }
    } else if (n2 > n3) {
        printf("%d is largest number.\n", n2);
    } else {
        printf("%d largest number.\n", n3);
    }

    return 0;
}
