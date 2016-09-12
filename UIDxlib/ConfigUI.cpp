#include "stdafx.h"
#include "ConfigUI.h"

ConfigUI::ConfigUI(Config* config) : config(config)
{
	back_ground_image = LoadGraph("data\\bg\\main_title.jpg");
	goto_title_button = new TextButton(54*16, 0, 10*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
}

ConfigUI::~ConfigUI()
{
	DeleteGraph(back_ground_image);
	delete goto_title_button;
}

void ConfigUI::Draw() const
{
	DrawGraph(0, 0, back_ground_image, false);
	goto_title_button->Draw();
}

void ConfigUI::CheckInput() const
{
	if (goto_title_button->IsClick()) {
		config->GotoMainTitle();
	}
}
