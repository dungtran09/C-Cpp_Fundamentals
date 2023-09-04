#include <iostream>

int main (int argc, char *argv[]) {
    int listNums[5] = {10, 20, 30, 40, 50};

    int *listNums_Ptr = listNums;

    std::cout << listNums_Ptr << std::endl;
    std::cout << &listNums[0] << std::endl;
    std::cout << &listNums[1] << std::endl;
    std::cout << &listNums[2] << std::endl;
    std::cout << &listNums[3] << std::endl;
    std::cout << &listNums[4] << std::endl;
    std::cout << *(&listNums[0] + 4) << std::endl;
    return 0;
}
