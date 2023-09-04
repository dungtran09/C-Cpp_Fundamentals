#include <stdio.h>
#include <stdlib.h>

int findFirstElement(int A[], int target, int low, int high) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == A[mid]) {
            result = mid;
            high = mid - 1;
        } else if (target > A[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    int A[] = {2, 4, 10 , 10, 10, 18, 20};
    int low = 0;
    int high = sizeof(A) / sizeof(A[0]) - 1;
    int result = findFirstElement(A, 10, low, high);

    printf("%d\n", result);
    return EXIT_SUCCESS;
}
