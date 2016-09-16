#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "Config.h"
class ConfigUI :
	public GamePhaseUI
{
private:
	Config *config;

	enum ButtonType {TITLE, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	ConfigUI(Config* config);
	~ConfigUI();

	void Draw() const override;
	void CheckInput() const override;
};

