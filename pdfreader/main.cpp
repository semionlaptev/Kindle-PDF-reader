#include "pdfreader.h"
#include "filelist.h"
#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    filelist w;
    w.show();
    return a.exec();
}
