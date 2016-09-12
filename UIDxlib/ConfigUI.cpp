#include "stdafx.h"
#include "ConfigUI.h"

ConfigUI::ConfigUI(Config* config) : config(config)
{
}

ConfigUI::~ConfigUI()
{
}

void ConfigUI::Draw() const
{
	DrawString(0, 0, "ConfigUI press M to MainTitle", 0);
}

void ConfigUI::CheckInput() const
{
	if (CheckHitKey(KEY_INPUT_M) != 0) {
		config->GotoMainTitle();
	}
}
