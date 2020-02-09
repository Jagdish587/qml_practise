#include "mytimerclass.h"
#include <QDebug>


MyTimerClass::MyTimerClass(QObject *parent) : QObject(parent)
{
  timer = new QTimer();

  QObject::connect(timer,SIGNAL(timeout()),this,SLOT(MYTimerSLot()));

  timer->start(2000);

  // singelshot timer
  QTimer::singleShot(1000, this, SLOT(updateCaption()));

}

void MyTimerClass::MYTimerSLot()
{
  qDebug()<<" MYTimerSLot  "<<timer->isActive();

}

void MyTimerClass::updateCaption()
{

  qDebug()<<" singelshot timer updateCaption  ";
}
