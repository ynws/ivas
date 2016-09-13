#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\OfficeSelect.h"
class OfficeSelectUI :
	public GamePhaseUI
{
private:
	OfficeSelect* office_select;
	Button* goto_title_button;
	Button* goto_deck_select_button;
	Button* goto_battle_select_button;	// TODO: multi office
public:
	OfficeSelectUI(OfficeSelect* office_select);
	~OfficeSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

