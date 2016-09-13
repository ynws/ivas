#pragma once
#include "GamePhaseUI.h"
#include "Button.h"
#include "..\Model\MainTitle.h"
class MainTitleUI :
	public GamePhaseUI
{
private:
	MainTitle* main_title;
	int title_logo;
	int title_width;

	enum ButtonType {CPU, DECK_EDIT, ONLINE, REPLAY, CONFIG, USER_FORM, BUTTON_NUM};
	Button* button[BUTTON_NUM];
public:
	MainTitleUI(MainTitle* main_title);
	~MainTitleUI();

	void Draw() const override;
	void CheckInput() const override;
};

