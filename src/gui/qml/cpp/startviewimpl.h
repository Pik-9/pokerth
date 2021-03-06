#ifndef STARTVIEWIMPL_H
#define STARTVIEWIMPL_H
#include <QtCore>

class CreateLocalGameViewImpl;
class GameData;

class StartViewImpl : public QObject
{
    Q_OBJECT
public:
    StartViewImpl(QObject *parent = 0);
    ~StartViewImpl();

signals:

public slots:
    Q_INVOKABLE void startLocalGame(GameData &gd);

private:

};

#endif // STARTVIEWIMPL_H
