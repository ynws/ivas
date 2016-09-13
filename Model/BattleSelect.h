#pragma once
#include "GamePhase.h"
#include <string>
class BattleSelect :
	public GamePhase
{
public:
	BattleSelect(std::string office_name);
	~BattleSelect();

	void GotoBattle();
	void GotoDeckSelect();
	void GotoOfficeSelect();
};

