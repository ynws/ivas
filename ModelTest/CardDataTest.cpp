#include <gtest/gtest.h>
#include <memory>
#include "CardData.h"

TEST(CardDataTest, constructor1) {
	std::vector<std::string> arg;
	arg.push_back("#");
	std::unique_ptr<CardData> card_data(new CardData(arg));
	// comment ignore -> nodata error
	ASSERT_TRUE(card_data->HasConvertError());
}

TEST(CardDataTest, constructor2) {
	std::vector<std::string> arg;
	arg.push_back("a,b");
	std::unique_ptr<CardData> card_data(new CardData(arg));
	// invalid data error
	ASSERT_TRUE(card_data->HasConvertError());
}

TEST(CardDataTest, constructor3) {
	std::vector<std::string> arg;
	arg.push_back("1,TRIAL-002,【ビーチパラダイス】藤本里奈,藤本里奈,藤,I,5,sf,0,0,MS,MSR,R,Cu,ギャル,水着,0");
	std::unique_ptr<CardData> card_data(new CardData(arg));
	// card id error
	ASSERT_TRUE(card_data->HasConvertError());
}

TEST(CardDataTest, constructor4) {
	std::vector<std::string> arg;
	arg.push_back(" 0,TEST-001,name01,001,池,I,2,A,0,0,TMR,R,R,Co,制服,メガネ,0");
	arg.push_back(" 1,TEST-002,name02,002,藤,I,5,R,0,0,MS,MSR,R,Cu,ギャル,水着,0");
	arg.push_back(" 2,TEST-003,name03,003,浅,I,5,S,0,0,TS,TS,R,Pa,セクシー,メガネ,0");
	arg.push_back(" 3,TEST-004,name04,004,天,I,8,W,0,0,T,T,R,Vi,３１５プロ,0,0");
	arg.push_back(" 4,TEST-005,name05,005,日,I,4,L,0,0,TMS,SR,R,Da,ポジティブ,８７６プロ,0");
	arg.push_back(" 5,TEST-006,name06,006,木,I,5,H,0,0,MS,MS,B,Vo,水着,超人,0");
	arg.push_back(" 6,TEST-007,name07,007,伊,I,8,E,0,0,S,S,B,ph,３１５プロ,0,0");
	arg.push_back(" 7,TEST-008,name08,008,水,I,4,sf,0,0,TMS,TS,B,in,オタク,８７６プロ,0");
	arg.push_back(" 8,TEST-009,name09,009,荒,I,5,at,0,0,TM,TR,B,me,オタク,メガネ,サイバー");
	arg.push_back(" 9,TEST-010,name10,010,古,I,6,rf,0,0,TR,TM,B,XI,メガネ,0,0");
	arg.push_back("10,TEST-011,name11,011,白,I,5,tb,0,0,TR,TS,B,Pu,ホラー,メガネ,0");
	arg.push_back("11,TEST-012,name12,012,上,I,5,A,0,0,TS,TM,B,9,メガネ,サイバー,0");
	arg.push_back("12,TEST-013,name13,013,堀,I,3,H,1,1,TMSR,TMSR,Y,Pa,超常現象,0,0");
	arg.push_back("13,TEST-014,name14,014,星,I,6,S,0,0,S,TS,Y,Pa,セクシー,７６５プロ,0");
	arg.push_back("14,TEST-015,name15,015,輝,I,0,A,0,0,S,M,Y,Pa,ヴァンパイア,変身,0");
	arg.push_back("15,TEST-016,name16,016,北,I,6,0,0,0,TMR,TM,Y,Pa,メガネ,スポーツ,0");
	arg.push_back("16,TEST-017,name17,017,諸,I,5,A,0,0,SR,TS,Y,Pa,はぴはぴ,0,0");
	arg.push_back("17,TEST-018,name18,018,御,I,8,0,0,0,M,M,Y,me,３１５プロ,0,0");
	arg.push_back("18,TEST-019,name19,019,涼,I,4,0,0,0,TMS,MS,Y,Pa,オトコノコ,８７６プロ,0");
	arg.push_back("19,TEST-020,name20,020,莉,I,5,S,0,0,TM,MR,Y,Pa,ギャル,メガネ,0");
	arg.push_back("20,TEST-021,name21,021,緊,H,0,0,0,1,0,TMS,0,0,0,0,0");
	arg.push_back("21,TEST-022,name22,022,プ,H,0,0,0,1,0,R,0,0,0,0,0");
	arg.push_back("22,TEST-023,name23,023,メ,H,0,0,0,2,0,T,0,0,0,0,0");
	arg.push_back("23,TEST-024,name24,024,逆,H,0,0,0,1,0,TS,0,0,0,0,0");
	arg.push_back("24,TEST-025,name25,025,ぱ,H,0,0,0,1,0,MS,0,0,0,0,0");
	arg.push_back("25,TEST-026,name26,026,体,H,0,0,0,3,0,TM,0,0,0,0,0");
	arg.push_back("26,TEST-027,name27,027,ド,H,0,0,0,3,0,SR,0,0,0,0,0");

	std::unique_ptr<CardData> card_data(new CardData(arg));
	ASSERT_FALSE(card_data->HasConvertError());
	ASSERT_EQ(card_data->GetCardGraFileName((CardID)0), "TEST-001");
	ASSERT_EQ(card_data->GetCardName((CardID)1), "name02");
	ASSERT_EQ(card_data->GetCardIdolName((CardID)2), "003");
	ASSERT_EQ(card_data->GetCardWord((CardID)3), "天");
	ASSERT_EQ(card_data->IsIdolCard((CardID)4), true);
	ASSERT_EQ(card_data->GetCardPoint((CardID)5), 5);
	ASSERT_EQ(card_data->GetCardSkillType((CardID)6), SkillType::EVENT_SET);
	ASSERT_EQ(card_data->GetCardHappningCost((CardID)25, false), 0);
	ASSERT_EQ(card_data->GetCardHappningCost((CardID)26, true), 3);
	ASSERT_EQ(card_data->GetCardJoinEvent((CardID)7), 7);
	ASSERT_EQ(card_data->GetCardOpenEvent((CardID)8), 9);
	ASSERT_EQ(card_data->GetCardIdolType((CardID)9), IdolType::I_XI);
	ASSERT_EQ(card_data->GetCardCol((CardID)10), CardCol::C_BLUE);
	ASSERT_EQ(card_data->GetCardIdolCharacter((CardID)11, 0), "メガネ");
}
