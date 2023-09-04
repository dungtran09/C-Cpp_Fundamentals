/*
 * C program Find product of array except self using single loop
 **/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int *arr, int n) {
    int i;
    int prefixProduct[n];
    int suffixProduct[n];
    int product[n];
    
    prefixProduct[0] = 1;
    for (i = 1; i < n; i++) {
        prefixProduct[i] = arr[i-1] *  prefixProduct[i-1];
    }

    suffixProduct[n-1] = 1;
    for (i = n-2; i >= 0; i--) {
        suffixProduct[i] = arr[i+1] * suffixProduct[i+1];
    }

    for (i = 0; i < n; i++) {
        product[i] = prefixProduct[i] * suffixProduct[i];
    }

    // print product except self
    for (i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }

    printf("\n");

}

int main() {
    
    int arr[] = {5, 2, 8, 4, 5};
    size_t size = sizeof(arr) / sizeof(int);
    
    productExceptSelf(arr, size);

    return 0;
}
