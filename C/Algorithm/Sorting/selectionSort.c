#include <stdio.h>
#include <stdlib.h>

void selectionSort(int*, int);
void selectionSort_v2(int*, int);
void swap(int*, int, int);

int main(int argc, char *argv[]) {
    int numsList[] = {1, 6, 3, 7, 25, 9, 5, 2, 45, 74};

    int size = sizeof(numsList) / sizeof(numsList[0]) - 1;
    
    printf("Before Sorting: ");
    for (int i = 0; i <= size; i++) {
        printf("%d ", numsList[i]);
    }
    printf("\n");

    printf("After Sorting : ");
    
    selectionSort(numsList, size);
    // selectionSort_v2(numsList, size);

    for (int i = 0; i <= size; i++) {
        printf("%d ", numsList[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

int smallestPos(int* numsList, int size, int currentIndex) {
    int pos = currentIndex;
    for (int i = currentIndex; i < size; i++) {
        if (numsList[i] < numsList[currentIndex]) {
            pos = i;
        }
    }
    return pos;
}

void selectionSort(int* numsList, int size) {
    int pos;
    for (int currentIndex = 0; currentIndex < size; currentIndex++) {
        pos = smallestPos(numsList, size, currentIndex);
        swap(numsList, currentIndex, pos);
    }
}

void selectionSort_v2(int* numsList, int size) {
    for (int outIndex = 0; outIndex < size; outIndex++) {
        int bigIndex = 0;
        for (int inIndex = 1; inIndex < size - outIndex; inIndex++) {
            if (numsList[inIndex] > numsList[bigIndex]) {
                bigIndex = inIndex;
            }
        }
        swap(numsList, bigIndex, size - outIndex - 1);
    }
}

void swap(int* numsList, int firstIndex, int secondIndex) {
    int temp = numsList[firstIndex];
    numsList[firstIndex] = numsList[secondIndex];
    numsList[secondIndex] = temp;
}
