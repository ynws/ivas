#pragma once
#include "GamePhase.h"
#include <string>
class DeckEdit :
	public GamePhase
{
public:
	DeckEdit(std::string deck_name);
	~DeckEdit();

	void GotoDeckSelect();
};

