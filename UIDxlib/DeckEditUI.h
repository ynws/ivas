#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\DeckEdit.h"
class DeckEditUI :
	public GamePhaseUI
{
private:
	DeckEdit *deck_edit;
	Button* goto_deck_select_button;
public:
	DeckEditUI(DeckEdit *deck_edit);
	~DeckEditUI();

	void Draw() const override;
	void CheckInput() const override;
};

