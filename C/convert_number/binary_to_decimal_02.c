/*
 * C program to convert binary to decimal number using while loop
 * */

#include <stdio.h>
#include <math.h>

int main () {

    int number, i = 0, sum = 0;

    printf("Enter a binary number: ");
    scanf("%d", &number);

    while (number > 0) {
        sum+= (number % 10) * pow(2, i);
        i++;
        number /= 10;
    }

    printf("The binary has been convered to decimal is: %d\n", sum);

    return 0;

}
