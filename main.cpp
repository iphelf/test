#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Hello world!";
    qDebug()<<"Edited by iphelf";
    return a.exec();
}
