#pragma once
#include "..\Model\GamePhase.h"
#include <string>
class GamePhaseUI
{
private:
	int back_ground_image;
public:
	GamePhaseUI(std::string back_ground_image_path);
	~GamePhaseUI();

	static GamePhaseUI* GamePhaseUIFactory(GamePhase* game_phase);

	virtual void Draw() const;
	virtual void CheckInput() const = 0;
};

