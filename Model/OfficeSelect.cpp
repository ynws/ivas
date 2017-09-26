#include "OfficeSelect.h"

#include "DeckSelect.h"
#include "BattleSelect.h"

OfficeSelect::OfficeSelect()
{
	// TODO: impl
}

OfficeSelect::~OfficeSelect()
{
	// TODO: impl
}

void OfficeSelect::GotoDeckSelect()
{
	next_phase = new DeckSelect();
}

void OfficeSelect::GotoBattelSelect(std::string office_name)
{
	next_phase = new BattleSelect(office_name);
}
