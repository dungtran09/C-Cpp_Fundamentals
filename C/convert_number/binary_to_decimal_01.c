/*
 *  C program to convert binary number to decimal number.
 * */

#include <stdio.h>

int main() {
    
    int num, rem, binary_val, decimal_val, base = 1;
    

    printf("Enter a binary number: ");
    scanf("%d", &num);

    binary_val = num;

    while (num > 0) {
        rem = num % 10;
        decimal_val = decimal_val + (rem * base);
        base *= 2;
        num /= 10;
    }

    printf("The binary has been to convered to %d decimal number.\n", decimal_val);

    return 0;
}
