/********************************************************************************
** Form generated from reading UI file 'filelist.ui'
**
** Created: Mon Jan 30 01:22:39 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILELIST_H
#define UI_FILELIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filelistClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QListWidget *fileListWidget;

    void setupUi(QWidget *filelistClass)
    {
        if (filelistClass->objectName().isEmpty())
            filelistClass->setObjectName(QString::fromUtf8("filelistClass"));
        filelistClass->resize(744, 604);
        verticalLayout = new QVBoxLayout(filelistClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fileListWidget = new QListWidget(filelistClass);
        fileListWidget->setObjectName(QString::fromUtf8("fileListWidget"));
        QFont font;
        font.setPointSize(16);
        fileListWidget->setFont(font);

        gridLayout->addWidget(fileListWidget, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(filelistClass);

        QMetaObject::connectSlotsByName(filelistClass);
    } // setupUi

    void retranslateUi(QWidget *filelistClass)
    {
        filelistClass->setWindowTitle(QApplication::translate("filelistClass", "filelist", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class filelistClass: public Ui_filelistClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILELIST_H
