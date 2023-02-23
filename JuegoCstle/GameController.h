#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

class GameController
{
public:
	GameController();
	~GameController();
	void Loop();
private:
	sf::RenderWindow* window;
	sf::Event mainEvent;
	sf::RectangleShape* rect = new sf::RectangleShape();

	void InitWindow();
	void InitGlobalVariable();
	void EventController();
	void logical();
	void update();
	void render();
};

