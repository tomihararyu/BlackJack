#include <iostream>
#include<algorithm>
#include"player.h"
#include"card.h"
using namespace std;
void Player::DrowCard(Card& card, int& PlayerMAXnam)
{
	Character charcter;
	card.CardGet(number);//1～52を取得しての継承したcharcterの変数numberに代入
	charcter.CardGenerator(number,sweetRankNam);//numberをカットしてカードのする
	hand[drowCardnam] = number;//ハンドに代入
	rank[drowCardnam] = sweetRankNam;//役を代入
	drowCardnam++;//カードの枚数をカウント


	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	PlayerMAXnam = 0;
	cout << "貴方の手札:";
	for (int i = 0; i < drowCardnam; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[rank[i]] << " 『" << hand[i] << "』";

	}
	for (int i = 0; i < drowCardnam; i++)//引数のMAXnamに代入
	{

		if (hand[i] == 1)
		{
			PlayerMAXnam += 11;
		}
		else if (hand[i] > 10)
		{
			PlayerMAXnam += 10;
		}
		else
		{
			PlayerMAXnam += hand[i];
		}

	}
	
	for (int i = 0; i < drowCardnam; i++)
	{
		if (PlayerMAXnam > 21)
		{
			if (hand[i] == 1)
			{
				hand[i] -= 10;
			}
		}
		
	}
	

	cout << " 合計" << PlayerMAXnam << endl;
}


