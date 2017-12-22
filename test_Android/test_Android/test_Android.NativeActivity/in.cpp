#include "./DxLib.h"
#include "in.h"

namespace Inyume {
	Pic pic;	//宣言
	SE se;
	Obj obj;

	bool Inite() {
		pic.ikisugi = LoadGraph("ikisugi.jpg");	//画像読み込み
		pic.normal = LoadGraph("yazyuu.png");

		se.naa = LoadSoundMem("oon.wav");	//音読み込み
		se.oon = LoadSoundMem("naa.mp3");
		if (pic.ikisugi == -1 || pic.normal == -1||se.naa == -1||se.oon==-1) {
			return false;
		}
		
		//obj.x = 5000;
		//obj.y = 5000;
		obj.t = 0;	//変数宣言・代入
		obj.cnt = 0;
		
		obj.flag = false;
		obj.sflag = false;
		obj.fflag = false;

		
	}

	void Update() {
		obj.t = GetTouchInputNum();	//タッチされているかどうか
		
		
		//タッチ判定・スコア加算・回数ごとの処理
		if (obj.t >0&&obj.flag==false&&obj.cnt<10) {	//タッチしていてcntが10より下
			obj.cnt++;
			
			obj.score = obj.score+10;

			obj.flag = true;
		}
		else if(obj.flag==false&&obj.cnt==10&&obj.t>0) {	//タッチしていてcntが10
			obj.cnt = 0;
			obj.fflag = false;
			obj.flag = true;
			obj.score = obj.score+10;
			obj.cnt++;
		}else if(obj.t==0&&obj.flag==true) {	//タッチした後に離したら
			obj.flag = false;
		}
		
		



	}

	void Draw() {
		//DrawFormatString(500, 0, GetColor(255, 255, 255), "score::%d", obj.score);
		DrawFormatString(10, 0, GetColor(255, 255, 255), "score: %d", obj.score);//
		//画像表示処理
		if (obj.cnt < 10) {
			DrawGraph(500,400 , pic.normal, true);	//cntが10より下
		
		}else if(obj.cnt==10){
			DrawGraph(500,400, pic.ikisugi, true);	//cntが10
			
		}
		
	}
		
	void Se() {
		/*if (obj.sflag == false && obj.cnt < 10 && obj.t>0) {
			PlaySoundMem(se.oon, DX_PLAYTYPE_BACK);
			obj.sflag = true;
		}else if(obj.sflag == true && obj.t > 0) {
			obj.sflag = false;
		}*/
		//音を流すかどうか
		if (obj.fflag == false && obj.cnt == 10 && obj.t > 0) {//タッチしていてcntが10
			PlaySoundMem(se.naa, DX_PLAYTYPE_BACK);
			obj.fflag = true;
		}
	}
	void Fin() {
		InitGraph;		//メモリのすべての画像を削除
		InitSoundMem;	//メモリのすべての音源を削除
		


	}

	

	}

namespace Hai {
	Ret ret;
	void Init(){
		ret.retu ;
		
		
	}

	void Re() {
		for (int i = 0; i < 10; i++) {
			for (int y = 0; y < 10;y++) {
				/*if (y == 5) {
					ret.retu[i][y] = 0;
				}
				else {
					ret.retu[i][y] = 1;
				}*/
				ret.retu[i][y] = 1;
			}

		}
	}


	void Hen() {
		int x = 10;	//左上のX座標	
		int a = 10;	//左上のY座標
		int b = 20;	//右下のX座標
		int c = 20;	//右下のX座標



		for (int i = 0; i < 10;i++ ) {
			x = 10;
			b = 20;
			//DrawFormatString(360, 640, GetColor(255, 255, 255), "score: %d :%d", ret.i,ret.y);//
			for (int y = 0; y < 10; y++) {
				//printf("%d", i);
				//printf("%d", y);
				if (ret.retu[i][y] == 1) {
					DrawBox(x, a, b, c, GetColor(255, 255, 255), TRUE);
					
					//a += 10;
					//c += 10;
				}
				x += 20;
				b += 20;
				//a += 10;
				//c += 10;
			}
			a += 20;
			c += 20;
		}
			//for (int i = 0; i < 10; i++) {
			/*DrawBox(ret.i * 10,ret. y * 10, ret.i * 10 + 10,ret.y * 10 + 10, GetColor(255, 255, 255), TRUE);
			WaitKey();
			ret.i += 10;
			ret.y += 10;*/
			//	for (int y = 0; y < 10; y++) {
			//		//printf("%d", i);
			//		//printf("%d", y);
			//		if (ret.retu[i][y] = 1) {
			//			Drawbox(i * 10 + 100, y * 10 + 100, i * 10 + 100, y * 10 + 100, getcolor(255, 255, 255), true);
			//		}
			//	}

			//}
		}
	}



	