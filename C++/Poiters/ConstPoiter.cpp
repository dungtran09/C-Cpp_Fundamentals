#include <iostream>

int main (int argc, char *argv[]) {
    double radius = 5;
    double* const pRadius = &radius;
    
    std::cout << *pRadius << std::endl;

    return 0;
}
