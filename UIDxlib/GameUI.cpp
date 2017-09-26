#include "Dxlib.h"
#include "GameUI.h"
#include "Mouse.h"
#include "UIConst.h"

GameUI::GameUI()
{
	SetOutApplicationLogValidFlag(false);
#ifndef __ANDROID__
	ChangeWindowMode(true);
#endif
	SetGraphMode(DISPSIZE_X, DISPSIZE_Y, 16);
	SetBackgroundColor(255, 255, 255);
	SetAlwaysRunFlag(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
}

GameUI::~GameUI()
{
	DxLib_End();
}

void GameUI::ResetGamePhaseUI(GamePhaseUI* game_phase_UI)
{
	this->game_phase_UI.reset(game_phase_UI);
}

bool GameUI::Refresh() const
{
	if (ScreenFlip() != 0)return false;
	if (ProcessMessage() != 0)return false;
	if (ClearDrawScreen() != 0)return false;
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0)return false;

	Mouse::Instance()->Refresh();

	return true;
}

void GameUI::Draw() const
{
	game_phase_UI->Draw();
}

void GameUI::CheckInput() const
{
	game_phase_UI->CheckInput();
}

