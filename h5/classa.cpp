#include "classa.h"

ClassA::ClassA(ClassB value) : objectB(value) {}

string ClassA::getBinfo(){
    return objectB.getInfo();
}

void ClassA::setBinfo(string value){
    objectB.setInfo(value);
}
