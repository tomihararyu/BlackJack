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
		if (PlayerMAXnam > 21)
		{
			cout << "�o�[�X�g" << endl << "�Q�[�����I�����܂�" << endl;
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
	cout << " ���v" << PlayerMAXnam << endl;
}



