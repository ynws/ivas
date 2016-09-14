#include "stdafx.h"
#include "BattleUI.h"

BattleUI::BattleUI(Battle * battle) : GamePhaseUI("data\\bg\\battle_back_ground.jpg"), battle(battle)
{
	button[ButtonType::BATTLE_SELECT] = new TextButton(55*16, 0, 9*16, 3*16, "対戦終了", Color::GRAY, Color::WHITE);
}

BattleUI::~BattleUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void BattleUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void BattleUI::CheckInput() const
{
	if (button[ButtonType::BATTLE_SELECT]->IsClick()) {
		battle->GotoBattleSelect();
	}
}
