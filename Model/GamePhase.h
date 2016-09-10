#pragma once
class GamePhase
{
public:
	virtual ~GamePhase() {};
	virtual GamePhase* GetNextGamePhase() = 0;
};

