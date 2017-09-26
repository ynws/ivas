#include "MainTitle.h"

#include "OfficeSelect.h"
#include "DeckSelect.h"
#include "ReplayMenu.h"
#include "Config.h"
#include "OnlineLobby.h"

#ifndef LINUX
#ifndef __ANDROID__
#include <windows.h>
#include <Shellapi.h>
#endif
#endif

MainTitle::MainTitle()
{
}

MainTitle::~MainTitle()
{
}

void MainTitle::GotoOfficeSelect()
{
	// TODO: 初回はシナリオ
	// TODO: 事務所選択済みなら対戦選択へ
	next_phase = new OfficeSelect();
}

void MainTitle::GotoDeckSelect()
{
	next_phase = new DeckSelect();
}

void MainTitle::GotoOnline()
{
	// TODO: 接続処理
	next_phase = new OnlineLobby();
}

void MainTitle::GotoReplay()
{
	next_phase = new ReplayMenu();
}

void MainTitle::GotoConfig()
{
	next_phase = new Config();
}

void MainTitle::TweetForm()
{
	// TODO: Linuxでビルド・テストできるようにMock外だし(ヘッダも削除)
#ifndef LINUX
#ifndef __ANDROID__
	ShellExecute(GetDesktopWindow(), "open",
		"https://twitter.com/intent/tweet?screen_name=IDOLVERSUS_PC",
		"", "", SW_SHOW);
#endif
#endif
}
