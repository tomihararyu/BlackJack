#include <iostream>
#include<algorithm>
#include"player.h"
#include"card.h"
using namespace std;
void Player::DrowCard(Card& card)
{

	Character charcter;
	card.CardGet(hand[drowCardnam]);//1～52を取得しての継承したcharcterの変数numberに代入
	charcter.CardGenerator(hand[drowCardnam], rank[drowCardnam]);//numberをカットしてカードのする
	drowCardnam++;//カードの枚数をカウント


	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	MAXnam = 0;
	cout << "の手札:";
	for (int i = 0; i < drowCardnam; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[rank[i]] << " 『" << hand[i] << "』";

	}
	for (int i = 0; i < drowCardnam; i++)//引数のMAXnamに代入
	{

		if (hand[i] == 1)
		{
			MAXnam += 11;
		}
		else if (hand[i] > 10)
		{
			MAXnam += 10;
		}
		else
		{
			MAXnam += hand[i];
		}

	}
	
	for (int i = 0; i < drowCardnam; i++)
	{
		if (MAXnam > 21)
		{
			if (hand[i] == 1)
			{
				MAXnam -= 10;
			}
		}
		
	}

	cout << " 合計" << MAXnam << endl;
}
void Player::SecondPlayerDrow(Player& player, Card& card)
{
	int Cin;

	for (;;)//プレイヤーがバーストするか、スタンドまで繰り返す。ここもclassにしたい。
	{
	
		player.DrowCard(card);
		if (MAXnam > 21)
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
}
int Player::Win()
{
	return MAXnam;
}


