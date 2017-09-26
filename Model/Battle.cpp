#include "Battle.h"
#include "BattleSelect.h"

Battle::Battle()
{
}

Battle::~Battle()
{
}

void Battle::GotoBattleSelect()
{
	next_phase = new BattleSelect("test");
}
