#pragma once


namespace Game {
	bool Inite();
	void Update();
	void Draw();
	void Fin();

	struct Obj {
		int x;
		int y;
		int pic;
		int t;


	};
}
