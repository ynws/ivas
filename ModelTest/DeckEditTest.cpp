#include "stdafx.h"
#include "DeckEdit.h"

TEST(DeckEditTest, Initialize) {
	std::unique_ptr<DeckEdit> deck_edit(new DeckEdit("test"));
	ASSERT_EQ(deck_edit->GetNextGamePhase(), nullptr);
}

TEST(DeckEditTest, ChanegePhase) {
	std::unique_ptr<DeckEdit> deck_edit(new DeckEdit("test"));
	ASSERT_EQ(deck_edit->GetNextGamePhase(), nullptr);
	deck_edit->GotoDeckSelect();
	ASSERT_TRUE(deck_edit->GetNextGamePhase() != nullptr);
}
