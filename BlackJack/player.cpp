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
	hand[drowCardnam] = number;//�n���h�ɑ��
	rank[drowCardnam] = sweetRankNam;//������
	drowCardnam++;//�J�[�h�̖������J�E���g


	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	PlayerMAXnam = 0;
	cout << "�M���̎�D:";
	for (int i = 0; i < drowCardnam; i++)//�����Ă�J�[�h��\��
	{
		cout << " " << SweetClass[rank[i]] << " �w" << hand[i] << "�x";

	}
	for (int i = 0; i < drowCardnam; i++)//������MAXnam�ɑ��
	{

		if (hand[i] == 1)
		{
			PlayerMAXnam += 11;
		}
		else if (hand[i] > 10)
		{
			PlayerMAXnam += 10;
		}
		else
		{
			PlayerMAXnam += hand[i];
		}

	}
	
	for (int i = 0; i < drowCardnam; i++)
	{
		if (PlayerMAXnam > 21)
		{
			if (hand[i] == 1)
			{
				hand[i] -= 10;
			}
		}
		
	}
	

	cout << " ���v" << PlayerMAXnam << endl;
}


