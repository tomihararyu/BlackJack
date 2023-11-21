#pragma once
#include"character.h"
#include"player.h"
class Dealer : public Character
{
private:
	void defeat(Player& player);
public:
	void DealerMove(Dealer& enemi, Cards& card ,Player& player);
};
