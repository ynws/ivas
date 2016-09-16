#include "stdafx.h"
#include "Battle.h"

TEST(BattleTest, Initialize) {
	std::unique_ptr<Battle> battle(new Battle());
	ASSERT_EQ(battle->GetNextGamePhase(), nullptr);
}

TEST(BattleTest, ChanegePhase) {
	std::unique_ptr<Battle> battle(new Battle());
	ASSERT_EQ(battle->GetNextGamePhase(), nullptr);
	battle->GotoBattleSelect();
	ASSERT_TRUE(battle->GetNextGamePhase() != nullptr);
}
