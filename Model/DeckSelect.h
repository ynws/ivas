#pragma once
#include "GamePhase.h"
#include <string>
class DeckSelect :
	public GamePhase
{
public:
	DeckSelect();
	~DeckSelect();

	void GotoDeckEdit(std::string deck_name);
	void GotoBattelSelect();
	void GotoOnline();
};

