#pragma once
#include "..\Model\Game.h"
class GameUI
{
private:
	void DrawMainWindow(const Game* game);
public:
	GameUI();
	~GameUI();
	bool Refresh(const Game* game);
};
