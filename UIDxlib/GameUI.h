#pragma once
#include "..\Model\Game.h"
#include "GamePhaseUI.h"
class GameUI
{
private:
	std::unique_ptr<GamePhaseUI> game_phase_UI;
public:
	GameUI(GamePhaseUI* game_phase_UI);
	~GameUI();
	bool Refresh() const;
	void Draw() const;
	void CheckInput(Game* game) const;

	void ResetGamePhaseUI(GamePhaseUI* game_phase_UI);
};
