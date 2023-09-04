#include <iostream>

void display() {
    
    static int count = 0;
    
    std::cout << "Number " << count++ << "\n";
}

int main (int argc, char *argv[]) {
    display(); 
    display(); 
    display(); 
    display(); 
    display(); 
    return 0;
}
