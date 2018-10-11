#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"


int calcDog(int age, calc* obj) {
    return obj->dogYears(age);
}

int calcCat(int age, calc* obj) {
    return obj->catYears(age);
}

void test() {
    int age = 0;
    qInfo() << "Enter your age:";
    std::cin >> age;

    calc* obj = new calc(nullptr);
    qInfo() << "Age in dog years: " << calcDog(age, obj);
    qInfo() << "Age in cat years: " << calcCat(age, obj);

    delete obj;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();


    return a.exec();
}
