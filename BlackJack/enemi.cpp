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
	const char* SweetClass[4] = { "ハート", "ダイヤ", "スペード", "クローバー" };
	enemiMAXnam = 0;
	cout << "敵の手札:";
	for (int i = 0; i < EnemiNumber; i++)
	{
		cout << " " << SweetClass[EnemiRank[i]] << " 『" << EnemiHand[i]<<"』";
		if (enemiMAXnam > 21)
		{
			cout << "敵がバースト" << endl;
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
	cout << " 合計" << enemiMAXnam << endl;

}