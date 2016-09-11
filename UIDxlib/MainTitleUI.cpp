#include "stdafx.h"
#include "MainTitleUI.h"
#include "..\Model\MainTitle.h"

MainTitleUI::MainTitleUI()
{
}

MainTitleUI::~MainTitleUI()
{
}

void MainTitleUI::Draw() const
{
	DrawString(0, 0, "MainTitleUI press C to Config", 0);
}

void MainTitleUI::CheckInput(GamePhase* game_phase) const
{
	if (CheckHitKey(KEY_INPUT_C) != 0) {
		MainTitle* main_title = dynamic_cast<MainTitle*>(game_phase);
		main_title->GotoConfig();
	}
}
