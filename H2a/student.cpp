#include "student.h"
using namespace std;

void Student::setName(const string& n) {
    name = n;
}

void Student::setStudentNumber(int sn) {
    studentNumber = sn;
}

void Student::setAverage(double a) {
    average = a;
}

string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}
