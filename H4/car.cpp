#include "car.h"
#include <iostream>
using namespace std;


Car::Car(string b, string m) : brand(b), model(m), engine(0, 0.0){}

void Car::setEngine(){
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels(){
    for (int i=0; i < 4; ++i){
        wheels[i].setSize(17);
        wheels[i].setType("kesärengas");
 }
  }

void Car::printDetails() const{
    cout << "Auto : " << model << " " << brand << endl;
    cout <<"Teho: " << engine.getHorsepower() << "hp, " << engine.getDisplacement() << " L" <<endl;
    for (int i=0; i < 4; ++i){
        cout << "Rengas " << i+1 << ": " << wheels[i].geSize() << " tuumaa, " << wheels[i].getType() <<endl;
    }
}
