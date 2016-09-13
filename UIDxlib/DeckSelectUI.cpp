#include "stdafx.h"
#include "DeckSelectUI.h"

DeckSelectUI::DeckSelectUI(DeckSelect * deck_select) : GamePhaseUI("data\\bg\\deck_select.png"), deck_select(deck_select)
{
	goto_title_button = new TextButton(51*16, 1*16, 9*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
	goto_deck_edit_button = new TextButton(41*16, 1*16, 9*16, 3*16, "編集", Color::P_AI, Color::WHITE);
	goto_battle_select_button = new TextButton(51*16, 6*16, 9*16, 3*16, "CPU対戦", Color::P_BLUE, Color::WHITE);
	goto_online_button = new TextButton(51*16, 11*16, 9*16, 3*16, "オンライン", Color::P_BLUE, Color::WHITE);
}

DeckSelectUI::~DeckSelectUI()
{
	delete goto_title_button;
	delete goto_deck_edit_button;
	delete goto_battle_select_button;
	delete goto_online_button;
}

void DeckSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
	goto_deck_edit_button->Draw();
	goto_battle_select_button->Draw();
	goto_online_button->Draw();
}

void DeckSelectUI::CheckInput() const
{
	if (goto_title_button->IsClick()) { deck_select->GotoMainTitle(); }
	if (goto_deck_edit_button->IsClick()) { deck_select->GotoDeckEdit(""); }
	if (goto_battle_select_button->IsClick()) { deck_select->GotoBattelSelect(); }
	if (goto_online_button->IsClick()) { deck_select->GotoOnline(); }
}
