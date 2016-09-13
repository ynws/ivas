#include "stdafx.h"
#include "..\Model\\OfficeSelect.h"

TEST(OfficeSelect, Initialize) {
	std::unique_ptr<OfficeSelect> offce_select(new OfficeSelect());
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
}

TEST(OfficeSelect, ChanegePhase1) {
	std::unique_ptr<OfficeSelect> offce_select(new OfficeSelect());
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
	offce_select->GotoDeckSelect();
	ASSERT_TRUE(offce_select->GetNextGamePhase() != nullptr);
}
TEST(OfficeSelect, ChanegePhase2) {
	std::unique_ptr<OfficeSelect> offce_select(new OfficeSelect());
	ASSERT_EQ(offce_select->GetNextGamePhase(), nullptr);
	offce_select->GotoBattelSelect("test");
	ASSERT_TRUE(offce_select->GetNextGamePhase() != nullptr);
}
