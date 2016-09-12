#include "stdafx.h"
#include "FontManager.h"

FontManager::~FontManager() {
	// font
	for (std::pair<int, int> fontdata : font) {
		DeleteFontToHandle(fontdata.second);
	}
	font.clear();
}

int FontManager::GetFont(int size) {
	// 無いなら作る
	if (font.count(size) == 0) {
		font[size] = CreateFontToHandle("ＭＳ ゴシック", size, 1, DX_FONTTYPE_ANTIALIASING);
	}
	return font[size];
}
