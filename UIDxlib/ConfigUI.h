#pragma once
#include "GamePhaseUI.h"
class ConfigUI :
	public GamePhaseUI
{
public:
	ConfigUI();
	~ConfigUI();

	void Draw() const override;
	void CheckInput(GamePhase* game_phase) const override;
};

