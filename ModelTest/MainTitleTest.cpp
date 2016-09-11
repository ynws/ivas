#include "stdafx.h"
#include "..\Model\\MainTitle.h"

TEST(MainTitleTest, Initialize) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	ASSERT_EQ(main_title->GetNextGamePhase(), nullptr);
}

TEST(MainTitleTest, ChanegePhase) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	ASSERT_EQ(main_title->GetNextGamePhase(), nullptr);
	main_title->GotoConfig();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}
