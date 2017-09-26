#include "CardData.h"
#include "StringUtility.h"
#include <stdlib.h>

CardType atoCardType(std::string str) {
	if (str == "I")return CardType::IDOL;
	return CardType::HAPPENING;
}

int atoSkilltype(std::string str) {
	int ret = 0;
	if (str.find("A") != std::string::npos) { ret |= SkillType::ALL_TIME; }
	if (str.find("R") != std::string::npos) { ret |= SkillType::RESERVE; }
	if (str.find("S") != std::string::npos) { ret |= SkillType::STAGE; }
	if (str.find("W") != std::string::npos) { ret |= SkillType::WIN; }
	if (str.find("L") != std::string::npos) { ret |= SkillType::LOSE; }
	if (str.find("H") != std::string::npos) { ret |= SkillType::HAPPEN; }
	if (str.find("E") != std::string::npos) { ret |= SkillType::EVENT_SET; }
	if (str.find("sf") != std::string::npos) { ret |= SkillType::STAGE_FORCE; }
	if (str.find("at") != std::string::npos) { ret |= SkillType::ALL_TRAINING; }
	if (str.find("rf") != std::string::npos) { ret |= SkillType::RESERVE_FORCE; }
	if (str.find("tb") != std::string::npos) { ret |= SkillType::TRAINING_TO_STAGE; }
	return ret;
}

int atoEventFlag(std::string str) {
	int ret = 0;
	if (str.find("T") != std::string::npos) { ret += EventType::EV_TOUR; }
	if (str.find("M") != std::string::npos) { ret += EventType::EV_MATCH; }
	if (str.find("S") != std::string::npos) { ret += EventType::EV_SURVIVAL; }
	if (str.find("R") != std::string::npos) { ret += EventType::EV_ROYAL; }
	return ret;
}

CardCol atoCardColor(std::string str) {
	if (str == "R")return CardCol::C_RED;
	if (str == "B")return CardCol::C_BLUE;
	if (str == "Y")return CardCol::C_YELLOW;
	return CardCol::C_ELSE;
}

IdolType atoIdolType(std::string str) {
	if (str == "Co")return IdolType::I_COOL;
	if (str == "Cu")return IdolType::I_CUTE;
	if (str == "Pa")return IdolType::I_PASSION;
	if (str == "Vi")return IdolType::I_VISUAL;
	if (str == "Da")return IdolType::I_DANCE;
	if (str == "Vo")return IdolType::I_VOCAL;
	if (str == "ph")return IdolType::I_PHYSICAL;
	if (str == "in")return IdolType::I_INTELLI;
	if (str == "me")return IdolType::I_MENTAL;
	if (str == "XI")return IdolType::I_XI;
	if (str == "Pu")return IdolType::I_PUTI;
	if (str == "9")return IdolType::I_961;
	return IdolType::I_NULL;
}

CardData::CardData(std::vector<std::string> raw_data)
{
	convert_error = false;
	int card_count = 0;
	for (std::string line : raw_data) {
		if (line[0] == '#')continue;	// skip comment line

		std::vector<std::string> token = StringUtility::SplitString(line);
		if (token.size() != Column::COLUMN_NUM) {
			convert_error = true;
			break;
		}
		if (atoi(token[Column::ID].c_str()) != card_count) {
			convert_error = true;
			break;
		}

		CardDataSub* subdata = new CardDataSub();
		subdata->filename = token[Column::FILE_NAME];
		subdata->name = token[Column::NAME];
		subdata->idol_name = token[Column::SIMPLE_NAME];
		subdata->one_word = token[Column::ONE_WORD];
		subdata->card_type = atoCardType(token[Column::CARD_TYPE]);
		subdata->point = atoi(token[Column::POINT].c_str());
		subdata->skill_type = atoSkilltype(token[Column::SKILL]);
		subdata->happning_cost = atoi(token[Column::COST].c_str());
		subdata->happning_burst_cost = atoi(token[Column::BURST_COST].c_str());
		subdata->join_event_flag = atoEventFlag(token[Column::JOIN_EVENT]);
		subdata->open_event_flag = atoEventFlag(token[Column::OPEN_EVENT]);
		subdata->card_col = atoCardColor(token[Column::COLOR]);
		subdata->idol_type = atoIdolType(token[Column::IDOL_TYPE]);
		subdata->character[0] = token[Column::CHAR1];
		subdata->character[1] = token[Column::CHAR2];
		subdata->character[2] = token[Column::CHAR3];

		cards.push_back(subdata);
		card_count++;
	}

	if (cards.size() == 0) {
		convert_error = true;
	}
}

CardData::~CardData()
{
	for (CardDataSub *sub : cards) {
		delete sub;
	}
	cards.clear();
}
