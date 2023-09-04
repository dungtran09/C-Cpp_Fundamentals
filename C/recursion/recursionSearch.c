#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arr[] = {3, 4, 5, 6, 7, 1, 2, 3};
    int result =  recursionSearch(arr, 1, 0, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", result);
    return EXIT_SUCCESS;
}

int recursionSearch(int arr[], int key, int start, int end) {
    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;
    
    if (key == arr[mid]) {
        return mid;
    }

    if (arr[start] <= arr[mid]) {
        if (key >= arr[start] && key <= arr[mid]) {
            return recursionSearch(arr, key, start, mid - 1);
        } else {
            return recursionSearch(arr, key, mid + 1, end);
        }
    }

    if (key >= arr[mid] && key <= arr[end]) {
        return recursionSearch(arr, key, mid + 1, end);
    } 
    return recursionSearch(arr, key, start, mid - 1);
}
