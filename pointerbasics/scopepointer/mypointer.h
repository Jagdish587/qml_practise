#ifndef MYPOINTER_H
#define MYPOINTER_H

#include <QObject>
#include <QDebug>

class MyPointer : public QObject
{
  Q_OBJECT
 public:
  explicit MyPointer(QObject *parent = nullptr);

  void display() {
    qDebug()<<"I am in Pointer Class ";

  }

 signals:

 public slots:
};

#endif // MYPOINTER_H
