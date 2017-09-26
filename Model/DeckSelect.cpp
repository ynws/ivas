#include "DeckSelect.h"
#include "DeckEdit.h"
#include "OfficeSelect.h"
#include "OnlineLobby.h"

DeckSelect::DeckSelect()
{
}

DeckSelect::~DeckSelect()
{
}

void DeckSelect::GotoDeckEdit(std::string deck_name)
{
	next_phase = new DeckEdit(deck_name);
}

void DeckSelect::GotoBattelSelect()
{
	// TODO: MainTitleと同様
	next_phase = new OfficeSelect();
}

void DeckSelect::GotoOnline()
{
	// TODO: MainTitleと同様
	next_phase = new OnlineLobby();
}
