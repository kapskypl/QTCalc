#include "kalkulator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kalkulator w;
	w.show();
	return a.exec();
}
