#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

void ItalianChef::makePasta(){
    cout << "ItalianChef " << name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef(){
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName(){
    return name;
}
