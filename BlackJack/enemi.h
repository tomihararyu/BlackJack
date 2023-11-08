#pragma once
#include"character.h"
#include"player.h"
class Enemi : public Character
{

private:
	

public:
	void EnemiDrowCard(Card& card);
	void defeat(Player& player);
	void EnemiMove(Enemi& enemi, Card& card);
};
