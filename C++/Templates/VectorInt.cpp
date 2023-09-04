#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    
    std::vector<int> list;

    for (int i = 0; i < 10; i++) {
        list.push_back(i + 1);
    }

    for (unsigned i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
