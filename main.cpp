#include "designwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    designWidget w;
    w.show();
    return a.exec();
}
