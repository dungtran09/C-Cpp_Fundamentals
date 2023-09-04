#include <iostream>

void swap(int* Arr, int firstIndex, int secondIndex) {
    int temp = Arr[firstIndex];
    Arr[firstIndex] = Arr[secondIndex];
    Arr[secondIndex] = temp;
}

int findPivot(int* Arr, int start, int end) {
    int indexPivot = start;
    int pivotElement = Arr[end];

    for (int index = start; index < end; index++) {
        if (Arr[index] <= pivotElement) {
            swap(Arr, index, indexPivot);
            indexPivot++;
        }
    }
    swap(Arr, indexPivot, end); 
    return indexPivot;
}

void quickSort(int* Arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot = findPivot(Arr, start, end);
    quickSort(Arr, start, pivot - 1);
    quickSort(Arr, pivot + 1, end);
}

int main (int argc, char *argv[]) {
    int Arr[] = {00, 88, 33, 99, 44, 11, 77, 66};
    int size = sizeof(Arr) / sizeof(Arr[0]) - 1;

    std::cout << "Before Sort: ";
    for(int num : Arr) {
        std::cout << num << " ";
    }

    std::cout << "\n" << std::endl;
    
    std::cout << "After Sort : ";
    
    quickSort(Arr, 0, size);

    for(int num : Arr) {
        std::cout << num << " ";
    }
    std::cout << "\n" << std::endl;
    return 0;
}
