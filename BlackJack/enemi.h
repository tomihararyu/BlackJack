#pragma once
#include"character.h"
class Enemi : public Character
{

private:

	int EnemiHand[10] = { 0 };//所持している札
	int EnemiNumber = 0;//所持枚数
	int EnemiRank[10] = { 0 };//役
	int CardMAX=0;//明日やりたい

public:
	void EnemiDrowCard(Card& card, int& enemiMAXnam);

};
