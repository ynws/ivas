#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\Config.h"
#include <memory>
class ConfigUI :
	public GamePhaseUI
{
private:
	Config *config;
	Button* goto_title_button;
	int back_ground_image;
public:
	ConfigUI(Config* config);
	~ConfigUI();

	void Draw() const override;
	void CheckInput() const override;
};

