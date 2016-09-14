#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\BattleSelect.h"
class BattleSelectUI :
	public GamePhaseUI
{
private:
	BattleSelect* battle_select;

	enum ButtonType {TITLE, DECK_SELECT, OFFICE_SELECT, BATTLE, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	BattleSelectUI(BattleSelect* battle_select);
	~BattleSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

