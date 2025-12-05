#include "dog.h"


void Dog::callOut() const{
    cout << "koira haukkuu\n";
}

Dog::~Dog() {
    cout<< "Dog tuhottu\n";
}
