#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H
#include <QDebug>
#include <QThread>
#include <QMutex>

class WorkerThread : public QThread
{
 public:
  WorkerThread();

  void run () {

    QMutexLocker locker(&m_mutex);
    qDebug()<<" start "<<locker.mutex();

     qDebug()<<" end ";
  }

 private:
    QMutex m_mutex;

};

#endif // WORKERTHREAD_H
