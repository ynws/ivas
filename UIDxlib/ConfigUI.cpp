#include "ConfigUI.h"

ConfigUI::ConfigUI(Config* config) : GamePhaseUI("data\\bg\\main_title.jpg"), config(config)
{
	button[ButtonType::TITLE] = new TextButton(54*16, 0, 10*16, 3*16, "TOP", Color::P_BLUE, Color::WHITE);
}

ConfigUI::~ConfigUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void ConfigUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void ConfigUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) {
		config->GotoMainTitle();
	}
}
