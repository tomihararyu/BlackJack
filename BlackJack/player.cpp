#include <iostream>
#include<algorithm>
#include"player.h"
#include"card.h"
using namespace std;
void Player::DrowCard(Card& card)
{

	Character charcter;
	card.CardGet(hand[drowCardnam]);//1�`52���擾���Ă̌p������charcter�̕ϐ�number�ɑ��
	charcter.CardGenerator(hand[drowCardnam], rank[drowCardnam]);//number���J�b�g���ăJ�[�h�̂���
	drowCardnam++;//�J�[�h�̖������J�E���g


	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	MAXnam = 0;
	cout << "�̎�D:";
	for (int i = 0; i < drowCardnam; i++)//�����Ă�J�[�h��\��
	{
		cout << " " << SweetClass[rank[i]] << " �w" << hand[i] << "�x";

	}
	for (int i = 0; i < drowCardnam; i++)//������MAXnam�ɑ��
	{

		if (hand[i] == 1)
		{
			MAXnam += 11;
		}
		else if (hand[i] > 10)
		{
			MAXnam += 10;
		}
		else
		{
			MAXnam += hand[i];
		}

	}
	
	for (int i = 0; i < drowCardnam; i++)
	{
		if (MAXnam > 21)
		{
			if (hand[i] == 1)
			{
				MAXnam -= 10;
			}
		}
		
	}

	cout << " ���v" << MAXnam << endl;
}
void Player::SecondPlayerDrow(Player& player, Card& card)
{
	int Cin;

	for (;;)//�v���C���[���o�[�X�g���邩�A�X�^���h�܂ŌJ��Ԃ��B������class�ɂ������B
	{
	
		player.DrowCard(card);
		if (MAXnam > 21)
		{
			cout << "�o�[�X�g" << endl;
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


