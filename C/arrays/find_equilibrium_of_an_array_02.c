/*
 * C program using prefix sum array and singed loop to find Equilibrium index in array.
 * */

#include <stdio.h>

int equilibriumIndex(int *arr, int n) {
    int i, totalSum = 0, leftSum = 0, rightSum = 0;
    int prefix[n];
    
    for (i = 0; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    totalSum = prefix[n - 1];

    for (i = 0; i < n; i++) {
        leftSum = prefix[i] - arr[i];
        rightSum = totalSum - prefix[i];

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
        printf("The array has equilibrium index at index: %d\n", result);
    } else {
        printf("The array is has not equilibrium index.\n");
    }


    return 0;
}
