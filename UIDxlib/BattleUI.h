#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\Battle.h"
class BattleUI :
	public GamePhaseUI
{
private:
	Battle *battle;

	enum ButtonType {BATTLE_SELECT, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	BattleUI(Battle *battle);
	~BattleUI();

	void Draw() const override;
	void CheckInput() const override;
};

