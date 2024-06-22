#include "DataExplorer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataExplorer w;
    w.show();
    return a.exec();
}
