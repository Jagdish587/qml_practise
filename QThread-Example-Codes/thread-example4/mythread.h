#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThreadPool>
#include <QDebug>

class MyThread : public QRunnable
{
 public:
  MyThread();

  void run() {
    qDebug()<<"From run thread id = "<<QThread::currentThreadId();
  }
};

#endif // MYTHREAD_H
