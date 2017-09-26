#include <gtest/gtest.h>
#include <memory>
#include "BattleSelect.h"

TEST(BattleSelect, Initialize) {
	std::unique_ptr<BattleSelect> offce_select(new BattleSelect("test"));
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
}

TEST(BattleSelect, ChanegePhase1) {
	std::unique_ptr<BattleSelect> offce_select(new BattleSelect("test"));
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
	offce_select->GotoDeckSelect();
	ASSERT_TRUE(offce_select->GetNextGamePhase() != nullptr);
}

TEST(BattleSelect, ChanegePhase2) {
	std::unique_ptr<BattleSelect> offce_select(new BattleSelect("test"));
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
	offce_select->GotoOfficeSelect();
	ASSERT_TRUE(offce_select->GetNextGamePhase() != nullptr);
}

TEST(BattleSelect, ChanegePhase3) {
	std::unique_ptr<BattleSelect> offce_select(new BattleSelect("test"));
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
	offce_select->GotoBattle();
	ASSERT_TRUE(offce_select->GetNextGamePhase() != nullptr);
}
