#pragma once
#include "GamePhase.h"
#include <memory>
class Game
{
private:
	std::unique_ptr<GamePhase> game_phase;
public:
	Game();
	~Game();
	GamePhase* GetGamePhase() const { return game_phase.get(); }
	bool ChangePhase();
};

