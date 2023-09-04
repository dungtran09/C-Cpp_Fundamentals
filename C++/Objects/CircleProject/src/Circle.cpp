#include "../header/include/Circle.h"

int Circle::numberOfObjects = 0;

Circle::Circle() {
    this->radius = 1;
    numberOfObjects++;
}

Circle::Circle(double newRadius) {
    this->radius = newRadius;
    numberOfObjects++;
}

double Circle::getArea() {
    return radius * radius * 3.1415;
}

void Circle::setRadius(double newRadius) {
    this->radius = (newRadius >= 0) ? newRadius : 0;
}

double Circle::getRadius() {
    return radius;
}

int Circle::getNumberOfObjects() {
    return numberOfObjects;
}

Circle::~Circle() {
    numberOfObjects--;
}

