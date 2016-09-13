#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\BattleSelect.h"
class BattleSelectUI :
	public GamePhaseUI
{
private:
	BattleSelect* battle_select;
	Button* goto_title_button;
	Button* goto_deck_select_button;
	Button* goto_office_select_button;
	Button* goto_battle_button;
public:
	BattleSelectUI(BattleSelect* battle_select);
	~BattleSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

