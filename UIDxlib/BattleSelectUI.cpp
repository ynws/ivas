#include "stdafx.h"
#include "BattleSelectUI.h"

BattleSelectUI::BattleSelectUI(BattleSelect * battle_select) : GamePhaseUI("data\\bg\\battle_select.jpg"), battle_select(battle_select)
{
	goto_title_button = new TextButton(1*16, 1*16, 14*16, 3*16, "TOPへ戻る", Color::P_BLUE, Color::WHITE);
	goto_deck_select_button = new TextButton(1*16, 4*16, 14*16, 3*16, "デッキ選択", Color::P_BLUE, Color::WHITE);
	goto_office_select_button = new TextButton(50*16, 32*16, 11*16, 3*16, "ＭＡＰにもどる", Color::WHITE, Color::RED);
	goto_battle_button = new TextButton(4*16, 11*16, 10*16, 10*16, "CPU選択(仮)", Color::P_BLUE, Color::WHITE);
}

BattleSelectUI::~BattleSelectUI()
{
	delete goto_title_button;
	delete goto_deck_select_button;
	delete goto_office_select_button;
	delete goto_battle_button;
}

void BattleSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
	goto_deck_select_button->Draw();
	goto_office_select_button->Draw();
	goto_battle_button->Draw();
}

void BattleSelectUI::CheckInput() const
{
	if (goto_title_button->IsClick()) { battle_select->GotoMainTitle(); }
	if (goto_deck_select_button->IsClick()) { battle_select->GotoDeckSelect(); }
	if (goto_office_select_button->IsClick()) { battle_select->GotoOfficeSelect(); }
	if (goto_battle_button->IsClick()) { battle_select->GotoBattle(); }
}
