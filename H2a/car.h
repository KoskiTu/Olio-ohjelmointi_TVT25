#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(const string& b);
    void setModel(const string& m);
    void setYearModel(int y);
    void printData() const;
};

#endif

