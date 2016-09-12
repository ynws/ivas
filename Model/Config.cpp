#include "stdafx.h"
#include "Config.h"
#include "MainTitle.h"

Config::Config()
{
	// TODO: ユーザ設定の読み込み
}

Config::~Config()
{
	// TODO: ユーザ設定の更新
}

// TODO: 各種設定用関数

void Config::GotoMainTitle()
{
	next_phase = new MainTitle();
}
