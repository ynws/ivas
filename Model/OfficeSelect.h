#pragma once
#include "GamePhase.h"
#include <string>
class OfficeSelect :
	public GamePhase
{
public:
	OfficeSelect();
	~OfficeSelect();

	void GotoDeckSelect();
	void GotoBattelSelect(std::string office_name);
};

