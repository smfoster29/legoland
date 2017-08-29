#include <QtWidgets/QApplication>
#include "Game.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Game game; //show() in cotr

	return a.exec();
}
