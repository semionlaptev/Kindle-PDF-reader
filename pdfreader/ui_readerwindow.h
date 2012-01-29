/********************************************************************************
** Form generated from reading UI file 'readerwindow.ui'
**
** Created: Mon Jan 30 02:07:37 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERWINDOW_H
#define UI_READERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_readerwindowClass
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *readerwindowClass)
    {
        if (readerwindowClass->objectName().isEmpty())
            readerwindowClass->setObjectName(QString::fromUtf8("readerwindowClass"));
        readerwindowClass->resize(578, 666);
        verticalLayout = new QVBoxLayout(readerwindowClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(readerwindowClass);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(readerwindowClass);

        QMetaObject::connectSlotsByName(readerwindowClass);
    } // setupUi

    void retranslateUi(QWidget *readerwindowClass)
    {
        readerwindowClass->setWindowTitle(QApplication::translate("readerwindowClass", "readerwindows", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class readerwindowClass: public Ui_readerwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERWINDOW_H
