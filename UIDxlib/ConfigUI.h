#pragma once
#include "GamePhaseUI.h"
#include "..\Model\Config.h"
class ConfigUI :
	public GamePhaseUI
{
private:
	Config *config;
public:
	ConfigUI(Config* config);
	~ConfigUI();

	void Draw() const override;
	void CheckInput() const override;
};

