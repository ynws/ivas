#include "stdafx.h"
#include "..\Model\\Config.h"

TEST(ConfigTest, Initialize) {
	std::unique_ptr<Config> config(new Config());
	ASSERT_EQ(config->GetNextGamePhase(), nullptr);
}

TEST(ConfigTest, ChanegePhase) {
	std::unique_ptr<Config> config(new Config());
	ASSERT_EQ(config->GetNextGamePhase(), nullptr);
	config->GotoMainTitle();
	ASSERT_TRUE(config->GetNextGamePhase() != nullptr);
}
