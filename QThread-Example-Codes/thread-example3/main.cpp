#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QThread>
#include <QDebug>
#include <workerthread.h>


int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/main.qml"));

  WorkerThread mythreadA;
  WorkerThread mythreadB;
  WorkerThread mythreadC;

  mythreadA.setObjectName("threadA");
  mythreadB.setObjectName("threadB");
  mythreadC.setObjectName("threadC");

  mythreadA.start();
  mythreadB.start();
  mythreadC.start();

  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
