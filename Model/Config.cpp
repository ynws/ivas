#include "stdafx.h"
#include "Config.h"
#include "MainTitle.h"

Config::Config()
{
}

Config::~Config()
{
}

void Config::GotoMainTitle()
{
	next_phase = new MainTitle();
}
