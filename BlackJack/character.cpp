#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<algorithm>
#include"character.h"
#include"OPcard.h"

using namespace std;
Character::Character(const char* pName)
{
	fill_n(CardNumRank, CARD_MAX, -1);
	drowCardnam = 0;
	MAXnam = 0;
	_pName = new char[strlen(pName) + 1];
	strcpy(_pName, pName);
}
Character::~Character()
{
	delete _pName;
	_pName = nullptr;
}
int Character::CrowCard(OPcard& OPcard)
{
	int timp=0;
	MAXnam = 0;
	for (int i = 0; i < drowCardnam; i++)
	{
		timp = OPcard.OPCardGet(CardNumRank[i]);
		if (timp == 1)
		{
			MAXnam += 11;
		}
		else if (timp > 10)
		{
			MAXnam += 10;
		}
		else
		{
			MAXnam += timp;
		}
	}
	for (int j = 0; j <= drowCardnam; j++)
	{
		timp = OPcard.OPCardGet(CardNumRank[j]);
		if (MAXnam > BlackJack) {
			if (timp == 1)
			{
				MAXnam -= 10;
			}
		}
	}
	return MAXnam;
}
void Character::CardGet(OPcard& OPcard)
{
	CardNumRank[drowCardnam] = OPcard.CardsGetCard();

	OPcard.CardGen();

	for (int i = 0; i <= drowCardnam; i++)
	{
		OPcard.OpenCard(CardNumRank[i]);
	}
	drowCardnam++;//カードの枚数をカウント
}
