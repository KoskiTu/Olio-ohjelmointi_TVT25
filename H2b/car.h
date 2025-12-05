#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() const {
        cout << "Merkki: " << brand << ", Malli: " << model << ", Vuosi: " << yearModel << endl;
    }
};

#endif
