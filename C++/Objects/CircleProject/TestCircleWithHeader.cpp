#include <iomanip>
#include <iostream>
#include "header/include/Circle.h"

using namespace std;

void printCircleArray(Circle[], int);
double sum(Circle[], int);

int main (int argc, char *argv[]) {
    const int SIZE = 10;
    Circle circleArray[SIZE];

    for (int i = 0; i < SIZE; i++) {
        circleArray[i].setRadius(i + 1);
    }

    printCircleArray(circleArray, SIZE);
    
    cout << "Total number of Objects: " << circleArray[0].getNumberOfObjects() << endl;

    return 0;
}

void printCircleArray(Circle circleArray[], int size) {
    cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(35) << left << circleArray[i].getRadius() << setw(8) << circleArray[i].getArea() << endl;
    }
    cout << "--------------------------------------------" << endl;
    // Compute and display the result
    cout << setw(35) << left << "The total area of circles is" << setw(8) << sum(circleArray, size) << endl;
}

double sum(Circle circleArray[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += circleArray[i].getArea();
    }
    return sum;
}
