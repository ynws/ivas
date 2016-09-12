#include "stdafx.h"
#include "Mouse.h"

void Mouse::Refresh()
{
	old_x = x;
	old_y = y;
	GetMousePoint(&x, &y);
	// TODO: ‰æ–Ê‚ÌŠg‘åk¬‘Î‰ž

	int mouse_input = GetMouseInput();
	if ((mouse_input & MOUSE_INPUT_LEFT) != 0) {
		left++;
	} else {
		left = 0;
	}
	if ((mouse_input & MOUSE_INPUT_RIGHT) != 0) {
		right++;
	} else {
		right = 0;
	}
}

bool Mouse::IsOn(int x, int y, int w, int h)
{
	if (this->x >= x && this->x < x+w && this->y >= y && this->y < y+h) {
		return true;
	}
	return false;
}
