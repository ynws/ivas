#include "OnlineLobbyUI.h"

OnlineLobbyUI::OnlineLobbyUI(OnlineLobby * online_lobby) : GamePhaseUI("data\\bg\\online_lobby.jpg"), online_lobby(online_lobby)
{
	button[ButtonType::TITLE] = new TextButton(54*16, 0, 10*16, 3*16, "TOP", Color::P_GREEN, Color::WHITE);
	button[ButtonType::DECK_SELECT] = new TextButton(54*16, 3*16, 10*16, 3*16, "デッキ選択", Color::P_GREEN, Color::WHITE);
}

OnlineLobbyUI::~OnlineLobbyUI()
{
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void OnlineLobbyUI::Draw() const
{
	GamePhaseUI::Draw();
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void OnlineLobbyUI::CheckInput() const
{
	if (button[ButtonType::TITLE]->IsClick()) { online_lobby->GotoMainTitle(); }
	if (button[ButtonType::DECK_SELECT]->IsClick()) { online_lobby->GotoDeckSelect(); }
}
