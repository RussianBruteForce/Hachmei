#include "Hachmei.h"
#include "password.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QIcon icon = QIcon(":/icon.ico");
	a.setWindowIcon(icon);

	password p;
	Hachmei h;
	QObject::connect(&p, &password::rightPassword,
			 &h, &Hachmei::show);
	p.show();


	return a.exec();
}
