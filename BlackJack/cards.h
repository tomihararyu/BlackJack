#pragma once
#include"common.h"
class Cards
{
protected:
	int* CaldNumber;
	int m_nam ;//�����h���[����Ă��邩

private:
	void CardsShuffle();
public:
	int CardsGetCard();

	Cards();
	virtual ~Cards();
};