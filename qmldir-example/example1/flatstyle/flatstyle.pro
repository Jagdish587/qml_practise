TEMPLATE = app
TARGET = flatstyle

QT += quick quickcontrols2 widgets

SOURCES += main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = $$PWD/imports

target.path = $$[QT_INSTALL_EXAMPLES]/quickcontrols2/flatstyle
INSTALLS += target
