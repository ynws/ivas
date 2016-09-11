#include "stdafx.h"
#include "MainTitleUI.h"

MainTitleUI::MainTitleUI(MainTitle* main_title) : main_title(main_title)
{
}

MainTitleUI::~MainTitleUI()
{
}

void MainTitleUI::Draw() const
{
	DrawString(0, 0, "MainTitleUI press C to Config", 0);
}

void MainTitleUI::CheckInput() const
{
	if (CheckHitKey(KEY_INPUT_C) != 0) {
		main_title->GotoConfig();
	}
}
