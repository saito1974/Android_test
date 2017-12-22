#pragma once

namespace Inyume{
	bool Inite();
	void Update();
	void Draw();
	void Fin();
	void Se();

	struct Pic{
		int normal;
		int ikisugi;
		};
	struct SE{
		int oon;
		int naa;
};
	struct Obj
	{
		int x;
		int y;
		int t;
		int cnt;
		int score;
		bool flag;
		bool sflag;
		bool fflag;
		
	};
	
	

}

namespace Hai {
	void Hen();
	void Init();
	void Re();
	struct Ret {
		int retu[10][10];
		int i;
		int y;
	};

}
