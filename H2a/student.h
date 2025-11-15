#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    void setName(const string& n);
    void setStudentNumber(int sn);
    void setAverage(double a);

    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif
