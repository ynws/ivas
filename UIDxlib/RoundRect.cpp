#include "stdafx.h"
#include "RoundRect.h"
#include "FontManager.h"

void RoundRect::DrawRoundBox(int x, int y, int w, int h, Color col) {
	int r = (int)(min(w, h) * 0.17 / 2);
	DrawRoundRect(x, y, x + w, y + h, r, r, col, TRUE);
}

void RoundRect::DrawRoundBoxWithFlame(int x, int y, int w, int h, Color col, int trans) {
	Color col2 = (Color)(col & 0xffc0c0c0);
	if (trans != 255)SetDrawBlendMode(DX_BLENDMODE_ALPHA, trans);
	DrawRoundBox(x, y, w, h, col2);
	DrawRoundBox(x + 2, y + 2, w - 4, h - 4, col);
	if (trans != 255)SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
}

void RoundRect::DrawLabelText(int x, int y, int w, int h, Color shadow_col, Color col, std::string text, bool center) {
	int r = (int)(min(w, h) * 0.17 / 2);
	int font_size = h - 4 * r;
	int t_x = x + 2 * r;
	int t_y = y + 2 * r;
	int t_w = GetDrawFormatStringWidthToHandle(FontManager::Instance()->GetFont(font_size), text.c_str());

	// テキストはみ出すならフォント縮小
	if (t_w > w - 4 * r) {
		font_size = (int)(font_size * (w - 4 * r) / (t_w - 4 * r) - 1);
		t_y = y + h / 2 - font_size / 2;
		t_w = GetDrawFormatStringWidthToHandle(FontManager::Instance()->GetFont(font_size), text.c_str());
	}
	if (center) {
		// センター合わせ
		t_x = x + w / 2 - t_w / 2;
	}
	// 影
	if (shadow_col != 0 && font_size > 16 * 1.5) {
		Color col2 = (Color)(col & 0xffc0c0c0);
		DrawStringToHandle(t_x + 2, t_y + 2, text.c_str(), col2, FontManager::Instance()->GetFont(font_size));
	}
	DrawStringToHandle(t_x, t_y, text.c_str(), col, FontManager::Instance()->GetFont(font_size));
}

void RoundRect::DrawRoundBoxLabel(int x, int y, int w, int h, Color col, Color s_col, std::string text, bool center, int trans)
{
	DrawRoundBoxWithFlame(x, y, w, h, col, trans);
	DrawLabelText(x, y, w, h, col, s_col, text, center);
}
