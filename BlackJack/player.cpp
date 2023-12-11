#include <iostream>
#include<algorithm>
#include"player.h"
using namespace std;
Player::Player() :Character("Player")
{

}
Player::~Player()
{

}
void Player::SecondPlayerDrow(OPcard& card)
{
	int Cin;
	
	for (;;)//プレイヤーがバーストするか、スタンドまで繰り返す。ここもclassにしたい。
	{
	
		CardGet(card);
		cout << "合計" << CrowCard(card) << endl;
		if (MAXnam > BlackJack)
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


