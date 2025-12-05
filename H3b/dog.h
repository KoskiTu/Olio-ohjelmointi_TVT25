#ifndef DOG_H
#define DOG_H
#include "animal.h"
using namespace std;

class Dog: public Animal
{
public:
    ~Dog() override;
    void callOut() const override;
};

#endif // DOG_H
