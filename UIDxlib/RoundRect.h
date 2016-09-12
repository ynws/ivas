#pragma once
#include "Color.h"
#include <string>
class RoundRect
{
private:
	RoundRect();
	RoundRect(const RoundRect& r) {};
	RoundRect& operator=(const RoundRect& r) {};
public:
	static void DrawRoundBox(int x, int y, int w, int h, Color col);
	static void DrawRoundBoxWithFlame(int x, int y, int w, int h, Color col, int trans = 255);
	static void DrawLabelText(int x, int y, int w, int h, Color shadow_col, Color col, std::string text, bool center = true);
	static void DrawRoundBoxLabel(int x, int y, int w, int h, Color col, Color s_col, std::string text, bool center = true, int trans = 255);
};

