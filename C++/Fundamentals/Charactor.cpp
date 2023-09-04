#include <iostream>

int main (int argc, char *argv[]) {
    char ch = 0XFF41;

    std::cout << ch << std::endl;
    int num_in_char = 99;

    std::cout << static_cast<char>(num_in_char) << std::endl;
    return 0;
}
