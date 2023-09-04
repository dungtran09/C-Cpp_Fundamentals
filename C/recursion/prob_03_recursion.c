#include <stdio.h>

/*
 * C program caculator factorial of a givem number.
 * */


int factorial(int n) {

    if (n == 1 || n == 0) {
        return 1;
    } else {
        return  n * factorial(n - 1);
    }
}

int main() {
    
    int n, result;

    // get number from keybroad
    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);
    
    //print result
    printf("Factorial of %d is: %d\n", n, result);

    return 0;
}
