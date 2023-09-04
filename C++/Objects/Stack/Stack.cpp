// #include "GenericStack.h"
#include "ImproveGenericStack.h"
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {

    // Create a stack of int values
    Stack<int> intStack;
    
    for (int i = 0; i < 10; i++)
        intStack.push(i);
    
    cout << "Number of elements: " << intStack.getSize() << endl;
    while (!intStack.empty())
        cout << intStack.pop() << " ";
    
    cout << "\n------------------------" << endl;
    
    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Chicago");
    stringStack.push("Denver");
    stringStack.push("London");
    cout << "Number of elements: " << stringStack.getSize() << endl;
    while (!stringStack.empty())
        cout << stringStack.pop() << " ";
    cout << endl;
    return 0;
}
