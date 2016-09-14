#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\OnlineLobby.h"
class OnlineLobbyUI :
	public GamePhaseUI
{
private:
	OnlineLobby *online_lobby;

	enum ButtonType {TITLE, DECK_SELECT, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	OnlineLobbyUI(OnlineLobby *online_lobby);
	~OnlineLobbyUI();

	void Draw() const override;
	void CheckInput() const override;
};

