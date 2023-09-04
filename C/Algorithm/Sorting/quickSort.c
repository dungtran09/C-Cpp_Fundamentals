#include <stdio.h>
#include <stdlib.h>

void swap(int* numsList, int firstIndex, int secondIndex) {
    int temp = numsList[firstIndex];
    numsList[firstIndex] = numsList[secondIndex];
    numsList[secondIndex] = temp;
}

int findPivot(int* numsList, int start, int end) {
    int indexPivot = start;
    int pivotElement = numsList[end];
    for (int index = start; index < end; index++) {
        if (numsList[index] <= pivotElement) {
            swap(numsList, index, indexPivot);
            indexPivot++;
        }
    }
    swap(numsList, indexPivot, end);
    return indexPivot;
}

void quickSort(int* numsList, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = findPivot(numsList, start, end);
    quickSort(numsList, start, pivot - 1);
    quickSort(numsList, pivot + 1, end);
}


int main(int argc, char *argv[]) {
    
    int numsList[] = {88, 44, 33, 22, 55, 66, 99, 77, 00, 11};

    int size = sizeof(numsList) / sizeof(numsList[0]);

    printf("Before sort: ");

    for (size_t i = 0; i < size; i++) {
        printf("%d ", numsList[i]);
    }

    printf("\n");
    
    printf("After sort : ");
    
    quickSort(numsList, 0, size);

    for (size_t i = 0; i < size; i++) {
        printf("%d ", numsList[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}
