#include "DataExplorer.h"
#include <QtWidgets/QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("Fusion"));
    DataExplorer w;

    QIcon windowIcon(":/DataExplorer/C:/Users/CyberPhoenix/Desktop/icons/explore32.ico");
    w.setWindowIcon(windowIcon);
    w.show();
    return a.exec();
}
