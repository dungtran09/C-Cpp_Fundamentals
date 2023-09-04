/*
 * C program read an array and caculator product of array except self.
 * */

#include <stddef.h>
#include <stdio.h>

void productExceptSelf(int *arr, int n) {
    
    int i, j, product[n];
    
    for (i = 0; i < n; i++) {
        int productExclCurr = 1;
        for (j = 0; j < n; j++) {
            if (i == j) {
                continue;
            } else {
                productExclCurr = productExclCurr * arr[j];
            }
        }
        product[i] = productExclCurr;
    }
    

    // print result
    for (i = 0; i < n; i++) {
        printf("product[%d] = %d\n",i, product[i]);
    }


}

int main() {

    int arr[] = {2,1,3,4};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    productExceptSelf(arr, size);

    return 0;
}
