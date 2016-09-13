#include "stdafx.h"
#include "OfficeSelectUI.h"

OfficeSelectUI::OfficeSelectUI(OfficeSelect * office_select) : GamePhaseUI("data\\bg\\office_select.jpg"), office_select(office_select)
{
	goto_title_button = new TextButton(1*16, 1*16, 14*16, 3*16, "TOPへ戻る", Color::P_BLUE, Color::WHITE);
	goto_deck_select_button = new TextButton(1*16, 4*16, 14*16, 3*16, "デッキ選択", Color::P_BLUE, Color::WHITE);
	goto_battle_select_button = new TextButton(4*16, 11*16, 10*16, 10*16, "Office選択(仮)", Color::P_BLUE, Color::WHITE);
}

OfficeSelectUI::~OfficeSelectUI()
{
	delete goto_title_button;
	delete goto_deck_select_button;
	delete goto_battle_select_button;
}

void OfficeSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
	goto_deck_select_button->Draw();
	goto_battle_select_button->Draw();
}

void OfficeSelectUI::CheckInput() const
{
	if (goto_title_button->IsClick()) {
		office_select->GotoMainTitle();
	}
	if (goto_deck_select_button->IsClick()) {
		office_select->GotoDeckSelect();
	}
	if (goto_battle_select_button->IsClick()) {
		office_select->GotoBattelSelect("test");
	}
}
