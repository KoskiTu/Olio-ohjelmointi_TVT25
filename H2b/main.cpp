#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main() {
    // vektori carList
    vector<Car> carList;

    // kolme Car-oliota listaan
    carList.push_back(Car("Toyota", "Corolla", 2015));
    carList.push_back(Car("Ford", "Focus", 2018));
    carList.push_back(Car("Volkswagen", "Golf", 2020));

    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    // Tulostaa kaikkien autojen tiedot
    cout << "\nKaikkien autojen tiedot:" << endl;
    for (const Car& car : carList) {
        car.printData();
    }

    return 0;
}
