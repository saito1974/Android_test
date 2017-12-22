#include"DxLib.h"
#include"in.h"



int android_main(void) {
	SetGraphMode(720,1280 , 32);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	
	SetDrawScreen(DX_SCREEN_BACK);

	Hai::Init();
	Hai::Re();
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

		Hai::Hen();
		

	}

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;					// ソフトの終了 
}