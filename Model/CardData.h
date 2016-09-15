#pragma once
#include <string>
#include <vector>
#include "CardEnum.h"
class CardData
{
private:
	bool convert_error;
public:
	CardData(std::vector<std::string> raw_data);
	~CardData();
	bool HasConvertError() const { return convert_error; }

	// Simple Getter
	std::string GetCardGraFileName(CardID id) const { return cards[id]->filename; };
	std::string GetCardName(CardID id) const { return cards[id]->name; };
	std::string GetCardIdolName(CardID id) const { return cards[id]->idol_name; };
	std::string GetCardWord(CardID id) const { return cards[id]->one_word; };
	bool IsIdolCard(CardID id) const { return cards[id]->card_type == CardType::IDOL; }
	int GetCardPoint(CardID id) const { return cards[id]->point; };
	int GetCardSkillType(CardID id) const { return cards[id]->skill_type; };
	int GetCardHappningCost(CardID id, bool burstflag) const { return burstflag ? cards[id]->happning_burst_cost : cards[id]->happning_cost; };
	int GetCardJoinEvent(CardID id) const { return cards[id]->join_event_flag; };
	int GetCardOpenEvent(CardID id) const { return cards[id]->open_event_flag; };
	IdolType GetCardIdolType(CardID id) const { return cards[id]->idol_type; };
	CardCol GetCardCol(CardID id) const { return cards[id]->card_col; };
	std::string GetCardIdolCharacter(CardID id, int pos) const { return cards[id]->character[pos]; };

private:
	enum Column {
		ID, FILE_NAME, NAME, SIMPLE_NAME, ONE_WORD,
		CARD_TYPE, POINT, SKILL, COST, BURST_COST,
		JOIN_EVENT, OPEN_EVENT, COLOR, IDOL_TYPE,
		CHAR1, CHAR2, CHAR3, COLUMN_NUM};

	struct CardDataSub {
		std::string filename;
		std::string name;
		std::string idol_name;
		std::string one_word;
		CardType card_type;
		int point;
		int skill_type;
		int happning_cost;
		int happning_burst_cost;
		int join_event_flag;
		int open_event_flag;
		CardCol card_col;
		IdolType idol_type;
		std::string character[3];
	};

	std::vector<CardDataSub*> cards;
};

