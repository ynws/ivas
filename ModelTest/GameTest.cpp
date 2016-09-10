#include "stdafx.h"
#include "..\Model\\Game.h"

TEST(GameTest, getText) {
	std::unique_ptr<Game> game(new Game());
	EXPECT_EQ(0, game->GetCount());
	ASSERT_TRUE(game->Update());
	EXPECT_EQ(1, game->GetCount());
}
