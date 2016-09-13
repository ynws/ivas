#pragma once
#include "GamePhase.h"
class Battle :
	public GamePhase
{
public:
	Battle();
	~Battle();

	void GotoBattleSelect();
};

