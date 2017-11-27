#include "./DxLib/DxLib.h"
#include"Game.h"
namespace Game {
	Obj obj;
	bool Inite() {

		obj.pic = LoadGraph("3.png");
		if (obj.pic == -1) {
			return false;
		}
		obj.x = 80;
		obj.y = 80;
		obj.t = 0;
		return true;
	}
	void Update() {
		//t = GetTouchInputNum();　これをすると画像が動かなくなる　タップ数は出る
		if (GetTouchInputNum() >obj.t) {
			GetTouchInput(obj.t, &obj.x, &obj.y);
		}
	}
	void Draw() {
		DrawGraph(obj.x, obj.y, obj.pic, true);
		if (obj.t > 0) {
			DrawFormatString(0, 0, GetColor(255, 255, 255), "    %d", obj.t);
		}
	}
	void Fin() {
		DeleteGraph(obj.pic);
	}
}