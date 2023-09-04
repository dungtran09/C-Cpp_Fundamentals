#include <stdio.h>
#include <stdlib.h>

int* insertionSort(int*, int);

int main(int argc, char *argv[]) {
    int numsList[] = {1, 6, 3, 7, 25, 9, 5, 2, 45, 74};

    int size = sizeof(numsList) / sizeof(numsList[0]) - 1;
    
    printf("Before Sorting: ");
    for (int i = 0; i <= size; i++) {
        printf("%d ", numsList[i]);
    }
    printf("\n");

    printf("After Sorting : ");
    int* ptr_numsList = insertionSort(numsList, size);

    for (int i = 0; i <= size; i++) {
        printf("%d ", ptr_numsList[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

int* insertionSort(int* numsList, int size) {
    int currentElement;
    int currentLeftIndex, currentRightIndex;

    for (currentRightIndex = 1; currentRightIndex <= size; currentRightIndex++) {
        currentElement = numsList[currentRightIndex];
        currentLeftIndex = currentRightIndex;

        while (currentLeftIndex > 0 && numsList[currentLeftIndex - 1] >= currentElement) {
            numsList[currentLeftIndex] = numsList[currentLeftIndex - 1];
            currentLeftIndex--;
        }
        numsList[currentLeftIndex] = currentElement;
    }
    
    return numsList;
}
