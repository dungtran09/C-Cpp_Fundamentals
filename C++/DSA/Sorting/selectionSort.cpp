#include <iostream>

void swap(int* A, int firstIndex, int secondIndex) {
    int temp = A[firstIndex];
    A[firstIndex] = A[secondIndex];
    A[secondIndex] = temp;
}

void selectionSort(int* A, int size) {
    int minIndex;
    for (int outIndex = 0; outIndex < size - 1; outIndex++) {
        minIndex = outIndex;
        for (int inIndex = outIndex + 1; inIndex < size; inIndex++) {
            if (A[inIndex] < A[minIndex]) {
                minIndex = inIndex;
            }
        }
    swap(A, minIndex, outIndex);
    }
}

void selectionSort_v2(int* A, int size) {
    for (int outIndex = 0; outIndex < size - 1; outIndex++) {
        int maxIndex = 0;
        for (int inIndex = 1; inIndex < size - outIndex; inIndex++) {
            if (A[inIndex] > A[maxIndex]) {
                maxIndex = inIndex;
            }
        }
        swap(A, maxIndex, size - outIndex - 1);
    }
}

int main (int argc, char *argv[]) {
    int A[] = {1, 5, 17, 42, 13, 23, 7, 10};
    int size = sizeof(A) / sizeof(A[0]);

    std::cout << "Before sort: " << std::endl;

    for(int var : A) {
        std::cout << var << " ";
    }
    std::cout << std::endl;

    std::cout << "After sort : " << std::endl;
    // selectionSort(A, size);
    selectionSort_v2(A, size);

    for(int var : A) {
        std::cout << var << " ";
    }
    std::cout << std::endl;
    return 0;
}
