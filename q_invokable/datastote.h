#ifndef DATASTOTE_H
#define DATASTOTE_H

#include <QObject>
#include <QDebug>

class datastote : public QObject
{
    Q_OBJECT
public:
    explicit datastote(QObject *parent = nullptr);
    Q_INVOKABLE int getCount(QString str);

signals:

public slots:
};

#endif // DATASTOTE_H
