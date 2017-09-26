#include "Resource.h"
#include <memory>
#include "Game.h"
#include "GameUI.h"

#ifndef __ANDROID__
#include <windows.h>
#endif

#ifdef __ANDROID__
int android_main(void)
#else
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
#endif
{
	std::unique_ptr<Game> game(new Game());
	std::unique_ptr<GameUI> gameUI(new GameUI());
	gameUI->ResetGamePhaseUI(GamePhaseUI::GamePhaseUIFactory(game->GetGamePhase()));

	while (gameUI->Refresh()) {
		gameUI->Draw();
		gameUI->CheckInput();
		if (game->ChangePhase()) {
			gameUI->ResetGamePhaseUI(GamePhaseUI::GamePhaseUIFactory(game->GetGamePhase()));
		}
	}

	return 0;
}
