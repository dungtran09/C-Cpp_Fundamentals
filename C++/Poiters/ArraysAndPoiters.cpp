#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
    int list[6] = {11, 12, 13, 14, 15, 16};
    int* pList = list;

    for (int i = 0; i < sizeof(list) / sizeof(list[0]) - 1; i++) {
        cout << "Address: " << (list + i) << " Value: " << *(list + i) << endl;
    }
    
    std::cout << "---------------------------------" << std::endl;

    for (int i = 0; i < sizeof(list) / sizeof(list[0]) - 1; i++) {
        cout << "Address: " << (pList + i) << " Value: " << *(pList + i) << endl;
    }

    return 0;
}
