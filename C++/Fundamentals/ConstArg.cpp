#include <iostream>

void constFun(int& a, const int& b);

int main (int argc, char *argv[]) {
    int alpha = 7;
    int beta = 11;

    constFun(alpha, beta);

    std::cout << alpha << std::endl;
    std::cout << beta << std::endl;

    return 0;
}

void constFun(int& a, const int& b) {
    a = 12;
    b = 13;
}
