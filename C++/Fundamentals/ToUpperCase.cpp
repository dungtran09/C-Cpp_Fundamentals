#include <iostream>

int main (int argc, char *argv[]) {

    std::cout << "Enter a lowercase letter: ";
    char lowercaseLetter;
    std::cin >> lowercaseLetter;

    char upperCaseLetter = ('A' + (lowercaseLetter - 'a'));
    std::cout << "The correponding uppercase letter is: ";
    std::cout << upperCaseLetter << std::endl;
    
    return 0;
}
