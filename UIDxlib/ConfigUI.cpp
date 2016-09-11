#include "stdafx.h"
#include "ConfigUI.h"
#include "..\Model\Config.h"

ConfigUI::ConfigUI()
{
}

ConfigUI::~ConfigUI()
{
}

void ConfigUI::Draw() const
{
	DrawString(0, 0, "ConfigUI press M to MainTitle", 0);
}

void ConfigUI::CheckInput(GamePhase* game_phase) const
{
	if (CheckHitKey(KEY_INPUT_M) != 0) {
		Config* config = dynamic_cast<Config*>(game_phase);
		config->GotoMainTitle();
	}
}
