/*
 * C program data structure array
 * */

#include <stdio.h>

// add element at particular position
void add_elem_at_pos(int arr[], int new_arr[], int size, int pos, int data) {
    int i;
    
    for (i = 0; i < pos; i++) {
        new_arr[i] = arr[i];
    }
    
    new_arr[pos] = data;

    for (i = i + 1; i < size+1; i++) {
        new_arr[i] = arr[i-1];
    }

}

// print element
void print_elem(int new_arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");
}

int main () {
    
    int arr[] = {2, 34, 21, 6, 7 ,8, 90, 67, 23, 39};
    int size = sizeof(arr) / sizeof(arr[0]);

    // insert new element at particular position
    int data = 78;
    int pos = 5;
    int new_arr[size+1];
    add_elem_at_pos(arr, new_arr, size, pos, data);

    print_elem(new_arr, size+1);

    return 0;
}
