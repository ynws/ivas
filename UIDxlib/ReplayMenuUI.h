#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "ReplayMenu.h"
class ReplayMenuUI :
	public GamePhaseUI
{
private:
	ReplayMenu *replay_menu;

	enum ButtonType {TITLE, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	ReplayMenuUI(ReplayMenu* replay_menu);
	~ReplayMenuUI();

	void Draw() const override;
	void CheckInput() const override;
};

