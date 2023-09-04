/*
 * C program reverse a number using recursion 
 * */

#include <stdio.h>
#include <math.h>

int rev_num(int num, int len) {
    if (len == 1) {
        return num;
    } else {
        return (((num % 10) * pow(10, len-1)) + rev_num(num / 10, --len));
    }
}


int main() {
    
    int n, rem, temp, length = 0, result;
    

    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        length++;
        temp /= 10;
    }

    result = rev_num(n, length);
    
    printf("The number after reverse is: %d\n", result);

    return 0;
}
