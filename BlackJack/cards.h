#pragma once
#include"common.h"
class Cards
{
private:
	int* CaldNumber;
	int m_nam ;//何枚ドローされているか

private:
	void CardsShuffle();
public:
	int CardsGetCard();

	Cards();
	virtual ~Cards();
};