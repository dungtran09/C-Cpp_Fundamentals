#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
    std::string message = "Welcome To C++";

    std::cout << message.length() << std::endl;
    std::cout << message.at(message.length() - 1) << std::endl;

    std::string s = "ABCD";
    s[0] = 'B';
    std::cout << s << std::endl;
    return 0;
}
