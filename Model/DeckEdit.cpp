#include "DeckEdit.h"
#include "DeckSelect.h"

DeckEdit::DeckEdit(std::string deck_name)
{
}

DeckEdit::~DeckEdit()
{
}

void DeckEdit::GotoDeckSelect()
{
	next_phase = new DeckSelect();
}
