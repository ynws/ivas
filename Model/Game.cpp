#include "stdafx.h"
#include "Game.h"
#include "MainTitle.h"

Game::Game() : game_phase(new MainTitle())
{
}

Game::~Game()
{
}

bool Game::ChangePhase()
{
	GamePhase* next_phase = game_phase->GetNextGamePhase();
	if (next_phase != nullptr) {
		game_phase.reset(next_phase);
		return true;
	}
	return false;
}
