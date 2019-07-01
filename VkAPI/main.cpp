#include "VkAPI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VkAPI w;
	w.show();
	return a.exec();
}
