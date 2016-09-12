#pragma once
#include "GamePhase.h"
class MainTitle :
	public GamePhase
{
public:
	MainTitle();
	~MainTitle();

	void GotoOfficeSelect();
	void GotoDeckSelect();
	void GotoOnline();
	void GotoReplay();
	void GotoConfig();
	void TweetForm();
};

