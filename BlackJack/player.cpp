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
	PlayerHand[PlayerNumber] = number;//ハンドに代入
	PlayerRank[PlayerNumber] = sweetRankNam;//役を代入
	PlayerNumber++;//カードの枚数をカウント


	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	PlayerMAXnam = 0;
	cout << "貴方の手札:";
	for (int i = 0; i < PlayerNumber; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[PlayerRank[i]] << " 『" << PlayerHand[i] << "』";

	}
	for (int i = 0; i < PlayerNumber; i++)//引数のMAXnamに代入
	{

		if (PlayerHand[i] == 1)
		{
			if (11 + PlayerMAXnam > 21)
			{
				PlayerMAXnam += 1;
			}
			else if (11 + PlayerMAXnam <= 21)
			{
				PlayerMAXnam += 11;
			}
		}
		else if (PlayerHand[i] > 10)
		{
			PlayerMAXnam += 10;
		}
		else
		{
			PlayerMAXnam += PlayerHand[i];
		}

	}
	

	cout << " 合計" << PlayerMAXnam << endl;
}


