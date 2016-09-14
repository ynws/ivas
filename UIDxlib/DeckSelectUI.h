#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\DeckSelect.h"
class DeckSelectUI :
	public GamePhaseUI
{
private:
	DeckSelect *deck_select;

	enum ButtonType {TITLE, DECK_EDIT, BATTLE_SELECT, ONLINE, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	DeckSelectUI(DeckSelect* deck_select);
	~DeckSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

