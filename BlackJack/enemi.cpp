#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
#include"enemi.h"
#include"card.h"
using namespace std;

void Enemi::EnemiDrowCard(int arr, int rank)
{

	EnemiHand[EnemiNumber] = arr;
	EnemiRank[EnemiNumber] = rank;
	EnemiNumber++;

}
void Enemi::EnemiCardOpen(int& enemiMAXnam)
{
	const char* SweetClass[4] = { "�n�[�g", "�_�C��", "�X�y�[�h", "�N���[�o�[" };
	enemiMAXnam = 0;
	cout << "�G�̎�D:";
	for (int i = 0; i < EnemiNumber; i++)
	{
		cout << " " << SweetClass[EnemiRank[i]] << " �w" << EnemiHand[i]<<"�x";
		if (enemiMAXnam > 21)
		{
			cout << "�G���o�[�X�g" << endl;
		}

	}
	for (int i = 0; i < EnemiNumber; i++)
	{
		if (EnemiHand[i] >= 10)
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