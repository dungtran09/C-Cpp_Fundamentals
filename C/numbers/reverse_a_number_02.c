/*
 * C program reverse a number using for loop
 * */

#include <stdio.h>
#include <math.h>

void reverse(int n) {
    int i, rem, size, result;
    
    size = log10(n);

    for (i = 0; i <= size; i++) {
        rem = n % 10;
        result = result*10 + rem;
        n/= 10;
    }
    
    printf("The number has reversed is: %d\n", result);
}

int main() {
        
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    reverse(n);

    return 0;
}
