#include "stdafx.h"
#include "ReplayMenuUI.h"

ReplayMenuUI::ReplayMenuUI(ReplayMenu * replay_menu) : GamePhaseUI("data\\bg\\main_title.jpg"), replay_menu(replay_menu)
{
	goto_title_button = new TextButton(57*16, 0, 7*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
}

ReplayMenuUI::~ReplayMenuUI()
{
	delete goto_title_button;
}

void ReplayMenuUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
}

void ReplayMenuUI::CheckInput() const
{
	if (goto_title_button->IsClick()) {
		replay_menu->GotoMainTitle();
	}
}
