#include <iostream>
#include<algorithm>
#include"dealer.h"
#include"card.h"
#include"player.h"
using namespace std;
void Dealer::DealerDrowCard(Card& card)
{
	Character charcter;
	card.CardGet(hand[drowCardnam]);//1～52を取得しての継承したcharcterの変数numberに代入
	charcter.CardGenerator(hand[drowCardnam], rank[drowCardnam]);//numberをカットしてカードのする
	drowCardnam++;//カードの枚数をカウント


	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	MAXnam = 0;
	cout << "ディーラーの手札:";
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
void Dealer::DealerMove(Dealer& dealer, Card& card, Player& player)
{
	for (;;)
	{
		dealer.DealerDrowCard(card);
		if (MAXnam >= 17)
		{
			dealer.defeat(player);
			break;
		}
	}
}
void Dealer::defeat(Player& player)
{
	int PlayerMAXnam = player.Win();

	if (PlayerMAXnam > 21)//ここも変える
	{
		cout << "プレイヤーの敗北" << endl;
	}
	else if (MAXnam > 21)
	{
		cout << "貴方の勝利" << endl;
	}
	else if (PlayerMAXnam > MAXnam)
	{
		cout << "貴方の勝利" << endl;
	}
	else
	{
		cout << "プレイヤーの敗北" << endl;
	}
}
