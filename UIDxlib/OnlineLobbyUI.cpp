#include "stdafx.h"
#include "OnlineLobbyUI.h"

OnlineLobbyUI::OnlineLobbyUI(OnlineLobby * online_lobby) : GamePhaseUI("data\\bg\\online_lobby.jpg"), online_lobby(online_lobby)
{
	goto_title_button = new TextButton(54*16, 0, 10*16, 3*16, "TOP", Color::P_GREEN, Color::WHITE);
	goto_deck_select_button = new TextButton(54*16, 3*16, 10*16, 3*16, "デッキ選択", Color::P_GREEN, Color::WHITE);
}

OnlineLobbyUI::~OnlineLobbyUI()
{
	delete goto_title_button;
	delete goto_deck_select_button;
}

void OnlineLobbyUI::Draw() const
{
	GamePhaseUI::Draw();
	goto_title_button->Draw();
	goto_deck_select_button->Draw();
}

void OnlineLobbyUI::CheckInput() const
{
	if (goto_title_button->IsClick()) { online_lobby->GotoMainTitle(); }
	if (goto_deck_select_button->IsClick()) { online_lobby->GotoDeckSelect(); }
}
