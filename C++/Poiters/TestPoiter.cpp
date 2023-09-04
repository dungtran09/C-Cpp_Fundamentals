#include <iostream>

int main (int argc, char *argv[]) {
    int count = 5;
    int* pCount = NULL;
    pCount = &count;
    std::cout << *pCount << std::endl;
    (*pCount)++; 
    std::cout << *pCount << std::endl;
    return 0;
}
