#pragma once
#include"character.h"
#include"player.h"
#include"OPcard.h"

class Dealer : public Character
{
private:
	void defeat(Player& player,OPcard& opcard);
public:
	void DealerMove(Dealer& enemi, OPcard& opcard ,Player& player);
	Dealer();
	virtual ~Dealer();
};
