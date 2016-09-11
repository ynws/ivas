#include "stdafx.h"
#include "Resource.h"
#include <memory>
#include "..\UIDxlib\GameUI.h"
#include "..\Model\Game.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	std::unique_ptr<Game> game(new Game());
	std::unique_ptr<GameUI> gameUI(new GameUI(GamePhaseUI::GamePhaseUIFactory(game->GetGamePhase())));

	while (gameUI->Refresh()) {
		gameUI->Draw();
		gameUI->CheckInput(game.get());
		if (game->ChangePhase()) {
			gameUI->ResetGamePhaseUI(GamePhaseUI::GamePhaseUIFactory(game->GetGamePhase()));
		}
	}

	return 0;
}
