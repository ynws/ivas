#pragma once
#include <map>
/*
* �t�H���g�Ǘ�
* �V���O���g��
*/
class FontManager {
private:
	FontManager();
	~FontManager();
	FontManager(const FontManager& r) {};
	FontManager& operator=(const FontManager& r) {};
public:
	static FontManager* Instance() {
		static FontManager inst;
		return &inst;
	};
	int GetFont(int size);
private:
	std::map <int, int> font;
};
