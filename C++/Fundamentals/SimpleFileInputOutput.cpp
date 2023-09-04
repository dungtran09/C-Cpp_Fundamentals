#include <fstream>
#include <iostream>
#include <ostream>

int main (int argc, char *argv[]) {
    std::ofstream output;

    output.open("OputFile.txt");
    output << 11 <<"/" << 9 << "/" << 1996 << std::endl;
    output.close();

    std::ifstream input;

    input.open("OputFile.txt");
    
    std::cout << "Done!" << std::endl;
    return 0;
}
