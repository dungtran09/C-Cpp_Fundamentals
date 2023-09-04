/*
 * C program given a array and find equilibrium index of the array.
 * */

#include <stddef.h>
#include <stdio.h>

int equilibriumIndex(int *arr, int n) {
    int i;
    int totalSum = 0;
    int leftSum = 0;

    for (i = 0; i < n; i++) {
        totalSum = totalSum + arr[i];
    }

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum = leftSum + arr[i];

    }
    return -1;
}

int main() {
    
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int result;

    result = equilibriumIndex(arr, size);
    
    if (result != -1) {
        printf("The array is an Equilibrium array, at index: %d\n", result);
    } else {
        printf("The array is NOT a Equilibrium array.\n");
    }
    if (result != -1) {
        
    }
    return 0;
}
