#pragma once
#include"character.h"
class Player : public Character
{

public:
	void DrowCard(Card& card);
	int Win();
	void SecondPlayerDrow(Player& player,Card& card);
	
};
