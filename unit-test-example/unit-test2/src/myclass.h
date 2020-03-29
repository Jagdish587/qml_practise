#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
  Q_OBJECT
 public:
  explicit MyClass(QObject *parent = nullptr);

#if 1
  int add(int a, int b);
  int sub(int a, int b);
  int mul(int a, int b);
  int div(int a, int b);
#endif

 signals:

 public slots:
};

#endif // MYCLASS_H
