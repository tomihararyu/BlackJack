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
	charcter.CardGenerator(number,sweetRankNam);//numberをカットしてカードのする
	EnemiHand[EnemiNumber] = number;//ハンドに代入
	EnemiRank[EnemiNumber] = sweetRankNam;//役を代入
	EnemiNumber++;//カードの枚数をカウント

	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	enemiMAXnam = 0;
	cout << "敵の手札:";
	for (int i = 0; i < EnemiNumber; i++)//持ってるカードを表示
	{
		cout << " " << SweetClass[EnemiRank[i]] << " 『" << EnemiHand[i] << "』";

	}
	for (int i = 0; i < EnemiNumber; i++)//引数のMAXnamに代入
	{

		if (EnemiHand[i] == 1)
		{
			if (11 + enemiMAXnam > 21)
			{
				EnemiHand[i] += 1;
			}
			else if (11 + enemiMAXnam <= 21)
			{
				enemiMAXnam += 11;
			}
		}
		else if (EnemiHand[i] > 10)
		{
			enemiMAXnam += 10;
		}
		else
		{
			enemiMAXnam += EnemiHand[i];
		}

	}
	cout << " 合計" << enemiMAXnam << endl;

}
