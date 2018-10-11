#include "calc.h"

calc::calc(QObject *parent) : QObject(parent)
{
    qInfo() << this << "constructed";
}

calc::~calc()
{
    qInfo() << this << "deconstructed";
}

int calc::dogYears(int age)
{
    return age * 7;
}

int calc::catYears(int age)
{
    return age * 4;
}
