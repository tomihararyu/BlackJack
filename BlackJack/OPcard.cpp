#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<algorithm>
#include"OPcard.h"
using namespace std;
int OPcard::OPCardGet(int CardGet)
{
	return CaldNumber[CardGet];
}
void OPcard::OpenCard(int CardOpen)
{
	cout << sweet[CardOpen] << "の" << CaldNumber[CardOpen] << endl;
}
void OPcard::CardGen()
{
	int  nam = m_nam - 1;
	const int CardRankMAX = 13;
	int rank = CaldNumber[nam] / 13;
	int timp = CaldNumber[nam] - rank * 13;
	if (timp == 0)
	{
		CaldNumber[nam] = 13;
	}
	else
	{
		CaldNumber[nam] = timp;
	}
	if (rank == 4)
	{
		rank = 3;
	}
	
	const char* timpSweet[4] = { "ハート","ダイヤ","スペード","クローバー" };
	sweet[nam] = new char[strlen(timpSweet[rank]) + 1];
	strcpy(sweet[nam], timpSweet[rank]);
}
