#pragma once
#include "GamePhaseUI.h"
class MainTitleUI :
	public GamePhaseUI
{
public:
	MainTitleUI();
	~MainTitleUI();

	void Draw() const override;
	void CheckInput(GamePhase* game_phase) const override;
};

