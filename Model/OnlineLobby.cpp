#include "stdafx.h"
#include "OnlineLobby.h"
#include "DeckSelect.h"

OnlineLobby::OnlineLobby()
{
}

OnlineLobby::~OnlineLobby()
{
}

void OnlineLobby::GotoDeckSelect()
{
	next_phase = new DeckSelect();
}
