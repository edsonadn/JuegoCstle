#pragma once
#include "SceneObjet.h"
class SceneTest : public SceneObjet
{
public:
	SceneTest();
	void Logical() override;
	void Update() override;
	void Render(sf::RenderWindow* window) override;
private:
	// Heredado vía SceneObjet
	virtual void InitialScene() override;
	virtual void LoadTextureBackground() override;
};

