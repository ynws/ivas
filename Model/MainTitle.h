#pragma once
#include "GamePhase.h"
class MainTitle :
	public GamePhase
{
public:
	MainTitle();
	~MainTitle();

	// Inherited via GamePhase
	GamePhase * GetNextGamePhase() override;
};

