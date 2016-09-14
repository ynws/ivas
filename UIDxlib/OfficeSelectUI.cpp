#include "stdafx.h"
#include "OfficeSelectUI.h"

OfficeSelectUI::OfficeSelectUI(OfficeSelect * office_select) : GamePhaseUI("data\\bg\\office_select.jpg"), office_select(office_select)
{
	button[ButtonType::TITLE] = new TextButton(1*16, 1*16, 14*16, 3*16, "TOPへ戻る", Color::P_BLUE, Color::WHITE);
	button[ButtonType::DECK_SELECT] = new TextButton(1*16, 4*16, 14*16, 3*16, "デッキ選択", Color::P_BLUE, Color::WHITE);
	button[ButtonType::BATTLE_SELECT] = new TextButton(4*16, 11*16, 10*16, 10*16, "Office選択(仮)", Color::P_BLUE, Color::WHITE);
}

OfficeSelectUI::~OfficeSelectUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void OfficeSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void OfficeSelectUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) {
		office_select->GotoMainTitle();
	}
	if (button[ButtonType::DECK_SELECT]->IsClick()) {
		office_select->GotoDeckSelect();
	}
	if (button[ButtonType::BATTLE_SELECT]->IsClick()) {
		office_select->GotoBattelSelect("test");
	}
}
