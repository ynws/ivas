#include "stdafx.h"
#include "BattleSelectUI.h"

BattleSelectUI::BattleSelectUI(BattleSelect * battle_select) : GamePhaseUI("data\\bg\\battle_select.jpg"), battle_select(battle_select)
{
	button[ButtonType::TITLE]         = new TextButton(1*16, 1*16, 14*16, 3*16, "TOPへ戻る", Color::P_BLUE, Color::WHITE);
	button[ButtonType::DECK_SELECT]   = new TextButton(1*16, 4*16, 14*16, 3*16, "デッキ選択", Color::P_BLUE, Color::WHITE);
	button[ButtonType::OFFICE_SELECT] = new TextButton(50*16, 32*16, 11*16, 3*16, "ＭＡＰにもどる", Color::WHITE, Color::RED);
	button[ButtonType::BATTLE]        = new TextButton(4*16, 11*16, 10*16, 10*16, "CPU選択(仮)", Color::P_BLUE, Color::WHITE);
}

BattleSelectUI::~BattleSelectUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void BattleSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void BattleSelectUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) { battle_select->GotoMainTitle(); }
	if (button[ButtonType::DECK_SELECT]->IsClick()) { battle_select->GotoDeckSelect(); }
	if (button[ButtonType::OFFICE_SELECT]->IsClick()) { battle_select->GotoOfficeSelect(); }
	if (button[ButtonType::BATTLE]->IsClick()) { battle_select->GotoBattle(); }
}
