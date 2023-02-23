#pragma once
#include "GameObjet.h"
class Player : public GameObjet
{
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Player();
	void Update() override;
	void Logical() override;
	void Render(sf::RenderWindow *window) override;
};

