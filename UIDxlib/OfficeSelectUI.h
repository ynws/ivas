#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\OfficeSelect.h"
class OfficeSelectUI :
	public GamePhaseUI
{
private:
	OfficeSelect* office_select;

	enum ButtonType {TITLE, DECK_SELECT, BATTLE_SELECT, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	OfficeSelectUI(OfficeSelect* office_select);
	~OfficeSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

