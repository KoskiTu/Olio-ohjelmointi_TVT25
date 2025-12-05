#include <iostream>
#include <memory>
#include "animal.h"
#include "dog.h"


using namespace std;

int main()
{

    // Suora Animal-olio
    {
        unique_ptr<Animal> a = make_unique<Animal>();
        a ->callOut();
    }

    // Polymorfinen Dog-olio
    {
        unique_ptr<Animal> b = make_unique<Dog>();
        b->callOut(); // Tulostus koira haukkuu
    }

    // Suora Dog-olio
    {
        unique_ptr<Dog> c = make_unique<Dog>();
        c ->callOut();
    }

    return 0;
}
