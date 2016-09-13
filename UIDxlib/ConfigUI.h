﻿#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\Config.h"
class ConfigUI :
	public GamePhaseUI
{
private:
	Config *config;
	Button* goto_title_button;
public:
	ConfigUI(Config* config);
	~ConfigUI();

	void Draw() const override;
	void CheckInput() const override;
};

