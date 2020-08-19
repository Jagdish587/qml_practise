#ifndef GUITHREAD_H
#define GUITHREAD_H

#include <QObject>
#include <QThread>
#include <QQmlComponent>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "workerclass.h"

class GUIThread : public QObject
{
    Q_OBJECT
public:
    explicit GUIThread(QObject *parent = nullptr);

    void init() {
         qDebug()<<"I am in GUI Thread init "<<QThread::currentThreadId()<<Qt::endl;
    }

signals:

public slots:

    void handleresult() {
         qDebug()<<"I am in GUI Thread handleresult "<<QThread::currentThreadId()<<Qt::endl;
    }

};

#endif // GUITHREAD_H
