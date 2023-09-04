#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {

    string s1("Washington");
    string s2("California");
    
    cout << "The first character in s1 is " << s1[0] << endl;
    cout << "s1 + s2 is " << (s1 + s2) << endl;
    cout << "s1 < s2? " << (s1 < s2) << endl;
    
    return 0;
}
