#include "stdafx.h"
#include "DeckSelect.h"

TEST(DeckSelectTest, Initialize) {
	std::unique_ptr<DeckSelect> deck_select(new DeckSelect());
	ASSERT_EQ(deck_select->GetNextGamePhase(), nullptr);
}

TEST(DeckSelectTest, ChanegePhase1) {
	std::unique_ptr<DeckSelect> deck_select(new DeckSelect());
	ASSERT_EQ(deck_select->GetNextGamePhase(), nullptr);
	deck_select->GotoBattelSelect();
	ASSERT_TRUE(deck_select->GetNextGamePhase() != nullptr);
}

TEST(DeckSelectTest, ChanegePhase2) {
	std::unique_ptr<DeckSelect> deck_select(new DeckSelect());
	ASSERT_EQ(deck_select->GetNextGamePhase(), nullptr);
	deck_select->GotoDeckEdit("test");
	ASSERT_TRUE(deck_select->GetNextGamePhase() != nullptr);
}

TEST(DeckSelectTest, ChanegePhase3) {
	std::unique_ptr<DeckSelect> deck_select(new DeckSelect());
	ASSERT_EQ(deck_select->GetNextGamePhase(), nullptr);
	deck_select->GotoOnline();
	ASSERT_TRUE(deck_select->GetNextGamePhase() != nullptr);
}
