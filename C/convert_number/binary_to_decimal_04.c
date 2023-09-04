/*
 * C program read a binary number and convert to decimal number using array
 * */

#include <math.h>
#include <stdio.h>


int main () {
    
    int n, temp, sum = 0;
    int arr[100] = {0};
    printf("Enter a number: ");
    scanf("%d",&n);
    
        temp = n;
    int i = 0;
    while (n > 0) {
        arr[i] = (n % 10) * pow(2, i);
        i++;
        n /= 10;
    }

    
    for (i = 0; i < 100; i++) {
        sum += arr[i];
    }

    printf("Decimal = %d\n", sum);

    

    return 0;
}
