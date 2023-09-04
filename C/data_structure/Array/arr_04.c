/*
 * C program five an array not full, and create a func del first element in that array.
 * */

#include <stdio.h>
#include <stdlib.h>

int del_first_elem(int arr[], int n) {
    int i;
    if (n == 0) {
        printf("The array is empty.\n");
        return n;
    }
    
    for (i = 0; i < n; i++) {
        arr[i] = arr[i+1];
    }
    return n - 1;
}

int main () {
    int arr[10] = {23, 2, 5, 56, 32, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // del first element

    n = del_first_elem(arr, n);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != NULL) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;

}
