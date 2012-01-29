#ifndef FILELIST_H
#define FILELIST_H

#include <QtGui/QWidget>
#include "ui_filelist.h"

#include <QDir>
#include <QString>
#include <QStringList>
#include <QStringListModel>
#include <QDebug>

#define PR_DEFAULTDIR	"/home/kotz/pdffiles/"

class filelist : public QWidget
{
    Q_OBJECT

public:
    filelist(QWidget *parent = 0);
    ~filelist();

    void readdir(QString dirpath);
protected:
    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::filelistClass ui;
    QString _currentPath;

    void enterPressed();
};

#endif // FILELIST_H
