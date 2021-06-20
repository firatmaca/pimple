#include <QCoreApplication>
#include "footballplayer.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    footballplayer fp;
    fp.WhoIsTheBestPlayer();
    return a.exec();
}
