#pragma once
#include "GamePhase.h"
class OnlineLobby :
	public GamePhase
{
public:
	OnlineLobby();
	~OnlineLobby();

	void GotoDeckSelect();
};

