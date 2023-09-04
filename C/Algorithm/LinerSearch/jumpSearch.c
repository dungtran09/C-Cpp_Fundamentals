#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int jumpSearch(int*, int, int, int);

int main(int argc, char *argv[]) {
    int A[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 77, 89, 101, 201, 256, 780};
    int lowerBound = 0;
    int upperBound = sizeof(A) / sizeof(A[0]) - 1;
    int target = 77;
    int result = jumpSearch(A, lowerBound, upperBound, target);
    
    if (result != -1) {
        printf("The element found at index: %d\n", result);
    } else {
        printf("The element is not found!\n");
    }


    return EXIT_SUCCESS;
}

int jumpSearch(int* A, int lowerBound, int upperBound, int target) {
    int pos = -1;
    int size = upperBound;
    int step = sqrt(size);

    while (target >= A[step] && step < upperBound) {
        lowerBound = step;
        step += sqrt(size);
        if (step > upperBound) {
            return -1;
        }
    }

    for (int i = lowerBound; i < step; i++) {
        if (A[i] == target) {
            pos = i;
            return pos;
        }
    }
    return -1;
}

