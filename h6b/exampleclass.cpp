#include "exampleclass.h"

ExampleClass::ExampleClass(QObject* parent) : QObject(parent) {
    qDebug() << "Start";

    // signaalin ja slotin yhdistäminen
    connect(this, &ExampleClass::readyToSay,
            this, &ExampleClass::sayHelloSlot);

    qDebug() << "End";
}

void ExampleClass::startToWait() {
    QThread::msleep(1000);   // odotetaan sekuntti
    emit readyToSay();       // nostetaan signaali
}

void ExampleClass::sayHelloSlot() {
    qDebug() << "Terve";
}
