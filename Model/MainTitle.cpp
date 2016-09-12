#include "stdafx.h"
#include "MainTitle.h"
#include "Config.h"

MainTitle::MainTitle()
{
}

MainTitle::~MainTitle()
{
}

void MainTitle::GotoConfig()
{
	next_phase = new Config();
}
