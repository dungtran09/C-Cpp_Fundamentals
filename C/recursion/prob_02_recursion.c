#include <stdio.h>

/*
 * C program to find sum of digits a number .
 *
 * */

int sum(int num) {
    
    if (num != 0) {
        return  (num % 10) + sum(num / 10);
    } else {
        return 0;
    }

}

int main() {
    
    int num;
    int result;
    
    printf("Enter a number: ");
    
    scanf("%d", &num);

    result = sum(num);

    printf("Total of n digits is: %d\n", result);

    return 0;
}
