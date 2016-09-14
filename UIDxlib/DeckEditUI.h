#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\DeckEdit.h"
class DeckEditUI :
	public GamePhaseUI
{
private:
	DeckEdit *deck_edit;

	enum ButtonType {DECK_SELECT, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	DeckEditUI(DeckEdit *deck_edit);
	~DeckEditUI();

	void Draw() const override;
	void CheckInput() const override;
};

