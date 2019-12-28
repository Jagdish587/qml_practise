#include <QCoreApplication>
#include <QDebug>
#include <QPointer>
#include "mypointer.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  qDebug()<<"I am Jagdish Tirumala ";

  QPointer<MyPointer> ptr = new MyPointer;
  MyPointer *rawptr = new MyPointer;
  ptr->display();
  rawptr->display();


  delete ptr;
  delete rawptr;

  qDebug()<<"is ptr null "<<(ptr==nullptr);
  qDebug()<<" is reference pointer null = "<<ptr.isNull();
  qDebug()<<"is rawptr null "<<(rawptr==nullptr);

  return a.exec();
}
