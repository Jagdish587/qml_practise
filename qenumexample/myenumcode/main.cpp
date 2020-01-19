#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include "statusclass.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;

  // qRegisterMetaType<Status>("Status");

  qmlRegisterUncreatableType<statusclass>("qml.guide",1,0,"MyStatus","enum to qml");


  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
