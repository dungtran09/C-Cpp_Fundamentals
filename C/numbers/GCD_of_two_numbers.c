/*
 * C program Given two number find the GCD of two numbers
 * */

#include <stdio.h>
#include <math.h>

int min(int n1, int n2) {
    if (n1 > n2) return n1;
    return n2;
}

int gcdOfTwoNumbers(int n1, int n2) {

    int gdc = 1;
    int i;

    for (i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gdc = i;
        }
    }

    return gdc;
}

int main() {
    
    int num1 = 8, num2 = 16;
        
    
    printf("The GCD of two numbers is: %d\n", gcdOfTwoNumbers(num1, num2));
    

    return 0;
}
