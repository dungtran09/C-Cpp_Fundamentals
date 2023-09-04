#include <stdio.h>

/*
 * C program read a number and check whether a number is armstrong number or not.
 * */

void is_armtrongNumber(int n) {
    
    int q, num, rem , cnt, count, mul = 1, result = 0;
    
    q = n;
    num = n;
    
    while (q != 0) {
        count++;
        q /= 10;
    }
    
    cnt = count;
    while (n != 0) {
        rem = n % 10;
        while (cnt != 0) {
            mul = mul * rem;
            cnt--;
        }
        
        result = result + mul;
        cnt = count;
        mul = 1;
        n /= 10;
    }

    if (result == num) {
        printf("%d is a armstrong number.\n", num);
    } else {
        printf("%d is NOT a armstrong number.\n", num);
    }



}

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    is_armtrongNumber(n);


    return 0;
}
