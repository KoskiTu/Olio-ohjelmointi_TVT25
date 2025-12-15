#include <iostream>
#include "ClassB.h"
#include "ClassA.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << "ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;
    // pointerin voi vaihtaa osoittamaan b:hen
    pointerA = &b;
    cout << "Pointteri osoittaa nyt osoitteeseen: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // refA:n osoitetta ei voi vaihtaa, se viittaa aina 'a':han
    cout << "refA osoittaa edelleen osoitteeseen: " << &refA << endl;
    cout << "refA:n arvo on edelleen: " << refA << endl;

    cout << endl;

    // Olioiden kanssa
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA objA(objB);
    objA.setBinfo("Olion objA asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA: " << objA.getBinfo() << endl;

    cout << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;

}
