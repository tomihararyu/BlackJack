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
using namespace std;
const int MAX_card_num = 52;


using namespace std;
void CardGenerator(int& PlayerHand, int& Rank)
{
	const int CardRankMAX = 13;

	//表示のための処理					//13以上で							//26以内
	if (PlayerHand > CardRankMAX && PlayerHand <= (CardRankMAX * 2))
	{
		PlayerHand -= CardRankMAX;
		Rank = 1;
		//cout << ダイヤ;
	}					//26以上で							//39以内
	else if (PlayerHand > (CardRankMAX * 2) && PlayerHand <= (CardRankMAX * 3))
	{
		PlayerHand -= CardRankMAX * 2;
		Rank = 2;
		//cout << "スペード";
	}							//39以上
	else if (PlayerHand > (CardRankMAX * 3))
	{
		PlayerHand -= CardRankMAX * 3;
		Rank = 3;
		//cout << "クローバー";
	}
	else
	{
		Rank = 0;
		//cout << "ハート";
	}
}
int main()
{
	
	Card card;
	Player player;
	Enemi enemi;
	int PlayerMAXnam =0;
	int enemiMAXnam=0;
	card.cards();//カードの生成
	cout << "ブラックジャックを開始します。" << endl;
		int timp1 = 0;
		int timp2 = 0;
		card.CardGet(timp1);//カードを取得---------------------------------------
		CardGenerator(timp1, timp2);//カードをスライスして分ける-----------------この二つはキャラクタークラス
		cout << "プレイヤーのdrow" << endl;
		player.DrowCard(timp1, timp2);//クラスに格納--------------------------引数でプレイヤー示せば無理ではない
		player.CardOpen(PlayerMAXnam);//-----------------------------------------------上にお同じく

		cout << "ディーラーのdrow" << endl;
		card.CardGet(timp1);//カードを取得---------------------------------------
		CardGenerator(timp1, timp2);//カードをスライスして分ける-----------------この二つはキャラクタークラス
			enemi.EnemiDrowCard(timp1, timp2);
			enemi.EnemiCardOpen(enemiMAXnam);
			int Cin = 0;

			for (;;)
			{
				if (PlayerMAXnam > 21)
				{
					cout << "バースト" << endl;
					break;
				}
				cout << "プレイヤーのdrow" << endl;
				card.CardGet(timp1);//カードを取得---------------------------------------
				CardGenerator(timp1, timp2);//カードをスライスして分ける-----------------この二つはキャラクタークラス
				player.DrowCard(timp1, timp2);//クラスに格納--------------------------引数でプレイヤー示せば無理ではない
				player.CardOpen(PlayerMAXnam);//-----------------------------------------------上にお同じく
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
				for (;;)
				{
					card.CardGet(timp1);//カードを取得---------------------------------------
					CardGenerator(timp1, timp2);//カードをスライスして分ける-----------------この二つはキャラクタークラス
					enemi.EnemiDrowCard(timp1, timp2);
					enemi.EnemiCardOpen(enemiMAXnam);
					if (enemiMAXnam >= 17)
					{
						break;
					}
				}




	if (PlayerMAXnam > enemiMAXnam|| enemiMAXnam>21)
	{
		cout << "貴方の勝利" << endl;
	}
	else if(PlayerMAXnam>21)
	{
		cout << "プレイヤーの敗北" << endl;
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
