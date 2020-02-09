#ifndef MYTIMERCLASS_H
#define MYTIMERCLASS_H

#include <QObject>
#include <QTimer>

class MyTimerClass : public QObject
{
  Q_OBJECT
 public:
  explicit MyTimerClass(QObject *parent = nullptr);
  QTimer *timer ;

 signals:

 public slots:

  void MYTimerSLot();
  void updateCaption();
};

#endif // MYTIMERCLASS_H
