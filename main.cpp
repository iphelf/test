#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Hello world!";
    qDebug()<<"Edited by flehpi";
    return a.exec();
}
