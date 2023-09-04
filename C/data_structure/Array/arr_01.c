/*
 * data structure array. add element at begin on array 
 * */

#include <stdio.h>
#include <stdlib.h>

// add data at begin into array
int add_begin(int arr[], int n, int data) {
    int i;
    n += 1;
    // shift all element towards right 
    for (i = n - 1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    // add element at begin
    arr[0] = data;

    return n;
}

// print data
void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    
    int arr[10] = {15, 23, 14, 5};
    int n = 4; 
    n = add_begin(arr, n, 25);
    n = add_begin(arr, n, 11);
    n = add_begin(arr, n, 51);
    
    print(arr, n);

    return 0;
}
