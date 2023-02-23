#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

class GameObjet
{
public:
	virtual void Logical() = 0;
	virtual void Update() = 0;
	virtual void Render(sf::RenderWindow* window) = 0;
};

