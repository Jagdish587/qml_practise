#include "workerthread.h"
#include <QDebug>
#include <QThread>

WorkerThread::WorkerThread(QObject *parent) : QObject(parent)
{

}

void WorkerThread::doWork()
{
   qDebug()<<"doWork thread id = "<<QThread::currentThreadId();

}
