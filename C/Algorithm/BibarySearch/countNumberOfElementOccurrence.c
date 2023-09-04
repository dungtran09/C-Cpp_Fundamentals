#include <stdio.h>
#include <stdlib.h>

int findFirstElement(int A[], int target, int low, int high) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == A[mid]) {
            result = mid;
            high = mid - 1;
        } else if (target < A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
} 

int findLastElement(int A[], int target, int low, int high) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == A[mid]) {
            result = mid;
            low = mid + 1;
        } else if (target < A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
} 
int countOccurrenceAnElement(int A[], int target, int low, int high) {
    int firstIndex = findFirstElement(A, target, low, high); 
    int lastIndex = findLastElement(A, target, low, high);

    return (lastIndex - firstIndex) + 1;
}

int main(int argc, char *argv[]) {
    int A[] = {1, 1, 3, 3, 3, 5, 5, 5, 5, 5, 9 ,9 ,11};
    int low = 0;
    int high = sizeof(A) / sizeof(A[0]) - 1;
    int result = countOccurrenceAnElement(A, 5, low, high);

    printf("%d\n", result);

    return EXIT_SUCCESS;
}
