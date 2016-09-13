#include "stdafx.h"
#include "GamePhase.h"
#include "MainTitle.h"

void GamePhase::GotoMainTitle()
{
	next_phase = new MainTitle();
}
