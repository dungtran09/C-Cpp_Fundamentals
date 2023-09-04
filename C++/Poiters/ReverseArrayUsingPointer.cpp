#include <iostream>

int* reverse(int* numbersArray, int size) {
    for (int i = 0, j = size; i < j; i++, j--) {
        int temp = numbersArray[j];
        numbersArray[j] = numbersArray[i];
        numbersArray[i] = temp;
    }

    return numbersArray;
}

void printArray(const int* numbersArray, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << numbersArray[i] << " ";
    }
    std::cout << std::endl;
}


int main (int argc, char *argv[]) {
    int numbersArray[] {1, 2, 3, 4, 5, 6};
    
    int size = sizeof(numbersArray) / sizeof(numbersArray[0]) - 1;
    
    int* pNumbersArray = reverse(numbersArray, size);
    
    printArray(pNumbersArray, size);

    return 0;
}
