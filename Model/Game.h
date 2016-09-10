#pragma once
#include "GamePhase.h"
#include <memory>
class Game
{
private:
	std::unique_ptr<GamePhase> game_phase;
	int count;
	void ChangePhase();
public:
	Game();
	~Game();

	bool Update();
	int GetCount() const { return count; }
};

