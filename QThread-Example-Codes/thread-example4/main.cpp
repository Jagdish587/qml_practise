#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QThreadPool>
#include "mythread.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/main.qml"));

  qDebug()<<"From main thread = "<<QThread::currentThreadId();

  MyThread* mythread = new MyThread();

  QThreadPool::globalInstance()->start(mythread);

  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
