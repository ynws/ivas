#include "GamePhaseUI.h"
#include "Dxlib.h"

#include "MainTitle.h"
#include "MainTitleUI.h"
#include "Config.h"
#include "ConfigUI.h"
#include "ReplayMenu.h"
#include "ReplayMenuUI.h"
#include "OfficeSelect.h"
#include "OfficeSelectUI.h"
#include "DeckSelect.h"
#include "DeckSelectUI.h"
#include "DeckEdit.h"
#include "DeckEditUI.h"
#include "BattleSelect.h"
#include "BattleSelectUI.h"
#include "OnlineLobby.h"
#include "OnlineLobbyUI.h"
#include "Battle.h"
#include "BattleUI.h"

template <typename Of, typename What>
inline bool instanceof(const What w)
{
	return dynamic_cast<const Of*>(w) != 0;
}

GamePhaseUI::GamePhaseUI(std::string back_ground_image_path)
{
	back_ground_image = LoadGraph(back_ground_image_path.c_str());
}

GamePhaseUI::~GamePhaseUI()
{
	DeleteGraph(back_ground_image);
}

void GamePhaseUI::Draw() const
{
	DrawGraph(0, 0, back_ground_image, false);
}

GamePhaseUI * GamePhaseUI::GamePhaseUIFactory(GamePhase * game_phase)
{
	if (instanceof<MainTitle>(game_phase))return new MainTitleUI(dynamic_cast<MainTitle*>(game_phase));
	if (instanceof<Config>(game_phase))return new ConfigUI(dynamic_cast<Config*>(game_phase));
	if (instanceof<ReplayMenu>(game_phase))return new ReplayMenuUI(dynamic_cast<ReplayMenu*>(game_phase));
	if (instanceof<OfficeSelect>(game_phase))return new OfficeSelectUI(dynamic_cast<OfficeSelect*>(game_phase));
	if (instanceof<DeckSelect>(game_phase))return new DeckSelectUI(dynamic_cast<DeckSelect*>(game_phase));
	if (instanceof<DeckEdit>(game_phase))return new DeckEditUI(dynamic_cast<DeckEdit*>(game_phase));
	if (instanceof<BattleSelect>(game_phase))return new BattleSelectUI(dynamic_cast<BattleSelect*>(game_phase));
	if (instanceof<OnlineLobby>(game_phase))return new OnlineLobbyUI(dynamic_cast<OnlineLobby*>(game_phase));
	if (instanceof<Battle>(game_phase))return new BattleUI(dynamic_cast<Battle*>(game_phase));
	return nullptr;
}
