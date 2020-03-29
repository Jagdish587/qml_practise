#include "myclass.h"
#include <QDebug>



MyClass::MyClass(QObject *parent) : QObject(parent)
{

}

#if 1
int MyClass::add(int a, int b)
{
#ifdef FOR_UNIT_TEST
  qDebug()<<"Jagdish okk in cool = "<<a<<" b = "<<b;
#else
  qDebug()<<"unit test case macro disabled ";
#endif
  return a+b;
}

int MyClass::sub(int a, int b)
{
  return a-b;
}

int MyClass::mul(int a, int b)
{
  return a*b;
}

int MyClass::div(int a, int b)
{
  int result = 0;

  if(b!=0)
    result =  a/b;

  return result;

}
#endif
