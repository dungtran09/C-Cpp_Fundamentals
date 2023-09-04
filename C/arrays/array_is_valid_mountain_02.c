/*
 * C program check array is a valid mountain or not 
 * */

#include <stdio.h>
#include <stdbool.h>

bool validMountain(int *arr, int sizeArr) {
    int left = 0;
    int right = sizeArr - 1;
    
    while (left < right && arr[left] < arr[left + 1]) {
        left += 1;
    }
    
    while (right > 0  && arr[right] < arr[right - 1]) {
        right -= 1;
    }
    
    if (left > 0 && left == right && right < sizeArr -1) {
        return true;
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4,5,14,15};
    
    size_t sizeArr = sizeof(arr) / sizeof(arr[0]);

    if (validMountain(arr, sizeArr)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
