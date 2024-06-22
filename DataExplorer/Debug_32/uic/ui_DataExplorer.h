/********************************************************************************
** Form generated from reading UI file 'DataExplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAEXPLORER_H
#define UI_DATAEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataExplorerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataExplorerClass)
    {
        if (DataExplorerClass->objectName().isEmpty())
            DataExplorerClass->setObjectName(QString::fromUtf8("DataExplorerClass"));
        DataExplorerClass->resize(600, 400);
        menuBar = new QMenuBar(DataExplorerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        DataExplorerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DataExplorerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DataExplorerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DataExplorerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DataExplorerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DataExplorerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DataExplorerClass->setStatusBar(statusBar);

        retranslateUi(DataExplorerClass);

        QMetaObject::connectSlotsByName(DataExplorerClass);
    } // setupUi

    void retranslateUi(QMainWindow *DataExplorerClass)
    {
        DataExplorerClass->setWindowTitle(QApplication::translate("DataExplorerClass", "DataExplorer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataExplorerClass: public Ui_DataExplorerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAEXPLORER_H
