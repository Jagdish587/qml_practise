#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "myclass.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;

  MyClass myclass;
  QQmlContext *context = engine.rootContext();

  context->setContextProperty("myobj",&myclass);

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
