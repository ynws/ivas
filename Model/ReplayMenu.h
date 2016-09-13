#pragma once
#include "GamePhase.h"
#include <string>
class ReplayMenu :
	public GamePhase
{
public:
	ReplayMenu();
	~ReplayMenu();

	void GotoBattle(std::string replay_filename);
};

