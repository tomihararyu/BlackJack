#include <iostream>
#include<algorithm>
#include"player.h"
#include"card.h"
using namespace std;
void Player::DrowCard(Card& card, int& PlayerMAXnam)
{
	Character charcter;
	card.CardGet(number);//1�`52���擾���Ă̌p������charcter�̕ϐ�number�ɑ��
	charcter.CardGenerator(number,sweetRankNam);//number���J�b�g���ăJ�[�h�̂���
	PlayerHand[PlayerNumber] = number;//�n���h�ɑ��
	PlayerRank[PlayerNumber] = sweetRankNam;//������
	PlayerNumber++;//�J�[�h�̖������J�E���g


	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	PlayerMAXnam = 0;
	cout << "�M���̎�D:";
	for (int i = 0; i < PlayerNumber; i++)//�����Ă�J�[�h��\��
	{
		cout << " " << SweetClass[PlayerRank[i]] << " �w" << PlayerHand[i] << "�x";

	}
	for (int i = 0; i < PlayerNumber; i++)//������MAXnam�ɑ��
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
	

	cout << " ���v" << PlayerMAXnam << endl;
}


