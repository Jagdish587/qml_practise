#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
  Q_OBJECT
 public:
  explicit MyClass(QObject *parent = nullptr);
  Q_PROPERTY(int myValue READ getValue)

  int getValue() const
  {
    return 20;
  }

 signals:

 public slots:
};

#endif // MYCLASS_H
