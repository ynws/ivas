#include "stdafx.h"
#include "ConfigUI.h"

ConfigUI::ConfigUI(Config* config) : GamePhaseUI("data\\bg\\main_title.jpg"), config(config)
{
	goto_title_button = new TextButton(54*16, 0, 10*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
}

ConfigUI::~ConfigUI()
{
	delete goto_title_button;
}

void ConfigUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
}

void ConfigUI::CheckInput() const
{
	if (goto_title_button->IsClick()) {
		config->GotoMainTitle();
	}
}
