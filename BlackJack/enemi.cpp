#include <iostream>
#include<algorithm>
#include"enemi.h"
#include"card.h"
#include"player.h"
using namespace std;
void Enemi::EnemiDrowCard(Card& card)
{
	Character charcter;
	card.CardGet(hand[drowCardnam]);//1�`52���擾���Ă̌p������charcter�̕ϐ�number�ɑ��
	charcter.CardGenerator(hand[drowCardnam], rank[drowCardnam]);//number���J�b�g���ăJ�[�h�̂���
	drowCardnam++;//�J�[�h�̖������J�E���g


	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	MAXnam = 0;
	cout << "�f�B�[���[�̎�D:";
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
				hand[i] -= 10;
			}
		}

	}


	cout << " ���v" << MAXnam << endl;
}
void Enemi::EnemiMove(Enemi& enemi, Card& card)
{
	for (;;)//17�ȏ�܂ň���������B������class�ɂ��邩�Y��
	{
		enemi.EnemiDrowCard(card);
		if (MAXnam >= 17)
		{
			break;
		}
	}
}
void Enemi::defeat(Player& player)
{
	int PlayerMAXnam = player.Win();

	if (PlayerMAXnam > 21)//�������ς���
	{
		cout << "�v���C���[�̔s�k" << endl;
	}
	else if (MAXnam > 21)
	{
		cout << "�M���̏���" << endl;
	}
	else if (PlayerMAXnam > MAXnam)
	{
		cout << "�M���̏���" << endl;
	}
	else
	{
		cout << "�v���C���[�̔s�k" << endl;
	}
}
