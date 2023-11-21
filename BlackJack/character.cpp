#include <iostream>
#include<algorithm>
#include"character.h"
#include"cards.h"

using namespace std;
Character::Character()
{
	fill_n(hand, CARD_MAX, -1);
	fill_n(rank, CARD_MAX, -1);
	drowCardnam = 0;
	MAXnam = 0;
}
void Character::CardGenerator(int& nam, int& rank)//�J�[�h�����蓖��
{

	const int CardRankMAX = 13;
	//�\���̂��߂̏���					//13�ȏ��							//26�ȓ�
	if (nam > CardRankMAX && nam <= (CardRankMAX * 2))
	{
		nam -= CardRankMAX;
		rank = 1;
		//cout << �_�C��;
	}					//26�ȏ��							//39�ȓ�
	else if (nam > (CardRankMAX * 2) && nam <= (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 2;
		rank = 2;
		//cout << "�X�y�[�h";
	}							//39�ȏ�
	else if (nam > (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 3;
		rank = 3;
		//cout << "�N���[�o�[";
	}
	else
	{
		rank = 0;
		//cout << "�n�[�g";
	}
}
void  Character::CardOpen()
{
	MAXnam = 0;
	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
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
		if (MAXnam > BlackJack)
		{
			if (hand[i] == 1)
			{
				MAXnam -= 10;
			}
		}

	}
	cout << " ���v" << MAXnam << endl;
}
void Character::CardGet(Cards& card)
{

	hand[drowCardnam] = card.CardsGetCard();
	CardGenerator(hand[drowCardnam], rank[drowCardnam]);//number���J�b�g���ăJ�[�h�̂���
	drowCardnam++;//�J�[�h�̖������J�E���g
	CardOpen();
}
