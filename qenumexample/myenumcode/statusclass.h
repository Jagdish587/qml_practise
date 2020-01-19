#ifndef STATUSCLASS_H
#define STATUSCLASS_H

#include <QObject>

class statusclass : public QObject
{
  Q_OBJECT
 public:
  explicit statusclass(QObject *parent = nullptr);

  enum Value {
    Null,
    Ready,
    Loading,
    Error
  };

  Q_ENUM(Value)

 signals:

 public slots:
};

// typedef statusclass::Value Status;
#endif // STATUSCLASS_H
