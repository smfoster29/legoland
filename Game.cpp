#include "Game.h"
#include "defs.h"
#include "Wall.h"

Game::Game(QWidget *parent /*= 0*/)
{
	if (!gpGame)
	{
		gpGame = this;
	}
	InitScene();
	InitPlayers();
	DrawMaze();

	show();
}

Game::~Game()
{
	//delete mpScene;
}

void Game::InitScene()
{
	//create a scene
	mpScene = new QGraphicsScene(this);
	//set scene rect to overlap view and have same width and heigth
	mpScene->setSceneRect(0, 0, SCENE_W, SCENE_H);
	setFixedSize(SCENE_W, SCENE_H);

	//draw background
	setBackgroundBrush(QBrush(QImage(":/images/map.png")));
	//visualize scene
	setScene(mpScene);

	//turn off scroll bars
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Game::InitPlayers()
{
	mPlayer.setPos(BUMPER_LEFT, BUMPER_TOP); //position player
	mPlayer.setFlag(QGraphicsItem::ItemIsFocusable); //make player focusable
	mPlayer.setFocus(); // focus the player to allow it to respond to key press
	mpScene->addItem(&mPlayer); // add player to scene
}

void Game::DrawMaze()
{
	Wall wall();
}

Game* gpGame = NULL;