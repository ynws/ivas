#include "stdafx.h"
#include "MainTitle.h"

TEST(MainTitleTest, Initialize) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	ASSERT_EQ(main_title->GetNextGamePhase(), nullptr);
}

TEST(MainTitleTest, ChanegePhase1) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	ASSERT_EQ(main_title->GetNextGamePhase(), nullptr);
	main_title->GotoConfig();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}

TEST(MainTitleTest, ChanegePhase2) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	main_title->GotoReplay();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}

TEST(MainTitleTest, ChanegePhase3) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	main_title->GotoDeckSelect();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}

TEST(MainTitleTest, ChanegePhase4) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	main_title->GotoOfficeSelect();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}

TEST(MainTitleTest, ChanegePhase5) {
	std::unique_ptr<MainTitle> main_title(new MainTitle());
	main_title->GotoOnline();
	ASSERT_TRUE(main_title->GetNextGamePhase() != nullptr);
}
