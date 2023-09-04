#include <stdio.h>

/*
 *  C program read a number from keybroad to check whether a number is a perfect number or not using function.
 * */

int check_isPerfectNumber(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
    
}

void perfect_number(int lower, int upper) {
    int i;
    for (i = lower; i < upper; i++) {
        if (check_isPerfectNumber(i)) {
            printf("%d ", i);
        }
    }

}

int main () {
   
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    printf("The perfect numbers is in ranger from %d to %d is: ", lower, upper);
    perfect_number(lower, upper);
    
    printf("\n");
    return 0;
}
