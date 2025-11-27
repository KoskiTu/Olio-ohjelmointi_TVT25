#ifndef CAR_H
#define CAR_H

#include<string>
#include "engine.h"
#include "wheel.h"
using namespace std;

class Car
{
private:
    string brand;
    string model;
    Engine engine;
    Wheel wheels[4];

public:
    Car(string b, string m);
    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif // CAR_H
