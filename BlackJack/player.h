#pragma once
#include"character.h"
class Player : public Character
{

private:

	int PlayerHand[12] = { 0 };//所持している札
	int PlayerNumber=0;//所持枚数
	int PlayerRank[10] = { 0 };//役
	
public:
	void DrowCard(Card& card , int& PlayerMAXnam);
	
};
