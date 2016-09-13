#include "stdafx.h"
#include "..\Model\\ReplayMenu.h"

TEST(ReplayMenuTest, Initialize) {
	std::unique_ptr<ReplayMenu> replay_menu(new ReplayMenu());
	ASSERT_EQ(replay_menu->GetNextGamePhase(), nullptr);
	replay_menu->GotoMainTitle();
	ASSERT_TRUE(replay_menu->GetNextGamePhase() != nullptr);
}

TEST(ReplayMenuTest, ChanegePhase) {
	std::unique_ptr<ReplayMenu> replay_menu(new ReplayMenu());
	ASSERT_EQ(replay_menu->GetNextGamePhase(), nullptr);
	replay_menu->GotoBattle("test");
	ASSERT_TRUE(replay_menu->GetNextGamePhase() != nullptr);
}
