#include "MainTitleUI.h"
#include "UIConst.h"
#include "Dxlib.h"

MainTitleUI::MainTitleUI(MainTitle* main_title) : GamePhaseUI("data\\bg\\main_title.jpg"), main_title(main_title)
{
	title_logo = LoadGraph("data\\gra\\title_logo.png");
	int buf;
	GetGraphSize(title_logo, &title_width, &buf);

	button[ButtonType::CPU] =       new TextButton(DISPSIZE_X / 2 - 10*16, 25*16, 20*16, 5*16, "CPU対戦", Color::P_BLUE, Color::WHITE);
	button[ButtonType::DECK_EDIT] = new TextButton(DISPSIZE_X / 2 - 10*16, 31*16, 20*16, 5*16, "デッキ編集", Color::P_BLUE, Color::WHITE);
	button[ButtonType::ONLINE] =    new TextButton(DISPSIZE_X / 2 - 10*16, 37*16, 20*16, 5*16, "オンライン", Color::P_BLUE, Color::WHITE);
	button[ButtonType::REPLAY] =    new TextButton(DISPSIZE_X / 2 + 15*16, 31*16, 10*16, 5*16, "リプレイ", Color::P_BLUE, Color::WHITE);
	button[ButtonType::CONFIG] =    new TextButton(DISPSIZE_X / 2 + 15*16, 37*16, 10*16, 5*16, "各種設定", Color::LGRAY, Color::BLACK);
	button[ButtonType::USER_FORM] = new GraphicButton(DISPSIZE_X - 26 * 16, DISPSIZE_Y - 3 * 16, "data\\gra\\userform.png");
}

MainTitleUI::~MainTitleUI()
{
	DeleteGraph(title_logo);
	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		delete button[i];
	}
}

void MainTitleUI::Draw() const
{
	GamePhaseUI::Draw();
	DrawGraph((DISPSIZE_X - title_width) / 2, 9 * 16, title_logo, TRUE);

	for (int i = 0; i < ButtonType::BUTTON_NUM; i++) {
		button[i]->Draw();
	}
}

void MainTitleUI::CheckInput() const
{
	if (button[ButtonType::CPU]->IsClick()) { main_title->GotoOfficeSelect(); }
	if (button[ButtonType::DECK_EDIT]->IsClick()) { main_title->GotoDeckSelect(); }
	if (button[ButtonType::ONLINE]->IsClick()) { main_title->GotoOnline(); }
	if (button[ButtonType::REPLAY]->IsClick()) { main_title->GotoReplay(); }
	if (button[ButtonType::CONFIG]->IsClick()) { main_title->GotoConfig(); }
	if (button[ButtonType::USER_FORM]->IsClick()) { main_title->TweetForm(); }
}
