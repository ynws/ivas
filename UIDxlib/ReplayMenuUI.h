#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\ReplayMenu.h"
class ReplayMenuUI :
	public GamePhaseUI
{
private:
	ReplayMenu *replay_menu;
	Button* goto_title_button;
public:
	ReplayMenuUI(ReplayMenu* replay_menu);
	~ReplayMenuUI();

	void Draw() const override;
	void CheckInput() const override;
};

