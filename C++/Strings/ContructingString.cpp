#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
    
    string text("Programming is fun");

    stringstream ss(text);
    
    string word;

    while (!ss.eof()) {
        ss >> word;
        cout << word << endl;
    }
    
    return 0;
}
