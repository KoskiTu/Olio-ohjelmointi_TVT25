#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main() {
    // Car-olio pinomuistiin
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    car.printData();

    // Rectangle-olio kekomuistiin
    Rectangle* rect = new Rectangle();
    rect->setWidth(5.0);
    rect->setHeight(3.0);
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;
    delete rect;

    // Student-olio smart pointerilla
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Anna Virtanen");
    student->setStudentNumber(123456);
    student->setAverage(4.2);
    cout << "Name: " << student->getName() << endl;
    cout << "Student Number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
