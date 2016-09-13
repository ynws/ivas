#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\OnlineLobby.h"
class OnlineLobbyUI :
	public GamePhaseUI
{
private:
	OnlineLobby *online_lobby;
	Button* goto_title_button;
	Button* goto_deck_select_button;
public:
	OnlineLobbyUI(OnlineLobby *online_lobby);
	~OnlineLobbyUI();

	void Draw() const override;
	void CheckInput() const override;
};

