#include "stdafx.h"
#include "Game.h"
#include "MainTitle.h"

Game::Game() : count(0), game_phase(new MainTitle())
{
}

Game::~Game()
{
}

bool Game::Update()
{
	count++;
	ChangePhase();
	return true;
}

void Game::ChangePhase()
{
	GamePhase* next_phase = game_phase->GetNextGamePhase();
	if (next_phase != nullptr) {
		game_phase.reset(next_phase);
	}
}
