#include <stdio.h>

/*
 *  C program read three numbers and find largest numbers using if else statement
 * */


int main () { 
    
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d is largest number.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d is largest number.\n", num2);
    } else {
        printf("%d is largest number.\n", num3);
    }

    return 0;
}
