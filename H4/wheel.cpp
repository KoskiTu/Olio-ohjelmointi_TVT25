#include "wheel.h"


Wheel::Wheel(int s, string t) : size(s), type(t){}

int Wheel::geSize() const{
    return size;
}

void Wheel::setSize(int s){
    size = s;
}
string Wheel::getType() const{
    return type;
}

void Wheel::setType(string t){
    type = t;
}
