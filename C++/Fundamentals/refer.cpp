#include <iostream>

using namespace std;


int x;
int& setX() {
    return x;
}

int main (int argc, char *argv[]) {
    
    setX() = 90;

    cout << "x = " << x << endl;
    return 0;
}
