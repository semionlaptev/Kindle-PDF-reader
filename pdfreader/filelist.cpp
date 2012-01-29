#include "filelist.h"
#include "readerwindow.h"
#include <QKeyEvent>
#include <QMessageBox>
#include <QListView>

filelist::filelist(QWidget *parent)
    : QWidget(parent),
      _currentPath(PR_DEFAULTDIR)
{
	ui.setupUi(this);
	readdir(_currentPath);
	ui.fileListWidget->setCurrentRow(0);
}

void filelist::keyPressEvent(QKeyEvent *event)
{
	if(event->key() == Qt::Key_Return)
	{
		enterPressed();
	}
}

void filelist::enterPressed()
{
	qDebug()<<ui.fileListWidget->currentItem()->text();
	readerwindow *reader = new readerwindow(_currentPath, ui.fileListWidget->currentItem()->text());
	reader->show();
}

void filelist::readdir(QString dirPath)
{
	QDir fileDir(*new QString(dirPath));
	QStringList nameFilters;
	nameFilters << "*.pdf";
	QStringList fileStringList(fileDir.entryList(nameFilters, QDir::NoFilter, QDir::NoSort));
	ui.fileListWidget->addItems(fileStringList);
}

filelist::~filelist()
{

}
