#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQuickItem>

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQuickView view;
  view.setSource(QUrl("qrc:/MyItem.qml"));
  view.show();

  QQuickItem *item = view.rootObject()->findChild<QQuickItem*>("myrect");
  if (item)
    item->setProperty("color", QColor(Qt::yellow));

  return app.exec();
}
