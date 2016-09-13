#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\DeckSelect.h"
class DeckSelectUI :
	public GamePhaseUI
{
private:
	DeckSelect *deck_select;
	Button* goto_title_button;
	Button* goto_deck_edit_button;
	Button* goto_battle_select_button;
	Button* goto_online_button;
public:
	DeckSelectUI(DeckSelect* deck_select);
	~DeckSelectUI();

	void Draw() const override;
	void CheckInput() const override;
};

