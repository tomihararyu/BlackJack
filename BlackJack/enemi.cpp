#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
#include"enemi.h"
#include"card.h"
using namespace std;
void Enemi::EnemiDrowCard(Card& card, int& enemiMAXnam)
{
	Character charcter;
	card.CardGet(number);//1～52を取得しての継承したcharcterの変数numberに代入
	charcter.CardGenerator(number, sweetRankNam);//numberをカットしてカードのする
	hand[drowCardnam] = number;//ハンドに代入
	rank[drowCardnam] = sweetRankNam;//役を代入
	drowCardnam++;//カードの枚数をカウント


	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	enemiMAXnam = 0;
	cout << "貴方の手札:";
	for (int i = 0; i < drowCardnam; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[rank[i]] << " 『" << hand[i] << "』";

	}
	for (int i = 0; i < drowCardnam; i++)//引数のMAXnamに代入
	{

		if (hand[i] == 1)
		{
			enemiMAXnam += 11;
		}
		else if (hand[i] > 10)
		{
			enemiMAXnam += 10;
		}
		else
		{
			enemiMAXnam += hand[i];
		}

	}

	for (int i = 0; i < drowCardnam; i++)
	{
		if (enemiMAXnam > 21)
		{
			if (hand[i] == 1)
			{
				hand[i] -= 10;
			}
		}

	}


	cout << " 合計" << enemiMAXnam << endl;
}
