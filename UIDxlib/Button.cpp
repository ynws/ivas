#include "stdafx.h"
#include "Button.h"
#include "Mouse.h"
#include "RoundRect.h"

////////////////////////////////////////////////////////////////////////////////
// BUTTON
////////////////////////////////////////////////////////////////////////////////
bool Button::IsClick()
{
	// TODO: SE
	return IsMouseOn() && Mouse::Instance()->IsClick();
}

bool Button::IsMouseOn()
{
	// TODO: SE
	return Mouse::Instance()->IsOn(x, y, w, h);
}

////////////////////////////////////////////////////////////////////////////////
// TEXT BUTTON
////////////////////////////////////////////////////////////////////////////////
void TextButton::Draw()
{
	double ex_rate = IsMouseOn() ? 0.05 : 0.0;
	int dx = (int)(w * ex_rate);
	int dy = (int)(h * ex_rate);
	RoundRect::DrawRoundBoxLabel(x - dx, y - dy, w + dx * 2, h + dy * 2, base_col, text_col, text);
}

////////////////////////////////////////////////////////////////////////////////
// IMAGE BUTTON
////////////////////////////////////////////////////////////////////////////////
GraphicButton::GraphicButton(int x, int y, std::string image_path) : Button(x, y)
{
	image = LoadGraph(image_path.c_str());
	GetGraphSize(image, &w, &h);
}

GraphicButton::GraphicButton(int x, int y, int w, int h, std::string image_path) : Button(x, y, w, h)
{
	image = LoadGraph(image_path.c_str());
}

GraphicButton::~GraphicButton()
{
	DeleteGraph(image);
}

void GraphicButton::Draw()
{
	double ex_rate = IsMouseOn() ? 0.05 : 0.0;
	int dx = (int)(w * ex_rate);
	int dy = (int)(h * ex_rate);
	DrawExtendGraph(x - dx, y - dy, x + w + dx, y + h + dy, image, true);
}
