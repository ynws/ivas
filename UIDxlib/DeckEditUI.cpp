#include "stdafx.h"
#include "DeckEditUI.h"

DeckEditUI::DeckEditUI(DeckEdit * deck_edit) : GamePhaseUI("data\\bg\\deck_edit.png"), deck_edit(deck_edit)
{
	goto_deck_select_button = new TextButton(47*16, 5*16, 9*16, 3*16, "戻る", Color::P_BLUE, Color::WHITE);
}

DeckEditUI::~DeckEditUI()
{
	delete goto_deck_select_button;
}

void DeckEditUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_deck_select_button->Draw();
}

void DeckEditUI::CheckInput() const
{
	if (goto_deck_select_button->IsClick()) { deck_edit->GotoDeckSelect(); }
}
