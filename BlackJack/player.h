#pragma once
#include"character.h"
class Player : public Character
{

private:

	int PlayerHand[10] = { 0 };//�������Ă���D
	int PlayerNumber=0;//��������
	int PlayerRank[10] = { 0 };//��
	
public:
	void DrowCard(Card& card , int& PlayerMAXnam);
	
};
