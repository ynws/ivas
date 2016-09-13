#include "stdafx.h"
#include "BattleUI.h"

BattleUI::BattleUI(Battle * battle) : GamePhaseUI("data\\bg\\battle_back_ground.jpg"), battle(battle)
{
	goto_battle_select_button = new TextButton(55*16, 0, 9*16, 3*16, "対戦終了", Color::GRAY, Color::WHITE);
}

BattleUI::~BattleUI()
{
	delete goto_battle_select_button;
}

void BattleUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_battle_select_button->Draw();
}

void BattleUI::CheckInput() const
{
	if (goto_battle_select_button->IsClick()) {
		battle->GotoBattleSelect();
	}
}
