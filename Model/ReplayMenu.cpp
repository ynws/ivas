#include "ReplayMenu.h"
#include "Battle.h"

ReplayMenu::ReplayMenu()
{
}

ReplayMenu::~ReplayMenu()
{
}

void ReplayMenu::GotoBattle(std::string replay_filename)
{
	next_phase = new Battle();
}
