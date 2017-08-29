#pragma once
#include <QGraphicsView>
#include <QWidget>
#include "Player.h"

class Game : public QGraphicsView
{
public:
	Game(QWidget *parent = 0);
	~Game();
private:
	void InitScene();
	void InitPlayers();
	void DrawMaze();

	QGraphicsScene* mpScene;

	Player mPlayer;
};

extern Game* gpGame;