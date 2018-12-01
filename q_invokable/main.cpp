#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "datastote.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QQmlContext *context = engine.rootContext();
    datastote ds;
    context->setContextProperty("datastote",&ds);

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
