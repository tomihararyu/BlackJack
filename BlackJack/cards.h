#pragma once
#include"common.h"
class Cards
{
protected:
	int* CaldNumber;
	int m_nam ;//何枚ドローされているか

private:
	void CardsShuffle();
public:
	int CardsGetCard();

	Cards();
	virtual ~Cards();
};