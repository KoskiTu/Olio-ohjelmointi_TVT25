#include "car.h"
#include <iostream>
using namespace std;

void Car::setBrand(const string& b) {
    brand = b;
}

void Car::setModel(const string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
}
