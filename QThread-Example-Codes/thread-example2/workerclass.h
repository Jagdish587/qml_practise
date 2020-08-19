#ifndef WORKERCLASS_H
#define WORKERCLASS_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QQmlComponent>
#include <QGuiApplication>
#include <QQmlApplicationEngine>


class WorkerClass : public QObject
{
    Q_OBJECT
public:
    explicit WorkerClass(QObject *parent = nullptr);

public slots:

    void heavyWork()
    {
        qDebug()<<"I am in worker thread heavyWork "<<QThread::currentThreadId()<<Qt::endl;
    }

    void doWork() {
        qDebug()<<"I am in worker thread doWork "<<QThread::currentThreadId()<<Qt::endl;

        heavyWork(); // will run in worker thread context

        emit workDone(); // signal/slots are aysnchronous , emiiting siganl means gui thread context


    }


signals:

    void workDone();


};

#endif // WORKERCLASS_H
