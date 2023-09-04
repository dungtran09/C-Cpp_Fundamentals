/*
 * C program to check given array whether is a mountain array or not.
 * */

#include <stdio.h>
#include <stdlib.h>

int validarr(int *arr, int arrSize) {
    int climb = 0;
    
    if (arrSize < 3) {
        return 0;
    }
    
    while (climb < arrSize - 1 && arr[climb] < arr[climb + 1]) {
        climb += 1;
    }
    

    if (climb == 0 || climb == arrSize - 1) {
        return 0;
    }

    while (climb < arrSize - 1 &&  arr[climb] > arr[climb + 1]) {
        climb += 1;
    }
    

    if (climb == arrSize - 1) {
        return 1;
    }

    return  0;
}

int main() {

    int array[] = {1,2,3,4,5,14,15,17,9,5,4,3,2,1,0};
        
    size_t size = sizeof(array) / sizeof(array[0]);

    int result = validarr(array, size);
    
    if (result) {
        printf("The array is a mountain.\n");
    } else {
        printf("The array is not a mountain.\n");
    }

    return 0;
}
