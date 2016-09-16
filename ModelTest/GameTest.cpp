#include "stdafx.h"
#include "Game.h"
#include "MainTitle.h"

TEST(GameTest, Initialize) {
	std::unique_ptr<Game> game(new Game());
	ASSERT_EQ(game->GetGamePhase()->GetNextGamePhase(), nullptr);
}

TEST(GameTest, ChanegePhase) {
	std::unique_ptr<Game> game(new Game());
	ASSERT_FALSE(game->ChangePhase());
	((MainTitle*)game->GetGamePhase())->GotoConfig();
	ASSERT_TRUE(game->ChangePhase());
}
