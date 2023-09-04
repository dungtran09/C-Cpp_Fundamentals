/*
 * C program read number and convert to decimal number using for loop
 * */


#include <stdio.h>
#include <math.h>

int main() {

    int n, temp, i = 1, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    for (i = 0; n > 0; i++) {
        sum += (n % 10) * pow(2, i);
        n /= 10;
    }

    printf("%d binary has been convered to %d decimal.\n", temp, sum );
    return 0;   
}
