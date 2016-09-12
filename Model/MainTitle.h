#pragma once
#include "GamePhase.h"
class MainTitle :
	public GamePhase
{
public:
	MainTitle();
	~MainTitle();

	void GotoConfig();
};

