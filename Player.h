#pragma once

#include <QGraphicsRectItem>
#include <QObject>
#include <QMediaPlayer>
#include <QGraphicsPixmapItem>

class Player : public QObject, public QGraphicsPixmapItem
{
	Q_OBJECT
public:
	Player(QGraphicsItem *parent = 0);
	~Player();
	void keyPressEvent(QKeyEvent* event);
public slots:
private:
	bool MoveIsAllowed(int x, int y);
	int GetBumpX(int x, bool bLeft);
	int GetBumpY(int y, bool bTop);
};