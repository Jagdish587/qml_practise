#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QObject>

class WorkerThread : public QObject
{
  Q_OBJECT
 public:
  explicit WorkerThread(QObject *parent = nullptr);

  void doWork();


 signals:

 public slots:
};

#endif // WORKERTHREAD_H
