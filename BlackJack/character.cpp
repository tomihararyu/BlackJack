#include <iostream>
#include<algorithm>
#include"character.h"
#include"card.h"
using namespace std;
void Character::CardGenerator(int& nam, int& rank)//カードを割り当て
{
	
	const int CardRankMAX = 13;
	//表示のための処理					//13以上で							//26以内
	if (nam > CardRankMAX && nam<= (CardRankMAX * 2))
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
