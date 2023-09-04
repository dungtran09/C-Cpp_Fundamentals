#include <array>
#include <iostream>

int main (int argc, char *argv[]) {
    std::array<int, 5> list;

    for (int i = 0; i < 5; i++) {
        list[i] = i + 1;
    }

    for (unsigned i = 0; i < list.size(); i++) {
        std::cout << list[i] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
