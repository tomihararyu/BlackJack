#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<algorithm>
#include"character.h"
#include"cards.h"

using namespace std;
Character::Character(const char* pName)
{
	fill_n(hand, CARD_MAX, -1);
	fill_n(rank, CARD_MAX, -1);
	drowCardnam = 0;
	MAXnam = 0;
	_pName = new char[strlen(pName) + 1];
	strcpy(_pName, pName);

}
Character::~Character()
{
	delete _pName;
	_pName = nullptr;
}
void Character::CardGenerator(int& nam, int& rank)//カードを割り当て
{

	const int CardRankMAX = 13;
	if (nam > CardRankMAX && nam <= (CardRankMAX * 2))
	{
		nam -= CardRankMAX;
		rank = 1;
		//cout << ダイヤ;
	}					//26以上で							//39以内
	else if (nam > (CardRankMAX * 2) && nam <= (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 2;
		rank = 2;
		//cout << "スペード";
	}							//39以上
	else if (nam > (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 3;
		rank = 3;
		//cout << "クローバー";
	}
	else
	{
		rank = 0;
		//cout << "ハート";
	}
}
void  Character::CardOpen()
{
	MAXnam = 0;
	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	cout << "手札:";
	for (int i = 0; i < drowCardnam; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[rank[i]] << "『" << hand[i] << "』";

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
		if (MAXnam > BlackJack)
		{
			if (hand[i] == 1)
			{
				MAXnam -= 10;
			}
		}

	}
	cout << "\n合計" << MAXnam << endl;
}
void Character::CardGet(Cards& card)
{

	hand[drowCardnam] = card.CardsGetCard();
	CardGenerator(hand[drowCardnam], rank[drowCardnam]);//numberをカットしてカードのする
	drowCardnam++;//カードの枚数をカウント
	CardOpen();
}
