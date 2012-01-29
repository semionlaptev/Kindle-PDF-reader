#include "readerwindow.h"
#include <QGraphicsScene>

readerwindow::readerwindow(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
}

readerwindow::readerwindow(QString filepath, QString filename, QWidget *parent)
: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(filename);

	showPDF();
}

void readerwindow::showPDF()
{
	QGraphicsScene *scene = new QGraphicsScene();
	QPixmap *renderedPDF = new QPixmap();

	//mupdf_renderpdf(&mudpdf_image);
	//convert_to_qpixmap(mudpdf_image, &renderedPDF);

	scene->addPixmap(*renderedPDF);
	ui.graphicsView->setScene(scene);
}

readerwindow::~readerwindow()
{

}
