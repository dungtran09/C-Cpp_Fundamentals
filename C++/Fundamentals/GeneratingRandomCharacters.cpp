#include <cstdlib>
#include <iostream>

int main (int argc, char *argv[]) {
    
    std::cout << "Enter a starting charractor: ";
    char startChar;
    std::cin >> startChar;

    std::cout << "Enter a ending charractor: ";
    char endChar;
    std::cin >> endChar;

    char randomChar = static_cast<int>(startChar + rand() % (endChar - startChar + 1));   
    std::cout << "Random charractor is: " << randomChar << std::endl;
    return 0;
}
