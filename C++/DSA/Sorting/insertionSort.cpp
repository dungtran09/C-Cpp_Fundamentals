#include <iostream>

void insertionSort(int* A, int size) {
    int currentRightIndex, currentLeftIndex;
    int currentElement;
    for (currentRightIndex = 1; currentRightIndex < size; currentRightIndex++) {
        currentElement = A[currentRightIndex];
        currentLeftIndex = currentRightIndex;

        while (currentLeftIndex >= 0 && A[currentLeftIndex - 1] >= currentElement) {
            A[currentLeftIndex] = A[currentLeftIndex - 1];
            currentLeftIndex--;
        }
        A[currentLeftIndex] = currentElement;
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
    insertionSort(A, size);

    for(int var : A) {
        std::cout << var << " ";
    }
    std::cout << std::endl;
    return 0;
}
