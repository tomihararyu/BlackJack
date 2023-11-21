#pragma once
#include"common.h"
class Cards
{
private:
	int* CaldNumber;
	int m_nam ;//‰½–‡ƒhƒ[‚³‚ê‚Ä‚¢‚é‚©

private:
	void CardsShuffle();
public:
	int CardsGetCard();

	Cards();
	virtual ~Cards();
};