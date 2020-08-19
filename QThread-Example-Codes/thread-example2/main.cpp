#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "workerclass.h"
#include <QThread>
#include <QObject>
#include "guithread.h"
#include <QQmlComponent>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);


//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);



    qDebug() <<" I am in main thread "<<QThread::currentThreadId();

    GUIThread guiThread ;
    guiThread.init();

    QThread WorkerThreadObj;
    WorkerClass myworkerclass;

    myworkerclass.moveToThread(&WorkerThreadObj);
    myworkerclass.setObjectName("WorkerThread");

    QObject::connect(&WorkerThreadObj, SIGNAL(started()), &myworkerclass, SLOT(doWork())) ;

    QObject::connect(&myworkerclass, SIGNAL(workDone()), &guiThread, SLOT(handleresult())) ;

    WorkerThreadObj.start();


#if 0
            QQmlEngine myengine;
            QQmlComponent component(&myengine, "qrc:/main.qml");
            QObject *object = component.create();
            QMetaObject::invokeMethod(object, "myQmlFunction", Qt::QueuedConnection) ;
#endif




    return app.exec();
}
