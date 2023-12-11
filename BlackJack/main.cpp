// BlackJack.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。

#include <iostream>
#include "player.h"
#include"dealer.h"
#include"OPcard.h"
const int MAX_card_num = 52;
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));//初期化
	//constructorでカードを作成
	Player player;
	OPcard opcard;//プレイヤーとディーラーを同じオブジェクトにする為に引数として送る
	Dealer enemi;
	cout << "ブラックジャックを開始します。\n" << endl;
	cout << "====================" << endl;
	cout << "プレイヤーのdrow" << endl;
	player.CardGet(opcard);//オブジェクトとmaxを送る

	cout << "====================" << endl;
	cout << "ディーラーのdrow" << endl;
	enemi.CardGet(opcard);

	cout << "====================" << endl;
	cout << "プレイヤーのdrow" << endl;
	player.SecondPlayerDrow(opcard);

	cout << "====================" << endl;
	cout << "ディーラーのdrow" << endl;
	enemi.DealerMove(enemi,opcard,player);
}

	




// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
