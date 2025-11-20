#include "animal.h"
using namespace std;

void Animal::callOut() const{
    cout << "Eläin ääntelee\n";
}

Animal::~Animal() {
    cout<<"Animal tuhottu.\n";
}
