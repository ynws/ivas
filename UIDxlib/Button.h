#pragma once
#include <string>
#include "Color.h"
class Button
{
protected:
	int x, y, w, h;
	Button(int x, int y) : x(x), y(y) {}
	Button(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}
public:
	virtual ~Button() {};
	virtual void Draw() = 0;

	bool IsClick();
	bool IsMouseOn();
};

////////////////////////////////////////////////////////////////////////////////
// TEXT BUTTON
////////////////////////////////////////////////////////////////////////////////
class TextButton : public Button
{
private:
	std::string text;
	Color base_col;
	Color text_col;
public:
	TextButton(int x, int y, int w, int h, std::string text = "", Color base_col = Color::BLACK, Color text_col = Color::WHITE)
		: Button(x, y, w, h), text(text), base_col(base_col), text_col(text_col) {};

	void Draw() override;
};

////////////////////////////////////////////////////////////////////////////////
// IMAGE BUTTON
////////////////////////////////////////////////////////////////////////////////
class GraphicButton : public Button
{
private:
	int image;
public:
	GraphicButton(int x, int y, std::string image_path = "");
	GraphicButton(int x, int y, int w, int h, std::string image_path = "");
	~GraphicButton();

	void Draw() override;
};
