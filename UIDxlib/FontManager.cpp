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
	// �����Ȃ���
	if (font.count(size) == 0) {
		font[size] = CreateFontToHandle("�l�r �S�V�b�N", size, 1, DX_FONTTYPE_ANTIALIASING);
	}
	return font[size];
}
