#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
#include"enemi.h"
#include"card.h"
using namespace std;
void Enemi::EnemiDrowCard(Card& card, int& enemiMAXnam)
{
	Character charcter;
	card.CardGet(number);//1�`52���擾���Ă̌p������charcter�̕ϐ�number�ɑ��
	charcter.CardGenerator(number,sweetRankNam);//number���J�b�g���ăJ�[�h�̂���
	EnemiHand[EnemiNumber] = number;//�n���h�ɑ��
	EnemiRank[EnemiNumber] = sweetRankNam;//������
	EnemiNumber++;//�J�[�h�̖������J�E���g

	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	enemiMAXnam = 0;
	cout << "�G�̎�D:";
	for (int i = 0; i < EnemiNumber; i++)//�����Ă�J�[�h��\��
	{
		cout << " " << SweetClass[EnemiRank[i]] << " �w" << EnemiHand[i] << "�x";

	}
	for (int i = 0; i < EnemiNumber; i++)//������MAXnam�ɑ��
	{

		if (EnemiHand[i] == 1)
		{
			if (11 + enemiMAXnam > 21)
			{
				EnemiHand[i] += 1;
			}
			else if (11 + enemiMAXnam <= 21)
			{
				enemiMAXnam += 11;
			}
		}
		else if (EnemiHand[i] > 10)
		{
			enemiMAXnam += 10;
		}
		else
		{
			enemiMAXnam += EnemiHand[i];
		}

	}
	cout << " ���v" << enemiMAXnam << endl;

}
