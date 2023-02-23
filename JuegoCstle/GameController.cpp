#include "GameController.h"

GameController::GameController()
{
	InitWindow();
	InitGlobalVariable();
}
GameController::~GameController()
{
}

void GameController::Loop()
{
	while (window->isOpen()) {
		EventController();
		logical();
		update();
		render();
	}
}


void GameController::InitWindow()
{
	window = new sf::RenderWindow(sf::VideoMode(800,600),"my first game");
}

void GameController::InitGlobalVariable()
{
	window->setFramerateLimit(60);
	rect->setSize(*new sf::Vector2f(100, 100));
}

void GameController::EventController()
{
	while (window->pollEvent(mainEvent)) {
		switch (mainEvent.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			window->close();
			break;
		}
	}
}

void GameController::logical()
{

}

void GameController::update()
{
}

void GameController::render()
{
	window->clear();
	window->draw(*rect);
	window->display();
}


