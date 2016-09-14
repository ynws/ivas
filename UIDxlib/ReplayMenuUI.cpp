#include "stdafx.h"
#include "ReplayMenuUI.h"

ReplayMenuUI::ReplayMenuUI(ReplayMenu * replay_menu) : GamePhaseUI("data\\bg\\main_title.jpg"), replay_menu(replay_menu)
{
	button[ButtonType::TITLE] = new TextButton(57*16, 0, 7*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
}

ReplayMenuUI::~ReplayMenuUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void ReplayMenuUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void ReplayMenuUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) {
		replay_menu->GotoMainTitle();
	}
}
