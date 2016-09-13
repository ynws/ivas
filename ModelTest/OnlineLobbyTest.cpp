#include "stdafx.h"
#include "..\Model\\OnlineLobby.h"

TEST(OnlineLobbyTest, Initialize) {
	std::unique_ptr<OnlineLobby> online_loby(new OnlineLobby());
	ASSERT_EQ(online_loby->GetNextGamePhase(), nullptr);
	online_loby->GotoDeckSelect();
	ASSERT_TRUE(online_loby->GetNextGamePhase() != nullptr);
}
