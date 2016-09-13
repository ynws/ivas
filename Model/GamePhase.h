#pragma once
class GamePhase
{
protected:
	GamePhase* next_phase;
public:
	GamePhase() : next_phase(nullptr) {}
	virtual ~GamePhase() {};
	GamePhase* GetNextGamePhase() const { return next_phase; }

	void GotoMainTitle();
};

