#include <QCoreApplication>
#include <QDebug>
#include <QPointer>
#include <QScopedPointer>
#include "mypointer.h"


void cleanmyptr()
{

}

int* allocateMemory()
{
  QScopedPointer<int> myscopeptr(new int(45));

  qDebug()<<"data = "<<myscopeptr.data(); // returns memory being pointed to

  qDebug()<<"data2 = "<<myscopeptr.get(); // returns memory being pointed to

  qDebug()<<"data3 = "<<*myscopeptr; // returns 45

  qDebug()<<"isnull = "<<myscopeptr.isNull(); // is scope pointer null

  return myscopeptr.take(); // returns value , pointer will be reset to nullptr;
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);


  int *local = allocateMemory();

  qDebug()<<"local ptr = "<<*local;
  qDebug()<<"local  = "<<local;



  return a.exec();
}
