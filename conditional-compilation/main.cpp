#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QQmlContext>
int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;

   engine.rootContext()->setContextProperty("UBUNTU_MODE", QVariant(false));

#ifdef ON_UBUNTU
  qDebug()<<"I am in ON_UBUNTU qDebug ";
  engine.rootContext()->setContextProperty("UBUNTU_MODE", QVariant(true));
#else
 qDebug()<<"I am in Target qDebug ";
#endif

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
