#include <iostream>

void merge(int* arrList, int* leftSubArr, int* rightSubArr, int sizeLeftSubArr, int sizeRightSubArr) {
    int indexArr = 0, indexLeftSubArr = 0, indexRightSubArr = 0;

    while ((indexLeftSubArr < sizeLeftSubArr) && (indexRightSubArr < sizeRightSubArr)) {
        if (leftSubArr[indexLeftSubArr] <= rightSubArr[indexRightSubArr]) {
            arrList[indexArr] = leftSubArr[indexLeftSubArr];
            indexLeftSubArr++;
        }
        else {
            arrList[indexArr] = rightSubArr[indexRightSubArr];
            indexRightSubArr++;
        }
        indexArr++;
    }
    while (indexLeftSubArr < sizeLeftSubArr) {
        arrList[indexArr] = leftSubArr[indexLeftSubArr];
        indexArr++;
        indexLeftSubArr++;
    }

    while (indexRightSubArr < sizeRightSubArr) {
        arrList[indexArr] = rightSubArr[indexRightSubArr];
        indexArr++;
        indexRightSubArr++;
    }
}

void mergeSort(int *arrList, int size) {
    if (size < 2) {
        return;
    }

    int mid = size / 2;
    int leftSubArr[mid];
    int rightSubArr[size - mid];

    for (int i = 0; i <= mid - 1; i++) {
        leftSubArr[i] = arrList[i];
    }

    for (int j = mid; j <= size - 1; j++) {
        rightSubArr[j - mid] = arrList[j];
    }

    mergeSort(leftSubArr, mid);
    mergeSort(rightSubArr, size - mid);
    merge(arrList, leftSubArr, rightSubArr, mid, size - mid);
}

int main(int argc, char *argv[]) {
    int arrList[] = {2, 4, 1, 6, 8, 5, 3, 7};
    int size = sizeof(arrList) / sizeof(arrList[0]);

    std::cout << "Before sort: " << std::endl;

    for (int var : arrList) {
        std::cout << var << " ";
    }
    std::cout << std::endl;

    std::cout << "After sort : " << std::endl;
    mergeSort(arrList, size);

    for (int var : arrList) {
        std::cout << var << " ";
    }
    std::cout << std::endl;
    return 0;
}
