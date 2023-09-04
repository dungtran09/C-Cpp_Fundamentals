/*
 * C program find product of array except self
 * */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int *arr, int n) {
    int i;    
    int product[n];
    product[0] = 1;
    for (i = 1; i < n; i++) {
        product[i] = product[i-1] * arr[i-1];
    }
    
    int suffixProduct = 1;
    for (i = n - 1; i >= 0; i--) {
        product[i] = product[i] * suffixProduct;
        suffixProduct = suffixProduct * arr[i];
    }

    // print 
    for (i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }
    printf("\n");
}

int main() {
    
    int arr[] = {0, 4, 0, 3};
    size_t size = sizeof(arr) / sizeof(int);

    productExceptSelf(arr, size);

    return 0;
}
