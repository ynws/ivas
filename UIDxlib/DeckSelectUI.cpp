#include "DeckSelectUI.h"

DeckSelectUI::DeckSelectUI(DeckSelect * deck_select) : GamePhaseUI("data\\bg\\deck_select.png"), deck_select(deck_select)
{
	button[ButtonType::TITLE] = new TextButton(51*16, 1*16, 9*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
	button[ButtonType::DECK_EDIT] = new TextButton(41*16, 1*16, 9*16, 3*16, "編集", Color::P_AI, Color::WHITE);
	button[ButtonType::BATTLE_SELECT] = new TextButton(51*16, 6*16, 9*16, 3*16, "CPU対戦", Color::P_BLUE, Color::WHITE);
	button[ButtonType::ONLINE] = new TextButton(51*16, 11*16, 9*16, 3*16, "オンライン", Color::P_BLUE, Color::WHITE);
}

DeckSelectUI::~DeckSelectUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void DeckSelectUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void DeckSelectUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) { deck_select->GotoMainTitle(); }
	if (button[ButtonType::DECK_EDIT]->IsClick()) { deck_select->GotoDeckEdit(""); }
	if (button[ButtonType::BATTLE_SELECT]->IsClick()) { deck_select->GotoBattelSelect(); }
	if (button[ButtonType::ONLINE]->IsClick()) { deck_select->GotoOnline(); }
}
