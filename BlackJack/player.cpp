#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
#include"player.h"
#include"card.h"
using namespace std;

void Player::DrowCard(int arr ,int rank)
{
	
	PlayerHand[PlayerNumber] = arr;
	PlayerRank[PlayerNumber] = rank;
	PlayerNumber++;

}
void Player::CardOpen(int& PlayerMAXnam)
{
	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };

	PlayerMAXnam = 0;
	cout << "貴方の手札:";
	for (int i = 0; i < PlayerNumber; i++)
	{
		cout << " " << SweetClass[PlayerRank[i]] << " 『" << PlayerHand[i]<<"』";
		if (PlayerMAXnam > 21)
		{
			cout << "バースト" << endl << "ゲームを終了します" << endl;
		}

	}
	for (int i = 0; i < PlayerNumber; i++)
	{
		if (PlayerHand[i] > 10)
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



