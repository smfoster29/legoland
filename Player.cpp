#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "defs.h"
//#include <QDebug> //qDebug() << "debug msg here";

Player::Player(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
	//set graphic
	setPixmap(QPixmap(":/images/player.png"));
}

Player::~Player()
{

}

bool Player::MoveIsAllowed(int x, int y)
{
	bool bIsAllowed = true;

	bIsAllowed &= ((x < BUMPER_LEFT) || (x + PLAYER_W > BUMPER_RIGHT)) ? false : true;
	bIsAllowed &= ((y < BUMPER_TOP) || (y + PLAYER_H > BUMPER_BOT)) ? false : true;

	return bIsAllowed;
}

void Player::keyPressEvent(QKeyEvent * event)
{
	int x = this->x(), y = this->y();

	switch (event->key())
	{
	case Qt::Key_Left:
	case Qt::Key_A:
		if (MoveIsAllowed(x - PLAYER_VEL, y))
		{
			setPos(x - PLAYER_VEL, y);
		}
		else
		{
			int bumpX = GetBumpX(x, true);
			if (MoveIsAllowed(x + bumpX, y) && bumpX < PLAYER_VEL)
			{
				setPos(x - bumpX, y);
			}
		}
		break;
	case Qt::Key_Right:
	case Qt::Key_D:
		if (MoveIsAllowed(x + PLAYER_VEL, y))
		{
			setPos(x + PLAYER_VEL, y);
		}
		else
		{
			int bumpX = GetBumpX(x, false);
			if (MoveIsAllowed(x + bumpX, y) && bumpX < PLAYER_VEL)
			{
				setPos(x + bumpX, y);
			}
		}
		break;
	case Qt::Key_Up:
	case Qt::Key_W:
		if (MoveIsAllowed(x, y - PLAYER_VEL))
		{
			setPos(x, y - PLAYER_VEL);
		}
		break;
	case Qt::Key_Down:
	case Qt::Key_S:
		if (MoveIsAllowed(x, y + PLAYER_VEL))
		{
			setPos(x, y + PLAYER_VEL);
		}
		break;
	case Qt::Key_Space:
	{
		// create a bullet
		//Bullet * bullet = new Bullet();
		//bullet->setPos(x(), y()); //set position of bullet to x and y of this rect
		//						  // add bullet to scene
		//scene()->addItem(bullet);

		////play bulletsound
		//if (bulletsound->state() == QMediaPlayer::PlayingState)
		//{
		//	//restart sound if already playing
		//	bulletsound->setPosition(0);
		//}
		//else
		//{
		//	bulletsound->play();
		//}
		//break;
	}
	}
}

int Player::GetBumpX(int x, bool bLeft)
{
	//find the pixels between x and the left or right bumper
	int bumpX = bLeft ? x - BUMPER_LEFT : BUMPER_RIGHT - x - PLAYER_W;
	return bumpX;
}

int Player::GetBumpY(int y, bool bTop)
{
	int bumpY = bTop ? y - BUMPER_TOP : BUMPER_BOT - y - PLAYER_H;
	return bumpY;
}
