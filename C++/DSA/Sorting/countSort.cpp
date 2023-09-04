#include <iostream>

#define MAX 255

void display(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n" << std::endl;
}

void countSort(int* array, int size) {
    int output[MAX];
    int count[MAX];

    int max = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0 ; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
    
}

int main (int argc, char *argv[]) {
    int array[] = {2, 5, 2, 8, 1, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);
    
    display(array, n);
    countSort(array, n);
    display(array, n);
    return 0;
}
