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
	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };

	PlayerMAXnam = 0;
	cout << "�M���̎�D:";
	for (int i = 0; i < PlayerNumber; i++)
	{
		cout << " " << SweetClass[PlayerRank[i]] << " �w" << PlayerHand[i]<<"�x";

	}
	for (int i = 0; i < PlayerNumber; i++)
	{
		
		if (PlayerHand[i] == 1)
		{
			if (PlayerHand[i] + PlayerMAXnam > 21)
			{
				PlayerHand[i] += 1;
			}
			else if (PlayerHand[i] + PlayerMAXnam <= 21)
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
	for (int i = 0; i < PlayerNumber; i++)
	{
		if (PlayerHand[i] + PlayerMAXnam < 21)
		{
			PlayerHand[i] += 1;
		}
		else
		{
			PlayerMAXnam += 11;
		}
	}
	cout << " ���v" << PlayerMAXnam << endl;
}



