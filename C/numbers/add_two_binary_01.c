/*
 * C program add two binary number.
 * */

#include <stdio.h>

int main() {
    
    int b1, b2, rem = 0, sum[20];

    printf("Enter two bibary: ");
    scanf("%d %d", &b1, &b2);
    
    int i = 0;
    while (b1 != 0 || b2 != 0) {
        sum[i++] = (b1 % 10 + b2 % 10 + rem) % 2;
        rem = (b1 % 10 + b2 % 10) / 2;
        b1 /= 10;
        b2 /= 10;
    }

    if (rem != 0) { sum[i++] = rem; }
    --i;

    printf("Result of add two numbers is:\n");

    while ( i>= 0) {
        printf("%d ", sum[i--]);
    }

    printf("\n");
    return 0;
}
