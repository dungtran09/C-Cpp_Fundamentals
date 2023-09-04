/*
 * C program read a binary number in to array and convert to decimal number
 * */

#include <stdio.h>
#include <math.h>

int main() {
    
    int i, size, sum = 0;
    
    printf("Enter the size of binary number: ");
    scanf("%d", &size);
    
    int arr[size];

    // insert digits binary to array
    for (i = 0; i < size; i++ ) {
        printf("Enter the element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // convert binary array to decimal
    
    for (i = 0; i < size; i++) {
        sum += (arr[size - i - 1]) * pow(2, i);
    }

    printf("Decimal value of binary number is: %d\n", sum);

    return 0;
}
