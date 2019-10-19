#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <workerthread.h>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  qDebug()<<"main thread id = "<<QThread::currentThreadId();

  QThread cthread;
  WorkerThread worker;

  QObject::connect(&cthread,&QThread::started,&worker,&WorkerThread::doWork);

  worker.moveToThread(&cthread);

  cthread.start();

  cthread.wait();

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
