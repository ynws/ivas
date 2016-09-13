#include "stdafx.h"
#include "BattleSelect.h"
#include "Battle.h"
#include "DeckSelect.h"
#include "OfficeSelect.h"

BattleSelect::BattleSelect(std::string office_name)
{
}

BattleSelect::~BattleSelect()
{
}

void BattleSelect::GotoBattle()
{
	next_phase = new Battle();
}

void BattleSelect::GotoDeckSelect()
{
	next_phase = new DeckSelect();
}

void BattleSelect::GotoOfficeSelect()
{
	next_phase = new OfficeSelect();
}
