#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\Battle.h"
class BattleUI :
	public GamePhaseUI
{
private:
	Battle *battle;
	Button* goto_battle_select_button;
public:
	BattleUI(Battle *battle);
	~BattleUI();

	void Draw() const override;
	void CheckInput() const override;
};

