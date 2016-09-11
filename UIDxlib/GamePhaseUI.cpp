#include "stdafx.h"
#include "GamePhaseUI.h"

#include "MainTitleUI.h"
#include "..\Model\MainTitle.h"
#include "ConfigUI.h"
#include "..\Model\Config.h"

template <typename Of, typename What>
inline bool instanceof(const What w)
{
	return dynamic_cast<const Of*>(w) != 0;
}

GamePhaseUI * GamePhaseUI::GamePhaseUIFactory(const GamePhase * game_phase)
{
	if (instanceof<MainTitle>(game_phase))return new MainTitleUI();
	if (instanceof<Config>(game_phase))return new ConfigUI();
	return nullptr;
}
