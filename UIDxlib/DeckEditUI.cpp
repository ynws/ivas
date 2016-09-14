#include "stdafx.h"
#include "DeckEditUI.h"

DeckEditUI::DeckEditUI(DeckEdit * deck_edit) : GamePhaseUI("data\\bg\\deck_edit.png"), deck_edit(deck_edit)
{
	button[ButtonType::DECK_SELECT] = new TextButton(47*16, 5*16, 9*16, 3*16, "戻る", Color::P_BLUE, Color::WHITE);
}

DeckEditUI::~DeckEditUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void DeckEditUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void DeckEditUI::CheckInput() const
{
	if (button[ButtonType::DECK_SELECT]->IsClick()) { deck_edit->GotoDeckSelect(); }
}
