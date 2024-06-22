#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DataExplorer.h"

class DataExplorer : public QMainWindow
{
    Q_OBJECT

public:
    DataExplorer(QWidget *parent = nullptr);
    ~DataExplorer();

private:
    Ui::DataExplorerClass ui;
};
