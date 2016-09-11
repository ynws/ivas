#include "stdafx.h"
#include "GameUI.h"

GameUI::GameUI(GamePhaseUI* game_phase_UI)
{
	SetOutApplicationLogValidFlag(false);
	ChangeWindowMode(true);
	SetBackgroundColor(255, 255, 255);
	SetAlwaysRunFlag(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	this->ResetGamePhaseUI(game_phase_UI);
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
	return true;
}

void GameUI::Draw() const
{
	game_phase_UI->Draw();
}

void GameUI::CheckInput(Game* game) const
{
	game_phase_UI->CheckInput(game->GetGamePhase());
}

