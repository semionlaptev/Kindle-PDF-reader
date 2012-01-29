#ifndef READERWINDOW_H
#define READERWINDOW_H

#include <QtGui/QWidget>
#include "ui_readerwindow.h"

class readerwindow : public QWidget
{
    Q_OBJECT

public:
    readerwindow(QWidget *parent = 0);
    readerwindow(QString filepath, QString filename, QWidget *parent = 0);
    ~readerwindow();

private:
    Ui::readerwindowClass ui;
    void showPDF();
};

#endif // READERWINDOW_H
