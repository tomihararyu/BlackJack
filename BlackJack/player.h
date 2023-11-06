#pragma once
#include"character.h"
class Player : public Character
{

private:

	int PlayerHand[10] = { 0 };//Š‚µ‚Ä‚¢‚éD
	int PlayerNumber=0;//Š–‡”
	int PlayerRank[10] = { 0 };//–ğ
	
public:
	void DrowCard(Card& card , int& PlayerMAXnam);
	
};
