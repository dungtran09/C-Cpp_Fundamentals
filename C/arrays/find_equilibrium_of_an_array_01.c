/*
 * C program Given array and find the equilibrium index of aray.
 * */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int equilibriumIndex(int *arr, int n) {
    
    int i, j, leftSum, rightSum;
    
    for (i = 0; i < n; i++) {
        
        leftSum = 0;
        for (j = 0; j < i; j++) {
            leftSum += arr[j];
        }

        rightSum = 0;
        for (j = i + 1; j < n; j++) {
            rightSum += arr[j];
        }

        if (leftSum == rightSum) {
            return i;
        }

    }

    return -1;

}


int main() {
    
    int result;
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    result = equilibriumIndex(arr, size);
    
    if (result != -1) {
        printf("The array is an Equilibrium array, at index: %d\n", result);
    } else {
        printf("The array is NOT a Equilibrium array.\n");
    }

    return 0;
}

