#include <iostream>
#include<algorithm>
#include"player.h"
#include"cards.h"
using namespace std;
Player::Player() :Character("Player")
{

}
Player::~Player()
{

}
void Player::SecondPlayerDrow( Cards& card)
{
	int Cin;
	for (;;)//プレイヤーがバーストするか、スタンドまで繰り返す。ここもclassにしたい。
	{
	
		CardGet(card);
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


