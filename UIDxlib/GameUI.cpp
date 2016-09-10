#include "stdafx.h"
#include "GameUI.h"
#include "DxLib.h"

GameUI::GameUI()
{
	ChangeWindowMode(true);
	SetBackgroundColor(255, 255, 255);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
}

GameUI::~GameUI()
{
	DxLib_End();
}

bool GameUI::Refresh(const Game* game)
{
	if (ProcessMessage() != 0)return false;
	if (ClearDrawScreen() != 0)return false;
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0)return false;

	DrawMainWindow(game);

	ScreenFlip();
	return true;
}
void GameUI::DrawMainWindow(const Game* game)
{
	DrawFormatString(0, 0, 0, "Game Count = %d", game->GetCount());
}

