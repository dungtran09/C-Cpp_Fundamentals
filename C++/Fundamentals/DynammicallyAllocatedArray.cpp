#include <cstddef>
#include <iostream>

int main (int argc, char *argv[]) {

    int * ptr = NULL;
    std::cout << "Enter size of array: ";
    int size;
    std::cin >> size;

    ptr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter number " << i+1 << ": ";
        int value;
        std::cin >> value;
        
        *(ptr + i) = value;
    }
    
    std::cout << "List number in array: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Number " << i + 1 << ": " << *(ptr + i) << std::endl;
    }
    delete []ptr;
    ptr = NULL;

    return 0;
}
