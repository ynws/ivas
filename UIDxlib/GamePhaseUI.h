#pragma once
#include "..\Model\GamePhase.h"
class GamePhaseUI
{
public:
	virtual ~GamePhaseUI() {};

	static GamePhaseUI* GamePhaseUIFactory(const GamePhase* game_phase);

	virtual void Draw() const = 0;
	virtual void CheckInput(GamePhase* game_phase) const = 0;
};

