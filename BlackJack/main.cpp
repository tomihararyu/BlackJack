// BlackJack.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
//class内容card→player=enemy
//cardの中身はシャッフルしたカードの中身
//playerはenemyに配布後二枚配布して引くか引かないか聞く
//enemyは二枚引いたあと一枚目を公開してplayerを待って17以下の間引き続ける
//カードは52枚持ち-13,-26,-39で表現する14から25なら♥にする
#include <iostream>
#include "player.h"
#include"card.h"
#include"enemi.h"
const int MAX_card_num = 52;
using namespace std;
int main()
{
	//constructorでカードを作成
	Player player;
	Card card;//プレイヤーとディーラーを同じオブジェクトにする為に引数として送る
	Enemi enemi;
	int PlayerMAXnam =0;//ここを変えたい
	int enemiMAXnam=0;//ここ
	cout << "ブラックジャックを開始します。" << endl;
	cout << "プレイヤーのdrow" << endl;
	player.DrowCard(card,PlayerMAXnam);//オブジェクトとmaxを送る

	cout << "ディーラーのdrow" << endl;
	enemi.EnemiDrowCard(card,enemiMAXnam);//同じ
	int Cin = 0;

		for (;;)//プレイヤーがバーストするか、スタンドまで繰り返す。ここもclassにしたい。
		{
			cout << "プレイヤーのdrow" << endl;
			player.DrowCard(card,PlayerMAXnam);
			if (PlayerMAXnam > 21)
			{
				cout << "バースト" << endl;
				break;
			}
			cout << "hit=1 stands=2" << endl;
			cin >> Cin;
				
			if (Cin == 1)
			{

			}
			else
			{
				break;
			}

		}
			for (;;)//17以上まで引き続ける。ここもclassにするか悩む
			{
				enemi.EnemiDrowCard(card,enemiMAXnam);
				if (enemiMAXnam >= 17)
				{
					break;
				}
			}

	if (PlayerMAXnam > 21)//ここも変える
	{
		cout << "プレイヤーの敗北" << endl;
	}
	else if( enemiMAXnam >  21 )
	{
		cout << "貴方の勝利" << endl;
	}
	else if(PlayerMAXnam > enemiMAXnam)
	{
		cout << "貴方の勝利" << endl;
	}
	else
	{
		cout << "プレイヤーの敗北" << endl;
	}
	

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
