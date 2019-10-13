#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>

class MyClass : public QObject
{
  Q_OBJECT
 public:
  int m_value ;

  explicit MyClass(QObject *parent = nullptr);
  Q_PROPERTY(int myValue READ getValue WRITE setvalue NOTIFY valueChanged )

  int getValue() const
  {
    return m_value ;

  }

  void setvalue(int value)
  {
    m_value = value ;
    qDebug()<<" updated value = "<<m_value;
    emit valueChanged();
  }

 signals:
  void valueChanged();
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
