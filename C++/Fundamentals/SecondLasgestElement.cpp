#include <iostream>

int secondLargestElement(int* list, int size) {
    int largest = list[0];
    int secondLargest = -1;
    for (int i = 0; i < size; i++) {
        if (largest < list[i]) {
            int temp = largest;
            largest = list[i];
            secondLargest = temp;
        }
    }
    return secondLargest;
}

int main (int argc, char *argv[]) {
    int list[6] = {1, 2, 4, 7, 7, 5};

    std::cout << secondLargestElement(list, 6) << std::endl;

    return 0;
}
