#include <stdio.h>

/*
 * C proram find the  number of integers divisiable by 5 between the given range num1 ang num2 where num1 < num2
 * */


int main() {
    
    int i, num1, num2, count = 0, sum = 0;

    printf("Enter two number ( num1 < num2): ");
    scanf("%d %d",&num1,&num2);

    // loop find numbers divisiable for 5 and sum that numbers
    for (i = num1; i <= num2; i++) {
        if (i % 5 == 0) {
            count++;
            sum += i;
        }
    }

    printf("The numbers divisiable for 5 from %d to %d is: %d\n", num1, num2, count);
    printf("Total numbers divisiable for 5 is: %d\n", sum);

    return 0;
}
