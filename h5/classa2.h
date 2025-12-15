#ifndef CLASSA2_H
#define CLASSA2_H

#include <string>
#include "ClassB.h"


class ClassA2
{
private:
    ClassB &refB;

public:
    ClassA2(ClassB &value); //referenssi
    string getBinfo();
    void setBinfo(string value);
};

#endif // CLASSA2_H
