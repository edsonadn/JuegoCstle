#pragma once
#include "GameObjet.h"

class SceneObjet : public GameObjet
{
private:
	virtual void InitialScene() = 0;
	virtual void LoadTextureBackground() = 0;
};

