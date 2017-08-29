#include "Wall.h"
#include "defs.h"
#include <QPixmap>
#include <QRectF>
#include <QBrush>

Wall::Wall(QGraphicsItem * parent)
{
	QGraphicsRectItem rectItem(BUMPER_LEFT, BUMPER_TOP, 100, 25);
	rectItem.setBrush(QBrush(Qt::black));
	rectItem.setPos(BUMPER_LEFT, BUMPER_TOP);
}


Wall::~Wall()
{
}
