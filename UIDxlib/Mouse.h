#pragma once
/*
* �}�E�X�֌W�N���X
* �V���O���g��
*/
class Mouse {
private:
	int x, y, left, right;    //�}�E�X���
	int old_x, old_y;
	Mouse() { Refresh(); };
	Mouse(const Mouse& r) {};
	Mouse& operator=(const Mouse& r) {};
public:
	static Mouse* Instance() {
		static Mouse inst;
		return &inst;
	};
	void Refresh();
	bool IsOn(int x, int y, int w, int h);
	bool IsClick() { return left == 1; };
};