#include <stdio.h>
#include <math.h>

/*
 * C program takes input as 2323 and gives output 2332.
 * i.e the new number is great than previous number but should have the same digits.
 * */

int Evaluate(int[], int);
int Find(int);

int main() {
    
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result = Find(num);

    if (result) {
        printf("The number great than %d and made of the same digits is: %d\n", num, result);
    } else {
        printf("No hight value posible, Either all number is the same or the digits is are decrement order.\n");
    };


    return 0;
}


int Find(int num) {
    int digit[20];
    int n, i = 0, len = 0, temp;

    n = num;

    while (n != 0) {
        digit[i] = n % 10;
        n /= 10;
        i++;
    }
    
    len = i;

    for (i = 0; i < len - 1; i++) {
        if (digit[i] > digit[i + 1]) {
            temp = digit[i];
            digit[i] = digit[i + 1];
            digit[i + 1] = temp;

            return  Evaluate(digit, len);
        }
    }
    return 0;
}


int Evaluate(int digit[], int len ) {
    int i, num = 0;

    for (i = 0; i < len; i++) {
        num += digit[i] * pow(10, i);
    }

    return num;
}
