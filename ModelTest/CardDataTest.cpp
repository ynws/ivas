#include "stdafx.h"
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
	arg.push_back("0,TRIAL-001,【ハッピー☆ジーニアス】池袋晶葉,池袋晶葉,池,I,2,R,0,0,TMR,R,R,Cu,制服,メガネ,0");
	arg.push_back("1,TRIAL-002,【ビーチパラダイス】藤本里奈,藤本里奈,藤,I,5,sf,0,0,MS,MSR,R,Cu,ギャル,水着,0");
	arg.push_back("	2,TRIAL-003,【シークレットクイーン】浅野風香＋,浅野風香,浅,I,5,0,0,0,TS,TS,R,Cu,セクシー,メガネ,0");
	arg.push_back("	3,TRIAL-004,【俺様系アイドル】天ヶ瀬冬馬＋,天ヶ瀬冬馬,天,I,8,0,0,0,T,T,R,ph,３１５プロ,0,0");
	arg.push_back("	4,TRIAL-005,【突撃豆タンク】日高愛,日高愛,日,I,4,0,0,0,TMS,SR,R,Cu,ポジティブ,８７６プロ,0");
	arg.push_back("	5,TRIAL-006,【ビーチクイーン】木場真奈美,木場真奈美,木,I,5,L,0,0,MS,MS,B,Co,水着,超人,0");
	arg.push_back("	6,TRIAL-007,【アイドル王子】伊集院北斗＋,伊集院北斗,伊,I,8,0,0,0,S,S,B,in,３１５プロ,0,0");
	arg.push_back("	7,TRIAL-008,【ネットの迷い子】水谷絵理,水谷絵理,水,I,4,0,0,0,TMS,TS,B,Co,オタク,８７６プロ,0");
	arg.push_back("	8,TRIAL-009,【サイバーグラス】荒木比奈＋,荒木比奈,荒,I,5,R,0,0,TM,TR,B,Co,オタク,メガネ,サイバー");
	arg.push_back("	9,TRIAL-010,【博識子女】古澤頼子,古澤頼子,古,I,6,0,0,0,TR,TM,B,Co,メガネ,0,0");
	arg.push_back("	10,TRIAL-011,【ゴシックホラーナイトメア】白坂小梅,白坂小梅,白,I,5,S,0,0,TR,TS,B,Co,ホラー,メガネ,0");
	arg.push_back("	11,TRIAL-012,【眼鏡プリンセス】上条春菜＋,上条春菜,上,I,5,A,0,0,TS,TM,B,Co,メガネ,サイバー,0");
	arg.push_back("	12,TRIAL-013,【おちゃめなサイキッカー】堀裕子,堀裕子,堀,I,3,H,1,1,TMSR,TMSR,Y,Pa,超常現象,0,0");
	arg.push_back("	13,TRIAL-014,【眠れる姫君】星井美希,星井美希,星,I,6,S,0,0,S,TS,Y,Pa,セクシー,７６５プロ,0");
	arg.push_back("	14,TRIAL-015,【絶叫★ヴァンパイア】星輝子＋,星輝子,輝,I,0,A,0,0,S,M,Y,Pa,ヴァンパイア,変身,0");
	arg.push_back("	15,TRIAL-016,【スポーツ祭】北川真尋,北川真尋,北,I,6,0,0,0,TMR,TM,Y,Pa,メガネ,スポーツ,0");
	arg.push_back("	16,TRIAL-017,【ニューイヤープリンセス】諸星きらり,諸星きらり,諸,I,5,A,0,0,SR,TS,Y,Pa,はぴはぴ,0,0");
	arg.push_back("	17,TRIAL-018,【国民的弟アイドル】御手洗翔太＋,御手洗翔太,御,I,8,0,0,0,M,M,Y,me,３１５プロ,0,0");
	arg.push_back("	18,TRIAL-019,【大きな秘密】秋月涼,秋月涼,涼,I,4,0,0,0,TMS,MS,Y,Pa,オトコノコ,８７６プロ,0");
	arg.push_back("	19,TRIAL-020,【シークレット☆モード】城ヶ崎莉嘉,城ヶ崎莉嘉,莉,I,5,S,0,0,TM,MR,Y,Pa,ギャル,メガネ,0");
	arg.push_back("	20,TRIAL-021,緊急退避！,0,緊,H,0,0,0,1,0,TMS,0,0,0,0,0");
	arg.push_back("	21,TRIAL-022,プロデューサーの努力,0,プ,H,0,0,0,1,0,R,0,0,0,0,0");
	arg.push_back("	22,TRIAL-023,メガネパワー増幅装置,0,メ,H,0,0,0,2,0,T,0,0,0,0,0");
	arg.push_back("	23,TRIAL-024,逆転ホームラン！,0,逆,H,0,0,0,1,0,TS,0,0,0,0,0");
	arg.push_back("	24,TRIAL-025,ぱっしょん☆ぱわー☆ちゃーじ,0,ぱ,H,0,0,0,1,0,MS,0,0,0,0,0");
	arg.push_back("	25,TRIAL-026,体調不良,0,体,H,0,0,0,3,0,TM,0,0,0,0,0");
	arg.push_back("	26,TRIAL-027,ドタキャン,0,ド,H,0,0,0,3,0,SR,0,0,0,0,0");

	std::unique_ptr<CardData> card_data(new CardData(arg));
	ASSERT_FALSE(card_data->HasConvertError());
}
