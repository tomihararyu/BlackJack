#pragma once
#include"character.h"
class Enemi : public Character
{

private:

	int EnemiHand[12] = { 0 };//�������Ă���D
	int EnemiNumber = 0;//��������
	int EnemiRank[10] = { 0 };//��
	int CardMAX=0;//������肽��

public:
	void EnemiDrowCard(Card& card, int& enemiMAXnam);

};
