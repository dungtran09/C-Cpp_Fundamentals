#include <stdlib.h>
#include <stdio.h>

void merge(int* numsList, int* leftSubList, int* rightSubList, int sizeLeftSubList, int sizeRightSubList) {
    int indexNumsList = 0, indexLeftSubList = 0, indexRightSubList = 0;
    
    while ((indexLeftSubList < sizeLeftSubList) && (indexRightSubList < sizeRightSubList)) {
        if (leftSubList[indexLeftSubList] <= rightSubList[indexRightSubList]) {
            numsList[indexNumsList] = leftSubList[indexLeftSubList];
            indexLeftSubList++;
        } else {
            numsList[indexNumsList] = rightSubList[indexRightSubList];
            indexRightSubList++;
        }
        indexNumsList++;
    }

    while (indexLeftSubList < sizeLeftSubList) {
        numsList[indexNumsList] = leftSubList[indexLeftSubList];
        indexLeftSubList++;
        indexNumsList++;
    }

    while (indexRightSubList < sizeRightSubList) {
        numsList[indexNumsList] = rightSubList[indexRightSubList];
        indexRightSubList++;
        indexNumsList++;
    }

}

void mergeSort(int* numsList, int size) {
    if (size < 2) {
        return;
    }
    
    int mid = size / 2;
    int leftSubList[mid];
    int rightSubList[size - mid];
    
    for (int i = 0; i < mid; i++) {
        leftSubList[i] = numsList[i];
    }
    for (int i = mid ; i < size; i++) {
        rightSubList[i - mid] = numsList[i];
    }

    mergeSort(leftSubList, mid);
    mergeSort(rightSubList, size - mid);
    merge(numsList, leftSubList, rightSubList, mid, size - mid);

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
    
    mergeSort(numsList, size);

    for (size_t i = 0; i < size; i++) {
        printf("%d ", numsList[i]);
    }

    printf("\n");
    return EXIT_SUCCESS;
}
