#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {
    // Uusi syntaksi: funktiopointerit
    connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
}

void MyClass::raiseMySignal() {
    emit mySignal();   // "nostetaan" signaali
}

void MyClass::mySlot() {
    qDebug() << "mySlot:ia kutsuttiin";
}
