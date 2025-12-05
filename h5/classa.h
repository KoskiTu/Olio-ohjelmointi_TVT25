#ifndef CLASSA_H
#define CLASSA_H

#include "ClassB.h"
#include <string>

class ClassA
{
private:
    ClassB objectB;

public:
    ClassA(ClassB value); //kopio
    string getBinfo();
    void setBinfo(string value);
};

#endif // CLASSA_H
