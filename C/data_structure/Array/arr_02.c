/*
 * C program data structure : array
 * This program add new element at end of the arr in case the arrray is fulll
 * */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int add_end(int arr[], int new_arr[], int size, int new_size, int data) {
    int i;
    // copy old arr to new arr
    for (i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }
    new_arr[i] = data;

    return new_size;
}

// print data
void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main () {
    
    int arr[100] = {23, 44, 56, 67 ,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    // count element in arr
    for (int i = 0; i < size; i++) {
        if(arr[i] != NULL) {
            count++;
        }
    }
   
    if (size == count) {
        int new_size = size + 1;
        int new_arr[new_size];
        new_size = add_end(arr, new_arr, size, new_size, 90);
        print(new_arr, new_size);
    }
    
    return 0;
}
