#pragma once
#include"character.h"
#include"player.h"
class Dealer : public Character
{
private:
	void defeat(Player& player);
public:
	void DealerDrowCard(Card& card);
	void DealerMove(Dealer& enemi, Card& card ,Player& player);
};
