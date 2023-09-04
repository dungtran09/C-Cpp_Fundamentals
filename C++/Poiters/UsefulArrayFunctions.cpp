#include <algorithm>
#include <cstdio>
#include <iostream>

void printArray(const int* list, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}


int main (int argc, char *argv[]) {
    int list[] = {4, 2, 3, 6, 5, 1};

    std::cout << "Original array: " << std::endl;
    printArray(list, 6);

    int* min = std::min_element(list, list + 6);
    int* max = std::max_element(list, list + 6);
    std::cout << "Min element: " << *min << " at index: " << (min - list) << std::endl;
    std::cout << "Max element: " << *max << " at index: " << (max - list) << std::endl;

    std::cout << "Random array: " << std::endl;
    std::random_shuffle(list, list + 6);
    printArray(list, 6);

    
    std::cout << "Sored array: " << std::endl;
    std::sort(list, list + 6);
    printArray(list, 6);
   
    int key = 41;
    std::cout << "Find element: " << key << std::endl;
    int* pIndex = std::find(list, list + 6, key);

    std::cout << "Result: " << *pIndex << std::endl;

    return 0;
}
