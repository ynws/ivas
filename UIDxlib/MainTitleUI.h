#pragma once
#include "GamePhaseUI.h"
#include "..\Model\MainTitle.h"
class MainTitleUI :
	public GamePhaseUI
{
private:
	MainTitle* main_title;
public:
	MainTitleUI(MainTitle* main_title);
	~MainTitleUI();

	void Draw() const override;
	void CheckInput() const override;
};

