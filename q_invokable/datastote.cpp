#include "datastote.h"
#include <iostream>
using namespace std;

datastote::datastote(QObject *parent) : QObject(parent)
{

}


int datastote::getCount(QString str)
{
   qDebug()<<"value from qml = "<<str;
    return str.length();
}
