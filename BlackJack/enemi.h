#pragma once
#include"character.h"
class Enemi : public Character
{

private:

	int EnemiHand[12] = { 0 };//Š‚µ‚Ä‚¢‚éD
	int EnemiNumber = 0;//Š–‡”
	int EnemiRank[10] = { 0 };//–ğ
	int CardMAX=0;//–¾“ú‚â‚è‚½‚¢

public:
	void EnemiDrowCard(Card& card, int& enemiMAXnam);

};
