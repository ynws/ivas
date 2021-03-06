﻿#pragma once
#include "Game.h"
#include "GamePhaseUI.h"
class GameUI
{
private:
	std::unique_ptr<GamePhaseUI> game_phase_UI;
public:
	GameUI();
	~GameUI();
	bool Refresh() const;
	void Draw() const;
	void CheckInput() const;

	void ResetGamePhaseUI(GamePhaseUI* game_phase_UI);
};
