#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "Italian chef's name is: " << italianChef.getName() << std::endl;

    return 0;
}
