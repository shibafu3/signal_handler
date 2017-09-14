// 流れ
// シグナルハンドラのヘッダをインクルード
// コールバック関数を定義
// シグナルハンドラにコールバック関数を設定

// 備考
// このfinish変数をwhileループの条件に使うとちょっと便利

// 参考URL
// http://uguisu.skr.jp/Windows/c_signal.html
// http://d.hatena.ne.jp/cupnes/20150504/1430712820
// https://codezine.jp/article/detail/4700


#include <signal.h>

static int finish = 0;
// シグナルハンドラ コールバック関数
void sig_handler(int signo){
	if (signo == SIGINT){
		finish = 1;
	}
}

int main(){
	signal(SIGINT, sig_handler);


	return 0;
}